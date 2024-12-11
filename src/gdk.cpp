#include "gdk.h"

#include <format>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "d3d11hook.h"

// GDK
SDK::UWorld* GDK::world = nullptr;
SDK::UGameInstance* GDK::game_instance = nullptr;
SDK::AGameStateBase* GDK::game_state = nullptr;
SDK::ULocalPlayer* GDK::local_player = nullptr;
SDK::APlayerController* GDK::player_controller = nullptr;
SDK::APawn* GDK::player_pawn = nullptr;
SDK::APlayerCameraManager* GDK::player_camera_manager = nullptr;
SDK::ACharacter* GDK::player_character = nullptr;
SDK::UCharacterMovementComponent* GDK::player_character_movement = nullptr;
SDK::ULevel* GDK::persistent_level = nullptr;
SDK::TArray<class SDK::ULevel*> GDK::levels = {};
SDK::TArray<class SDK::AActor*> GDK::actors = {};

SDK::APawn* GDK::pawn = nullptr;
SDK::APlayerState* GDK::player_state = nullptr;
SDK::AController* GDK::controller = nullptr;
SDK::ACharacter* GDK::character = nullptr;
SDK::USkeletalMeshComponent* GDK::mesh = nullptr;
SDK::TArray<class SDK::FName> GDK::socket_names = {};

bool GDK::is_rendering_box_2d = false;
bool GDK::is_rendering_box_3d = false;
bool GDK::is_rendering_socket_names = false;
bool GDK::is_rendering_socket_indices = false;
bool GDK::is_rendering_bones = false;

void GDK::on_frame() {
    if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
        D3d11Hook::is_menu_visible = !D3d11Hook::is_menu_visible;
    }

    if (update_base() == false) {
        return;
    }

    on_pawns();

    on_frame_gui();

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
}

bool GDK::update_base() {
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

    local_player = game_instance->LocalPlayers[0];
    if (local_player == nullptr) {
        return false;
    }

    player_controller = local_player->PlayerController;
    if (player_controller == nullptr) {
        return false;
    }

    player_pawn = player_controller->AcknowledgedPawn;
    if (player_pawn == nullptr) {
        return false;
    }

    player_camera_manager = player_controller->PlayerCameraManager;
    if (player_camera_manager == nullptr) {
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

    actors = persistent_level->Actors;
    if (actors.IsValid() == false) {
        return false;
    }

    return true;
}

void GDK::on_pawns() {
    for (const SDK::AActor* const actor : actors) {
        if (actor == nullptr
            || (actor->IsA(SDK::EClassCastFlags::Pawn) == false)) {
            continue;
        }

        pawn = (SDK::APawn* const)actor;
        if (GDK::update_pawn() == false) {
            continue;
        }
        on_frame_draw_background();
    }
}

bool GDK::update_pawn() {
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

    return true;
}

void GDK::on_frame_draw_background() {
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

    if (is_rendering_bones) {
        GDK::draw_bones();
    }
}

void GDK::on_frame_gui() {
    if (D3d11Hook::is_menu_visible == false) {
        return;
    }

    // begin window #0
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0);
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    // ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

    ImGui::Begin("Menu##menu", nullptr, ImGuiWindowFlags_NoMove);

    ImGui::SetWindowSize(ImVec2(600.0, 400.0), ImGuiCond_Always);

    if (ImGui::BeginTabBar("#tab_bar")) {
        if (ImGui::BeginTabItem("render##tab_item_0")) {
            ImGui::Checkbox(
                "box 2d##is_render_box_2d",
                &is_rendering_box_2d
            );
            ImGui::Checkbox(
                "box 3d##is_render_box_2d",
                &is_rendering_box_3d
            );
            ImGui::Checkbox(
                "socket names##is_render_socket_names",
                &is_rendering_socket_names
            );
            ImGui::Checkbox(
                "socket indices##is_rendering_socket_indices",
                &is_rendering_socket_indices
            );
            ImGui::Checkbox(
                "bones##is_rendering_bones",
                &is_rendering_bones
            );

            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("bone list dumper##tab_item_1")) {
            ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

            if (ImGui::Button("player##player")) {
                dump_pawn_sockets(player_controller->Pawn, -1);
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

                const SDK::FVector location_3d =
                    pawn->K2_GetActorLocation();
                SDK::FVector2D location_2d;
                if (GDK::player_controller->ProjectWorldLocationToScreen(
                        location_3d,
                        &location_2d,
                        false
                    )
                    == false) {
                    continue;
                }

                if (is_on_screen({location_2d.X, location_2d.Y})
                    == false) {
                    continue;
                }

                std::string pawn_index_str =
                    std::format("index: {}", actor_index);

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

void GDK::render_box_2d() {
    SDK::FVector pawn_world_location = pawn->K2_GetActorLocation(),
                 pawn_world_location_origin = {},
                 pawn_world_location_extent {};

    SDK::FVector2D pawn_screen_location = {},
                   pawn_screen_location_head = {},
                   pawn_screen_location_foot = {};

    pawn->GetActorBounds(
        true,
        &pawn_world_location_origin,
        &pawn_world_location_extent,
        false
    );

    SDK::FVector pawn_world_extent =
        {35.f, 35.f, pawn_world_location_extent.Z};

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
        + SDK::FVector(pawn_box_extent.X,
                       -pawn_box_extent.Y,
                       -pawn_box_extent.Z);
    world_locations[2] = pawn_origin
        + SDK::FVector(pawn_box_extent.X,
                       pawn_box_extent.Y,
                       -pawn_box_extent.Z);
    world_locations[3] = pawn_origin
        + SDK::FVector(-pawn_box_extent.X,
                       pawn_box_extent.Y,
                       -pawn_box_extent.Z);

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
            screen_locations[i] =
                ImVec2(screen_location.X, screen_location.Y);
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
        const SDK::FVector location_3d =
            mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )
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
        const SDK::FVector location_3d =
            mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )
            == false) {
            continue;
        }

        int socket_index = mesh->GetBoneIndex(socket_name);

        // if (socket_index > 20) {
        //     continue;
        // }

        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            std::to_string(socket_index + 3).c_str()
        );
    }
}

