#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputToggleHoldOption_QTE

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "WBP_InputToggleHoldOption_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InputToggleHoldOption_QTE.WBP_InputToggleHoldOption_QTE_C
// 0x0008 (0x0480 - 0x0478)
class UWBP_InputToggleHoldOption_QTE_C final : public UWBP_InputToggleHoldOption_C
{
public:
	uint8                                         Pad_471[0x3];                                      // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Treat_as_Hold_Tag;                                 // 0x0474(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	struct FGameplayTag Input_Trigger_Tag() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InputToggleHoldOption_QTE_C">();
	}
	static class UWBP_InputToggleHoldOption_QTE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InputToggleHoldOption_QTE_C>();
	}
};
static_assert(alignof(UWBP_InputToggleHoldOption_QTE_C) == 0x000008, "Wrong alignment on UWBP_InputToggleHoldOption_QTE_C");
static_assert(sizeof(UWBP_InputToggleHoldOption_QTE_C) == 0x000480, "Wrong size on UWBP_InputToggleHoldOption_QTE_C");
static_assert(offsetof(UWBP_InputToggleHoldOption_QTE_C, Treat_as_Hold_Tag) == 0x000474, "Member 'UWBP_InputToggleHoldOption_QTE_C::Treat_as_Hold_Tag' has a wrong offset!");

}

