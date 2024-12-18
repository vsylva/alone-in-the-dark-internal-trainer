#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerNoiseEmitter

#include "Basic.hpp"

#include "BP_PlayerNoiseEmitter_classes.hpp"
#include "BP_PlayerNoiseEmitter_parameters.hpp"


namespace SDK
{

// Function BP_PlayerNoiseEmitter.BP_PlayerNoiseEmitter_C.FootstepsCanMakeNoise
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PlayerNoiseEmitter_C::FootstepsCanMakeNoise() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerNoiseEmitter_C", "FootstepsCanMakeNoise");

	Params::BP_PlayerNoiseEmitter_C_FootstepsCanMakeNoise Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerNoiseEmitter.BP_PlayerNoiseEmitter_C.GetFootstepLoudness
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_PlayerNoiseEmitter_C::GetFootstepLoudness() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerNoiseEmitter_C", "GetFootstepLoudness");

	Params::BP_PlayerNoiseEmitter_C_GetFootstepLoudness Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

