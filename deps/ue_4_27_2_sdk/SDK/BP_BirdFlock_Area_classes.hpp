#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BirdFlock_Area

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_Boids_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BirdFlock_Area.BP_BirdFlock_Area_C
// 0x0028 (0x03D0 - 0x03A8)
class ABP_BirdFlock_Area_C final : public ABP_Boids_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BirdFlock_Area_C;                // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnAreaScale;                                    // 0x03B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnAreaRadius;                                   // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoidDistributionPower;                             // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetRandomRotation(struct FRotator* Rotation);
	void GetRandomLocation(struct FVector* Location);
	void SpawnBoidsInArea();
	void UserConstructionScript();
	void CreateBoids();
	void ExecuteUbergraph_BP_BirdFlock_Area(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BirdFlock_Area_C">();
	}
	static class ABP_BirdFlock_Area_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BirdFlock_Area_C>();
	}
};
static_assert(alignof(ABP_BirdFlock_Area_C) == 0x000008, "Wrong alignment on ABP_BirdFlock_Area_C");
static_assert(sizeof(ABP_BirdFlock_Area_C) == 0x0003D0, "Wrong size on ABP_BirdFlock_Area_C");
static_assert(offsetof(ABP_BirdFlock_Area_C, UberGraphFrame_BP_BirdFlock_Area_C) == 0x0003A8, "Member 'ABP_BirdFlock_Area_C::UberGraphFrame_BP_BirdFlock_Area_C' has a wrong offset!");
static_assert(offsetof(ABP_BirdFlock_Area_C, Box) == 0x0003B0, "Member 'ABP_BirdFlock_Area_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_BirdFlock_Area_C, SpawnAreaScale) == 0x0003B8, "Member 'ABP_BirdFlock_Area_C::SpawnAreaScale' has a wrong offset!");
static_assert(offsetof(ABP_BirdFlock_Area_C, SpawnAreaRadius) == 0x0003C4, "Member 'ABP_BirdFlock_Area_C::SpawnAreaRadius' has a wrong offset!");
static_assert(offsetof(ABP_BirdFlock_Area_C, BoidDistributionPower) == 0x0003C8, "Member 'ABP_BirdFlock_Area_C::BoidDistributionPower' has a wrong offset!");

}
