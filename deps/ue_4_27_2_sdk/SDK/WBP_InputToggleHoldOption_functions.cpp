#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputToggleHoldOption

#include "Basic.hpp"

#include "WBP_InputToggleHoldOption_classes.hpp"
#include "WBP_InputToggleHoldOption_parameters.hpp"


namespace SDK
{

// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.ExecuteUbergraph_WBP_InputToggleHoldOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputToggleHoldOption_C::ExecuteUbergraph_WBP_InputToggleHoldOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "ExecuteUbergraph_WBP_InputToggleHoldOption");

	Params::WBP_InputToggleHoldOption_C_ExecuteUbergraph_WBP_InputToggleHoldOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.OnGameUserSettingsUINeedsUpdate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputToggleHoldOption_C::OnGameUserSettingsUINeedsUpdate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "OnGameUserSettingsUINeedsUpdate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.OnCheckBoxChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CheckBoxChanged                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InputToggleHoldOption_C::OnCheckBoxChangedEvent(bool CheckBoxChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "OnCheckBoxChangedEvent");

	Params::WBP_InputToggleHoldOption_C_OnCheckBoxChangedEvent Parms{};

	Parms.CheckBoxChanged = CheckBoxChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InputToggleHoldOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.AdjustForInvertedText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Treat_As_Hold                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_InputToggleHoldOption_C::AdjustForInvertedText(bool Treat_As_Hold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "AdjustForInvertedText");

	Params::WBP_InputToggleHoldOption_C_AdjustForInvertedText Parms{};

	Parms.Treat_As_Hold = Treat_As_Hold;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.UpdateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InputToggleHoldOption_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InputToggleHoldOption.WBP_InputToggleHoldOption_C.Input Trigger Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UWBP_InputToggleHoldOption_C::Input_Trigger_Tag() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputToggleHoldOption_C", "Input Trigger Tag");

	Params::WBP_InputToggleHoldOption_C_Input_Trigger_Tag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
