#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_SetCurrentLevel

#include "Basic.hpp"

#include "FN_SetCurrentLevel_classes.hpp"
#include "FN_SetCurrentLevel_parameters.hpp"


namespace SDK
{

// Function FN_SetCurrentLevel.FN_SetCurrentLevel_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_SetCurrentLevel_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_SetCurrentLevel_C", "K2_ExecuteInput");

	Params::FN_SetCurrentLevel_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_SetCurrentLevel.FN_SetCurrentLevel_C.ExecuteUbergraph_FN_SetCurrentLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_SetCurrentLevel_C::ExecuteUbergraph_FN_SetCurrentLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_SetCurrentLevel_C", "ExecuteUbergraph_FN_SetCurrentLevel");

	Params::FN_SetCurrentLevel_C_ExecuteUbergraph_FN_SetCurrentLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_SetCurrentLevel.FN_SetCurrentLevel_C.K2_GetStatusString
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_SetCurrentLevel_C::K2_GetStatusString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_SetCurrentLevel_C", "K2_GetStatusString");

	Params::FN_SetCurrentLevel_C_K2_GetStatusString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FN_SetCurrentLevel.FN_SetCurrentLevel_C.K2_GetNodeDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_SetCurrentLevel_C::K2_GetNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_SetCurrentLevel_C", "K2_GetNodeDescription");

	Params::FN_SetCurrentLevel_C_K2_GetNodeDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
