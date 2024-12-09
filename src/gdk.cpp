#include "gdk.h"

#include <string>

#include "d3d11hook.h"

// GDK
SDK::UWorld* GDK::world = nullptr;
SDK::UGameInstance* GDK::game_instance = nullptr;
SDK::AGameStateBase* GDK::game_state = nullptr;
SDK::ULocalPlayer* GDK::player_instance = nullptr;
SDK::APlayerController* GDK::player_controller = nullptr;
SDK::APlayerCameraManager* GDK::player_camera = nullptr;
SDK::ACharacter* GDK::player_character = nullptr;
SDK::UCharacterMovementComponent* GDK::player_character_movement = nullptr;
SDK::ULevel* GDK::persistent_level = nullptr;
SDK::TArray<class SDK::ULevel*> GDK::levels = {};

SDK::FVector GDK::player_camera_location = {};
SDK::FRotator GDK::player_camera_rotation = {};
SDK::FVector GDK::player_character_localtion = {};

SDK::APawn* GDK::pawn = nullptr;
SDK::APlayerState* GDK::player_state = nullptr;
SDK::AController* GDK::controller = nullptr;
SDK::ACharacter* GDK::character = nullptr;
SDK::USkeletalMeshComponent* GDK::mesh = nullptr;
SDK::TArray<class SDK::FName> GDK::socket_names = {};

// SDK::USkeletalMesh* Pawn::skeletal_mesh = nullptr;
// SDK::USkeleton* Pawn::skeleton = nullptr;
// SDK::TArray<class SDK::USkeletalMeshSocket*> Pawn::sockets = {};

bool GDK::update() {
    world = SDK::UWorld::GetWorld();
    if (world == nullptr) {
        return false;
    }

    game_instance = world->OwningGameInstance;
    if (game_instance == nullptr) {
        return false;
    }

    game_state = world->GameState;
    if (game_state == nullptr) {
        return false;
    }

    if (game_instance->LocalPlayers.IsValid() == false) {
        return false;
    }

    player_instance = game_instance->LocalPlayers[0];
    if (player_instance == nullptr) {
        return false;
    }

    player_controller = player_instance->PlayerController;
    if (player_controller == nullptr) {
        return false;
    }

    player_camera = player_controller->PlayerCameraManager;
    if (player_camera == nullptr) {
        return false;
    }

    player_character = player_controller->Character;
    if (player_character == nullptr) {
        return false;
    }

    player_character_movement = player_character->CharacterMovement;
    if (player_character_movement == nullptr) {
        return false;
    }

    persistent_level = world->PersistentLevel;
    if (persistent_level == nullptr) {
        return false;
    }

    levels = world->Levels;
    if (levels.IsValid() == false) {
        return false;
    }

    player_camera_location = player_camera->GetCameraLocation();
    player_camera_rotation = player_camera->GetCameraRotation();
    player_character_localtion = player_character->K2_GetActorLocation();

    return true;
}

bool GDK::update_pawn(SDK::APawn* apawn) {
    pawn = apawn;

    player_state = apawn->PlayerState;
    // only the player has SDK::APlayerState*
    if (player_state != nullptr) {
        return false;
    }

    controller = apawn->Controller;
    if (controller == nullptr) {
        return false;
    }

    character = controller->Character;
    if (character == nullptr) {
        return false;
    }

    mesh = character->Mesh;
    if (mesh == nullptr) {
        return false;
    }

    socket_names = mesh->GetAllSocketNames();
    if (socket_names.IsValid() == false) {
        return false;
    }

    // skeletal_mesh = mesh->SkeletalMesh;
    // if (skeletal_mesh == nullptr) {
    //     return false;
    // }

    // skeleton = skeletal_mesh->Skeleton;
    // if (skeleton == nullptr) {
    //     return false;
    // }

    // sockets = skeleton->Sockets;

    // if (sockets.IsValid() == false) {
    //     return false;
    // }

    return true;
}

void GDK::on_frame() {
    if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
        D3d11Hook::is_show_menu = !D3d11Hook::is_show_menu;
    }

    // static bool IS_KEY_OPEN_MENU_DOWN = false;
    // if ((GetAsyncKeyState(0xC0) & 0x8000) != 0) {
    // if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
    //     if (!IS_KEY_OPEN_MENU_DOWN) {
    //         IS_KEY_OPEN_MENU_DOWN = true;
    //         D3d11Hook::is_show_menu = !D3d11Hook::is_show_menu;
    //     }
    // } else if (IS_KEY_OPEN_MENU_DOWN) {
    //     IS_KEY_OPEN_MENU_DOWN = false;
    // }

    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

    ImGui::Begin(
        "#0",
        nullptr,
        // TODO
        // ImGuiWindowFlags_NoInputs|
        ImGuiWindowFlags_NoTitleBar
    );
    auto& io = ImGui::GetIO();
    ImGui::SetWindowPos(ImVec2(0, 0), ImGuiCond_Always);
    ImGui::SetWindowSize(
        ImVec2(io.DisplaySize.x, io.DisplaySize.y),
        ImGuiCond_Always
    );

    on_frame_render();

    ImGui::End();

    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
}

void GDK::on_frame_render() {
    // TODO
    if (D3d11Hook::is_show_menu) {
        // TODO
        ImGui::Button("test");
    }

    if (update() == false) {
        return;
    }

    const SDK::TArray<class SDK::AActor*> actors = persistent_level->Actors;

    if (actors.IsValid() == false) {
        return;
    }

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (const SDK::AActor* const actor : actors) {
        if (actor == nullptr
            || (actor->IsA(SDK::EClassCastFlags::Pawn) == false)) {
            continue;
        }

        if (GDK::update_pawn((SDK::APawn* const)actor) == false) {
            continue;
        }

        GDK::render_box_2d();
        GDK::render_box_3d();
        GDK::render_socket_names();
    }
}

