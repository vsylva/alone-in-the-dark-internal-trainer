#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerCharacterInterface

#include "Basic.hpp"

#include "BPI_PlayerCharacterInterface_classes.hpp"
#include "BPI_PlayerCharacterInterface_parameters.hpp"


namespace SDK
{

// Function BPI_PlayerCharacterInterface.BPI_PlayerCharacterInterface_C.AddSmokeBuildup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PercentToAdd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerCharacterInterface_C::AddSmokeBuildup(float PercentToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayerCharacterInterface_C", "AddSmokeBuildup");

	Params::BPI_PlayerCharacterInterface_C_AddSmokeBuildup Parms{};

	Parms.PercentToAdd = PercentToAdd;

	UObject::ProcessEvent(Func, &Parms);
}

}
