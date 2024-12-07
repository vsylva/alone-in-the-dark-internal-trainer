#include "trainer.h"

#include "../deps/detours/detours.h"
#include "../deps/imgui/imgui.h"
#include "../deps/imgui/imgui_impl_dx11.h"
#include "../deps/imgui/imgui_impl_win32.h"
#include "../deps/ue_4_27_2_sdk/SDK/Engine_classes.hpp"
// #include "../deps/ue_4_27_2_sdk/SDK.hpp"

bool Trainer::is_initialized = false;
WNDPROC Trainer::g_o_wnd_proc = nullptr;
HWND Trainer::g_output_wnd = nullptr;

ID3D11Device* Trainer::g_device = nullptr;
ID3D11DeviceContext* Trainer::g_context = nullptr;
ID3D11RenderTargetView* Trainer::g_render_target_view = nullptr;
IDXGISwapChain* Trainer::g_swap_chain = nullptr;
DXGI_SWAP_CHAIN_DESC Trainer::g_swap_chain_desc = {0};

IDXGISwapChainPresent Trainer::g_o_present = nullptr;
IDXGISwapChainResizeBuffers Trainer::g_o_resize_buffers = nullptr;

BOOL APIENTRY
DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        Trainer();

        CreateThread(
            nullptr,
            0,
            (LPTHREAD_START_ROUTINE)(void*)Trainer::enable_hook,
            (LPVOID)(hModule),
            0,
            nullptr
        );
    }

    else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
    }
    return TRUE;
}

void Trainer::on_frame() {
    const auto world = SDK::UWorld::GetWorld();
    if (!world)
        return;

    const auto game_instance = world->OwningGameInstance;
    if (!game_instance)
        return;

    const auto game_state = world->GameState;
    if (!game_state)
        return;

    if (!game_instance->LocalPlayers.IsValid())
        return;

    const auto player_instance = game_instance->LocalPlayers[0];
    if (!player_instance)
        return;

    const auto player_controller = player_instance->PlayerController;
    if (!player_controller)
        return;

    const auto player_camera = player_controller->PlayerCameraManager;
    if (!player_camera)
        return;

    const auto player_camera_location = player_camera->GetCameraLocation();
    const auto player_camera_rotation = player_camera->GetCameraRotation();

    const auto player_character = player_controller->Character;
    if (!player_character)
        return;

    const auto player_character_localtion =
        player_character->K2_GetActorLocation();

    // if (!player_character->CharacterMovement)
    //     return;

    // character->CharacterMovement->bCheatFlying = true;
    // character->CharacterMovement->SetMovementMode(
    //     SDK::EMovementMode::MOVE_Flying,
    //     NULL
    // );

    const auto levels = world->Levels;
    if (!levels.IsValid())
        return;

    auto draw_list = ImGui::GetBackgroundDrawList();

    for (int level_index = 0; level_index < levels.Num(); level_index++) {
        const auto level = levels[level_index];
        if (level == nullptr)
            continue;

        const auto actors = level->Actors;
        if (!actors.IsValid())
            continue;

        for (const auto actor : actors) {
            if (actor == nullptr || !actor->IsA(SDK::EClassCastFlags::Pawn))
                continue;

            const auto pawn = static_cast<SDK::APawn*>(actor);

            // if (!player_controller
            //          ->LineOfSightTo(pawn, player_camera_location, false))
            //     continue;

            const auto pawn_controller = pawn->Controller;
            if (pawn_controller == nullptr)
                continue;

            const auto pawn_character = pawn_controller->Character;
            if (pawn_character == nullptr)
                continue;

            const auto pawn_mesh = pawn_character->Mesh;
            if (pawn_mesh == nullptr)
                continue;

            const auto pawn_skeletal_mesh = pawn_mesh->SkeletalMesh;
            if (pawn_skeletal_mesh == nullptr)
                continue;

            const auto pawn_skeleton = pawn_skeletal_mesh->Skeleton;
            if (pawn_skeleton == nullptr)
                continue;

            auto pawn_sockets = pawn_skeleton->Sockets;
            if (!pawn_sockets.IsValid())
                continue;

            auto pawn_sockets_num = pawn_sockets.Num();

            for (int pawn_bone_index = 0; pawn_bone_index < pawn_sockets_num;
                 pawn_bone_index++) {
                auto pawn_socket = pawn_sockets[pawn_bone_index];
                auto pawn_bone_name = pawn_socket->BoneName;

                auto pawn_bone_world_location =
                    pawn_mesh->GetSocketLocation(pawn_bone_name);

                SDK::FVector2D pawn_bone_screen_location = {0};

                if (player_controller->ProjectWorldLocationToScreen(
                        pawn_bone_world_location,
                        &pawn_bone_screen_location,
                        false
                    )) {
                    draw_list->AddText(
                        ImVec2(
                            pawn_bone_screen_location.X,
                            pawn_bone_screen_location.Y
                        ),
                        IM_COL32_WHITE,
                        pawn_bone_name.ToString().c_str()
                    );
                }
            }
        }
    }
}

LRESULT WINAPI Trainer::new_wnd_proc(
    const HWND _hWnd,
    UINT _uMsg,
    WPARAM _wParam,
    LPARAM _lParam
) {
    if (ImGui_ImplWin32_WndProcHandler(_hWnd, _uMsg, _wParam, _lParam))
        return true;

    return CallWindowProc(g_o_wnd_proc, _hWnd, _uMsg, _wParam, _lParam);
}

