#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_HideHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_HideHUD.FN_HideHUD_C
// 0x0010 (0x01E0 - 0x01D0)
class UFN_HideHUD_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          HideHUD;                                           // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_HideHUD(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_HideHUD_C">();
	}
	static class UFN_HideHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_HideHUD_C>();
	}
};
static_assert(alignof(UFN_HideHUD_C) == 0x000008, "Wrong alignment on UFN_HideHUD_C");
static_assert(sizeof(UFN_HideHUD_C) == 0x0001E0, "Wrong size on UFN_HideHUD_C");
static_assert(offsetof(UFN_HideHUD_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_HideHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_HideHUD_C, HideHUD) == 0x0001D8, "Member 'UFN_HideHUD_C::HideHUD' has a wrong offset!");

}
