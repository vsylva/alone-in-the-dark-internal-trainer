#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Reload

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Reload.GA_Reload_C
// 0x0050 (0x0400 - 0x03B0)
class UGA_Reload_C final : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_HitscanWeapon_Base_C*               HitscanWeapon;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReloadAgain;                                       // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MontageIsDone;                                     // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C2[0x6];                                      // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AOFPlayerCharacter*                     Player_Character;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponAnimationComponent*              Weapon_Animation_Controller;                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Cancel_Abilities_with_Tag;                         // 0x03D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Out_Of_Ammo_Bark_Chance;                           // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Reload(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void StartReload();
	void EventReceived_EBE296184C4C3F381D1C0FA5819F69BE(const struct FGameplayEventData& Payload);
	void OnCompleted_3EAF7CDF4F52610AE6E03CA386760BA6();
	void OnBlendOut_3EAF7CDF4F52610AE6E03CA386760BA6();
	void OnInterrupted_3EAF7CDF4F52610AE6E03CA386760BA6();
	void OnCancelled_3EAF7CDF4F52610AE6E03CA386760BA6();
	void TriggerInterruptOnWeapon();
	void Out_Of_Ammo_Bark();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Reload_C">();
	}
	static class UGA_Reload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Reload_C>();
	}
};
static_assert(alignof(UGA_Reload_C) == 0x000008, "Wrong alignment on UGA_Reload_C");
static_assert(sizeof(UGA_Reload_C) == 0x000400, "Wrong size on UGA_Reload_C");
static_assert(offsetof(UGA_Reload_C, UberGraphFrame) == 0x0003B0, "Member 'UGA_Reload_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, HitscanWeapon) == 0x0003B8, "Member 'UGA_Reload_C::HitscanWeapon' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, ReloadAgain) == 0x0003C0, "Member 'UGA_Reload_C::ReloadAgain' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, MontageIsDone) == 0x0003C1, "Member 'UGA_Reload_C::MontageIsDone' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, Player_Character) == 0x0003C8, "Member 'UGA_Reload_C::Player_Character' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, Weapon_Animation_Controller) == 0x0003D0, "Member 'UGA_Reload_C::Weapon_Animation_Controller' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, Cancel_Abilities_with_Tag) == 0x0003D8, "Member 'UGA_Reload_C::Cancel_Abilities_with_Tag' has a wrong offset!");
static_assert(offsetof(UGA_Reload_C, Out_Of_Ammo_Bark_Chance) == 0x0003F8, "Member 'UGA_Reload_C::Out_Of_Ammo_Bark_Chance' has a wrong offset!");

}

