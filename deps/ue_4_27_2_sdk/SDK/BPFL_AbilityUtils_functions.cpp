#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_AbilityUtils

#include "Basic.hpp"

#include "BPFL_AbilityUtils_classes.hpp"
#include "BPFL_AbilityUtils_parameters.hpp"


namespace SDK
{

// Function BPFL_AbilityUtils.BPFL_AbilityUtils_C.Is 2Handed Melee
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*                       OwnerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_AbilityUtils_C::Is_2Handed_Melee(class ACharacter* OwnerCharacter, class UObject* __WorldContext, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AbilityUtils_C", "Is 2Handed Melee");

	Params::BPFL_AbilityUtils_C_Is_2Handed_Melee Parms{};

	Parms.OwnerCharacter = OwnerCharacter;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BPFL_AbilityUtils.BPFL_AbilityUtils_C.Get Hitscan Weapon Type
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*                       OwnerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasHitscanWeapon                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EWeapons                                WeaponType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityUtils_C::Get_Hitscan_Weapon_Type(class ACharacter* OwnerCharacter, class UObject* __WorldContext, bool* HasHitscanWeapon, EWeapons* WeaponType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AbilityUtils_C", "Get Hitscan Weapon Type");

	Params::BPFL_AbilityUtils_C_Get_Hitscan_Weapon_Type Parms{};

	Parms.OwnerCharacter = OwnerCharacter;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HasHitscanWeapon != nullptr)
		*HasHitscanWeapon = Parms.HasHitscanWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;
}

}

