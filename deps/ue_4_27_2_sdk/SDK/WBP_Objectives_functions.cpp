#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Objectives

#include "Basic.hpp"

#include "WBP_Objectives_classes.hpp"
#include "WBP_Objectives_parameters.hpp"


namespace SDK
{

// Function WBP_Objectives.WBP_Objectives_C.Stop FmodSound
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Objectives_C::Stop_FmodSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "Stop FmodSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.Play Current Active Note On Open
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Objectives_C::Play_Current_Active_Note_On_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "Play Current Active Note On Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.OpenMenuPressedHandler
// (Event, Protected, BlueprintEvent)

void UWBP_Objectives_C::OpenMenuPressedHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "OpenMenuPressedHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Objectives_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Objectives_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.SetAsActive
// (BlueprintCallable, BlueprintEvent)

void UWBP_Objectives_C::SetAsActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "SetAsActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.Close down
// (BlueprintCallable, BlueprintEvent)

void UWBP_Objectives_C::Close_down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "Close down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Objectives_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Objectives.WBP_Objectives_C.ExecuteUbergraph_WBP_Objectives
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Objectives_C::ExecuteUbergraph_WBP_Objectives(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Objectives_C", "ExecuteUbergraph_WBP_Objectives");

	Params::WBP_Objectives_C_ExecuteUbergraph_WBP_Objectives Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
