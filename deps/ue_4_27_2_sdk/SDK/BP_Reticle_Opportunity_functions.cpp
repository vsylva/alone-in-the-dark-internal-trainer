#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Reticle_Opportunity

#include "Basic.hpp"

#include "BP_Reticle_Opportunity_classes.hpp"
#include "BP_Reticle_Opportunity_parameters.hpp"


namespace SDK
{

// Function BP_Reticle_Opportunity.BP_Reticle_Opportunity_C.ExecuteUbergraph_BP_Reticle_Opportunity
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reticle_Opportunity_C::ExecuteUbergraph_BP_Reticle_Opportunity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Reticle_Opportunity_C", "ExecuteUbergraph_BP_Reticle_Opportunity");

	Params::BP_Reticle_Opportunity_C_ExecuteUbergraph_BP_Reticle_Opportunity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Reticle_Opportunity.BP_Reticle_Opportunity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Reticle_Opportunity_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Reticle_Opportunity_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Reticle_Opportunity.BP_Reticle_Opportunity_C.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bNewValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reticle_Opportunity_C::OnTargetingAnActor(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Reticle_Opportunity_C", "OnTargetingAnActor");

	Params::BP_Reticle_Opportunity_C_OnTargetingAnActor Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
