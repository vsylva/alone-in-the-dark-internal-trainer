#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SprintToggleHoldOption_GamePad

#include "Basic.hpp"

#include "WBP_SprintToggleHoldOption_GamePad_classes.hpp"
#include "WBP_SprintToggleHoldOption_GamePad_parameters.hpp"


namespace SDK
{

// Function WBP_SprintToggleHoldOption_GamePad.WBP_SprintToggleHoldOption_GamePad_C.Input Trigger Tag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UWBP_SprintToggleHoldOption_GamePad_C::Input_Trigger_Tag() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SprintToggleHoldOption_GamePad_C", "Input Trigger Tag");

	Params::WBP_SprintToggleHoldOption_GamePad_C_Input_Trigger_Tag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
