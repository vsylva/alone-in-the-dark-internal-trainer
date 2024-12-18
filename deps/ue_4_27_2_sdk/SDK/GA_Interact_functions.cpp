#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interact

#include "Basic.hpp"

#include "GA_Interact_classes.hpp"
#include "GA_Interact_parameters.hpp"


namespace SDK
{

// Function GA_Interact.GA_Interact_C.ExecuteUbergraph_GA_Interact
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interact_C::ExecuteUbergraph_GA_Interact(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "ExecuteUbergraph_GA_Interact");

	Params::GA_Interact_C_ExecuteUbergraph_GA_Interact Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Interact.GA_Interact_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Interact_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Interact.GA_Interact_C.End Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractionCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interact_C::End_Interaction(class ACharacter* InteractionCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "End Interaction");

	Params::GA_Interact_C_End_Interaction Parms{};

	Parms.InteractionCharacter = InteractionCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Interact.GA_Interact_C.HolsterWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOFPlayerCharacter*               Player_Character                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interact_C::HolsterWeapon(class AOFPlayerCharacter* Player_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "HolsterWeapon");

	Params::GA_Interact_C_HolsterWeapon Parms{};

	Parms.Player_Character = Player_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Interact.GA_Interact_C.Apply Damage Immunity
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Interact_C::Apply_Damage_Immunity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "Apply Damage Immunity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Interact.GA_Interact_C.Remove Damage Immunity
// (Protected, BlueprintCallable, BlueprintEvent)

void UGA_Interact_C::Remove_Damage_Immunity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "Remove Damage Immunity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Interact.GA_Interact_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Interact_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Interact_C", "K2_CanActivateAbility");

	Params::GA_Interact_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

