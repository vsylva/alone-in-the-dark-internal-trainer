#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_Edward_PostProcess

#include "Basic.hpp"

#include "ABP_PC_Edward_PostProcess_classes.hpp"
#include "ABP_PC_Edward_PostProcess_parameters.hpp"


namespace SDK
{

// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.Dynamics
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        DynamicsLayerInputPose                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   TieBlend_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Dynamics_0                                             (Parm, OutParm, NoDestructor)

void UABP_PC_Edward_PostProcess_C::Dynamics(const struct FPoseLink& DynamicsLayerInputPose, float TieBlend_0, struct FPoseLink* Dynamics_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "Dynamics");

	Params::ABP_PC_Edward_PostProcess_C_Dynamics Parms{};

	Parms.DynamicsLayerInputPose = std::move(DynamicsLayerInputPose);
	Parms.TieBlend_0 = TieBlend_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Dynamics_0 != nullptr)
		*Dynamics_0 = std::move(Parms.Dynamics_0);
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_PC_Edward_PostProcess_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "AnimGraph");

	Params::ABP_PC_Edward_PostProcess_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.GetRandomVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Magnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UABP_PC_Edward_PostProcess_C::GetRandomVector(float* Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "GetRandomVector");

	Params::ABP_PC_Edward_PostProcess_C_GetRandomVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Magnitude != nullptr)
		*Magnitude = Parms.Magnitude;

	return Parms.ReturnValue;
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.SlirreTest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Force                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_Edward_PostProcess_C::SlirreTest(float Offset, struct FVector* Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "SlirreTest");

	Params::ABP_PC_Edward_PostProcess_C_SlirreTest Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

	if (Force != nullptr)
		*Force = std::move(Parms.Force);
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_Edward_PostProcess_PiecesAnimGraphNode_RigidBody_55321AA646F14909BFC4A1B312F7D8F6
// (BlueprintEvent)

void UABP_PC_Edward_PostProcess_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_Edward_PostProcess_PiecesAnimGraphNode_RigidBody_55321AA646F14909BFC4A1B312F7D8F6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_Edward_PostProcess_PiecesAnimGraphNode_RigidBody_55321AA646F14909BFC4A1B312F7D8F6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_Edward_PostProcess_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "BlueprintUpdateAnimation");

	Params::ABP_PC_Edward_PostProcess_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC_Edward_PostProcess.ABP_PC_Edward_PostProcess_C.ExecuteUbergraph_ABP_PC_Edward_PostProcess
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_Edward_PostProcess_C::ExecuteUbergraph_ABP_PC_Edward_PostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Edward_PostProcess_C", "ExecuteUbergraph_ABP_PC_Edward_PostProcess");

	Params::ABP_PC_Edward_PostProcess_C_ExecuteUbergraph_ABP_PC_Edward_PostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

