#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GrappleBreak

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GrappleBreak.GA_GrappleBreak_C
// 0x0008 (0x03B8 - 0x03B0)
class UGA_GrappleBreak_C final : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_GrappleBreak(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCompleted_CC44F1034A97BC4F72B1A8BDD9BC4B24(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_CC44F1034A97BC4F72B1A8BDD9BC4B24(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_CC44F1034A97BC4F72B1A8BDD9BC4B24(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_CC44F1034A97BC4F72B1A8BDD9BC4B24(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_CC44F1034A97BC4F72B1A8BDD9BC4B24(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GrappleBreak_C">();
	}
	static class UGA_GrappleBreak_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GrappleBreak_C>();
	}
};
static_assert(alignof(UGA_GrappleBreak_C) == 0x000008, "Wrong alignment on UGA_GrappleBreak_C");
static_assert(sizeof(UGA_GrappleBreak_C) == 0x0003B8, "Wrong size on UGA_GrappleBreak_C");
static_assert(offsetof(UGA_GrappleBreak_C, UberGraphFrame) == 0x0003B0, "Member 'UGA_GrappleBreak_C::UberGraphFrame' has a wrong offset!");

}
