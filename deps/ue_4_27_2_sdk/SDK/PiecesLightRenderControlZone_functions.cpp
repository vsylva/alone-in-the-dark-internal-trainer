#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesLightRenderControlZone

#include "Basic.hpp"

#include "PiecesLightRenderControlZone_classes.hpp"
#include "PiecesLightRenderControlZone_parameters.hpp"


namespace SDK
{

// Function PiecesLightRenderControlZone.LightRenderControlZone.AddLightActorToHide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightRenderControlZone::AddLightActorToHide(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightRenderControlZone", "AddLightActorToHide");

	Params::LightRenderControlZone_AddLightActorToHide Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesLightRenderControlZone.LightRenderControlZone.AddLightActorToShowOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightRenderControlZone::AddLightActorToShowOnly(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightRenderControlZone", "AddLightActorToShowOnly");

	Params::LightRenderControlZone_AddLightActorToShowOnly Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesLightRenderControlZone.PiecesLightRenderControlZoneWorldSubsystem.CreateNewControlZone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                             Volume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                          LifetimeScope                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULightRenderControlZone*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULightRenderControlZone* UPiecesLightRenderControlZoneWorldSubsystem::CreateNewControlZone(const struct FBox& Volume, class UObject* LifetimeScope)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesLightRenderControlZoneWorldSubsystem", "CreateNewControlZone");

	Params::PiecesLightRenderControlZoneWorldSubsystem_CreateNewControlZone Parms{};

	Parms.Volume = std::move(Volume);
	Parms.LifetimeScope = LifetimeScope;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

