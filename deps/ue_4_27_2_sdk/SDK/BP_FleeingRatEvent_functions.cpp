#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FleeingRatEvent

#include "Basic.hpp"

#include "BP_FleeingRatEvent_classes.hpp"
#include "BP_FleeingRatEvent_parameters.hpp"


namespace SDK
{

// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.InitializeTriggerBox
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::InitializeTriggerBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "InitializeTriggerBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.AlignRotationWithMoveDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::AlignRotationWithMoveDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "AlignRotationWithMoveDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.Align Rotation with Surface and Move Dir
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::Align_Rotation_with_Surface_and_Move_Dir()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "Align Rotation with Surface and Move Dir");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.DebugDrawLineWithDot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DotSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LineLength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Thickness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::DebugDrawLineWithDot(const struct FVector& Position, const struct FVector& Direction, float DotSize, float LineLength, float Thickness, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "DebugDrawLineWithDot");

	Params::BP_FleeingRatEvent_C_DebugDrawLineWithDot Parms{};

	Parms.Position = std::move(Position);
	Parms.Direction = std::move(Direction);
	Parms.DotSize = DotSize;
	Parms.LineLength = LineLength;
	Parms.Thickness = Thickness;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.DebugTurnSlowdown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::DebugTurnSlowdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "DebugTurnSlowdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.DebugRatTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::DebugRatTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "DebugRatTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.UpdateSplineProgress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::UpdateSplineProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "UpdateSplineProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.Predict Base Move Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Acceleration_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_FleeingRatEvent_C::Predict_Base_Move_Speed(float Acceleration_0, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "Predict Base Move Speed");

	Params::BP_FleeingRatEvent_C_Predict_Base_Move_Speed Parms{};

	Parms.Acceleration_0 = Acceleration_0;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.ApplyMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::ApplyMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "ApplyMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.SetVelocity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::SetVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "SetVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.CheckWantedMoveLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WantedMoveLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::CheckWantedMoveLocation(const struct FVector& WantedMoveLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "CheckWantedMoveLocation");

	Params::BP_FleeingRatEvent_C_CheckWantedMoveLocation Parms{};

	Parms.WantedMoveLocation = std::move(WantedMoveLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.PredictMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PredictMoveLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::PredictMovement(struct FVector* PredictMoveLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "PredictMovement");

	Params::BP_FleeingRatEvent_C_PredictMovement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PredictMoveLocation != nullptr)
		*PredictMoveLocation = std::move(Parms.PredictMoveLocation);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.CheckForGround
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_FleeingRatEvent_C::CheckForGround(const struct FVector& Location, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "CheckForGround");

	Params::BP_FleeingRatEvent_C_CheckForGround Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.GetRatVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Velocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::GetRatVelocity(struct FVector* Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "GetRatVelocity");

	Params::BP_FleeingRatEvent_C_GetRatVelocity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "ReceiveTick");

	Params::BP_FleeingRatEvent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.TriggerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::TriggerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "TriggerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.BndEvt__BP_FleeingRatEvent_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_FleeingRatEvent_C::BndEvt__BP_FleeingRatEvent_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "BndEvt__BP_FleeingRatEvent_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_FleeingRatEvent_C_BndEvt__BP_FleeingRatEvent_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FleeingRatEvent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.GetMaxSplineDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_FleeingRatEvent_C::GetMaxSplineDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "GetMaxSplineDistance");

	Params::BP_FleeingRatEvent_C_GetMaxSplineDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.WeaponHit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_FleeingRatEvent_C::WeaponHit(class AActor* Weapon, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "WeaponHit");

	Params::BP_FleeingRatEvent_C_WeaponHit Parms{};

	Parms.Weapon = Weapon;
	Parms.EventTag = std::move(EventTag);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.ExecuteUbergraph_BP_FleeingRatEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FleeingRatEvent_C::ExecuteUbergraph_BP_FleeingRatEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "ExecuteUbergraph_BP_FleeingRatEvent");

	Params::BP_FleeingRatEvent_C_ExecuteUbergraph_BP_FleeingRatEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FleeingRatEvent.BP_FleeingRatEvent_C.RatEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FleeingRatEvent_C::RatEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FleeingRatEvent_C", "RatEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
