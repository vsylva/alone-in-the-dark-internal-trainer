#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetFact

#include "Basic.hpp"

#include "BTTask_SetFact_classes.hpp"
#include "BTTask_SetFact_parameters.hpp"


namespace SDK
{

// Function BTTask_SetFact.BTTask_SetFact_C.ExecuteUbergraph_BTTask_SetFact
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetFact_C::ExecuteUbergraph_BTTask_SetFact(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetFact_C", "ExecuteUbergraph_BTTask_SetFact");

	Params::BTTask_SetFact_C_ExecuteUbergraph_BTTask_SetFact Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_SetFact.BTTask_SetFact_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetFact_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetFact_C", "ReceiveExecute");

	Params::BTTask_SetFact_C_ReceiveExecute Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}

}
