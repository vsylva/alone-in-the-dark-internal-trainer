#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CemeteryCreature_Attack

#include "Basic.hpp"

#include "GA_CemeteryCreature_Attack_classes.hpp"
#include "GA_CemeteryCreature_Attack_parameters.hpp"


namespace SDK
{

// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.EventReceived_C29E2ED24290D96762E840813B9FECC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CemeteryCreature_Attack_C::EventReceived_C29E2ED24290D96762E840813B9FECC6(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "EventReceived_C29E2ED24290D96762E840813B9FECC6");

	Params::GA_CemeteryCreature_Attack_C_EventReceived_C29E2ED24290D96762E840813B9FECC6 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.OnCancelled_C29E2ED24290D96762E840813B9FECC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CemeteryCreature_Attack_C::OnCancelled_C29E2ED24290D96762E840813B9FECC6(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "OnCancelled_C29E2ED24290D96762E840813B9FECC6");

	Params::GA_CemeteryCreature_Attack_C_OnCancelled_C29E2ED24290D96762E840813B9FECC6 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.OnInterrupted_C29E2ED24290D96762E840813B9FECC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CemeteryCreature_Attack_C::OnInterrupted_C29E2ED24290D96762E840813B9FECC6(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "OnInterrupted_C29E2ED24290D96762E840813B9FECC6");

	Params::GA_CemeteryCreature_Attack_C_OnInterrupted_C29E2ED24290D96762E840813B9FECC6 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.OnBlendOut_C29E2ED24290D96762E840813B9FECC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CemeteryCreature_Attack_C::OnBlendOut_C29E2ED24290D96762E840813B9FECC6(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "OnBlendOut_C29E2ED24290D96762E840813B9FECC6");

	Params::GA_CemeteryCreature_Attack_C_OnBlendOut_C29E2ED24290D96762E840813B9FECC6 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.OnCompleted_C29E2ED24290D96762E840813B9FECC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CemeteryCreature_Attack_C::OnCompleted_C29E2ED24290D96762E840813B9FECC6(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "OnCompleted_C29E2ED24290D96762E840813B9FECC6");

	Params::GA_CemeteryCreature_Attack_C_OnCompleted_C29E2ED24290D96762E840813B9FECC6 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_CemeteryCreature_Attack_C::PlayAttackMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "PlayAttackMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CemeteryCreature_Attack.GA_CemeteryCreature_Attack_C.ExecuteUbergraph_GA_CemeteryCreature_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CemeteryCreature_Attack_C::ExecuteUbergraph_GA_CemeteryCreature_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CemeteryCreature_Attack_C", "ExecuteUbergraph_GA_CemeteryCreature_Attack");

	Params::GA_CemeteryCreature_Attack_C_ExecuteUbergraph_GA_CemeteryCreature_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
