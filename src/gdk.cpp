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
// XXX dead code
SDK::APlayerCameraManager* GDK::player_camera_manager = nullptr;
SDK::ACharacter* GDK::player_character = nullptr;
SDK::UCharacterMovementComponent* GDK::player_character_movement = nullptr;
SDK::ULevel* GDK::persistent_level = nullptr;
// XXX dead code
SDK::TArray<class SDK::ULevel*> GDK::levels = {};
SDK::TArray<class SDK::AActor*> GDK::actors = {};

bool GDK::is_rendering_box_2d = false;
bool GDK::is_rendering_box_3d = false;
bool GDK::is_rendering_socket_names = false;
bool GDK::is_rendering_socket_indices = false;
bool GDK::is_rendering_bones = false;
bool GDK::is_rendering_distance = false;

void GDK::on_frame() {
    if (ImGui::IsKeyPressed(ImGuiKey_GraveAccent)) {
        D3d11Hook::is_menu_visible = !D3d11Hook::is_menu_visible;
    }

    world = SDK::UWorld::GetWorld();
    if (world == nullptr) {
        return;
    }

    game_instance = world->OwningGameInstance;
    if (game_instance == nullptr) {
        return;
    }

    game_state = world->GameState;
    if (game_state == nullptr) {
        return;
    }

    if (game_instance->LocalPlayers.IsValid() == false) {
        return;
    }

    local_player = game_instance->LocalPlayers[0];
    if (local_player == nullptr) {
        return;
    }

    player_controller = local_player->PlayerController;
    if (player_controller == nullptr) {
        return;
    }

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();
    draw_list->AddText(
        {0, 0},
        IM_COL32_WHITE,
        std::to_string(game_state->GetGameTimeSinceCreation()).c_str()
    );

    draw_list->AddText(
        {0, 50},
        IM_COL32_WHITE,
        game_state->GetFullName().c_str()
    );

    player_pawn = player_controller->AcknowledgedPawn;
    if (player_pawn == nullptr) {
        return;
    }

    player_camera_manager = player_controller->PlayerCameraManager;
    if (player_camera_manager == nullptr) {
        return;
    }

    player_character = player_controller->Character;
    if (player_character == nullptr) {
        return;
    }

    player_character_movement = player_character->CharacterMovement;
    if (player_character_movement == nullptr) {
        return;
    }

    persistent_level = world->PersistentLevel;
    if (persistent_level == nullptr) {
        return;
    }

    draw_list->AddText(
        {0, 100},
        IM_COL32_WHITE,
        persistent_level->GetFullName().c_str()
    );

    levels = world->Levels;
    if (levels.IsValid() == false) {
        return;
    }

    actors = persistent_level->Actors;
    if (actors.IsValid() == false) {
        return;
    }

    for (const SDK::AActor* const actor : actors) {
        if (actor == nullptr
            || (actor->IsA(SDK::EClassCastFlags::Pawn) == false)) {
            continue;
        }

        const SDK::APawn* const pawn = (SDK::APawn* const)actor;

        float distance = player_pawn->GetDistanceTo(pawn);

        if (distance > 4095) {
            continue;
        }

        GDK::on_pawn(pawn);
    }

    if (D3d11Hook::is_menu_visible == false) {
        return;
    }

    // ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0);
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    // ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

    ImGui::Begin("menu\tkey ~##menu");

    ImGui::SetWindowSize(ImVec2(600.0, 400.0), ImGuiCond_FirstUseEver);
    ImGui::SetWindowPos(ImVec2(0.0, 0.0), ImGuiCond_FirstUseEver);

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
            ImGui::Checkbox(
                "distance##is_rendering_flags",
                &is_rendering_distance
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

                const SDK::AController* const controller =
                    pawn->Controller;
                if (controller == nullptr) {
                    continue;
                }

                const SDK::ACharacter* const character =
                    controller->Character;
                if (character == nullptr) {
                    continue;
                }

                const SDK::USkeletalMeshComponent* const mesh =
                    character->Mesh;
                if (mesh == nullptr) {
                    continue;
                }

                const SDK::TArray<class SDK::FName> socket_names =
                    mesh->GetAllSocketNames();
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
                    std::format("{}_{}", pawn->GetName(), actor_index);

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

    ImGui::End();
    // ImGui::PopStyleColor();
    // ImGui::PopStyleVar(2);

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

void GDK::on_pawn(const SDK::APawn* const pawn) {
    // ############ update ############

    // const SDK::APlayerState* const player_state = pawn->PlayerState;
    // only the player has SDK::APlayerState*
    // if (player_state != nullptr) {
    //     return false;
    // }

    const SDK::AController* const controller = pawn->Controller;
    if (controller == nullptr) {
        return;
    }

    const SDK::ACharacter* const character = controller->Character;
    if (character == nullptr) {
        return;
    }

    const SDK::USkeletalMeshComponent* const mesh = character->Mesh;
    if (mesh == nullptr) {
        return;
    }

    const SDK::TArray<class SDK::FName> socket_names =
        mesh->GetAllSocketNames();
    if (socket_names.IsValid() == false) {
        return;
    }

    if (is_rendering_box_2d) {
        GDK::render_box_2d(pawn);
    }

    if (is_rendering_box_3d) {
        GDK::render_box_3d(pawn);
    }

    if (is_rendering_socket_names) {
        GDK::render_socket_names(pawn);
    }

    if (is_rendering_socket_indices) {
        GDK::render_socket_indices(pawn);
    }

    if (is_rendering_bones) {
        GDK::render_bones(pawn);
    }

    if (is_rendering_distance) {
        GDK::render_distance(pawn);
    }
}

void GDK::render_box_2d(const SDK::APawn* const pawn) {
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

void GDK::render_box_3d(const SDK::APawn* const pawn) {
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

void GDK::render_socket_names(const SDK::APawn* const pawn) {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    const SDK::USkeletalMeshComponent* const mesh =
        pawn->Controller->Character->Mesh;

    for (const SDK::FName socket_name : mesh->GetAllSocketNames()) {
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

void GDK::render_socket_indices(const SDK::APawn* const pawn) {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    const SDK::USkeletalMeshComponent* const mesh =
        pawn->Controller->Character->Mesh;

    for (const SDK::FName socket_name : mesh->GetAllSocketNames()) {
        const SDK::FVector location_3d =
            mesh->GetSocketLocation(socket_name);

        SDK::FVector2D location_2d = {};

        if (GDK::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )
            == false) {
            continue;
        }

        int socket_index = mesh->GetBoneIndex(socket_name);

        if (socket_index > 11) {
            continue;
        }

        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            std::to_string(socket_index).c_str()
        );
    }
}

const std::vector<std::vector<BonesCemeteryCreature>> BONE_LISTS = {
    std::vector<BonesCemeteryCreature> {
        BonesCemeteryCreature::Root_M,
        BonesCemeteryCreature::Spine1_M,
        BonesCemeteryCreature::Spine2_M,
        BonesCemeteryCreature::Spine3_M,
        BonesCemeteryCreature::Chest_M,
        BonesCemeteryCreature::Neck_B_M,
        BonesCemeteryCreature::Head_B_M
    },
    std::vector<BonesCemeteryCreature> {
        BonesCemeteryCreature::Chest_M,
        BonesCemeteryCreature::Scapula_L,
        BonesCemeteryCreature::Shoulder_L,
        BonesCemeteryCreature::ShoulderPart1_L,
        BonesCemeteryCreature::Elbow_L,
        BonesCemeteryCreature::ElbowPart1_L,
        BonesCemeteryCreature::Wrist_L
    },
    std::vector<BonesCemeteryCreature> {
        BonesCemeteryCreature::Chest_M,
        BonesCemeteryCreature::Scapula_R,
        BonesCemeteryCreature::Shoulder_R,
        BonesCemeteryCreature::ShoulderPart1_R,
        BonesCemeteryCreature::Elbow_R,
        BonesCemeteryCreature::ElbowPart1_R,
        BonesCemeteryCreature::Wrist_R
    },
    std::vector<BonesCemeteryCreature> {
        BonesCemeteryCreature::Root_M,
        BonesCemeteryCreature::Hip_L,
        BonesCemeteryCreature::HipPart1_L,
        BonesCemeteryCreature::Knee_L,
        BonesCemeteryCreature::KneePart1_L,
        BonesCemeteryCreature::Ankle_L,
        BonesCemeteryCreature::Toes_L
    },
    std::vector<BonesCemeteryCreature> {
        BonesCemeteryCreature::Root_M,
        BonesCemeteryCreature::Hip_R,
        BonesCemeteryCreature::HipPart1_R,
        BonesCemeteryCreature::Knee_R,
        BonesCemeteryCreature::KneePart1_R,
        BonesCemeteryCreature::Ankle_R,
        BonesCemeteryCreature::Toes_R
    }
};

void GDK::render_bones(const SDK::APawn* const pawn) {
    SDK::FVector previous_world_pos = {};

    SDK::FVector current_world_pos = {};

    const SDK::USkeletalMeshComponent* const mesh =
        pawn->Controller->Character->Mesh;

    const int socket_names_count = mesh->GetAllSocketNames().Num();

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();
    for (std::vector<BonesCemeteryCreature> bone_list : BONE_LISTS) {
        previous_world_pos = {};

        for (int bone_index : bone_list) {
            // XXX  for unknown pawns, be cautious of index out of bounds issues
            if (socket_names_count <= bone_index) {
                continue;
            }

            current_world_pos =
                mesh->GetSocketLocation(mesh->GetBoneName(bone_index));

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

            if (player_controller->ProjectWorldLocationToScreen(
                    current_world_pos,
                    &current_screen_pos,
                    false
                )
                == false) {
                continue;
            }

            draw_list->AddLine(
                {previous_screen_pos.X, previous_screen_pos.Y},
                {current_screen_pos.X, current_screen_pos.Y},
                IM_COL32_WHITE
            );

            previous_world_pos = current_world_pos;
        }
    }
}

void GDK::render_distance(const SDK::APawn* const pawn) {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    const SDK::FVector location_3d = pawn->K2_GetActorLocation();

    SDK::FVector2D location_2d = {};

    if (GDK::player_controller->ProjectWorldLocationToScreen(
            location_3d,
            &location_2d,
            false
        )
        == false) {
        return;
    }

    float distance = player_pawn->GetDistanceTo(pawn);

    draw_list->AddText(
        ImVec2(location_2d.X, location_2d.Y),
        IM_COL32_WHITE,
        std::to_string(distance).c_str()
    );
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

    const SDK::USkeletalMeshComponent* const mesh =
        pawn->Controller->Character->Mesh;

    for (const SDK::FName socket_name : mesh->GetAllSocketNames()) {
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

        file << "    " << socket_name.ToString() << " = " << index << ","
             << std::endl;
    }

    file << "};" << std::endl;

    return true;
}

bool GDK::is_on_screen(ImVec2 location) {
    // int viewport_width = GetSystemMetrics(SM_CXSCREEN);
    // int viewport_height = GetSystemMetrics(SM_CYSCREEN);

    int viewport_width = {};
    int viewport_height = {};

    player_controller->GetViewportSize(&viewport_width, &viewport_height);

    return location.x < viewport_width && location.y < viewport_height
        && location.x > 0 && location.y > 0;
}
