#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LSE_Darkman_FQ1

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LSE_Darkman_FQ1.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class LSE_Darkman_FQ1::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void BP_DarkMan_Event_0(class ABP_DarkMan_C* BP_DarkMan);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_DarkMan_C* BP_DarkMan);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass LSE_Darkman_FQ1.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class LSE_Darkman_FQ1::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<LSE_Darkman_FQ1::USequenceDirector_C>();
	}
};
static_assert(alignof(LSE_Darkman_FQ1::USequenceDirector_C) == 0x000008, "Wrong alignment on LSE_Darkman_FQ1::USequenceDirector_C");
static_assert(sizeof(LSE_Darkman_FQ1::USequenceDirector_C) == 0x000040, "Wrong size on LSE_Darkman_FQ1::USequenceDirector_C");
static_assert(offsetof(LSE_Darkman_FQ1::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'LSE_Darkman_FQ1::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}
