#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GMMC_EnemyAttackDifficultyModifier

#include "Basic.hpp"

#include "GMMC_EnemyAttackDifficultyModifier_classes.hpp"
#include "GMMC_EnemyAttackDifficultyModifier_parameters.hpp"


namespace SDK
{

// Function GMMC_EnemyAttackDifficultyModifier.GMMC_EnemyAttackDifficultyModifier_C.CalculateBaseMagnitude
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec              Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGMMC_EnemyAttackDifficultyModifier_C::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GMMC_EnemyAttackDifficultyModifier_C", "CalculateBaseMagnitude");

	Params::GMMC_EnemyAttackDifficultyModifier_C_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

