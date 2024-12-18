#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NoAimZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CharacterSize_structs.hpp"
#include "AnimationMontageIdentifier_structs.hpp"
#include "CemeteryCreatureType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NoAimZone.BP_NoAimZone_C
// 0x0020 (0x0258 - 0x0238)
class ABP_NoAimZone_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      CapsuleCollider;                                   // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxCollider;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          UseBoxCollider;                                    // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_NoAimZone(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateBossHealthData(float CurrentHealthPercentage);
	void SetMostSuitableMeleeSection(EAnimationMontageIdentifier Value);
	void MoveToGrappleLocatio(const struct FVector& Grapple_Location);
	void ControlRotationFocus(class AActor* FocusTarget);
	void MeleeAttackTranslate(const struct FVector& StartVector, const struct FVector& EndVector);
	void LaserHit();
	void QuicktimeInput(float CurrentProgress, float MaxProgress);
	void QuicktimeSuccess();
	void SetCemeteryCreatureType(ECemeteryCreatureType CreatureType);
	void MeleeAttack();
	void UserConstructionScript();
	void UpdateColliderVisibility();
	void AimedAt(bool* Return);
	void GetUpgradeComponent(class UWeaponUpgradeComponent_C** UpgradeComponent);
	void FlashlightHit(float Distance, bool* Success);
	void SetStartOnWall(bool StartOnWall, bool* Success);
	void SetCanCirculate(bool CanCirculate, bool* Success);
	void GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType);
	void GetCharacterSize(ECharacterSize* Size);
	void IncrementJac3ProneCounter(int32* ProneCounter);
	void SetNewAggro(bool NewAggro, bool* Success);
	void GetAggroState(bool* Aggro);
	void GetMostSuitableMeleeSection(EAnimationMontageIdentifier* Value);
	void HitscanWeaponFired(bool* Success);
	void SetOrderTarget(const struct FVector& Location, bool* Success);
	void SetStartBurrowed(bool beginBurrowed, bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NoAimZone_C">();
	}
	static class ABP_NoAimZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NoAimZone_C>();
	}
};
static_assert(alignof(ABP_NoAimZone_C) == 0x000008, "Wrong alignment on ABP_NoAimZone_C");
static_assert(sizeof(ABP_NoAimZone_C) == 0x000258, "Wrong size on ABP_NoAimZone_C");
static_assert(offsetof(ABP_NoAimZone_C, UberGraphFrame) == 0x000238, "Member 'ABP_NoAimZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NoAimZone_C, CapsuleCollider) == 0x000240, "Member 'ABP_NoAimZone_C::CapsuleCollider' has a wrong offset!");
static_assert(offsetof(ABP_NoAimZone_C, BoxCollider) == 0x000248, "Member 'ABP_NoAimZone_C::BoxCollider' has a wrong offset!");
static_assert(offsetof(ABP_NoAimZone_C, UseBoxCollider) == 0x000250, "Member 'ABP_NoAimZone_C::UseBoxCollider' has a wrong offset!");

}

