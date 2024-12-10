#pragma once

#include "../deps/imgui/imgui.h"
#include "../deps/ue_4_27_2_sdk/SDK/Engine_classes.hpp"

// Game Development Kit
class GDK {
  private:
    static bool update();
    static bool update_pawn(SDK::APawn*);

    static void on_frame_gui();

    static void render_box_2d();
    static void render_box_3d();
    static void render_socket_names();
    static void render_socket_indices();

    static bool dump_pawn_sockets(const SDK::APawn* const, const int index);
    static bool is_on_screen(ImVec2);

    static SDK::UWorld* world;
    static SDK::UGameInstance* game_instance;
    static SDK::AGameStateBase* game_state;
    static SDK::ULocalPlayer* player_instance;
    static SDK::APlayerController* player_controller;
    static SDK::APlayerCameraManager* player_camera;
    static SDK::ACharacter* player_character;
    static SDK::UCharacterMovementComponent* player_character_movement;
    static SDK::TArray<class SDK::ULevel*> levels;
    static SDK::ULevel* persistent_level;

    static SDK::FVector player_camera_location;
    static SDK::FRotator player_camera_rotation;
    static SDK::FVector player_character_localtion;

    static SDK::APawn* pawn;
    static SDK::APlayerState* player_state;
    static SDK::AController* controller;
    static SDK::ACharacter* character;
    static SDK::USkeletalMeshComponent* mesh;
    static SDK::TArray<class SDK::FName> socket_names;
    // static SDK::USkeletalMesh* skeletal_mesh;
    // static SDK::USkeleton* skeleton;
    // static SDK::TArray<class SDK::USkeletalMeshSocket*> sockets;

    static bool is_rendering_box_2d;
    static bool is_rendering_box_3d;
    static bool is_rendering_socket_names;
    static bool is_rendering_socket_indices;

  public:
    static void on_frame();
};
