#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_ContextualTraverse_Squeeze

#include "Basic.hpp"

#include "ABP_PC_ContextualTraverse_Squeeze_classes.hpp"
#include "ABP_PC_ContextualTraverse_Squeeze_parameters.hpp"


namespace SDK
{

// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.ContextualMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        ContextualMovementInputPose                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ContextualMovement_0                                   (Parm, OutParm, NoDestructor)

void UABP_PC_ContextualTraverse_Squeeze_C::ContextualMovement(const struct FPoseLink& ContextualMovementInputPose, struct FPoseLink* ContextualMovement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "ContextualMovement");

	Params::ABP_PC_ContextualTraverse_Squeeze_C_ContextualMovement Parms{};

	Parms.ContextualMovementInputPose = std::move(ContextualMovementInputPose);

	UObject::ProcessEvent(Func, &Parms);

	if (ContextualMovement_0 != nullptr)
		*ContextualMovement_0 = std::move(Parms.ContextualMovement_0);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_PC_ContextualTraverse_Squeeze_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "AnimGraph");

	Params::ABP_PC_ContextualTraverse_Squeeze_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_TransitionResult_7A9F8DE14DEC7650A74187803D6CC97E
// (BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_TransitionResult_7A9F8DE14DEC7650A74187803D6CC97E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_TransitionResult_7A9F8DE14DEC7650A74187803D6CC97E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_BlendSpacePlayer_B65A6DE74663886CA52BBBAA6BD103D4
// (BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_BlendSpacePlayer_B65A6DE74663886CA52BBBAA6BD103D4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_BlendSpacePlayer_B65A6DE74663886CA52BBBAA6BD103D4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_SequencePlayer_FC80D8D544AEFB01F156E29534FE910E
// (BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_SequencePlayer_FC80D8D544AEFB01F156E29534FE910E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze_AnimGraphNode_SequencePlayer_FC80D8D544AEFB01F156E29534FE910E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_ContextualTraverse_Squeeze_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "BlueprintUpdateAnimation");

	Params::ABP_PC_ContextualTraverse_Squeeze_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.AnimNotify_EndTraverse
// (BlueprintCallable, BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::AnimNotify_EndTraverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "AnimNotify_EndTraverse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_ContextualTraverse_Squeeze_C::ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze");

	Params::ABP_PC_ContextualTraverse_Squeeze_C_ExecuteUbergraph_ABP_PC_ContextualTraverse_Squeeze Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC_ContextualTraverse_Squeeze.ABP_PC_ContextualTraverse_Squeeze_C.EndTraverse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UABP_PC_ContextualTraverse_Squeeze_C::EndTraverse__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_ContextualTraverse_Squeeze_C", "EndTraverse__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
