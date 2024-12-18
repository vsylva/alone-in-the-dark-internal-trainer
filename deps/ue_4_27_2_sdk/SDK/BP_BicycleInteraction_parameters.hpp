#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BicycleInteraction

#include "Basic.hpp"

#include "FMODStudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BicycleInteraction.BP_BicycleInteraction_C.ExecuteUbergraph_BP_BicycleInteraction
// 0x0070 (0x0070 - 0x0000)
struct BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class ACharacter*                             K2Node_ComponentBoundEvent_InteractionCharacter;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEventAtLocation_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction) == 0x000010, "Wrong alignment on BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction");
static_assert(sizeof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction) == 0x000070, "Wrong size on BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, EntryPoint) == 0x000000, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000020, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, K2Node_ComponentBoundEvent_InteractionCharacter) == 0x000050, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::K2Node_ComponentBoundEvent_InteractionCharacter' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, CallFunc_PlayEventAtLocation_ReturnValue) == 0x000058, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::CallFunc_PlayEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'BP_BicycleInteraction_C_ExecuteUbergraph_BP_BicycleInteraction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_BicycleInteraction.BP_BicycleInteraction_C.BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature final
{
public:
	class ACharacter*                             InteractionCharacter;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature");
static_assert(sizeof(BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature) == 0x000008, "Wrong size on BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature");
static_assert(offsetof(BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature, InteractionCharacter) == 0x000000, "Member 'BP_BicycleInteraction_C_BndEvt__BP_BicycleInteraction_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature::InteractionCharacter' has a wrong offset!");

}

