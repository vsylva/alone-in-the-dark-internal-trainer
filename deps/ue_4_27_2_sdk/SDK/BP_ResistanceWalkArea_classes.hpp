#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResistanceWalkArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResistanceWalkArea.BP_ResistanceWalkArea_C
// 0x0010 (0x0250 - 0x0240)
class ABP_ResistanceWalkArea_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UGameplayEffect>            Gameplay_Effect_Slow_Class;                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_ResistanceWalkArea(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResistanceWalkArea_C">();
	}
	static class ABP_ResistanceWalkArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResistanceWalkArea_C>();
	}
};
static_assert(alignof(ABP_ResistanceWalkArea_C) == 0x000008, "Wrong alignment on ABP_ResistanceWalkArea_C");
static_assert(sizeof(ABP_ResistanceWalkArea_C) == 0x000250, "Wrong size on ABP_ResistanceWalkArea_C");
static_assert(offsetof(ABP_ResistanceWalkArea_C, UberGraphFrame) == 0x000240, "Member 'ABP_ResistanceWalkArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ResistanceWalkArea_C, Gameplay_Effect_Slow_Class) == 0x000248, "Member 'ABP_ResistanceWalkArea_C::Gameplay_Effect_Slow_Class' has a wrong offset!");

}

