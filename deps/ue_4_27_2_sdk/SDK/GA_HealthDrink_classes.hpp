#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HealthDrink

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HealthDrink.GA_HealthDrink_C
// 0x0030 (0x03F0 - 0x03C0)
class UGA_HealthDrink_C final : public UGameplayAbility_ItemActivatable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Chug_Montage_Tag;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ChugMontage;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AObsidianFoxCharacter*                  OFCharacter;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HealthBottle_C*                     HealthBottleRef;                                   // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HealWithInterruptedAnimation;                      // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_HealthDrink(int32 EntryPoint);
	void DoHeal();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_9F35F7F4409AE3881ED51983E785A307(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_9F35F7F4409AE3881ED51983E785A307(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_9F35F7F4409AE3881ED51983E785A307(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_9F35F7F4409AE3881ED51983E785A307(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_9F35F7F4409AE3881ED51983E785A307(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void Attach_Bottle();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	void OnGiveAbility_GetAssetsToBeAsyncLoaded(class AActor* OwnerActor, TArray<struct FSoftObjectPath>& AssetsToLoad) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HealthDrink_C">();
	}
	static class UGA_HealthDrink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HealthDrink_C>();
	}
};
static_assert(alignof(UGA_HealthDrink_C) == 0x000008, "Wrong alignment on UGA_HealthDrink_C");
static_assert(sizeof(UGA_HealthDrink_C) == 0x0003F0, "Wrong size on UGA_HealthDrink_C");
static_assert(offsetof(UGA_HealthDrink_C, UberGraphFrame) == 0x0003C0, "Member 'UGA_HealthDrink_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_HealthDrink_C, Chug_Montage_Tag) == 0x0003C8, "Member 'UGA_HealthDrink_C::Chug_Montage_Tag' has a wrong offset!");
static_assert(offsetof(UGA_HealthDrink_C, ChugMontage) == 0x0003D0, "Member 'UGA_HealthDrink_C::ChugMontage' has a wrong offset!");
static_assert(offsetof(UGA_HealthDrink_C, OFCharacter) == 0x0003D8, "Member 'UGA_HealthDrink_C::OFCharacter' has a wrong offset!");
static_assert(offsetof(UGA_HealthDrink_C, HealthBottleRef) == 0x0003E0, "Member 'UGA_HealthDrink_C::HealthBottleRef' has a wrong offset!");
static_assert(offsetof(UGA_HealthDrink_C, HealWithInterruptedAnimation) == 0x0003E8, "Member 'UGA_HealthDrink_C::HealWithInterruptedAnimation' has a wrong offset!");

}

