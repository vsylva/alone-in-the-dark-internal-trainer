#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialArchivePopUp

#include "Basic.hpp"

#include "WBP_TutorialArchivePopUp_classes.hpp"
#include "WBP_TutorialArchivePopUp_parameters.hpp"


namespace SDK
{

// Function WBP_TutorialArchivePopUp.WBP_TutorialArchivePopUp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TutorialArchivePopUp_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialArchivePopUp_C", "PreConstruct");

	Params::WBP_TutorialArchivePopUp_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialArchivePopUp.WBP_TutorialArchivePopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TutorialArchivePopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialArchivePopUp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialArchivePopUp.WBP_TutorialArchivePopUp_C.BndEvt__WBP_ConfirmationMessage_WBP_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialArchivePopUp_C::BndEvt__WBP_ConfirmationMessage_WBP_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialArchivePopUp_C", "BndEvt__WBP_ConfirmationMessage_WBP_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialArchivePopUp.WBP_TutorialArchivePopUp_C.BndEvt__WBP_ConfirmationMessage_WBP_Cancel_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialArchivePopUp_C::BndEvt__WBP_ConfirmationMessage_WBP_Cancel_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialArchivePopUp_C", "BndEvt__WBP_ConfirmationMessage_WBP_Cancel_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialArchivePopUp.WBP_TutorialArchivePopUp_C.ExecuteUbergraph_WBP_TutorialArchivePopUp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialArchivePopUp_C::ExecuteUbergraph_WBP_TutorialArchivePopUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialArchivePopUp_C", "ExecuteUbergraph_WBP_TutorialArchivePopUp");

	Params::WBP_TutorialArchivePopUp_C_ExecuteUbergraph_WBP_TutorialArchivePopUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