HRESULT WINAPI Trainer::new_resent(
    IDXGISwapChain* p_swap_chain,
    UINT sync_interval,
    UINT flags
) {
    if (!is_initialized) {
        HRESULT result = p_swap_chain->GetDevice(IID_PPV_ARGS(&g_device));

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        g_device->GetImmediateContext(&g_context);

        result = p_swap_chain->GetDesc(&g_swap_chain_desc);

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        g_output_wnd = g_swap_chain_desc.OutputWindow;

        ID3D11Texture2D* p_back_buffer;

        result = p_swap_chain->GetBuffer(0, IID_PPV_ARGS(&p_back_buffer));

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        result = g_device->CreateRenderTargetView(
            p_back_buffer,
            nullptr,
            &g_render_target_view
        );

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        p_back_buffer->Release();

        ImGui::CreateContext();

        ImGuiIO& io = ImGui::GetIO();

        ImGui::StyleColorsDark();

        io.IniFilename = NULL;

        io.Fonts->AddFontFromFileTTF(
            "C:\\windows\\fonts\\simhei.ttf",
            20.0f,
            NULL,
            io.Fonts->GetGlyphRangesChineseFull()
        );

        io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;

        ImGui_ImplWin32_Init(g_output_wnd);

        ImGui_ImplDX11_Init(g_device, g_context);

        g_o_wnd_proc = (WNDPROC
        )SetWindowLongPtrA(g_output_wnd, GWLP_WNDPROC, (LONG_PTR)new_wnd_proc);

        is_initialized = true;
    }

    ImGui_ImplWin32_NewFrame();

    ImGui_ImplDX11_NewFrame();

    ImGui::NewFrame();

    /////////////////////////////////////////////////////////////////
    on_frame();
    /////////////////////////////////////////////////////////////////

    ImGui::EndFrame();

    ImGui::Render();

    g_context->OMSetRenderTargets(1, &g_render_target_view, NULL);

    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    return g_o_present(p_swap_chain, sync_interval, flags);
}

HRESULT WINAPI Trainer::new_resize_buffers(
    IDXGISwapChain* p_swap_chain,
    UINT _BufferCount,
    UINT width,
    UINT height,
    DXGI_FORMAT new_format,
    UINT swap_chain_flags
) {
    if (g_render_target_view) {
        g_context->OMSetRenderTargets(0, 0, 0);
        g_render_target_view->Release();
    }

    HRESULT result = g_o_resize_buffers(
        p_swap_chain,
        _BufferCount,
        width,
        height,
        new_format,
        swap_chain_flags
    );

    ID3D11Texture2D* p_buffer;

    p_swap_chain->GetBuffer(0, IID_PPV_ARGS(&p_buffer));

    if (g_device
            ->CreateRenderTargetView(p_buffer, nullptr, &g_render_target_view))
        return 0;

    p_buffer->Release();

    g_context->OMSetRenderTargets(1, &g_render_target_view, NULL);

    D3D11_VIEWPORT view_port;
    ZeroMemory(&view_port, sizeof(view_port));
    view_port.Width = (float)width;
    view_port.Height = (float)height;
    view_port.MinDepth = 0.0f;
    view_port.MaxDepth = 1.0f;
    view_port.TopLeftX = 0;
    view_port.TopLeftY = 0;

    g_context->RSSetViewports(1, &view_port);

    return result;
}

void Trainer::enable_hook() {
    ZeroMemory(&g_swap_chain_desc, sizeof(g_swap_chain_desc));

    g_swap_chain_desc.BufferDesc.Width = NULL;
    g_swap_chain_desc.BufferDesc.Height = NULL;
    g_swap_chain_desc.BufferDesc.RefreshRate.Numerator = 60;
    g_swap_chain_desc.BufferDesc.RefreshRate.Denominator = 1;
    g_swap_chain_desc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    g_swap_chain_desc.BufferDesc.ScanlineOrdering =
        DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
    g_swap_chain_desc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
    g_swap_chain_desc.SampleDesc.Count = 1;
    g_swap_chain_desc.SampleDesc.Quality = 0;
    g_swap_chain_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    g_swap_chain_desc.BufferCount = 2;
    g_swap_chain_desc.OutputWindow = GetForegroundWindow();
    g_swap_chain_desc.Windowed = true;
    g_swap_chain_desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    g_swap_chain_desc.Flags = NULL;

    if (D3D11CreateDeviceAndSwapChain(
            NULL,
            D3D_DRIVER_TYPE_HARDWARE,
            NULL,
            NULL,
            NULL,
            NULL,
            D3D11_SDK_VERSION,
            &g_swap_chain_desc,
            &g_swap_chain,
            &g_device,
            NULL,
            NULL
        ))
        return;

    void** pp_swap_chain_vtable = *reinterpret_cast<void***>(g_swap_chain);

    g_o_present = (IDXGISwapChainPresent)pp_swap_chain_vtable[8];

    g_o_resize_buffers = (IDXGISwapChainResizeBuffers)pp_swap_chain_vtable[13];

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)g_o_present, (void*)new_resent);
    DetourAttach(&(PVOID&)g_o_resize_buffers, (void*)new_resize_buffers);
    DetourTransactionCommit();
}

void Trainer::disable_hook() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)g_o_present, (void*)new_resent);
    DetourDetach(&(PVOID&)g_o_resize_buffers, (void*)new_resize_buffers);
    DetourTransactionCommit();

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    g_render_target_view->Release();
    g_swap_chain->Release();
    g_context->Release();
    g_device->Release();
}
