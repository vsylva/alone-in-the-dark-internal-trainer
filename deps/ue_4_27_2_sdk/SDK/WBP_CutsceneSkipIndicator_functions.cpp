#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CutsceneSkipIndicator

#include "Basic.hpp"

#include "WBP_CutsceneSkipIndicator_classes.hpp"
#include "WBP_CutsceneSkipIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.OnSkipStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CutsceneSkipIndicator_C::OnSkipStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "OnSkipStarted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.ExecuteUbergraph_WBP_CutsceneSkipIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CutsceneSkipIndicator_C::ExecuteUbergraph_WBP_CutsceneSkipIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "ExecuteUbergraph_WBP_CutsceneSkipIndicator");

	Params::WBP_CutsceneSkipIndicator_C_ExecuteUbergraph_WBP_CutsceneSkipIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.OnSkipCutscene
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CutsceneSkipIndicator_C::OnSkipCutscene(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "OnSkipCutscene");

	Params::WBP_CutsceneSkipIndicator_C_OnSkipCutscene Parms{};

	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.SetKeyImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CutsceneSkipIndicator_C::SetKeyImage(bool InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "SetKeyImage");

	Params::WBP_CutsceneSkipIndicator_C_SetKeyImage Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.UseFadeOutBlackScreenInTheBeginning
// (BlueprintEvent)

void UWBP_CutsceneSkipIndicator_C::UseFadeOutBlackScreenInTheBeginning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "UseFadeOutBlackScreenInTheBeginning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.Done
// (BlueprintCallable, BlueprintEvent)

void UWBP_CutsceneSkipIndicator_C::Done()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "Done");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.AnyKeyPressed
// (BlueprintCallable, BlueprintEvent)

void UWBP_CutsceneSkipIndicator_C::AnyKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "AnyKeyPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CutsceneSkipIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "Tick");

	Params::WBP_CutsceneSkipIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CutsceneSkipIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.OnCompleted_06F9B0074858EC5BF2D4C88B1B97B93B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             KeyString                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CutsceneSkipIndicator_C::OnCompleted_06F9B0074858EC5BF2D4C88B1B97B93B(class UTexture2D* Texture, const class FText& KeyString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "OnCompleted_06F9B0074858EC5BF2D4C88B1B97B93B");

	Params::WBP_CutsceneSkipIndicator_C_OnCompleted_06F9B0074858EC5BF2D4C88B1B97B93B Parms{};

	Parms.Texture = Texture;
	Parms.KeyString = std::move(KeyString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.SetAlphaValueOnProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimerLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CutsceneSkipIndicator_C::SetAlphaValueOnProgressBar(float TimerLength, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "SetAlphaValueOnProgressBar");

	Params::WBP_CutsceneSkipIndicator_C_SetAlphaValueOnProgressBar Parms{};

	Parms.TimerLength = TimerLength;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.UpdateFadeToBlack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CutsceneSkipIndicator_C::UpdateFadeToBlack(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "UpdateFadeToBlack");

	Params::WBP_CutsceneSkipIndicator_C_UpdateFadeToBlack Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.FadeOutSkipBlackScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseCurrentPositionAsStart                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CutsceneSkipIndicator_C::FadeOutSkipBlackScreen(bool UseCurrentPositionAsStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "FadeOutSkipBlackScreen");

	Params::WBP_CutsceneSkipIndicator_C_FadeOutSkipBlackScreen Parms{};

	Parms.UseCurrentPositionAsStart = UseCurrentPositionAsStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C.GetSkipButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_CutsceneSkipIndicator_C::GetSkipButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CutsceneSkipIndicator_C", "GetSkipButtonVisibility");

	Params::WBP_CutsceneSkipIndicator_C_GetSkipButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

