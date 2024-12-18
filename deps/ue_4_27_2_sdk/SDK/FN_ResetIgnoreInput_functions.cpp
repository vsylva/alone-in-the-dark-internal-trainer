#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_ResetIgnoreInput

#include "Basic.hpp"

#include "FN_ResetIgnoreInput_classes.hpp"
#include "FN_ResetIgnoreInput_parameters.hpp"


namespace SDK
{

// Function FN_ResetIgnoreInput.FN_ResetIgnoreInput_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_ResetIgnoreInput_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_ResetIgnoreInput_C", "K2_ExecuteInput");

	Params::FN_ResetIgnoreInput_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_ResetIgnoreInput.FN_ResetIgnoreInput_C.ExecuteUbergraph_FN_ResetIgnoreInput
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_ResetIgnoreInput_C::ExecuteUbergraph_FN_ResetIgnoreInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_ResetIgnoreInput_C", "ExecuteUbergraph_FN_ResetIgnoreInput");

	Params::FN_ResetIgnoreInput_C_ExecuteUbergraph_FN_ResetIgnoreInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_ResetIgnoreInput.FN_ResetIgnoreInput_C.K2_GetNodeDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_ResetIgnoreInput_C::K2_GetNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_ResetIgnoreInput_C", "K2_GetNodeDescription");

	Params::FN_ResetIgnoreInput_C_K2_GetNodeDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

