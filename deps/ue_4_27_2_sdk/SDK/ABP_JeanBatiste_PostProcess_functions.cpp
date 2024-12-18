#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_JeanBatiste_PostProcess

#include "Basic.hpp"

#include "ABP_JeanBatiste_PostProcess_classes.hpp"
#include "ABP_JeanBatiste_PostProcess_parameters.hpp"


namespace SDK
{

// Function ABP_JeanBatiste_PostProcess.ABP_JeanBatiste_PostProcess_C.ExecuteUbergraph_ABP_JeanBatiste_PostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_JeanBatiste_PostProcess_C::ExecuteUbergraph_ABP_JeanBatiste_PostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_JeanBatiste_PostProcess_C", "ExecuteUbergraph_ABP_JeanBatiste_PostProcess");

	Params::ABP_JeanBatiste_PostProcess_C_ExecuteUbergraph_ABP_JeanBatiste_PostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_JeanBatiste_PostProcess.ABP_JeanBatiste_PostProcess_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_JeanBatiste_PostProcess_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_JeanBatiste_PostProcess_C", "AnimGraph");

	Params::ABP_JeanBatiste_PostProcess_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

