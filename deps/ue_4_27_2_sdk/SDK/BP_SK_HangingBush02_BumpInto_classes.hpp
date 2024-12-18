#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SK_HangingBush02_BumpInto

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SK_HangingBush02_BumpInto.BP_SK_HangingBush02_BumpInto_C
// 0x0028 (0x0260 - 0x0238)
class ABP_SK_HangingBush02_BumpInto_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                    WindChimesCollision;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_GrisGrisChime01;                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Cooldown;                                          // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SK_HangingBush02_BumpInto(int32 EntryPoint);
	void BndEvt__SK_GrisGrisChime01_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SK_HangingBush02_BumpInto_C">();
	}
	static class ABP_SK_HangingBush02_BumpInto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SK_HangingBush02_BumpInto_C>();
	}
};
static_assert(alignof(ABP_SK_HangingBush02_BumpInto_C) == 0x000008, "Wrong alignment on ABP_SK_HangingBush02_BumpInto_C");
static_assert(sizeof(ABP_SK_HangingBush02_BumpInto_C) == 0x000260, "Wrong size on ABP_SK_HangingBush02_BumpInto_C");
static_assert(offsetof(ABP_SK_HangingBush02_BumpInto_C, UberGraphFrame) == 0x000238, "Member 'ABP_SK_HangingBush02_BumpInto_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SK_HangingBush02_BumpInto_C, WindChimesCollision) == 0x000240, "Member 'ABP_SK_HangingBush02_BumpInto_C::WindChimesCollision' has a wrong offset!");
static_assert(offsetof(ABP_SK_HangingBush02_BumpInto_C, SK_GrisGrisChime01) == 0x000248, "Member 'ABP_SK_HangingBush02_BumpInto_C::SK_GrisGrisChime01' has a wrong offset!");
static_assert(offsetof(ABP_SK_HangingBush02_BumpInto_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_SK_HangingBush02_BumpInto_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SK_HangingBush02_BumpInto_C, Cooldown) == 0x000258, "Member 'ABP_SK_HangingBush02_BumpInto_C::Cooldown' has a wrong offset!");

}

