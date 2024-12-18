#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathBloodPoolSpawner

#include "Basic.hpp"

#include "BP_DeathBloodPoolSpawner_classes.hpp"
#include "BP_DeathBloodPoolSpawner_parameters.hpp"


namespace SDK
{

// Function BP_DeathBloodPoolSpawner.BP_DeathBloodPoolSpawner_C.ReceiveBeginPlay
// (Exec, Event, Public, BlueprintEvent)

void UBP_DeathBloodPoolSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBloodPoolSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathBloodPoolSpawner.BP_DeathBloodPoolSpawner_C.Death
// (BlueprintCallable, BlueprintEvent)

void UBP_DeathBloodPoolSpawner_C::Death()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBloodPoolSpawner_C", "Death");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathBloodPoolSpawner.BP_DeathBloodPoolSpawner_C.ExecuteUbergraph_BP_DeathBloodPoolSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeathBloodPoolSpawner_C::ExecuteUbergraph_BP_DeathBloodPoolSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBloodPoolSpawner_C", "ExecuteUbergraph_BP_DeathBloodPoolSpawner");

	Params::BP_DeathBloodPoolSpawner_C_ExecuteUbergraph_BP_DeathBloodPoolSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