void GDK::render_box_2d() {
    SDK::FVector pawn_world_location = pawn->K2_GetActorLocation(),
                 pawn_world_location_origin = {}, pawn_world_location_extent {};

    SDK::FVector2D pawn_screen_location = {}, pawn_screen_location_head = {},
                   pawn_screen_location_foot = {};

    pawn->GetActorBounds(
        true,
        &pawn_world_location_origin,
        &pawn_world_location_extent,
        false
    );

    SDK::FVector pawn_world_extent = {35.f, 35.f, pawn_world_location_extent.Z};

    if (GDK::player_controller->ProjectWorldLocationToScreen(
            pawn_world_location,
            &pawn_screen_location,
            false
        )
        == false) {
        return;
    }

    if (GDK::player_controller->ProjectWorldLocationToScreen(
            {pawn_world_location.X,
             pawn_world_location.Y,
             pawn_world_location.Z + pawn_world_location_extent.Z},
            &pawn_screen_location_head,
            false
        )
        == false) {
        return;
    }

    if (GDK::player_controller->ProjectWorldLocationToScreen(
            {pawn_world_location.X,
             pawn_world_location.Y,
             pawn_world_location.Z - pawn_world_location_extent.Z},
            &pawn_screen_location_foot,
            false
        )
        == false) {
        return;
    }

    const float pawn_height =
        abs(pawn_screen_location_foot.Y - pawn_screen_location_head.Y);
    const float pawn_width = pawn_height * 0.4f;

    ImGui::GetBackgroundDrawList()->AddRect(
        {pawn_screen_location_head.X - pawn_width * 0.5f,
         pawn_screen_location_head.Y},
        {pawn_screen_location_head.X + pawn_width * 0.5f,
         pawn_screen_location_foot.Y},
        IM_COL32_WHITE,
        0.f,
        15,
        1.5f
    );
}

void GDK::render_box_3d() {
    SDK::FVector pawn_origin = {};
    SDK::FVector pawn_box_extent {};

    pawn->GetActorBounds(true, &pawn_origin, &pawn_box_extent, false);

    pawn_box_extent = {35.f, 35.f, pawn_box_extent.Z};

    std::vector<SDK::FVector> world_locations(8);
    std::vector<ImVec2> screen_locations(8);

    world_locations[0] = pawn_origin - pawn_box_extent;
    world_locations[1] = pawn_origin
        + SDK::FVector(pawn_box_extent.X, -pawn_box_extent.Y, -pawn_box_extent.Z
        );
    world_locations[2] = pawn_origin
        + SDK::FVector(pawn_box_extent.X, pawn_box_extent.Y, -pawn_box_extent.Z
        );
    world_locations[3] = pawn_origin
        + SDK::FVector(-pawn_box_extent.X, pawn_box_extent.Y, -pawn_box_extent.Z
        );

    world_locations[4] =
        world_locations[0] + SDK::FVector(0, 0, 2 * pawn_box_extent.Z);
    world_locations[5] =
        world_locations[1] + SDK::FVector(0, 0, 2 * pawn_box_extent.Z);
    world_locations[6] =
        world_locations[2] + SDK::FVector(0, 0, 2 * pawn_box_extent.Z);
    world_locations[7] =
        world_locations[3] + SDK::FVector(0, 0, 2 * pawn_box_extent.Z);

    for (int i = 0; i < 8; ++i) {
        SDK::FVector2D screen_location;
        if (player_controller->ProjectWorldLocationToScreen(
                world_locations[i],
                &screen_location,
                false
            )) {
            screen_locations[i] = ImVec2(screen_location.X, screen_location.Y);
        }
    }

    ImDrawList* DrawList = ImGui::GetForegroundDrawList();
    for (int i = 0; i < 4; ++i) {
        if (in_on_screen(screen_locations[i])
            && in_on_screen(screen_locations[(i + 1) % 4])) {
            DrawList->AddLine(
                screen_locations[i],
                screen_locations[(i + 1) % 4],
                IM_COL32_WHITE
            );
        }
        if (in_on_screen(screen_locations[i + 4])
            && in_on_screen(screen_locations[(i + 1) % 4 + 4])) {
            DrawList->AddLine(
                screen_locations[i + 4],
                screen_locations[(i + 1) % 4 + 4],
                IM_COL32_WHITE
            );
        }
        if (in_on_screen(screen_locations[i])
            && in_on_screen(screen_locations[i + 4])) {
            DrawList->AddLine(
                screen_locations[i],
                screen_locations[i + 4],
                IM_COL32_WHITE
            );
        }
    }
}

void GDK::render_socket_names() {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (const SDK::FName socket_name : socket_names) {
        const SDK::FVector location_3d = mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller
                ->ProjectWorldLocationToScreen(location_3d, &location_2d, false)
            == false) {
            continue;
        }

        int index = mesh->GetBoneIndex(socket_name);
        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            socket_name.ToString().c_str()
        );

        // printf("index: %d\t%s\n", index, socket_name.ToString().c_str());
    }
}

bool GDK::in_on_screen(ImVec2 location) {
    int viewport_width = {};
    int viewport_height = {};

    player_controller->GetViewportSize(&viewport_width, &viewport_height);

    return (location.x < 0 || location.y < 0 || location.x > viewport_width
            || location.y > viewport_height)
        == false;
}
