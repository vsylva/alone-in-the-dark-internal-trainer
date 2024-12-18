#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OFFramerateButton

#include "Basic.hpp"

#include "WBP_OFFramerateButton_classes.hpp"
#include "WBP_OFFramerateButton_parameters.hpp"


namespace SDK
{

// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.ExecuteUbergraph_WBP_OFFramerateButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFFramerateButton_C::ExecuteUbergraph_WBP_OFFramerateButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "ExecuteUbergraph_WBP_OFFramerateButton");

	Params::WBP_OFFramerateButton_C_ExecuteUbergraph_WBP_OFFramerateButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OFFramerateButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "PreConstruct");

	Params::WBP_OFFramerateButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.MapIDToFrameRate
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FrameRate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFFramerateButton_C::MapIDToFrameRate(int32 Input, float* FrameRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "MapIDToFrameRate");

	Params::WBP_OFFramerateButton_C_MapIDToFrameRate Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (FrameRate != nullptr)
		*FrameRate = Parms.FrameRate;
}


// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.MapFrameRateToSelectionButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFFramerateButton_C::MapFrameRateToSelectionButton(float InValue, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "MapFrameRateToSelectionButton");

	Params::WBP_OFFramerateButton_C_MapFrameRateToSelectionButton Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.ComputeFrameRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InFrameRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InAdd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   OutFrameRate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFFramerateButton_C::ComputeFrameRate(float InFrameRate, bool InAdd, float* OutFrameRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "ComputeFrameRate");

	Params::WBP_OFFramerateButton_C_ComputeFrameRate Parms{};

	Parms.InFrameRate = InFrameRate;
	Parms.InAdd = InAdd;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFrameRate != nullptr)
		*OutFrameRate = Parms.OutFrameRate;
}


// Function WBP_OFFramerateButton.WBP_OFFramerateButton_C.GetTextfromValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_OFFramerateButton_C::GetTextfromValue(const float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFFramerateButton_C", "GetTextfromValue");

	Params::WBP_OFFramerateButton_C_GetTextfromValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

