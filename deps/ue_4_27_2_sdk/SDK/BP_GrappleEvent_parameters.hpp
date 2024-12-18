#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrappleEvent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GrappleEvent.BP_GrappleEvent_C.ExecuteUbergraph_BP_GrappleEvent
// 0x0100 (0x0100 - 0x0000)
struct BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x00C0(0x0020)()
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue;    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSpawnedAndAlive_IsAliveAndSpawned;      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFEnemyAIController*                   K2Node_DynamicCast_AsOFEnemy_AIController;         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent) == 0x000008, "Wrong alignment on BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent");
static_assert(sizeof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent) == 0x000100, "Wrong size on BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, EntryPoint) == 0x000000, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000B0, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B8, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0000C0, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_TryActivateAbilitiesByTag_ReturnValue) == 0x0000E0, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_TryActivateAbilitiesByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_IsSpawnedAndAlive_IsAliveAndSpawned) == 0x0000E1, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_IsSpawnedAndAlive_IsAliveAndSpawned' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, CallFunc_GetController_ReturnValue) == 0x0000E8, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_DynamicCast_AsOFEnemy_AIController) == 0x0000F0, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_DynamicCast_AsOFEnemy_AIController' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'BP_GrappleEvent_C_ExecuteUbergraph_BP_GrappleEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GrappleEvent.BP_GrappleEvent_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_GrappleEvent_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

