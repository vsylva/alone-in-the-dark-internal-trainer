#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCharacterAnimationInterface

#include "Basic.hpp"

#include "BP_PlayerCharacterAnimationInterface_classes.hpp"
#include "BP_PlayerCharacterAnimationInterface_parameters.hpp"


namespace SDK
{

// Function BP_PlayerCharacterAnimationInterface.BP_PlayerCharacterAnimationInterface_C.SuicideMoveToFail
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_PlayerCharacterAnimationInterface_C::SuicideMoveToFail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacterAnimationInterface_C", "SuicideMoveToFail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacterAnimationInterface.BP_PlayerCharacterAnimationInterface_C.SuicideMoveToSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_PlayerCharacterAnimationInterface_C::SuicideMoveToSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacterAnimationInterface_C", "SuicideMoveToSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacterAnimationInterface.BP_PlayerCharacterAnimationInterface_C.SetCanBlendToTurnInPlace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_PlayerCharacterAnimationInterface_C::SetCanBlendToTurnInPlace(bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacterAnimationInterface_C", "SetCanBlendToTurnInPlace");

	Params::BP_PlayerCharacterAnimationInterface_C_SetCanBlendToTurnInPlace Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacterAnimationInterface.BP_PlayerCharacterAnimationInterface_C.StartHeadReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_PlayerCharacterAnimationInterface_C::StartHeadReaction(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacterAnimationInterface_C", "StartHeadReaction");

	Params::BP_PlayerCharacterAnimationInterface_C_StartHeadReaction Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacterAnimationInterface.BP_PlayerCharacterAnimationInterface_C.GetContextualMovementCharacterData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_PlayerCharacterContextualMovementAnimations_C*Animations                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPoseMatchingProfileDataAsset*    PoseMatchingProfile                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_PlayerCharacterAnimationInterface_C::GetContextualMovementCharacterData(class UBP_PlayerCharacterContextualMovementAnimations_C** Animations, class UPoseMatchingProfileDataAsset** PoseMatchingProfile) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacterAnimationInterface_C", "GetContextualMovementCharacterData");

	Params::BP_PlayerCharacterAnimationInterface_C_GetContextualMovementCharacterData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Animations != nullptr)
		*Animations = Parms.Animations;

	if (PoseMatchingProfile != nullptr)
		*PoseMatchingProfile = Parms.PoseMatchingProfile;
}

}
