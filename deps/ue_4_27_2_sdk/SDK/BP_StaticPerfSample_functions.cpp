#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StaticPerfSample

#include "Basic.hpp"

#include "BP_StaticPerfSample_classes.hpp"
#include "BP_StaticPerfSample_parameters.hpp"


namespace SDK
{

// Function BP_StaticPerfSample.BP_StaticPerfSample_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticPerfSample_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StaticPerfSample_C", "ReceiveTick");

	Params::BP_StaticPerfSample_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StaticPerfSample.BP_StaticPerfSample_C.ExecuteUbergraph_BP_StaticPerfSample
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticPerfSample_C::ExecuteUbergraph_BP_StaticPerfSample(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StaticPerfSample_C", "ExecuteUbergraph_BP_StaticPerfSample");

	Params::BP_StaticPerfSample_C_ExecuteUbergraph_BP_StaticPerfSample Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
