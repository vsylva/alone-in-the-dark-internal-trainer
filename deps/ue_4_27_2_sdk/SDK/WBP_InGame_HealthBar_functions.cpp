#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGame_HealthBar

#include "Basic.hpp"

#include "WBP_InGame_HealthBar_classes.hpp"
#include "WBP_InGame_HealthBar_parameters.hpp"


namespace SDK
{

// Function WBP_InGame_HealthBar.WBP_InGame_HealthBar_C.PlayFadingAnimation
// (BlueprintEvent)
// Parameters:
// bool                                    Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InGame_HealthBar_C::PlayFadingAnimation(bool Forward, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_HealthBar_C", "PlayFadingAnimation");

	Params::WBP_InGame_HealthBar_C_PlayFadingAnimation Parms{};

	Parms.Forward = Forward;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_HealthBar.WBP_InGame_HealthBar_C.ExecuteUbergraph_WBP_InGame_HealthBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_HealthBar_C::ExecuteUbergraph_WBP_InGame_HealthBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_HealthBar_C", "ExecuteUbergraph_WBP_InGame_HealthBar");

	Params::WBP_InGame_HealthBar_C_ExecuteUbergraph_WBP_InGame_HealthBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
