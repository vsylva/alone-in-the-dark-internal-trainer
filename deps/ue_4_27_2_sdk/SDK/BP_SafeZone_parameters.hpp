#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SafeZone

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "EnemyThreatData_structs.hpp"


namespace SDK::Params
{

// Function BP_SafeZone.BP_SafeZone_C.ExecuteUbergraph_BP_SafeZone
// 0x0058 (0x0058 - 0x0000)
struct BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct EnemyThreatData::FEnemyThreatData> CallFunc_GetEnemyThreatWithinRange_EnemyThreatDataOut; // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct EnemyThreatData::FEnemyThreatData      CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone) == 0x000008, "Wrong alignment on BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone");
static_assert(sizeof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone) == 0x000058, "Wrong size on BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, EntryPoint) == 0x000000, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_GetEnemyThreatWithinRange_EnemyThreatDataOut) == 0x000008, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_GetEnemyThreatWithinRange_EnemyThreatDataOut' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, K2Node_Event_OtherActor) == 0x000040, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_GetObjectClass_ReturnValue) == 0x000048, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000050, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_ClassIsChildOf_ReturnValue) == 0x000051, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone, CallFunc_BooleanOR_ReturnValue) == 0x000052, "Member 'BP_SafeZone_C_ExecuteUbergraph_BP_SafeZone::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_SafeZone.BP_SafeZone_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SafeZone_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SafeZone_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SafeZone_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SafeZone_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SafeZone_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SafeZone_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SafeZone_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SafeZone.BP_SafeZone_C.clearEnemyAggro
// 0x0058 (0x0058 - 0x0000)
struct BP_SafeZone_C_ClearEnemyAggro final
{
public:
	class UObject*                                EnemyRef;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerTriggered;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EnemyCommon_C*                      K2Node_DynamicCast_AsBP_Enemy_Common;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIC_EnemyCommon_C*                     K2Node_DynamicCast_AsAIC_Enemy_Common;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x004C(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SafeZone_C_ClearEnemyAggro) == 0x000008, "Wrong alignment on BP_SafeZone_C_ClearEnemyAggro");
static_assert(sizeof(BP_SafeZone_C_ClearEnemyAggro) == 0x000058, "Wrong size on BP_SafeZone_C_ClearEnemyAggro");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, EnemyRef) == 0x000000, "Member 'BP_SafeZone_C_ClearEnemyAggro::EnemyRef' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, PlayerTriggered) == 0x000008, "Member 'BP_SafeZone_C_ClearEnemyAggro::PlayerTriggered' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, K2Node_DynamicCast_AsBP_Enemy_Common) == 0x000010, "Member 'BP_SafeZone_C_ClearEnemyAggro::K2Node_DynamicCast_AsBP_Enemy_Common' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SafeZone_C_ClearEnemyAggro::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, CallFunc_GetAIController_ReturnValue) == 0x000020, "Member 'BP_SafeZone_C_ClearEnemyAggro::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, CallFunc_GetBlackboard_ReturnValue) == 0x000028, "Member 'BP_SafeZone_C_ClearEnemyAggro::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_SafeZone_C_ClearEnemyAggro::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000038, "Member 'BP_SafeZone_C_ClearEnemyAggro::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, K2Node_DynamicCast_AsAIC_Enemy_Common) == 0x000040, "Member 'BP_SafeZone_C_ClearEnemyAggro::K2Node_DynamicCast_AsAIC_Enemy_Common' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_SafeZone_C_ClearEnemyAggro::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SafeZone_C_ClearEnemyAggro, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x00004C, "Member 'BP_SafeZone_C_ClearEnemyAggro::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

}
