#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SprintToggleHoldOption_GamePad

#include "Basic.hpp"

#include "WBP_InputToggleHoldOption_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SprintToggleHoldOption_GamePad.WBP_SprintToggleHoldOption_GamePad_C
// 0x0000 (0x0478 - 0x0478)
class UWBP_SprintToggleHoldOption_GamePad_C final : public UWBP_InputToggleHoldOption_C
{
public:
	struct FGameplayTag Input_Trigger_Tag() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SprintToggleHoldOption_GamePad_C">();
	}
	static class UWBP_SprintToggleHoldOption_GamePad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SprintToggleHoldOption_GamePad_C>();
	}
};
static_assert(alignof(UWBP_SprintToggleHoldOption_GamePad_C) == 0x000008, "Wrong alignment on UWBP_SprintToggleHoldOption_GamePad_C");
static_assert(sizeof(UWBP_SprintToggleHoldOption_GamePad_C) == 0x000478, "Wrong size on UWBP_SprintToggleHoldOption_GamePad_C");

}

