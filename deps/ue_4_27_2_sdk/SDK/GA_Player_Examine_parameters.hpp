#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Player_Examine

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Player_Examine.GA_Player_Examine_C.ExecuteUbergraph_GA_Player_Examine
// 0x0048 (0x0048 - 0x0000)
struct GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOFSaveGameDataSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlayerGuidanceSystemState_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerCharacter*                     K2Node_DynamicCast_AsOFPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AOFPlayerCharacter*                     K2Node_DynamicCast_AsOFPlayer_Character_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine) == 0x000008, "Wrong alignment on GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine");
static_assert(sizeof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine) == 0x000048, "Wrong size on GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, EntryPoint) == 0x000000, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, CallFunc_GetPlayerGuidanceSystemState_ReturnValue) == 0x000010, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::CallFunc_GetPlayerGuidanceSystemState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, K2Node_Event_bWasCancelled) == 0x000011, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, CallFunc_K2_CommitAbility_ReturnValue) == 0x000012, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000020, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, K2Node_DynamicCast_AsOFPlayer_Character) == 0x000028, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::K2Node_DynamicCast_AsOFPlayer_Character' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, K2Node_DynamicCast_AsOFPlayer_Character_1) == 0x000038, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::K2Node_DynamicCast_AsOFPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'GA_Player_Examine_C_ExecuteUbergraph_GA_Player_Examine::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function GA_Player_Examine.GA_Player_Examine_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Player_Examine_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Examine_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Player_Examine_C_K2_OnEndAbility");
static_assert(sizeof(GA_Player_Examine_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Player_Examine_C_K2_OnEndAbility");
static_assert(offsetof(GA_Player_Examine_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Player_Examine_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Player_Examine.GA_Player_Examine_C.Establish Camera Modifier
// 0x0040 (0x0040 - 0x0000)
struct GA_Player_Examine_C_Establish_Camera_Modifier final
{
public:
	class UClass*                                 CameraModifierClass;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                        CallFunc_FindCameraModifierByClass_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                        CallFunc_AddNewCameraModifier_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Examine_C_Establish_Camera_Modifier) == 0x000008, "Wrong alignment on GA_Player_Examine_C_Establish_Camera_Modifier");
static_assert(sizeof(GA_Player_Examine_C_Establish_Camera_Modifier) == 0x000040, "Wrong size on GA_Player_Examine_C_Establish_Camera_Modifier");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CameraModifierClass) == 0x000000, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CameraModifierClass' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, ReturnValue) == 0x000008, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000018, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x000020, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_FindCameraModifierByClass_ReturnValue) == 0x000028, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_FindCameraModifierByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_AddNewCameraModifier_ReturnValue) == 0x000030, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_AddNewCameraModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Establish_Camera_Modifier, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GA_Player_Examine_C_Establish_Camera_Modifier::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Player_Examine.GA_Player_Examine_C.Apply Camera Modifier
// 0x0010 (0x0010 - 0x0000)
struct GA_Player_Examine_C_Apply_Camera_Modifier final
{
public:
	class UCameraModifier*                        CallFunc_Establish_Camera_Modifier_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Examine_C_Apply_Camera_Modifier) == 0x000008, "Wrong alignment on GA_Player_Examine_C_Apply_Camera_Modifier");
static_assert(sizeof(GA_Player_Examine_C_Apply_Camera_Modifier) == 0x000010, "Wrong size on GA_Player_Examine_C_Apply_Camera_Modifier");
static_assert(offsetof(GA_Player_Examine_C_Apply_Camera_Modifier, CallFunc_Establish_Camera_Modifier_ReturnValue) == 0x000000, "Member 'GA_Player_Examine_C_Apply_Camera_Modifier::CallFunc_Establish_Camera_Modifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Examine_C_Apply_Camera_Modifier, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GA_Player_Examine_C_Apply_Camera_Modifier::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Player_Examine.GA_Player_Examine_C.Remove Camera modifier
// 0x0001 (0x0001 - 0x0000)
struct GA_Player_Examine_C_Remove_Camera_modifier final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Examine_C_Remove_Camera_modifier) == 0x000001, "Wrong alignment on GA_Player_Examine_C_Remove_Camera_modifier");
static_assert(sizeof(GA_Player_Examine_C_Remove_Camera_modifier) == 0x000001, "Wrong size on GA_Player_Examine_C_Remove_Camera_modifier");
static_assert(offsetof(GA_Player_Examine_C_Remove_Camera_modifier, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GA_Player_Examine_C_Remove_Camera_modifier::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
