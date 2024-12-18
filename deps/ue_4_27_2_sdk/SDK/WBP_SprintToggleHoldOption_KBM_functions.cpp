#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SprintToggleHoldOption_KBM

#include "Basic.hpp"

#include "WBP_SprintToggleHoldOption_KBM_classes.hpp"
#include "WBP_SprintToggleHoldOption_KBM_parameters.hpp"


namespace SDK
{

// Function WBP_SprintToggleHoldOption_KBM.WBP_SprintToggleHoldOption_KBM_C.Input Trigger Tag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UWBP_SprintToggleHoldOption_KBM_C::Input_Trigger_Tag() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SprintToggleHoldOption_KBM_C", "Input Trigger Tag");

	Params::WBP_SprintToggleHoldOption_KBM_C_Input_Trigger_Tag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

