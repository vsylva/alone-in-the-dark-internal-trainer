#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_StreamingValidator_LoadThrobber

#include "Basic.hpp"

#include "FN_StreamingValidator_LoadThrobber_classes.hpp"
#include "FN_StreamingValidator_LoadThrobber_parameters.hpp"


namespace SDK
{

// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.Log Failed Streaming
// (Public, BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::Log_Failed_Streaming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "Log Failed Streaming");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.Remove Throbber
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::Remove_Throbber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "Remove Throbber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.Add Throbber
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::Add_Throbber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "Add Throbber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.K2_Cleanup
// (Event, Protected, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::K2_Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "K2_Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.TimeLimitReached
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::TimeLimitReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "TimeLimitReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.OnSuccessfullyStreamed
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::OnSuccessfullyStreamed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "OnSuccessfullyStreamed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.OnTimeLimitReached
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::OnTimeLimitReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "OnTimeLimitReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.Streaming Check Time Limit reached
// (BlueprintCallable, BlueprintEvent)

void UFN_StreamingValidator_LoadThrobber_C::Streaming_Check_Time_Limit_reached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "Streaming Check Time Limit reached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_StreamingValidator_LoadThrobber_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "K2_ExecuteInput");

	Params::FN_StreamingValidator_LoadThrobber_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.ExecuteUbergraph_FN_StreamingValidator_LoadThrobber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_StreamingValidator_LoadThrobber_C::ExecuteUbergraph_FN_StreamingValidator_LoadThrobber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "ExecuteUbergraph_FN_StreamingValidator_LoadThrobber");

	Params::FN_StreamingValidator_LoadThrobber_C_ExecuteUbergraph_FN_StreamingValidator_LoadThrobber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_StreamingValidator_LoadThrobber.FN_StreamingValidator_LoadThrobber_C.K2_GetStatusString
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_StreamingValidator_LoadThrobber_C::K2_GetStatusString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_StreamingValidator_LoadThrobber_C", "K2_GetStatusString");

	Params::FN_StreamingValidator_LoadThrobber_C_K2_GetStatusString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
