#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MaskedScreenTransition

#include "Basic.hpp"

#include "WBP_MaskedScreenTransition_classes.hpp"
#include "WBP_MaskedScreenTransition_parameters.hpp"


namespace SDK
{

// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.DoTransition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTransitionDone                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MaskedScreenTransition_C::DoTransition(float DeltaTime, bool* IsTransitionDone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "DoTransition");

	Params::WBP_MaskedScreenTransition_C_DoTransition Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTransitionDone != nullptr)
		*IsTransitionDone = Parms.IsTransitionDone;
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MaskedScreenTransition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MaskedScreenTransition_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "Tick");

	Params::WBP_MaskedScreenTransition_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MaskedScreenTransition_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.ExecuteUbergraph_WBP_MaskedScreenTransition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MaskedScreenTransition_C::ExecuteUbergraph_WBP_MaskedScreenTransition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "ExecuteUbergraph_WBP_MaskedScreenTransition");

	Params::WBP_MaskedScreenTransition_C_ExecuteUbergraph_WBP_MaskedScreenTransition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.PostTransition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MaskedScreenTransition_C::PostTransition__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "PostTransition__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MaskedScreenTransition.WBP_MaskedScreenTransition_C.PreTransition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MaskedScreenTransition_C::PreTransition__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MaskedScreenTransition_C", "PreTransition__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

