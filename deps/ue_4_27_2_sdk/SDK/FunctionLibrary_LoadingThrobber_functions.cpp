#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FunctionLibrary_LoadingThrobber

#include "Basic.hpp"

#include "FunctionLibrary_LoadingThrobber_classes.hpp"
#include "FunctionLibrary_LoadingThrobber_parameters.hpp"


namespace SDK
{

// Function FunctionLibrary_LoadingThrobber.FunctionLibrary_LoadingThrobber_C.RemoveThrobber
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_LoadingThrobber_C::RemoveThrobber(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FunctionLibrary_LoadingThrobber_C", "RemoveThrobber");

	Params::FunctionLibrary_LoadingThrobber_C_RemoveThrobber Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FunctionLibrary_LoadingThrobber.FunctionLibrary_LoadingThrobber_C.AddThrobber
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_LoadingThrobber_C::AddThrobber(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FunctionLibrary_LoadingThrobber_C", "AddThrobber");

	Params::FunctionLibrary_LoadingThrobber_C_AddThrobber Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

