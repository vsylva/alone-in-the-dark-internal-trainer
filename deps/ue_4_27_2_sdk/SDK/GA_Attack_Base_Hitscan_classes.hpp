#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack_Base_Hitscan

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_Attack_Base_classes.hpp"
#include "CemeteryCreatureType_structs.hpp"
#include "AnimationMontageIdentifier_structs.hpp"
#include "CharacterSize_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C
// 0x0048 (0x0460 - 0x0418)
class UGA_Attack_Base_Hitscan_C : public UGA_Attack_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Attack_Base_Hitscan_C;           // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   DamageCurveTableRow;                               // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           DamageDataTag;                                     // 0x0428(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   Force_Feedback_Effect;                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             GunClickSound;                                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Reload_Ability_Tag;                                // 0x0440(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Attack_Base_Hitscan(int32 EntryPoint);
	void OnFireFailedDueToImmunity(class AActor* ImmuneActor);
	void K2_ActivateAbility();
	void PlayAttackMontage();
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
	void Removed_83B147794684BB5F49EC2EA2506191C8();
	void ModifyDamageFromUpgrades(float* ModifiedDamage);
	void SetMontageToPlay();
	void Play_Fire_Force_Feedback();
	void MakeEffectSpecFromTargetData(TSubclassOf<class UGameplayEffect> GameplayEffectClass, const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Level, struct FGameplayEffectSpecHandle* Effect_Spec_Handle, struct FGameplayEffectContextHandle* Effect_Context_Handle);
	void Play_Gun_Click();
	void GetMostSuitableMeleeSection(EAnimationMontageIdentifier* Value);
	void GetAggroState(bool* Aggro);
	void SetNewAggro(bool NewAggro, bool* Success);
	void IncrementJac3ProneCounter(int32* ProneCounter);
	void GetCharacterSize(ECharacterSize* Size_0);
	void GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType);
	void SetCanCirculate(bool CanCirculate, bool* Success);
	void SetStartOnWall(bool StartOnWall, bool* Success);
	void AimedAt(bool* Return);
	void GetUpgradeComponent(class UWeaponUpgradeComponent_C** UpgradeComponent);
	void FlashlightHit(float Distance, bool* Success);
	void HitscanWeaponFired(bool* Success);
	void SetOrderTarget(const struct FVector& Location, bool* Success);
	void SetStartBurrowed(bool beginBurrowed, bool* Success);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	void GetSourceWeapon(class AOFWeaponActor** WeaponActor) const;
	void GetSourceHitscanWeapon(class AHitscanWeaponActor** AsHitscan_Weapon_Actor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Attack_Base_Hitscan_C">();
	}
	static class UGA_Attack_Base_Hitscan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Attack_Base_Hitscan_C>();
	}
};
static_assert(alignof(UGA_Attack_Base_Hitscan_C) == 0x000008, "Wrong alignment on UGA_Attack_Base_Hitscan_C");
static_assert(sizeof(UGA_Attack_Base_Hitscan_C) == 0x000460, "Wrong size on UGA_Attack_Base_Hitscan_C");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, UberGraphFrame_GA_Attack_Base_Hitscan_C) == 0x000418, "Member 'UGA_Attack_Base_Hitscan_C::UberGraphFrame_GA_Attack_Base_Hitscan_C' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, DamageCurveTableRow) == 0x000420, "Member 'UGA_Attack_Base_Hitscan_C::DamageCurveTableRow' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, DamageDataTag) == 0x000428, "Member 'UGA_Attack_Base_Hitscan_C::DamageDataTag' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, Force_Feedback_Effect) == 0x000430, "Member 'UGA_Attack_Base_Hitscan_C::Force_Feedback_Effect' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, GunClickSound) == 0x000438, "Member 'UGA_Attack_Base_Hitscan_C::GunClickSound' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_Hitscan_C, Reload_Ability_Tag) == 0x000440, "Member 'UGA_Attack_Base_Hitscan_C::Reload_Ability_Tag' has a wrong offset!");

}

