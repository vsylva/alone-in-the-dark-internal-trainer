#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_ThreatDetection

#include "Basic.hpp"

#include "PiecesNavigation_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTService_ThreatDetection.BTService_ThreatDetection_C
// 0x00A0 (0x0138 - 0x0098)
class UBTService_ThreatDetection_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Decay_Rate;                                        // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropDetectionThreshold;                            // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 ThreatDetectionKey;                                // 0x00A8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 ThreatDetectionMaxKey;                             // 0x00D0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 CanSeePlayerKey;                                   // 0x00F8(0x0028)(Edit, BlueprintVisible)
	bool                                          bTickVisibilityThreat;                             // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasValidPathToPlayer;                              // 0x0121(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IncreasedThreatDecayIfNoValidPath;                 // 0x0122(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123[0x1];                                      // 0x0123(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNavAsyncQueryId                       Pathfinding_Handle;                                // 0x0124(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableAggroOnHighThreat;                          // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckPath;                                         // 0x0129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12A[0x2];                                      // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Pathcounter;                                       // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PathCheckTickMultiplier;                           // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void PathCheck(class AActor* OwnerActor);
	void HandleVisibilityThreat(float& DeltaSeconds, class AActor*& Owner);
	void Threat_Decay(float DeltaSeconds);
	void Aggro_Check(class AActor* OwnerActor);
	void ExecuteUbergraph_BTService_ThreatDetection(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTService_ThreatDetection_C">();
	}
	static class UBTService_ThreatDetection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_ThreatDetection_C>();
	}
};
static_assert(alignof(UBTService_ThreatDetection_C) == 0x000008, "Wrong alignment on UBTService_ThreatDetection_C");
static_assert(sizeof(UBTService_ThreatDetection_C) == 0x000138, "Wrong size on UBTService_ThreatDetection_C");
static_assert(offsetof(UBTService_ThreatDetection_C, UberGraphFrame) == 0x000098, "Member 'UBTService_ThreatDetection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, Decay_Rate) == 0x0000A0, "Member 'UBTService_ThreatDetection_C::Decay_Rate' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, DropDetectionThreshold) == 0x0000A4, "Member 'UBTService_ThreatDetection_C::DropDetectionThreshold' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, ThreatDetectionKey) == 0x0000A8, "Member 'UBTService_ThreatDetection_C::ThreatDetectionKey' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, ThreatDetectionMaxKey) == 0x0000D0, "Member 'UBTService_ThreatDetection_C::ThreatDetectionMaxKey' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, CanSeePlayerKey) == 0x0000F8, "Member 'UBTService_ThreatDetection_C::CanSeePlayerKey' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, bTickVisibilityThreat) == 0x000120, "Member 'UBTService_ThreatDetection_C::bTickVisibilityThreat' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, HasValidPathToPlayer) == 0x000121, "Member 'UBTService_ThreatDetection_C::HasValidPathToPlayer' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, IncreasedThreatDecayIfNoValidPath) == 0x000122, "Member 'UBTService_ThreatDetection_C::IncreasedThreatDecayIfNoValidPath' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, Pathfinding_Handle) == 0x000124, "Member 'UBTService_ThreatDetection_C::Pathfinding_Handle' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, bEnableAggroOnHighThreat) == 0x000128, "Member 'UBTService_ThreatDetection_C::bEnableAggroOnHighThreat' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, CheckPath) == 0x000129, "Member 'UBTService_ThreatDetection_C::CheckPath' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, Pathcounter) == 0x00012C, "Member 'UBTService_ThreatDetection_C::Pathcounter' has a wrong offset!");
static_assert(offsetof(UBTService_ThreatDetection_C, PathCheckTickMultiplier) == 0x000130, "Member 'UBTService_ThreatDetection_C::PathCheckTickMultiplier' has a wrong offset!");

}
