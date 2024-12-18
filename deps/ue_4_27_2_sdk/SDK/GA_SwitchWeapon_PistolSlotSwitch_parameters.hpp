#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SwitchWeapon_PistolSlotSwitch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_SwitchWeapon_PistolSlotSwitch.GA_SwitchWeapon_PistolSlotSwitch_C.ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch
// 0x0028 (0x0028 - 0x0000)
struct GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEquipmentManager*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemData_Equippable*                   K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch) == 0x000008, "Wrong alignment on GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch");
static_assert(sizeof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch) == 0x000028, "Wrong size on GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, EntryPoint) == 0x000000, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, Temp_bool_Variable) == 0x000004, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000019, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch, K2Node_Select_Default) == 0x000020, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_ExecuteUbergraph_GA_SwitchWeapon_PistolSlotSwitch::K2Node_Select_Default' has a wrong offset!");

// Function GA_SwitchWeapon_PistolSlotSwitch.GA_SwitchWeapon_PistolSlotSwitch_C.K2_CanActivateAbility
// 0x00C0 (0x00C0 - 0x0000)
struct GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_K2_CanActivateAbility_RelevantTags;       // 0x0078(0x0020)()
	bool                                          CallFunc_K2_CanActivateAbility_ReturnValue;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentManager*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UItemData_Equippable*>           CallFunc_GetAvailableWeapons_ReturnValue;          // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility");
static_assert(sizeof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility) == 0x0000C0, "Wrong size on GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_RelevantTags) == 0x000078, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_ReturnValue) == 0x000098, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_GetAvailableWeapons_ReturnValue) == 0x0000A8, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_GetAvailableWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_Array_Contains_ReturnValue) == 0x0000B8, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_Array_Contains_ReturnValue_1) == 0x0000B9, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue) == 0x0000BA, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue_1) == 0x0000BB, "Member 'GA_SwitchWeapon_PistolSlotSwitch_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

