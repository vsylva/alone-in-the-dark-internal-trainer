#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObsidianFoxDevicePropertyHandling

#include "Basic.hpp"

#include "ObsidianFoxDevicePropertyHandling_classes.hpp"
#include "ObsidianFoxDevicePropertyHandling_parameters.hpp"


namespace SDK
{

// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.RemoveTriggerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bRightTrigger                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDevicePropertySubsystem::RemoveTriggerEffect(bool bRightTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevicePropertySubsystem", "RemoveTriggerEffect");

	Params::DevicePropertySubsystem_RemoveTriggerEffect Parms{};

	Parms.bRightTrigger = bRightTrigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.SetLightbarEffect
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                                    bEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                           Color                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDevicePropertySubsystem::SetLightbarEffect(bool bEnabled, const struct FColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevicePropertySubsystem", "SetLightbarEffect");

	Params::DevicePropertySubsystem_SetLightbarEffect Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Color = std::move(Color);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.SetTriggerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bRightTrigger                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UControllerTriggerEffectData*     TriggerEffectData                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDevicePropertySubsystem::SetTriggerEffect(bool bRightTrigger, class UControllerTriggerEffectData* TriggerEffectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevicePropertySubsystem", "SetTriggerEffect");

	Params::DevicePropertySubsystem_SetTriggerEffect Parms{};

	Parms.bRightTrigger = bRightTrigger;
	Parms.TriggerEffectData = TriggerEffectData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
