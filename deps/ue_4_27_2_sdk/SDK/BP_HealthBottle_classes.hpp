#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealthBottle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ObsidianFox_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HealthBottle.BP_HealthBottle_C
// 0x0018 (0x0250 - 0x0238)
class ABP_HealthBottle_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HealthBottle(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HealthBottle_C">();
	}
	static class ABP_HealthBottle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HealthBottle_C>();
	}
};
static_assert(alignof(ABP_HealthBottle_C) == 0x000008, "Wrong alignment on ABP_HealthBottle_C");
static_assert(sizeof(ABP_HealthBottle_C) == 0x000250, "Wrong size on ABP_HealthBottle_C");
static_assert(offsetof(ABP_HealthBottle_C, UberGraphFrame) == 0x000238, "Member 'ABP_HealthBottle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HealthBottle_C, SkeletalMesh) == 0x000240, "Member 'ABP_HealthBottle_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_HealthBottle_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_HealthBottle_C::DefaultSceneRoot' has a wrong offset!");

}

