#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EnemyCommon

#include "Basic.hpp"

#include "BPI_EnemyCommon_classes.hpp"
#include "BPI_EnemyCommon_parameters.hpp"


namespace SDK
{

// Function BPI_EnemyCommon.BPI_EnemyCommon_C.SetHasDeathReactionHappened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasDied                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EnemyCommon_C::SetHasDeathReactionHappened(bool HasDied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EnemyCommon_C", "SetHasDeathReactionHappened");

	Params::BPI_EnemyCommon_C_SetHasDeathReactionHappened Parms{};

	Parms.HasDied = HasDied;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_EnemyCommon.BPI_EnemyCommon_C.GetHasDeathReactionHappened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasDied                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EnemyCommon_C::GetHasDeathReactionHappened(bool* HasDied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EnemyCommon_C", "GetHasDeathReactionHappened");

	Params::BPI_EnemyCommon_C_GetHasDeathReactionHappened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasDied != nullptr)
		*HasDied = Parms.HasDied;
}


// Function BPI_EnemyCommon.BPI_EnemyCommon_C.GetMobPlayerCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCapsuleComponent*                MobPlayerCollission                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EnemyCommon_C::GetMobPlayerCollision(class UCapsuleComponent** MobPlayerCollission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EnemyCommon_C", "GetMobPlayerCollision");

	Params::BPI_EnemyCommon_C_GetMobPlayerCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MobPlayerCollission != nullptr)
		*MobPlayerCollission = Parms.MobPlayerCollission;
}

}
