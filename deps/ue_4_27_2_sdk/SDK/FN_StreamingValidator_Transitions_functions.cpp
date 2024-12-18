#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_StreamingValidator_Transitions

#include "Basic.hpp"

#include "FN_StreamingValidator_Transitions_classes.hpp"
#include "FN_StreamingValidator_Transitions_parameters.hpp"


namespace SDK
{

// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.Enable Player Input
// (Public, BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::Enable_Player_Input()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "Enable Player Input");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.LockPlayerInput
// (Public, BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::LockPlayerInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "LockPlayerInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.Set HUD Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInAllowedHUDVisibility                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFN_StreamingValidator_Transitions_C::Set_HUD_Visibility(const bool bInAllowedHUDVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "Set HUD Visibility");

	Params::FN_StreamingValidator_Transitions_C_Set_HUD_Visibility Parms{};

	Parms.bInAllowedHUDVisibility = bInAllowedHUDVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_StreamingValidator_Transitions_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "K2_ExecuteInput");

	Params::FN_StreamingValidator_Transitions_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.OnSuccessfullyStreamed
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::OnSuccessfullyStreamed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "OnSuccessfullyStreamed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.OnTimeLimitReached
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::OnTimeLimitReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "OnTimeLimitReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.Finish Up
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::Finish_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "Finish Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.OnLoad
// (Event, Protected, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::OnLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "OnLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.K2_Cleanup
// (Event, Protected, BlueprintEvent)

void UFN_StreamingValidator_Transitions_C::K2_Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "K2_Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.ExecuteUbergraph_FN_StreamingValidator_Transitions
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_StreamingValidator_Transitions_C::ExecuteUbergraph_FN_StreamingValidator_Transitions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "ExecuteUbergraph_FN_StreamingValidator_Transitions");

	Params::FN_StreamingValidator_Transitions_C_ExecuteUbergraph_FN_StreamingValidator_Transitions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_StreamingValidator_Transitions.FN_StreamingValidator_Transitions_C.K2_GetNodeDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_StreamingValidator_Transitions_C::K2_GetNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_Transitions_C", "K2_GetNodeDescription");

	Params::FN_StreamingValidator_Transitions_C_K2_GetNodeDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

