#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_StartSubObjective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flow_classes.hpp"
#include "ObsidianFox_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_StartSubObjective.FN_StartSubObjective_C
// 0x0020 (0x01F0 - 0x01D0)
class UFN_StartSubObjective_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObjectivesData*                        EdwardObjectiveData;                               // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjectivesData*                        EmilyObjectiveData;                                // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectiveParts                               EdwardPart;                                        // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectiveParts                               EmilyPart;                                         // 0x01E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_StartSubObjective(int32 EntryPoint);

	class FString K2_GetNodeDescription() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_StartSubObjective_C">();
	}
	static class UFN_StartSubObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_StartSubObjective_C>();
	}
};
static_assert(alignof(UFN_StartSubObjective_C) == 0x000008, "Wrong alignment on UFN_StartSubObjective_C");
static_assert(sizeof(UFN_StartSubObjective_C) == 0x0001F0, "Wrong size on UFN_StartSubObjective_C");
static_assert(offsetof(UFN_StartSubObjective_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_StartSubObjective_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_StartSubObjective_C, EdwardObjectiveData) == 0x0001D8, "Member 'UFN_StartSubObjective_C::EdwardObjectiveData' has a wrong offset!");
static_assert(offsetof(UFN_StartSubObjective_C, EmilyObjectiveData) == 0x0001E0, "Member 'UFN_StartSubObjective_C::EmilyObjectiveData' has a wrong offset!");
static_assert(offsetof(UFN_StartSubObjective_C, EdwardPart) == 0x0001E8, "Member 'UFN_StartSubObjective_C::EdwardPart' has a wrong offset!");
static_assert(offsetof(UFN_StartSubObjective_C, EmilyPart) == 0x0001E9, "Member 'UFN_StartSubObjective_C::EmilyPart' has a wrong offset!");

}
