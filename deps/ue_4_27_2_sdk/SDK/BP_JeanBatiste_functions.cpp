#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JeanBatiste

#include "Basic.hpp"

#include "BP_JeanBatiste_classes.hpp"
#include "BP_JeanBatiste_parameters.hpp"


namespace SDK
{

// Function BP_JeanBatiste.BP_JeanBatiste_C.ExecuteUbergraph_BP_JeanBatiste
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JeanBatiste_C::ExecuteUbergraph_BP_JeanBatiste(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JeanBatiste_C", "ExecuteUbergraph_BP_JeanBatiste");

	Params::BP_JeanBatiste_C_ExecuteUbergraph_BP_JeanBatiste Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JeanBatiste.BP_JeanBatiste_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JeanBatiste_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JeanBatiste_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JeanBatiste.BP_JeanBatiste_C.GetLocation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JeanBatiste_C::GetLocation(int32* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JeanBatiste_C", "GetLocation");

	Params::BP_JeanBatiste_C_GetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;
}

}

