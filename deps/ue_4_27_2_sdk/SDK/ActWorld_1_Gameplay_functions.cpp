#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActWorld_1_Gameplay

#include "Basic.hpp"

#include "ActWorld_1_Gameplay_classes.hpp"
#include "ActWorld_1_Gameplay_parameters.hpp"


namespace SDK
{

// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.OpenFQ1ToDercetoDoor__FinishedFunc
// (BlueprintEvent)

void AActWorld_1_Gameplay_C::OpenFQ1ToDercetoDoor__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "OpenFQ1ToDercetoDoor__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.OpenFQ1ToDercetoDoor__UpdateFunc
// (BlueprintEvent)

void AActWorld_1_Gameplay_C::OpenFQ1ToDercetoDoor__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "OpenFQ1ToDercetoDoor__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActWorld_1_Gameplay_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.BndEvt__ActWorld_1_Gameplay_BP_FlowDispatcher_FrenchQuarter_K2Node_ActorBoundEvent_3_ReceiveNotify__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UFlowComponent*                   FlowComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     NotifyTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void AActWorld_1_Gameplay_C::BndEvt__ActWorld_1_Gameplay_BP_FlowDispatcher_FrenchQuarter_K2Node_ActorBoundEvent_3_ReceiveNotify__DelegateSignature(class UFlowComponent* FlowComponent, const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "BndEvt__ActWorld_1_Gameplay_BP_FlowDispatcher_FrenchQuarter_K2Node_ActorBoundEvent_3_ReceiveNotify__DelegateSignature");

	Params::ActWorld_1_Gameplay_C_BndEvt__ActWorld_1_Gameplay_BP_FlowDispatcher_FrenchQuarter_K2Node_ActorBoundEvent_3_ReceiveNotify__DelegateSignature Parms{};

	Parms.FlowComponent = FlowComponent;
	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.BndEvt__ActWorld_1_Gameplay_EventTrigger_1_K2Node_ActorBoundEvent_0_EventBegin__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AEventTrigger*                    EventTrigger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActWorld_1_Gameplay_C::BndEvt__ActWorld_1_Gameplay_EventTrigger_1_K2Node_ActorBoundEvent_0_EventBegin__DelegateSignature(class AEventTrigger* EventTrigger, class APawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "BndEvt__ActWorld_1_Gameplay_EventTrigger_1_K2Node_ActorBoundEvent_0_EventBegin__DelegateSignature");

	Params::ActWorld_1_Gameplay_C_BndEvt__ActWorld_1_Gameplay_EventTrigger_1_K2Node_ActorBoundEvent_0_EventBegin__DelegateSignature Parms{};

	Parms.EventTrigger = EventTrigger;
	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.AW2Teleport
// (BlueprintCallable, BlueprintEvent)

void AActWorld_1_Gameplay_C::AW2Teleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "AW2Teleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActWorld_1_Gameplay.ActWorld_1_Gameplay_C.ExecuteUbergraph_ActWorld_1_Gameplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActWorld_1_Gameplay_C::ExecuteUbergraph_ActWorld_1_Gameplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActWorld_1_Gameplay_C", "ExecuteUbergraph_ActWorld_1_Gameplay");

	Params::ActWorld_1_Gameplay_C_ExecuteUbergraph_ActWorld_1_Gameplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
