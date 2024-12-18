#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrappleEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GrappleEvent.BP_GrappleEvent_C
// 0x0030 (0x0268 - 0x0238)
class ABP_GrappleEvent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemySpawn_C*                       EnemyRef;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Grappled;                                      // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_GrappleEvent(int32 EntryPoint);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrappleEvent_C">();
	}
	static class ABP_GrappleEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrappleEvent_C>();
	}
};
static_assert(alignof(ABP_GrappleEvent_C) == 0x000008, "Wrong alignment on ABP_GrappleEvent_C");
static_assert(sizeof(ABP_GrappleEvent_C) == 0x000268, "Wrong size on ABP_GrappleEvent_C");
static_assert(offsetof(ABP_GrappleEvent_C, UberGraphFrame) == 0x000238, "Member 'ABP_GrappleEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GrappleEvent_C, TextRender) == 0x000240, "Member 'ABP_GrappleEvent_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_GrappleEvent_C, Box) == 0x000248, "Member 'ABP_GrappleEvent_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_GrappleEvent_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_GrappleEvent_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GrappleEvent_C, EnemyRef) == 0x000258, "Member 'ABP_GrappleEvent_C::EnemyRef' has a wrong offset!");
static_assert(offsetof(ABP_GrappleEvent_C, Has_Grappled) == 0x000260, "Member 'ABP_GrappleEvent_C::Has_Grappled' has a wrong offset!");

}

