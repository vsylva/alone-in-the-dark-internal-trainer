#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealthBottle

#include "Basic.hpp"

#include "BP_HealthBottle_classes.hpp"
#include "BP_HealthBottle_parameters.hpp"


namespace SDK
{

// Function BP_HealthBottle.BP_HealthBottle_C.ExecuteUbergraph_BP_HealthBottle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HealthBottle_C::ExecuteUbergraph_BP_HealthBottle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HealthBottle_C", "ExecuteUbergraph_BP_HealthBottle");

	Params::BP_HealthBottle_C_ExecuteUbergraph_BP_HealthBottle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HealthBottle.BP_HealthBottle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HealthBottle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HealthBottle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

