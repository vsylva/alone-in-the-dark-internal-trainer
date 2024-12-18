#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlowTeleportTarget

#include "Basic.hpp"

#include "BP_FlowTeleportTarget_classes.hpp"
#include "BP_FlowTeleportTarget_parameters.hpp"


namespace SDK
{

// Function BP_FlowTeleportTarget.BP_FlowTeleportTarget_C.CreateLODLoader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FlowTeleportTarget_C::CreateLODLoader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowTeleportTarget_C", "CreateLODLoader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlowTeleportTarget.BP_FlowTeleportTarget_C.CreateLevelLoader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStreamingVolumeUsage                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UWorld>>    InputPin2                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FlowTeleportTarget_C::CreateLevelLoader(EStreamingVolumeUsage InputPin, TArray<TSoftObjectPtr<class UWorld>>& InputPin2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowTeleportTarget_C", "CreateLevelLoader");

	Params::BP_FlowTeleportTarget_C_CreateLevelLoader Parms{};

	Parms.InputPin = InputPin;
	Parms.InputPin2 = std::move(InputPin2);

	UObject::ProcessEvent(Func, &Parms);

	InputPin2 = std::move(Parms.InputPin2);
}


// Function BP_FlowTeleportTarget.BP_FlowTeleportTarget_C.UpdateStreamingMethodForLoaderComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStreamingVolumeUsage                   Streaming_Method_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlowTeleportTarget_C::UpdateStreamingMethodForLoaderComponent(EStreamingVolumeUsage Streaming_Method_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowTeleportTarget_C", "UpdateStreamingMethodForLoaderComponent");

	Params::BP_FlowTeleportTarget_C_UpdateStreamingMethodForLoaderComponent Parms{};

	Parms.Streaming_Method_0 = Streaming_Method_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlowTeleportTarget.BP_FlowTeleportTarget_C.RemoveStreamingLoaderComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FlowTeleportTarget_C::RemoveStreamingLoaderComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowTeleportTarget_C", "RemoveStreamingLoaderComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlowTeleportTarget.BP_FlowTeleportTarget_C.AddStreamingLoaderComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStreamingVolumeUsage                   Streaming_Method_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UWorld>>    Levels_To_Not_Stream_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    PreloadLevels                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PreloadLODs                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FlowTeleportTarget_C::AddStreamingLoaderComponent(EStreamingVolumeUsage Streaming_Method_0, TArray<TSoftObjectPtr<class UWorld>>& Levels_To_Not_Stream_0, bool PreloadLevels, bool PreloadLODs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowTeleportTarget_C", "AddStreamingLoaderComponent");

	Params::BP_FlowTeleportTarget_C_AddStreamingLoaderComponent Parms{};

	Parms.Streaming_Method_0 = Streaming_Method_0;
	Parms.Levels_To_Not_Stream_0 = std::move(Levels_To_Not_Stream_0);
	Parms.PreloadLevels = PreloadLevels;
	Parms.PreloadLODs = PreloadLODs;

	UObject::ProcessEvent(Func, &Parms);

	Levels_To_Not_Stream_0 = std::move(Parms.Levels_To_Not_Stream_0);
}

}

