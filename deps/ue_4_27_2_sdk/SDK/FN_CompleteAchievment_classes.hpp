#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_CompleteAchievment

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_CompleteAchievment.FN_CompleteAchievment_C
// 0x0010 (0x01E0 - 0x01D0)
class UFN_CompleteAchievment_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Achievment_Tag;                                    // 0x01D8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_CompleteAchievment(int32 EntryPoint);

	class FString K2_GetStatusString() const;
	class FString K2_GetNodeDescription() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_CompleteAchievment_C">();
	}
	static class UFN_CompleteAchievment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_CompleteAchievment_C>();
	}
};
static_assert(alignof(UFN_CompleteAchievment_C) == 0x000008, "Wrong alignment on UFN_CompleteAchievment_C");
static_assert(sizeof(UFN_CompleteAchievment_C) == 0x0001E0, "Wrong size on UFN_CompleteAchievment_C");
static_assert(offsetof(UFN_CompleteAchievment_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_CompleteAchievment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_CompleteAchievment_C, Achievment_Tag) == 0x0001D8, "Member 'UFN_CompleteAchievment_C::Achievment_Tag' has a wrong offset!");

}
