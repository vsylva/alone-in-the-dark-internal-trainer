#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_OnProgressionUpdated

#include "Basic.hpp"

#include "FN_OnProgressionUpdated_classes.hpp"
#include "FN_OnProgressionUpdated_parameters.hpp"


namespace SDK
{

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_OnProgressionUpdated_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "K2_ExecuteInput");

	Params::FN_OnProgressionUpdated_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.OnProgressionUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NewTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     OldTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UFN_OnProgressionUpdated_C::OnProgressionUpdated_Event_0(const struct FGameplayTag& NewTag, const struct FGameplayTag& OldTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "OnProgressionUpdated_Event_0");

	Params::FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0 Parms{};

	Parms.NewTag = std::move(NewTag);
	Parms.OldTag = std::move(OldTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.OnLoad
// (Event, Protected, BlueprintEvent)

void UFN_OnProgressionUpdated_C::OnLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "OnLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.ExecuteUbergraph_FN_OnProgressionUpdated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_OnProgressionUpdated_C::ExecuteUbergraph_FN_OnProgressionUpdated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "ExecuteUbergraph_FN_OnProgressionUpdated");

	Params::FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_GetStatusString
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_OnProgressionUpdated_C::K2_GetStatusString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "K2_GetStatusString");

	Params::FN_OnProgressionUpdated_C_K2_GetStatusString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_GetNodeDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_OnProgressionUpdated_C::K2_GetNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_OnProgressionUpdated_C", "K2_GetNodeDescription");

	Params::FN_OnProgressionUpdated_C_K2_GetNodeDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