const std::vector<std::vector<Bones>> BONE_LISTS = {

    // FIXME    unrendered bug, needs to be fixed
    // spine -> head
    {
        Bones::Root_M,
        Bones::Spine1_M,
        Bones::Spine2_M,
        Bones::Spine3_M,
        Bones::Chest_M,
        Bones::Neck_B_M,
        Bones::Head_B_M,
        Bones::HeadEnd1_B_M,
        Bones::HeadEnd_B_M,
    },

    // 左肩到左手腕
    {Bones::Chest_M,
     Bones::Scapula_L,
     Bones::Shoulder_L,
     Bones::ShoulderPart1_L,
     Bones::Elbow_L,
     Bones::ElbowPart1_L,
     Bones::Wrist_L},

    // 右肩到右手腕
    {Bones::Chest_M,
     Bones::Scapula_R,
     Bones::Shoulder_R,
     Bones::ShoulderPart1_R,
     Bones::Elbow_R,
     Bones::ElbowPart1_R,
     Bones::Wrist_R},

    // 左腿
    {Bones::Root_M,
     Bones::Hip_L,
     Bones::HipPart1_L,
     Bones::Knee_L,
     Bones::KneePart1_L,
     Bones::Ankle_L,
     Bones::Toes_L},

    // 右腿
    {Bones::Root_M,
     Bones::Hip_R,
     Bones::HipPart1_R,
     Bones::Knee_R,
     Bones::KneePart1_R,
     Bones::Ankle_R,
     Bones::Toes_R}

};

void GDK::draw_bones() {
    SDK::FVector previous_world_pos = {};

    SDK::FVector current_world_pos = {};

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();
    for (std::vector<Bones> bone_list : BONE_LISTS) {
        previous_world_pos = {};

        for (Bones bone : bone_list) {
            current_world_pos =
                mesh->GetSocketLocation(socket_names[bone]);

            if (previous_world_pos.IsZero()) {
                previous_world_pos = current_world_pos;
                continue;
            }

            SDK::FVector2D previous_screen_pos = {};

            SDK::FVector2D current_screen_pos = {};

            if (player_controller->ProjectWorldLocationToScreen(
                    previous_world_pos,
                    &previous_screen_pos,
                    false
                )
                == false) {
                continue;
            }

            // if (is_on_screen({previous_screen_pos.X, previous_screen_pos.Y}) == false) {
            //     continue;
            // }

            if (player_controller->ProjectWorldLocationToScreen(
                    current_world_pos,
                    &current_screen_pos,
                    false
                )
                == false) {
                continue;
            }

            // if (is_on_screen({current_world_pos.X, current_world_pos.Y}) == false) {
            //     continue;
            // }

            draw_list->AddLine(
                {previous_screen_pos.X, previous_screen_pos.Y},
                {current_screen_pos.X, current_screen_pos.Y},
                IM_COL32_WHITE
            );

            previous_world_pos = current_world_pos;
        }
    }
}

bool GDK::dump_pawn_sockets(const SDK::APawn* const pawn, int file_logo) {
    std::ofstream file(
        std::format("{}_{}.txt", pawn->GetName(), file_logo),
        std::ios::trunc
    );

    if (!file) {
        return false;
    }

    file << "enum Bones : int {" << std::endl;
    ;
    for (const SDK::FName socket_name : socket_names) {
        const SDK::FVector location_3d =
            mesh->GetSocketLocation(socket_name);
        SDK::FVector2D location_2d;
        if (GDK::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )
            == false) {
            continue;
        }

        int index = mesh->GetBoneIndex(socket_name) + 3;

        file << "    " << socket_name.ToString() << " = " << index << ","
             << std::endl;
    }

    file << "};" << std::endl;

    return true;
}

bool GDK::is_on_screen(ImVec2 location) {
    int viewport_width = {};
    int viewport_height = {};

    player_controller->GetViewportSize(&viewport_width, &viewport_height);

    return location.x < viewport_width && location.y < viewport_height
        && location.x > 0 && location.y > 0;
}
