#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputToggleHoldOption

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.ExecuteUbergraph_WBP_InputToggleHoldOption
// 0x0048 (0x0048 - 0x0000)
struct WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool CheckBoxChanged)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_CheckBoxChanged;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_Input_Trigger_Tag_ReturnValue;            // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AdjustForInvertedText_ReturnValue;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOFGameUserSettings*                    CallFunc_GetOFGameUserSettings_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetInputTriggerTreatedAsHold_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption) == 0x000008, "Wrong alignment on WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption");
static_assert(sizeof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption) == 0x000048, "Wrong size on WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, EntryPoint) == 0x000000, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, K2Node_CustomEvent_CheckBoxChanged) == 0x000024, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::K2Node_CustomEvent_CheckBoxChanged' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, CallFunc_Input_Trigger_Tag_ReturnValue) == 0x000028, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::CallFunc_Input_Trigger_Tag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, CallFunc_AdjustForInvertedText_ReturnValue) == 0x000030, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::CallFunc_AdjustForInvertedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, CallFunc_GetOFGameUserSettings_ReturnValue) == 0x000038, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::CallFunc_GetOFGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption, CallFunc_SetInputTriggerTreatedAsHold_ReturnValue) == 0x000040, "Member 'WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption::CallFunc_SetInputTriggerTreatedAsHold_ReturnValue' has a wrong offset!");

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.OnCheckBoxChangedEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent final
{
public:
	bool                                          CheckBoxChanged;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent) == 0x000001, "Wrong alignment on WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent");
static_assert(sizeof(WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent) == 0x000001, "Wrong size on WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent");
static_assert(offsetof(WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent, CheckBoxChanged) == 0x000000, "Member 'WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent::CheckBoxChanged' has a wrong offset!");

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.AdjustForInvertedText
// 0x0005 (0x0005 - 0x0000)
struct WBP_InputToggleHoldOption_C_AdjustForInvertedText final
{
public:
	bool                                          Treat_As_Hold;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputToggleHoldOption_C_AdjustForInvertedText) == 0x000001, "Wrong alignment on WBP_InputToggleHoldOption_C_AdjustForInvertedText");
static_assert(sizeof(WBP_InputToggleHoldOption_C_AdjustForInvertedText) == 0x000005, "Wrong size on WBP_InputToggleHoldOption_C_AdjustForInvertedText");
static_assert(offsetof(WBP_InputToggleHoldOption_C_AdjustForInvertedText, Treat_As_Hold) == 0x000000, "Member 'WBP_InputToggleHoldOption_C_AdjustForInvertedText::Treat_As_Hold' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_AdjustForInvertedText, ReturnValue) == 0x000001, "Member 'WBP_InputToggleHoldOption_C_AdjustForInvertedText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_AdjustForInvertedText, Temp_bool_Variable) == 0x000002, "Member 'WBP_InputToggleHoldOption_C_AdjustForInvertedText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_AdjustForInvertedText, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_InputToggleHoldOption_C_AdjustForInvertedText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_AdjustForInvertedText, K2Node_Select_Default) == 0x000004, "Member 'WBP_InputToggleHoldOption_C_AdjustForInvertedText::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.UpdateUI
// 0x000C (0x000C - 0x0000)
struct WBP_InputToggleHoldOption_C_UpdateUI final
{
public:
	struct FGameplayTag                           CallFunc_Input_Trigger_Tag_ReturnValue;            // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInputTriggerTreatedAsHold_ReturnValue; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AdjustForInvertedText_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputToggleHoldOption_C_UpdateUI) == 0x000004, "Wrong alignment on WBP_InputToggleHoldOption_C_UpdateUI");
static_assert(sizeof(WBP_InputToggleHoldOption_C_UpdateUI) == 0x00000C, "Wrong size on WBP_InputToggleHoldOption_C_UpdateUI");
static_assert(offsetof(WBP_InputToggleHoldOption_C_UpdateUI, CallFunc_Input_Trigger_Tag_ReturnValue) == 0x000000, "Member 'WBP_InputToggleHoldOption_C_UpdateUI::CallFunc_Input_Trigger_Tag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_UpdateUI, CallFunc_GetInputTriggerTreatedAsHold_ReturnValue) == 0x000008, "Member 'WBP_InputToggleHoldOption_C_UpdateUI::CallFunc_GetInputTriggerTreatedAsHold_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputToggleHoldOption_C_UpdateUI, CallFunc_AdjustForInvertedText_ReturnValue) == 0x000009, "Member 'WBP_InputToggleHoldOption_C_UpdateUI::CallFunc_AdjustForInvertedText_ReturnValue' has a wrong offset!");

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.Input Trigger Tag
// 0x0008 (0x0008 - 0x0000)
struct WBP_InputToggleHoldOption_C_Input_Trigger_Tag final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InputToggleHoldOption_C_Input_Trigger_Tag) == 0x000004, "Wrong alignment on WBP_InputToggleHoldOption_C_Input_Trigger_Tag");
static_assert(sizeof(WBP_InputToggleHoldOption_C_Input_Trigger_Tag) == 0x000008, "Wrong size on WBP_InputToggleHoldOption_C_Input_Trigger_Tag");
static_assert(offsetof(WBP_InputToggleHoldOption_C_Input_Trigger_Tag, ReturnValue) == 0x000000, "Member 'WBP_InputToggleHoldOption_C_Input_Trigger_Tag::ReturnValue' has a wrong offset!");

}
