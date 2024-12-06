#include "trainer.h"

#include <format>

#include "../deps/detours/detours.h"
#include "../deps/imgui/imgui.h"
#include "../deps/imgui/imgui_impl_dx11.h"
#include "../deps/imgui/imgui_impl_win32.h"
#include "../deps/ue_4_27_2_sdk/SDK/Engine_classes.hpp"

bool Trainer::is_initialized = false;
WNDPROC Trainer::g_o_wnd_proc = nullptr;
HWND Trainer::g_output_wnd = nullptr;

ID3D11Device* Trainer::g_device = nullptr;
ID3D11DeviceContext* Trainer::g_context = nullptr;
ID3D11RenderTargetView* Trainer::g_render_target_view = nullptr;
IDXGISwapChain* Trainer::g_swap_chain = nullptr;
DXGI_SWAP_CHAIN_DESC Trainer::g_swap_chain_desc = {0};

IDXGISwapChainPresent Trainer::g_o_fn_present = nullptr;
IDXGISwapChainResizeBuffers Trainer::g_o_fn_resize_buffers = nullptr;

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
    SDK::UWorld* world = SDK::UWorld::GetWorld();

    if (world == nullptr)
        return;

    if (world->OwningGameInstance == nullptr)
        return;

    if (world->OwningGameInstance->LocalPlayers[0] == nullptr)
        return;

    SDK::APlayerController* player_controller =
        world->OwningGameInstance->LocalPlayers[0]->PlayerController;

    if (player_controller == nullptr)
        return;

    float mouse_x = 0.0;
    float mouse_y = 0.0;

    player_controller->GetMousePosition(&mouse_x, &mouse_y);

    auto mouse_pos = std::format("MousePos: {}\t{}", mouse_x, mouse_y);

    auto draw_list = ImGui::GetBackgroundDrawList();
    draw_list->AddText(ImVec2(0.0, 0.0), IM_COL32_WHITE, mouse_pos.c_str());

    if (player_controller->AcknowledgedPawn == nullptr)
        return;

    if (player_controller->AcknowledgedPawn->RootComponent == nullptr)
        return;

    auto player_pos =
        player_controller->AcknowledgedPawn->K2_GetActorLocation();

    auto player_pos_str = std::format(
        "PlayerPos: {}\t{}\t{}",
        // Player->AcknowledgedPawn->RootComponent->RelativeLocation.X,
        // Player->AcknowledgedPawn->RootComponent->RelativeLocation.Y,
        // Player->AcknowledgedPawn->RootComponent->RelativeLocation.Z
        player_pos.X,
        player_pos.Y,
        player_pos.Z
    );

    draw_list
        ->AddText(ImVec2(0.0, 50.0), IM_COL32_WHITE, player_pos_str.c_str());

    if (world->PersistentLevel == nullptr)
        return;

    for (int i = 0; i < world->PersistentLevel->Actors.Num(); i++) {
        if (world->PersistentLevel->Actors[i] == nullptr)
            continue;

        if (world->PersistentLevel->Actors[i]->RootComponent == nullptr)
            continue;

        if (!world->PersistentLevel->Actors[i]->bCanBeDamaged)
            continue;

        SDK::FVector ActorLocation =
            world->PersistentLevel->Actors[i]->K2_GetActorLocation();

        SDK::FVector2D actor_screen_pos {};
        if (!player_controller->ProjectWorldLocationToScreen(
                // World->PersistentLevel->Actors[i]->RootComponent->RelativeLocation,
                ActorLocation,
                &actor_screen_pos,
                false
            )) {
            continue;
        }

        int32_t window_width {0};
        int32_t window_height {0};

        player_controller->GetViewportSize(&window_width, &window_height);

        if (actor_screen_pos.X < 0 || actor_screen_pos.X > window_width) {
            continue;
        }

        if (actor_screen_pos.Y < 0 || actor_screen_pos.Y > window_height) {
            continue;
        }

        ImVec2 TargetLocation = ImVec2(
            (actor_screen_pos.X + window_width),
            (actor_screen_pos.Y + window_height)
        );

        draw_list->AddText(
            ImVec2(actor_screen_pos.X, actor_screen_pos.Y),
            IM_COL32_WHITE,
            world->PersistentLevel->Actors[i]->GetName().c_str()
        );
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
            return g_o_fn_present(p_swap_chain, sync_interval, flags);

        g_device->GetImmediateContext(&g_context);

        result = p_swap_chain->GetDesc(&g_swap_chain_desc);

        if (result)
            return g_o_fn_present(p_swap_chain, sync_interval, flags);

        g_output_wnd = g_swap_chain_desc.OutputWindow;

        ID3D11Texture2D* p_back_buffer;

        result = p_swap_chain->GetBuffer(0, IID_PPV_ARGS(&p_back_buffer));

        if (result)
            return g_o_fn_present(p_swap_chain, sync_interval, flags);

        result = g_device->CreateRenderTargetView(
            p_back_buffer,
            nullptr,
            &g_render_target_view
        );

        if (result)
            return g_o_fn_present(p_swap_chain, sync_interval, flags);

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

    return g_o_fn_present(p_swap_chain, sync_interval, flags);
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

    HRESULT result = g_o_fn_resize_buffers(
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

    g_o_fn_present = (IDXGISwapChainPresent)pp_swap_chain_vtable[8];

    g_o_fn_resize_buffers =
        (IDXGISwapChainResizeBuffers)pp_swap_chain_vtable[13];

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)g_o_fn_present, (void*)new_resent);
    DetourAttach(&(PVOID&)g_o_fn_resize_buffers, (void*)new_resize_buffers);
    DetourTransactionCommit();
}

void Trainer::disable_hook() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)g_o_fn_present, (void*)new_resent);
    DetourDetach(&(PVOID&)g_o_fn_resize_buffers, (void*)new_resize_buffers);
    DetourTransactionCommit();

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    g_render_target_view->Release();
    g_swap_chain->Release();
    g_context->Release();
    g_device->Release();
}
