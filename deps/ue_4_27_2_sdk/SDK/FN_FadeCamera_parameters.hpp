#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_FadeCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FN_FadeCamera.FN_FadeCamera_C.K2_ExecuteInput
// 0x0008 (0x0008 - 0x0000)
struct FN_FadeCamera_C_K2_ExecuteInput final
{
public:
	class FName                                   PinName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_FadeCamera_C_K2_ExecuteInput) == 0x000004, "Wrong alignment on FN_FadeCamera_C_K2_ExecuteInput");
static_assert(sizeof(FN_FadeCamera_C_K2_ExecuteInput) == 0x000008, "Wrong size on FN_FadeCamera_C_K2_ExecuteInput");
static_assert(offsetof(FN_FadeCamera_C_K2_ExecuteInput, PinName) == 0x000000, "Member 'FN_FadeCamera_C_K2_ExecuteInput::PinName' has a wrong offset!");

// Function FN_FadeCamera.FN_FadeCamera_C.ExecuteUbergraph_FN_FadeCamera
// 0x0038 (0x0038 - 0x0000)
struct FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Event_PinName;                              // 0x0014(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera) == 0x000008, "Wrong alignment on FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera");
static_assert(sizeof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera) == 0x000038, "Wrong size on FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, EntryPoint) == 0x000000, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, K2Node_Event_PinName) == 0x000014, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::K2Node_Event_PinName' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000020, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, CallFunc_MakeLiteralName_ReturnValue) == 0x000028, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'FN_FadeCamera_C_ExecuteUbergraph_FN_FadeCamera::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function FN_FadeCamera.FN_FadeCamera_C.K2_GetNodeDescription
// 0x0048 (0x0048 - 0x0000)
struct FN_FadeCamera_C_K2_GetNodeDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FN_FadeCamera_C_K2_GetNodeDescription) == 0x000008, "Wrong alignment on FN_FadeCamera_C_K2_GetNodeDescription");
static_assert(sizeof(FN_FadeCamera_C_K2_GetNodeDescription) == 0x000048, "Wrong size on FN_FadeCamera_C_K2_GetNodeDescription");
static_assert(offsetof(FN_FadeCamera_C_K2_GetNodeDescription, ReturnValue) == 0x000000, "Member 'FN_FadeCamera_C_K2_GetNodeDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_K2_GetNodeDescription, CallFunc_MakeLiteralString_ReturnValue) == 0x000010, "Member 'FN_FadeCamera_C_K2_GetNodeDescription::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_K2_GetNodeDescription, CallFunc_Conv_FloatToString_ReturnValue) == 0x000020, "Member 'FN_FadeCamera_C_K2_GetNodeDescription::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'FN_FadeCamera_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_K2_GetNodeDescription, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000040, "Member 'FN_FadeCamera_C_K2_GetNodeDescription::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function FN_FadeCamera.FN_FadeCamera_C.Get Player Interaction Component
// 0x0018 (0x0018 - 0x0000)
struct FN_FadeCamera_C_Get_Player_Interaction_Component final
{
public:
	class UPlayerInteractionComponent*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerInteractionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_FadeCamera_C_Get_Player_Interaction_Component) == 0x000008, "Wrong alignment on FN_FadeCamera_C_Get_Player_Interaction_Component");
static_assert(sizeof(FN_FadeCamera_C_Get_Player_Interaction_Component) == 0x000018, "Wrong size on FN_FadeCamera_C_Get_Player_Interaction_Component");
static_assert(offsetof(FN_FadeCamera_C_Get_Player_Interaction_Component, ReturnValue) == 0x000000, "Member 'FN_FadeCamera_C_Get_Player_Interaction_Component::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_Get_Player_Interaction_Component, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'FN_FadeCamera_C_Get_Player_Interaction_Component::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_FadeCamera_C_Get_Player_Interaction_Component, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'FN_FadeCamera_C_Get_Player_Interaction_Component::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}
