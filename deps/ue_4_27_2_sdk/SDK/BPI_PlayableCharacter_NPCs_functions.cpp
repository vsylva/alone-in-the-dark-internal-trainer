#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayableCharacter_NPCs

#include "Basic.hpp"

#include "BPI_PlayableCharacter_NPCs_classes.hpp"
#include "BPI_PlayableCharacter_NPCs_parameters.hpp"


namespace SDK
{

// Function BPI_PlayableCharacter_NPCs.BPI_PlayableCharacter_NPCs_C.SetGrayAptLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCGrayAptLocation                     Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayableCharacter_NPCs_C::SetGrayAptLocation(ENPCGrayAptLocation Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayableCharacter_NPCs_C", "SetGrayAptLocation");

	Params::BPI_PlayableCharacter_NPCs_C_SetGrayAptLocation Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_PlayableCharacter_NPCs.BPI_PlayableCharacter_NPCs_C.MoveWeaponToHolsterSocket
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_PlayableCharacter_NPCs_C::MoveWeaponToHolsterSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayableCharacter_NPCs_C", "MoveWeaponToHolsterSocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_PlayableCharacter_NPCs.BPI_PlayableCharacter_NPCs_C.MoveWeaponToHandSocket
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_PlayableCharacter_NPCs_C::MoveWeaponToHandSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayableCharacter_NPCs_C", "MoveWeaponToHandSocket");

	UObject::ProcessEvent(Func, nullptr);
}

}

