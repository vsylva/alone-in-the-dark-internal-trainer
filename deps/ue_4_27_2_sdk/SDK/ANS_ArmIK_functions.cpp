#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_ArmIK

#include "Basic.hpp"

#include "ANS_ArmIK_classes.hpp"
#include "ANS_ArmIK_parameters.hpp"


namespace SDK
{

// Function ANS_ArmIK.ANS_ArmIK_C.GetReferenceAndCompensationData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimSequenceBase*                Sequence                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmIKReferenceTarget            ArmIKReferenceTarget                                   (Parm, OutParm, NoDestructor)
// struct FArmIKCompensationData           ArmIKCompensationData                                  (Parm, OutParm, NoDestructor)

void UANS_ArmIK_C::GetReferenceAndCompensationData(class UAnimSequenceBase* Sequence, class FName BoneName, const class UAnimInstance* AnimInstance, class USkeletalMeshComponent* Mesh, struct FArmIKReferenceTarget* ArmIKReferenceTarget, struct FArmIKCompensationData* ArmIKCompensationData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANS_ArmIK_C", "GetReferenceAndCompensationData");

	Params::ANS_ArmIK_C_GetReferenceAndCompensationData Parms{};

	Parms.Sequence = Sequence;
	Parms.BoneName = BoneName;
	Parms.AnimInstance = AnimInstance;
	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (ArmIKReferenceTarget != nullptr)
		*ArmIKReferenceTarget = std::move(Parms.ArmIKReferenceTarget);

	if (ArmIKCompensationData != nullptr)
		*ArmIKCompensationData = std::move(Parms.ArmIKCompensationData);
}


// Function ANS_ArmIK.ANS_ArmIK_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UANS_ArmIK_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANS_ArmIK_C", "Received_NotifyEnd");

	Params::ANS_ArmIK_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ANS_ArmIK.ANS_ArmIK_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UANS_ArmIK_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANS_ArmIK_C", "Received_NotifyBegin");

	Params::ANS_ArmIK_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
