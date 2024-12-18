#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Emote

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Emote.GA_Emote_C
// 0x0018 (0x03C8 - 0x03B0)
class UGA_Emote_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           MontageToPlay;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayRandomSection;                                 // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GetSections(class FName* Section);
	void OnInterrupted_94FD188C4C0AA7A2A86400A559A14662();
	void OnCancelled_94FD188C4C0AA7A2A86400A559A14662();
	void OnBlendOut_94FD188C4C0AA7A2A86400A559A14662();
	void OnCompleted_94FD188C4C0AA7A2A86400A559A14662();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Emote(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Emote_C">();
	}
	static class UGA_Emote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Emote_C>();
	}
};
static_assert(alignof(UGA_Emote_C) == 0x000008, "Wrong alignment on UGA_Emote_C");
static_assert(sizeof(UGA_Emote_C) == 0x0003C8, "Wrong size on UGA_Emote_C");
static_assert(offsetof(UGA_Emote_C, UberGraphFrame) == 0x0003B0, "Member 'UGA_Emote_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Emote_C, MontageToPlay) == 0x0003B8, "Member 'UGA_Emote_C::MontageToPlay' has a wrong offset!");
static_assert(offsetof(UGA_Emote_C, PlayRandomSection) == 0x0003C0, "Member 'UGA_Emote_C::PlayRandomSection' has a wrong offset!");

}

