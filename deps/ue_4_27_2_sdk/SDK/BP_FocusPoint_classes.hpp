#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FocusPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FocusPoint.BP_FocusPoint_C
// 0x0020 (0x0258 - 0x0238)
class ABP_FocusPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlowComponent*                         Flow;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFocusPointComponent*                   FocusPoint;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Icon;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FocusPoint(int32 EntryPoint);
	void BndEvt__BP_FocusPoint_Flow_K2Node_ComponentBoundEvent_0_FlowComponentDynamicNotify__DelegateSignature(class UFlowComponent* FlowComponent, const struct FGameplayTag& NotifyTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FocusPoint_C">();
	}
	static class ABP_FocusPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FocusPoint_C>();
	}
};
static_assert(alignof(ABP_FocusPoint_C) == 0x000008, "Wrong alignment on ABP_FocusPoint_C");
static_assert(sizeof(ABP_FocusPoint_C) == 0x000258, "Wrong size on ABP_FocusPoint_C");
static_assert(offsetof(ABP_FocusPoint_C, UberGraphFrame) == 0x000238, "Member 'ABP_FocusPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FocusPoint_C, Flow) == 0x000240, "Member 'ABP_FocusPoint_C::Flow' has a wrong offset!");
static_assert(offsetof(ABP_FocusPoint_C, FocusPoint) == 0x000248, "Member 'ABP_FocusPoint_C::FocusPoint' has a wrong offset!");
static_assert(offsetof(ABP_FocusPoint_C, Icon) == 0x000250, "Member 'ABP_FocusPoint_C::Icon' has a wrong offset!");

}
