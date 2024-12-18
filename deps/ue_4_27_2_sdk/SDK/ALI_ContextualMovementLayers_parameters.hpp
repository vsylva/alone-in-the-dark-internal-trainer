#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_ContextualMovementLayers

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ALI_ContextualMovementLayers.ALI_ContextualMovementLayers_C.ContextualMovement
// 0x0020 (0x0020 - 0x0000)
struct ALI_ContextualMovementLayers_C_ContextualMovement final
{
public:
	struct FPoseLink                              ContextualMovementInputPose;                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              ContextualMovement_0;                              // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ContextualMovementLayers_C_ContextualMovement) == 0x000008, "Wrong alignment on ALI_ContextualMovementLayers_C_ContextualMovement");
static_assert(sizeof(ALI_ContextualMovementLayers_C_ContextualMovement) == 0x000020, "Wrong size on ALI_ContextualMovementLayers_C_ContextualMovement");
static_assert(offsetof(ALI_ContextualMovementLayers_C_ContextualMovement, ContextualMovementInputPose) == 0x000000, "Member 'ALI_ContextualMovementLayers_C_ContextualMovement::ContextualMovementInputPose' has a wrong offset!");
static_assert(offsetof(ALI_ContextualMovementLayers_C_ContextualMovement, ContextualMovement_0) == 0x000010, "Member 'ALI_ContextualMovementLayers_C_ContextualMovement::ContextualMovement_0' has a wrong offset!");

}

