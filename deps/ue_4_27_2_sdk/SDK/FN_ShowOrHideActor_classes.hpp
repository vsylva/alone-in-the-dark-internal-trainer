#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_ShowOrHideActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_ShowOrHideActor.FN_ShowOrHideActor_C
// 0x0038 (0x0208 - 0x01D0)
class UFN_ShowOrHideActor_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class AActor>                  Actor;                                             // 0x01D8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          ActorHidden;                                       // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_ShowOrHideActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_ShowOrHideActor_C">();
	}
	static class UFN_ShowOrHideActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_ShowOrHideActor_C>();
	}
};
static_assert(alignof(UFN_ShowOrHideActor_C) == 0x000008, "Wrong alignment on UFN_ShowOrHideActor_C");
static_assert(sizeof(UFN_ShowOrHideActor_C) == 0x000208, "Wrong size on UFN_ShowOrHideActor_C");
static_assert(offsetof(UFN_ShowOrHideActor_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_ShowOrHideActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_ShowOrHideActor_C, Actor) == 0x0001D8, "Member 'UFN_ShowOrHideActor_C::Actor' has a wrong offset!");
static_assert(offsetof(UFN_ShowOrHideActor_C, ActorHidden) == 0x000200, "Member 'UFN_ShowOrHideActor_C::ActorHidden' has a wrong offset!");

}
