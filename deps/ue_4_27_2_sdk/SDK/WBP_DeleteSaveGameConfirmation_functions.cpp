#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeleteSaveGameConfirmation

#include "Basic.hpp"

#include "WBP_DeleteSaveGameConfirmation_classes.hpp"
#include "WBP_DeleteSaveGameConfirmation_parameters.hpp"


namespace SDK
{

// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.ExecuteUbergraph_WBP_DeleteSaveGameConfirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeleteSaveGameConfirmation_C::ExecuteUbergraph_WBP_DeleteSaveGameConfirmation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "ExecuteUbergraph_WBP_DeleteSaveGameConfirmation");

	Params::WBP_DeleteSaveGameConfirmation_C_ExecuteUbergraph_WBP_DeleteSaveGameConfirmation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.BndEvt__WBP_DeleteSaveGameConfirmation_WBP_AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature
// (BlueprintEvent)

void UWBP_DeleteSaveGameConfirmation_C::BndEvt__WBP_DeleteSaveGameConfirmation_WBP_AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "BndEvt__WBP_DeleteSaveGameConfirmation_WBP_AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.BndEvt__WBP_DeleteSaveGameConfirmation_WBP_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature
// (BlueprintEvent)

void UWBP_DeleteSaveGameConfirmation_C::BndEvt__WBP_DeleteSaveGameConfirmation_WBP_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "BndEvt__WBP_DeleteSaveGameConfirmation_WBP_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DeleteSaveGameConfirmation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeleteSaveGameConfirmation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "PreConstruct");

	Params::WBP_DeleteSaveGameConfirmation_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.GetTitleTextByOvveride
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_DeleteSaveGameConfirmation_C::GetTitleTextByOvveride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "GetTitleTextByOvveride");

	Params::WBP_DeleteSaveGameConfirmation_C_GetTitleTextByOvveride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DeleteSaveGameConfirmation.WBP_DeleteSaveGameConfirmation_C.GetMessageByOverride
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_DeleteSaveGameConfirmation_C::GetMessageByOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeleteSaveGameConfirmation_C", "GetMessageByOverride");

	Params::WBP_DeleteSaveGameConfirmation_C_GetMessageByOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

