#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesAutomation

#include "Basic.hpp"

#include "PiecesAutomation_classes.hpp"
#include "PiecesAutomation_parameters.hpp"


namespace SDK
{

// Function PiecesAutomation.BFL_PiecesAutomationUtils.RemoveAutoTestBlockers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBFL_PiecesAutomationUtils::RemoveAutoTestBlockers(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_PiecesAutomationUtils", "RemoveAutoTestBlockers");

	Params::BFL_PiecesAutomationUtils_RemoveAutoTestBlockers Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesAutomation.BFL_PiecesAutomationUtils.StartGameplaySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBFL_PiecesAutomationUtils::StartGameplaySession(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_PiecesAutomationUtils", "StartGameplaySession");

	Params::BFL_PiecesAutomationUtils_StartGameplaySession Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
