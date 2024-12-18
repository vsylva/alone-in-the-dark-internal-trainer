#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GMMC_HealDifficultyModifier

#include "Basic.hpp"

#include "GMMC_HealDifficultyModifier_classes.hpp"
#include "GMMC_HealDifficultyModifier_parameters.hpp"


namespace SDK
{

// Function GMMC_HealDifficultyModifier.GMMC_HealDifficultyModifier_C.CalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec              Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGMMC_HealDifficultyModifier_C::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GMMC_HealDifficultyModifier_C", "CalculateBaseMagnitude");

	Params::GMMC_HealDifficultyModifier_C_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

