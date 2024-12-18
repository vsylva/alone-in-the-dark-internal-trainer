#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_SetOtherworldState

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "EOtherworldPathwayStage_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_SetOtherworldState.FN_SetOtherworldState_C
// 0x0018 (0x01E8 - 0x01D0)
class UFN_SetOtherworldState_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Otherworld_Tag;                                    // 0x01D8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EOtherworldPathwayStage                       Otherworld_Pathway_State;                          // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_SetOtherworldState(int32 EntryPoint);

	class FString K2_GetNodeDescription() const;
	class FString K2_GetStatusString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_SetOtherworldState_C">();
	}
	static class UFN_SetOtherworldState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_SetOtherworldState_C>();
	}
};
static_assert(alignof(UFN_SetOtherworldState_C) == 0x000008, "Wrong alignment on UFN_SetOtherworldState_C");
static_assert(sizeof(UFN_SetOtherworldState_C) == 0x0001E8, "Wrong size on UFN_SetOtherworldState_C");
static_assert(offsetof(UFN_SetOtherworldState_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_SetOtherworldState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_SetOtherworldState_C, Otherworld_Tag) == 0x0001D8, "Member 'UFN_SetOtherworldState_C::Otherworld_Tag' has a wrong offset!");
static_assert(offsetof(UFN_SetOtherworldState_C, Otherworld_Pathway_State) == 0x0001E0, "Member 'UFN_SetOtherworldState_C::Otherworld_Pathway_State' has a wrong offset!");

}

