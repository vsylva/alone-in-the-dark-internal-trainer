#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_autosave_icon

#include "Basic.hpp"

#include "WBP_autosave_icon_classes.hpp"
#include "WBP_autosave_icon_parameters.hpp"


namespace SDK
{

// Function WBP_autosave_icon.WBP_autosave_icon_C.PlayFlashAnimation
// (Event, Protected, BlueprintEvent)

void UWBP_autosave_icon_C::PlayFlashAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_autosave_icon_C", "PlayFlashAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_autosave_icon.WBP_autosave_icon_C.ExecuteUbergraph_WBP_autosave_icon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_autosave_icon_C::ExecuteUbergraph_WBP_autosave_icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_autosave_icon_C", "ExecuteUbergraph_WBP_autosave_icon");

	Params::WBP_autosave_icon_C_ExecuteUbergraph_WBP_autosave_icon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
