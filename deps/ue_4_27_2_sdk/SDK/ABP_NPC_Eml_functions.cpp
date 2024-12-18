#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Eml

#include "Basic.hpp"

#include "ABP_NPC_Eml_classes.hpp"
#include "ABP_NPC_Eml_parameters.hpp"


namespace SDK
{

// Function ABP_NPC_Eml.ABP_NPC_Eml_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_NPC_Eml_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "AnimGraph");

	Params::ABP_NPC_Eml_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.GetFocusPointOnCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UABP_NPC_Eml_C::GetFocusPointOnCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "GetFocusPointOnCharacter");

	Params::ABP_NPC_Eml_C_GetFocusPointOnCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.SetBatisteLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCLocation_Batiste                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::SetBatisteLocation(ENPCLocation_Batiste Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "SetBatisteLocation");

	Params::ABP_NPC_Eml_C_SetBatisteLocation Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.SetRuthLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCLocation_Ruth                       Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::SetRuthLocation(ENPCLocation_Ruth Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "SetRuthLocation");

	Params::ABP_NPC_Eml_C_SetRuthLocation Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.SetGraceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCLocation_Grace                      Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::SetGraceLocation(ENPCLocation_Grace Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "SetGraceLocation");

	Params::ABP_NPC_Eml_C_SetGraceLocation Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Eml_AnimGraphNode_RotationOffsetBlendSpace_B408CD97403E8991182E2E87CF4768B4
// (BlueprintEvent)

void UABP_NPC_Eml_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Eml_AnimGraphNode_RotationOffsetBlendSpace_B408CD97403E8991182E2E87CF4768B4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Eml_AnimGraphNode_RotationOffsetBlendSpace_B408CD97403E8991182E2E87CF4768B4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "BlueprintUpdateAnimation");

	Params::ABP_NPC_Eml_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.SetGraysAptLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCGrayAptLocation                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::SetGraysAptLocation(ENPCGrayAptLocation Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "SetGraysAptLocation");

	Params::ABP_NPC_Eml_C_SetGraysAptLocation Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_Eml.ABP_NPC_Eml_C.ExecuteUbergraph_ABP_NPC_Eml
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Eml_C::ExecuteUbergraph_ABP_NPC_Eml(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Eml_C", "ExecuteUbergraph_ABP_NPC_Eml");

	Params::ABP_NPC_Eml_C_ExecuteUbergraph_ABP_NPC_Eml Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

