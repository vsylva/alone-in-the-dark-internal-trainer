#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FMODBankVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FMODBankVolume.BP_FMODBankVolume_C
// 0x0018 (0x0258 - 0x0240)
class ABP_FMODBankVolume_C final : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODBank*                              Bank;                                              // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockingLoad;                                      // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LoadSamplesIntoMemory;                             // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InfiniteExtent;                                    // 0x0252(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_FMODBankVolume(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FMODBankVolume_C">();
	}
	static class ABP_FMODBankVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FMODBankVolume_C>();
	}
};
static_assert(alignof(ABP_FMODBankVolume_C) == 0x000008, "Wrong alignment on ABP_FMODBankVolume_C");
static_assert(sizeof(ABP_FMODBankVolume_C) == 0x000258, "Wrong size on ABP_FMODBankVolume_C");
static_assert(offsetof(ABP_FMODBankVolume_C, UberGraphFrame) == 0x000240, "Member 'ABP_FMODBankVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FMODBankVolume_C, Bank) == 0x000248, "Member 'ABP_FMODBankVolume_C::Bank' has a wrong offset!");
static_assert(offsetof(ABP_FMODBankVolume_C, BlockingLoad) == 0x000250, "Member 'ABP_FMODBankVolume_C::BlockingLoad' has a wrong offset!");
static_assert(offsetof(ABP_FMODBankVolume_C, LoadSamplesIntoMemory) == 0x000251, "Member 'ABP_FMODBankVolume_C::LoadSamplesIntoMemory' has a wrong offset!");
static_assert(offsetof(ABP_FMODBankVolume_C, InfiniteExtent) == 0x000252, "Member 'ABP_FMODBankVolume_C::InfiniteExtent' has a wrong offset!");

}

