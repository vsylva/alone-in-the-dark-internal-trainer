#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilLamp01

#include "Basic.hpp"

#include "BP_OilLamp01_classes.hpp"


namespace SDK
{

// Function BP_OilLamp01.BP_OilLamp01_C.ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OilLamp01_C::ToggleLights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilLamp01_C", "ToggleLights");

	UObject::ProcessEvent(Func, nullptr);
}

}

