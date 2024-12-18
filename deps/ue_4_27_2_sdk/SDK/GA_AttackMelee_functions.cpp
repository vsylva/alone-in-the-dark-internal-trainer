#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AttackMelee

#include "Basic.hpp"

#include "GA_AttackMelee_classes.hpp"
#include "GA_AttackMelee_parameters.hpp"


namespace SDK
{

// Function GA_AttackMelee.GA_AttackMelee_C.EventReceived_FAE13B474B2CC118A3309E9E1F3DB922
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AttackMelee_C::EventReceived_FAE13B474B2CC118A3309E9E1F3DB922(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "EventReceived_FAE13B474B2CC118A3309E9E1F3DB922");

	Params::GA_AttackMelee_C_EventReceived_FAE13B474B2CC118A3309E9E1F3DB922 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AttackMelee.GA_AttackMelee_C.OnBlendOut_C4864FB14CFBCDBBF80906B7293D5ADE
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackMelee_C::OnBlendOut_C4864FB14CFBCDBBF80906B7293D5ADE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "OnBlendOut_C4864FB14CFBCDBBF80906B7293D5ADE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackMelee.GA_AttackMelee_C.OnCompleted_C4864FB14CFBCDBBF80906B7293D5ADE
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackMelee_C::OnCompleted_C4864FB14CFBCDBBF80906B7293D5ADE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "OnCompleted_C4864FB14CFBCDBBF80906B7293D5ADE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackMelee.GA_AttackMelee_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackMelee_C::PlayAttackMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "PlayAttackMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackMelee.GA_AttackMelee_C.ExecuteUbergraph_GA_AttackMelee
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AttackMelee_C::ExecuteUbergraph_GA_AttackMelee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "ExecuteUbergraph_GA_AttackMelee");

	Params::GA_AttackMelee_C_ExecuteUbergraph_GA_AttackMelee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AttackMelee.GA_AttackMelee_C.OnCancelled_C4864FB14CFBCDBBF80906B7293D5ADE
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackMelee_C::OnCancelled_C4864FB14CFBCDBBF80906B7293D5ADE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "OnCancelled_C4864FB14CFBCDBBF80906B7293D5ADE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackMelee.GA_AttackMelee_C.OnInterrupted_C4864FB14CFBCDBBF80906B7293D5ADE
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackMelee_C::OnInterrupted_C4864FB14CFBCDBBF80906B7293D5ADE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackMelee_C", "OnInterrupted_C4864FB14CFBCDBBF80906B7293D5ADE");

	UObject::ProcessEvent(Func, nullptr);
}

}

