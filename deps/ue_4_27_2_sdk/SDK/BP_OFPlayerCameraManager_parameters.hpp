#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OFPlayerCameraManager

#include "Basic.hpp"

#include "ObsidianFox_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_OFPlayerCameraManager.BP_OFPlayerCameraManager_C.UpdateHealthInMaterial
// 0x0030 (0x0030 - 0x0000)
struct BP_OFPlayerCameraManager_C_UpdateHealthInMaterial final
{
public:
	EPlayerHealthState                            Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_4;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerCharacter*                     K2Node_DynamicCast_AsOFPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerHealthState                            CallFunc_GetPlayerHealthState_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial) == 0x000008, "Wrong alignment on BP_OFPlayerCameraManager_C_UpdateHealthInMaterial");
static_assert(sizeof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial) == 0x000030, "Wrong size on BP_OFPlayerCameraManager_C_UpdateHealthInMaterial");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_byte_Variable) == 0x000000, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_float_Variable) == 0x000004, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_float_Variable_1) == 0x000008, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_float_Variable_2) == 0x00000C, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_float_Variable_3) == 0x000010, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, Temp_float_Variable_4) == 0x000014, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, K2Node_DynamicCast_AsOFPlayer_Character) == 0x000020, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::K2Node_DynamicCast_AsOFPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, CallFunc_GetPlayerHealthState_ReturnValue) == 0x000029, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::CallFunc_GetPlayerHealthState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_UpdateHealthInMaterial, K2Node_Select_Default) == 0x00002C, "Member 'BP_OFPlayerCameraManager_C_UpdateHealthInMaterial::K2Node_Select_Default' has a wrong offset!");

// Function BP_OFPlayerCameraManager.BP_OFPlayerCameraManager_C.OnHealthChanged
// 0x0028 (0x0028 - 0x0000)
struct BP_OFPlayerCameraManager_C_OnHealthChanged final
{
public:
	float                                         NewCurrentHealth;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaValue;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  EventTags;                                         // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_OFPlayerCameraManager_C_OnHealthChanged) == 0x000008, "Wrong alignment on BP_OFPlayerCameraManager_C_OnHealthChanged");
static_assert(sizeof(BP_OFPlayerCameraManager_C_OnHealthChanged) == 0x000028, "Wrong size on BP_OFPlayerCameraManager_C_OnHealthChanged");
static_assert(offsetof(BP_OFPlayerCameraManager_C_OnHealthChanged, NewCurrentHealth) == 0x000000, "Member 'BP_OFPlayerCameraManager_C_OnHealthChanged::NewCurrentHealth' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_OnHealthChanged, DeltaValue) == 0x000004, "Member 'BP_OFPlayerCameraManager_C_OnHealthChanged::DeltaValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_OnHealthChanged, EventTags) == 0x000008, "Member 'BP_OFPlayerCameraManager_C_OnHealthChanged::EventTags' has a wrong offset!");

// Function BP_OFPlayerCameraManager.BP_OFPlayerCameraManager_C.OnHealthStateChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_OFPlayerCameraManager_C_OnHealthStateChanged final
{
public:
	EPlayerHealthState                            NewHealthState;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OFPlayerCameraManager_C_OnHealthStateChanged) == 0x000001, "Wrong alignment on BP_OFPlayerCameraManager_C_OnHealthStateChanged");
static_assert(sizeof(BP_OFPlayerCameraManager_C_OnHealthStateChanged) == 0x000001, "Wrong size on BP_OFPlayerCameraManager_C_OnHealthStateChanged");
static_assert(offsetof(BP_OFPlayerCameraManager_C_OnHealthStateChanged, NewHealthState) == 0x000000, "Member 'BP_OFPlayerCameraManager_C_OnHealthStateChanged::NewHealthState' has a wrong offset!");

// Function BP_OFPlayerCameraManager.BP_OFPlayerCameraManager_C.Jacob3AttackEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_OFPlayerCameraManager_C_Jacob3AttackEffect final
{
public:
	float                                         EffectDuration;                                    // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OFPlayerCameraManager_C_Jacob3AttackEffect) == 0x000004, "Wrong alignment on BP_OFPlayerCameraManager_C_Jacob3AttackEffect");
static_assert(sizeof(BP_OFPlayerCameraManager_C_Jacob3AttackEffect) == 0x000008, "Wrong size on BP_OFPlayerCameraManager_C_Jacob3AttackEffect");
static_assert(offsetof(BP_OFPlayerCameraManager_C_Jacob3AttackEffect, EffectDuration) == 0x000000, "Member 'BP_OFPlayerCameraManager_C_Jacob3AttackEffect::EffectDuration' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_Jacob3AttackEffect, Intensity) == 0x000004, "Member 'BP_OFPlayerCameraManager_C_Jacob3AttackEffect::Intensity' has a wrong offset!");

// Function BP_OFPlayerCameraManager.BP_OFPlayerCameraManager_C.ExecuteUbergraph_BP_OFPlayerCameraManager
// 0x00B0 (0x00B0 - 0x0000)
struct BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameSubsystem_PlayState*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewCurrentHealth;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DeltaValue;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_EventTags;                      // 0x0028(0x0020)(ConstParm)
	class AObsidianFoxCharacter*                  K2Node_DynamicCast_AsObsidian_Fox_Character;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float NewCurrentHealth, float DeltaValue, struct FGameplayTagContainer& EventTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPlayerHealthState NewHealthState)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	EPlayerHealthState                            K2Node_CustomEvent_NewHealthState;                 // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_EffectDuration;                 // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Intensity;                      // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager) == 0x000008, "Wrong alignment on BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager");
static_assert(sizeof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager) == 0x0000B0, "Wrong size on BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, EntryPoint) == 0x000000, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_NewCurrentHealth) == 0x000020, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_NewCurrentHealth' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_DeltaValue) == 0x000024, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_DeltaValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_EventTags) == 0x000028, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_EventTags' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_DynamicCast_AsObsidian_Fox_Character) == 0x000048, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_DynamicCast_AsObsidian_Fox_Character' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_Less_FloatFloat_ReturnValue) == 0x000051, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000064, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_FMax_ReturnValue) == 0x000068, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00006C, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000078, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_NewHealthState) == 0x00008C, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_NewHealthState' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_EffectDuration) == 0x000090, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_EffectDuration' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, K2Node_CustomEvent_Intensity) == 0x000094, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::K2Node_CustomEvent_Intensity' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GetPlayerPawn_ReturnValue) == 0x000098, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_GetScalarParameterValue_ReturnValue) == 0x0000A8, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager, CallFunc_Lerp_ReturnValue) == 0x0000AC, "Member 'BP_OFPlayerCameraManager_C_ExecuteUbergraph_BP_OFPlayerCameraManager::CallFunc_Lerp_ReturnValue' has a wrong offset!");

}

