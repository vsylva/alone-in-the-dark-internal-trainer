#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CockroachesTriggerRun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_CockroachesBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CockroachesTriggerRun.BP_CockroachesTriggerRun_C
// 0x0038 (0x0300 - 0x02C8)
class ABP_CockroachesTriggerRun_C final : public ABP_CockroachesBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CockroachesTriggerRun_C;         // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                    CockroachSound;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RunTimeline_Time_DBC550A4460DFFBAEDF3C9BCD4E12278; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RunTimeline__Direction_DBC550A4460DFFBAEDF3C9BCD4E12278; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RunTimeline;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Destination;                                       // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Secondary_Destination;                             // 0x02F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CockroachesTriggerRun(int32 EntryPoint);
	void ReceiveBeginPlay();
	void StartTriggerOverlap();
	void Reset();
	void CockroachesRun();
	void RunTimeline__UpdateFunc();
	void RunTimeline__FinishedFunc();
	void MoveSound();
	void EndMovement();
	void GetDestination(struct FVector* Destination_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CockroachesTriggerRun_C">();
	}
	static class ABP_CockroachesTriggerRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CockroachesTriggerRun_C>();
	}
};
static_assert(alignof(ABP_CockroachesTriggerRun_C) == 0x000008, "Wrong alignment on ABP_CockroachesTriggerRun_C");
static_assert(sizeof(ABP_CockroachesTriggerRun_C) == 0x000300, "Wrong size on ABP_CockroachesTriggerRun_C");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, UberGraphFrame_BP_CockroachesTriggerRun_C) == 0x0002C8, "Member 'ABP_CockroachesTriggerRun_C::UberGraphFrame_BP_CockroachesTriggerRun_C' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, CockroachSound) == 0x0002D0, "Member 'ABP_CockroachesTriggerRun_C::CockroachSound' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, RunTimeline_Time_DBC550A4460DFFBAEDF3C9BCD4E12278) == 0x0002D8, "Member 'ABP_CockroachesTriggerRun_C::RunTimeline_Time_DBC550A4460DFFBAEDF3C9BCD4E12278' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, RunTimeline__Direction_DBC550A4460DFFBAEDF3C9BCD4E12278) == 0x0002DC, "Member 'ABP_CockroachesTriggerRun_C::RunTimeline__Direction_DBC550A4460DFFBAEDF3C9BCD4E12278' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, RunTimeline) == 0x0002E0, "Member 'ABP_CockroachesTriggerRun_C::RunTimeline' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, Destination) == 0x0002E8, "Member 'ABP_CockroachesTriggerRun_C::Destination' has a wrong offset!");
static_assert(offsetof(ABP_CockroachesTriggerRun_C, Secondary_Destination) == 0x0002F4, "Member 'ABP_CockroachesTriggerRun_C::Secondary_Destination' has a wrong offset!");

}
