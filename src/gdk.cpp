#include "gdk.h"

#include <format>
#include <fstream>
#include <iostream>
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

bool GDK::is_rendering_box_2d = false;
bool GDK::is_rendering_box_3d = false;
bool GDK::is_rendering_socket_names = false;
bool GDK::is_rendering_socket_indices = false;

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

    player_state = pawn->PlayerState;
    // only the player has SDK::APlayerState*
    // if (player_state != nullptr) {
    //     return false;
    // }

    controller = pawn->Controller;
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
    // start processing data
    if (update() == false) {
        return;
    }

    // iterate through actors and use their pawns
    const SDK::TArray<class SDK::AActor*> actors = persistent_level->Actors;

    if (actors.IsValid() == false) {
        return;
    }

    for (const SDK::AActor* const actor : actors) {
        if (actor == nullptr
            || (actor->IsA(SDK::EClassCastFlags::Pawn) == false)) {
            continue;
        }

        if (GDK::update_pawn((SDK::APawn* const)actor) == false) {
            continue;
        }

        on_frame_gui();
    }

    if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
        D3d11Hook::is_menu_visible = !D3d11Hook::is_menu_visible;
    }

    // static bool IS_KEY_OPEN_MENU_DOWN = false;
    // if ((GetAsyncKeyState(0xC0) & 0x8000) != 0) {
    // if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
    //     if (!IS_KEY_OPEN_MENU_DOWN) {
    //         IS_KEY_OPEN_MENU_DOWN = true;
    //         D3d11Hook::is_menu_visble = !D3d11Hook::is_menu_visble;
    //     }
    // } else if (IS_KEY_OPEN_MENU_DOWN) {
    //     IS_KEY_OPEN_MENU_DOWN = false;
    // }

    // UI window responsible only for irrelevant data
    if (D3d11Hook::is_menu_visible == false) {
        return;
    }

    // begin window #0
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0);
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    // ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

    ImGui::Begin(
        "Menu##0",
        nullptr,
        // TODO
        // ImGuiWindowFlags_NoInputs|
        ImGuiWindowFlags_NoMove
    );
    // ImGuiIO& io = ImGui::GetIO();

    //

    ImGui::SetWindowSize(
        // ImVec2(io.DisplaySize.x, io.DisplaySize.y),
        ImVec2(600.0, 400.0),
        ImGuiCond_Always
    );

    if (ImGui::BeginTabBar("#tab_bar")) {
        if (ImGui::BeginTabItem("render##tab_item_0")) {
            ImGui::Checkbox(
                "render box 2d##is_render_box_2d",
                &is_rendering_box_2d
            );
            ImGui::Checkbox(
                "render box 3d##is_render_box_2d",
                &is_rendering_box_3d
            );
            ImGui::Checkbox(
                "render socket names##is_render_socket_names",
                &is_rendering_socket_names
            );
            ImGui::Checkbox(
                "render socket indices##is_rendering_socket_indices",
                &is_rendering_socket_indices
            );
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("bone list dumper##tab_item_1")) {
            ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

            if (player_controller->Pawn != nullptr) {
                if (ImGui::Button("dump player")) {
                    dump_pawn_sockets(player_controller->Pawn, -1);
                }
            }
            for (int actor_index = 0; actor_index < actors.Num();
                 actor_index++) {
                const SDK::AActor* const actor = actors[actor_index];

                if (actor == nullptr
                    || (actor->IsA(SDK::EClassCastFlags::Pawn) == false)) {
                    continue;
                }

                const SDK::APawn* const pawn = (SDK::APawn* const)actor;

                controller = pawn->Controller;
                if (controller == nullptr) {
                    continue;
                }

                character = controller->Character;
                if (character == nullptr) {
                    continue;
                }

                mesh = character->Mesh;
                if (mesh == nullptr) {
                    continue;
                }

                socket_names = mesh->GetAllSocketNames();
                if (socket_names.IsValid() == false) {
                    continue;
                }

                const SDK::FVector location_3d = pawn->K2_GetActorLocation();
                SDK::FVector2D location_2d;
                if (GDK::player_controller->ProjectWorldLocationToScreen(
                        location_3d,
                        &location_2d,
                        false
                    )
                    == false) {
                    continue;
                }

                // if (in_on_screen(ImVec2(location_2d.X, location_2d.Y))
                //     == false) {
                //     continue;
                // }

                std::string pawn_index_str =
                    std::format("pawn index: {}", actor_index);

                draw_list->AddText(
                    ImVec2(location_2d.X, location_2d.Y),
                    IM_COL32_WHITE,
                    pawn_index_str.c_str()
                );

                if (ImGui::Button(pawn_index_str.c_str())) {
                    dump_pawn_sockets(pawn, actor_index);
                }
            }

            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }

    // end window #0
    ImGui::End();
    // ImGui::PopStyleColor();
    // ImGui::PopStyleVar(2);
}

void GDK::on_frame_gui() {
    if (is_rendering_box_2d) {
        GDK::render_box_2d();
    }

    if (is_rendering_box_3d) {
        GDK::render_box_3d();
    }

    if (is_rendering_socket_names) {
        GDK::render_socket_names();
    }

    if (is_rendering_socket_indices) {
        GDK::render_socket_indices();
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
        if (is_on_screen(screen_locations[i])
            && is_on_screen(screen_locations[(i + 1) % 4])) {
            DrawList->AddLine(
                screen_locations[i],
                screen_locations[(i + 1) % 4],
                IM_COL32_WHITE
            );
        }
        if (is_on_screen(screen_locations[i + 4])
            && is_on_screen(screen_locations[(i + 1) % 4 + 4])) {
            DrawList->AddLine(
                screen_locations[i + 4],
                screen_locations[(i + 1) % 4 + 4],
                IM_COL32_WHITE
            );
        }
        if (is_on_screen(screen_locations[i])
            && is_on_screen(screen_locations[i + 4])) {
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
    }
}

void GDK::render_socket_indices() {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (const SDK::FName socket_name : socket_names) {
        const SDK::FVector location_3d = mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller
                ->ProjectWorldLocationToScreen(location_3d, &location_2d, false)
            == false) {
            continue;
        }

        int socket_index = mesh->GetBoneIndex(socket_name);
        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            std::to_string(socket_index).c_str()
        );
    }
}

bool GDK::dump_pawn_sockets(const SDK::APawn* const pawn, int file_logo) {
    std::ofstream file(
        std::format("{}_{}.txt", file_logo, pawn->GetName()),
        std::ios::trunc
    );

    if (!file) {
        return false;
    }

    for (const SDK::FName socket_name : socket_names) {
        const SDK::FVector location_3d = mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller
                ->ProjectWorldLocationToScreen(location_3d, &location_2d, false)
            == false) {
            continue;
        }

        int index = mesh->GetBoneIndex(socket_name);

        file << index << ": " << socket_name.ToString() << std::endl;
    }

    return true;
}

bool GDK::is_on_screen(ImVec2 location) {
    int viewport_width = {};
    int viewport_height = {};

    player_controller->GetViewportSize(&viewport_width, &viewport_height);

    return (location.x < 0 || location.y < 0 || location.x > viewport_width
            || location.y > viewport_height)
        == false;
}
