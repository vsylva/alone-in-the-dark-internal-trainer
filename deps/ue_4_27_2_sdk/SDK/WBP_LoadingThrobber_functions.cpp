#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingThrobber

#include "Basic.hpp"

#include "WBP_LoadingThrobber_classes.hpp"
#include "WBP_LoadingThrobber_parameters.hpp"


namespace SDK
{

// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.Finished_51A6ED054795664183E33E9433C94EBF
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingThrobber_C::Finished_51A6ED054795664183E33E9433C94EBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "Finished_51A6ED054795664183E33E9433C94EBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.Finished_7BB0C5D9455F356F8B6C9AABC5B626C5
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingThrobber_C::Finished_7BB0C5D9455F356F8B6C9AABC5B626C5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "Finished_7BB0C5D9455F356F8B6C9AABC5B626C5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.Destroy Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadingThrobber_C::Destroy_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "Destroy Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadingThrobber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.FadeOutAndThenDestroy
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadingThrobber_C::FadeOutAndThenDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "FadeOutAndThenDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingThrobber.WBP_LoadingThrobber_C.ExecuteUbergraph_WBP_LoadingThrobber
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingThrobber_C::ExecuteUbergraph_WBP_LoadingThrobber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingThrobber_C", "ExecuteUbergraph_WBP_LoadingThrobber");

	Params::WBP_LoadingThrobber_C_ExecuteUbergraph_WBP_LoadingThrobber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
