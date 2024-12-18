#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_OnCombatStateChanged

#include "Basic.hpp"

#include "FN_OnCombatStateChanged_classes.hpp"
#include "FN_OnCombatStateChanged_parameters.hpp"


namespace SDK
{

// Function FN_OnCombatStateChanged.FN_OnCombatStateChanged_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_OnCombatStateChanged_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnCombatStateChanged_C", "K2_ExecuteInput");

	Params::FN_OnCombatStateChanged_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_OnCombatStateChanged.FN_OnCombatStateChanged_C.K2_Cleanup
// (Event, Protected, BlueprintEvent)

void UFN_OnCombatStateChanged_C::K2_Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnCombatStateChanged_C", "K2_Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_OnCombatStateChanged.FN_OnCombatStateChanged_C.IsInCombatState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewIsInCombat                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFN_OnCombatStateChanged_C::IsInCombatState(bool bNewIsInCombat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnCombatStateChanged_C", "IsInCombatState");

	Params::FN_OnCombatStateChanged_C_IsInCombatState Parms{};

	Parms.bNewIsInCombat = bNewIsInCombat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_OnCombatStateChanged.FN_OnCombatStateChanged_C.OnLoad
// (Event, Protected, BlueprintEvent)

void UFN_OnCombatStateChanged_C::OnLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnCombatStateChanged_C", "OnLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_OnCombatStateChanged.FN_OnCombatStateChanged_C.ExecuteUbergraph_FN_OnCombatStateChanged
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_OnCombatStateChanged_C::ExecuteUbergraph_FN_OnCombatStateChanged(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnCombatStateChanged_C", "ExecuteUbergraph_FN_OnCombatStateChanged");

	Params::FN_OnCombatStateChanged_C_ExecuteUbergraph_FN_OnCombatStateChanged Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

