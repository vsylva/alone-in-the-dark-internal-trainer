#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SprintToggleHoldOption_KBM

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_SprintToggleHoldOption_KBM.WBP_SprintToggleHoldOption_KBM_C.Input Trigger Tag
// 0x0010 (0x0010 - 0x0000)
struct WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetSprintTreatAsHoldTag_KBM_ReturnValue;  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag) == 0x000004, "Wrong alignment on WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag");
static_assert(sizeof(WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag) == 0x000010, "Wrong size on WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag");
static_assert(offsetof(WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag, ReturnValue) == 0x000000, "Member 'WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag, CallFunc_GetSprintTreatAsHoldTag_KBM_ReturnValue) == 0x000008, "Member 'WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag::CallFunc_GetSprintTreatAsHoldTag_KBM_ReturnValue' has a wrong offset!");

}
