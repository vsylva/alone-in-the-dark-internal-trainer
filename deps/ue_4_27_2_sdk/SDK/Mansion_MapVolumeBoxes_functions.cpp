#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mansion_MapVolumeBoxes

#include "Basic.hpp"

#include "Mansion_MapVolumeBoxes_classes.hpp"
#include "Mansion_MapVolumeBoxes_parameters.hpp"


namespace SDK
{

// Function Mansion_MapVolumeBoxes.Mansion_MapVolumeBoxes_C.ExecuteUbergraph_Mansion_MapVolumeBoxes
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMansion_MapVolumeBoxes_C::ExecuteUbergraph_Mansion_MapVolumeBoxes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mansion_MapVolumeBoxes_C", "ExecuteUbergraph_Mansion_MapVolumeBoxes");

	Params::Mansion_MapVolumeBoxes_C_ExecuteUbergraph_Mansion_MapVolumeBoxes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
