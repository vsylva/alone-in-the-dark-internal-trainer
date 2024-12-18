#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack_Base_Hitscan

#include "Basic.hpp"

#include "GA_Attack_Base_Hitscan_classes.hpp"
#include "GA_Attack_Base_Hitscan_parameters.hpp"


namespace SDK
{

// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.ExecuteUbergraph_GA_Attack_Base_Hitscan
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::ExecuteUbergraph_GA_Attack_Base_Hitscan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "ExecuteUbergraph_GA_Attack_Base_Hitscan");

	Params::GA_Attack_Base_Hitscan_C_ExecuteUbergraph_GA_Attack_Base_Hitscan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.OnFireFailedDueToImmunity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ImmuneActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::OnFireFailedDueToImmunity(class AActor* ImmuneActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "OnFireFailedDueToImmunity");

	Params::GA_Attack_Base_Hitscan_C_OnFireFailedDueToImmunity Parms{};

	Parms.ImmuneActor = ImmuneActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::PlayAttackMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "PlayAttackMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.updateBossHealthData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentHealthPercentage                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::UpdateBossHealthData(float CurrentHealthPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "updateBossHealthData");

	Params::GA_Attack_Base_Hitscan_C_UpdateBossHealthData Parms{};

	Parms.CurrentHealthPercentage = CurrentHealthPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.SetMostSuitableMeleeSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAnimationMontageIdentifier             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::SetMostSuitableMeleeSection(EAnimationMontageIdentifier Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "SetMostSuitableMeleeSection");

	Params::GA_Attack_Base_Hitscan_C_SetMostSuitableMeleeSection Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.MoveToGrappleLocatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Grapple_Location                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::MoveToGrappleLocatio(const struct FVector& Grapple_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "MoveToGrappleLocatio");

	Params::GA_Attack_Base_Hitscan_C_MoveToGrappleLocatio Parms{};

	Parms.Grapple_Location = std::move(Grapple_Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.ControlRotationFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FocusTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::ControlRotationFocus(class AActor* FocusTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "ControlRotationFocus");

	Params::GA_Attack_Base_Hitscan_C_ControlRotationFocus Parms{};

	Parms.FocusTarget = FocusTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.MeleeAttackTranslate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EndVector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::MeleeAttackTranslate(const struct FVector& StartVector, const struct FVector& EndVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "MeleeAttackTranslate");

	Params::GA_Attack_Base_Hitscan_C_MeleeAttackTranslate Parms{};

	Parms.StartVector = std::move(StartVector);
	Parms.EndVector = std::move(EndVector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.LaserHit
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::LaserHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "LaserHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.QuicktimeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentProgress                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::QuicktimeInput(float CurrentProgress, float MaxProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "QuicktimeInput");

	Params::GA_Attack_Base_Hitscan_C_QuicktimeInput Parms{};

	Parms.CurrentProgress = CurrentProgress;
	Parms.MaxProgress = MaxProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.QuicktimeSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::QuicktimeSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "QuicktimeSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.SetCemeteryCreatureType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECemeteryCreatureType                   CreatureType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::SetCemeteryCreatureType(ECemeteryCreatureType CreatureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "SetCemeteryCreatureType");

	Params::GA_Attack_Base_Hitscan_C_SetCemeteryCreatureType Parms{};

	Parms.CreatureType = CreatureType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.MeleeAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::MeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "MeleeAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.Removed_83B147794684BB5F49EC2EA2506191C8
// (BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::Removed_83B147794684BB5F49EC2EA2506191C8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "Removed_83B147794684BB5F49EC2EA2506191C8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.ModifyDamageFromUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ModifiedDamage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::ModifyDamageFromUpgrades(float* ModifiedDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "ModifyDamageFromUpgrades");

	Params::GA_Attack_Base_Hitscan_C_ModifyDamageFromUpgrades Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedDamage != nullptr)
		*ModifiedDamage = Parms.ModifiedDamage;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.SetMontageToPlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::SetMontageToPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "SetMontageToPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.Play Fire Force Feedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::Play_Fire_Force_Feedback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "Play Fire Force Feedback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.MakeEffectSpecFromTargetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UGameplayEffect>      GameplayEffectClass                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle        Effect_Spec_Handle                                     (Parm, OutParm)
// struct FGameplayEffectContextHandle     Effect_Context_Handle                                  (Parm, OutParm)

void UGA_Attack_Base_Hitscan_C::MakeEffectSpecFromTargetData(TSubclassOf<class UGameplayEffect> GameplayEffectClass, const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Level, struct FGameplayEffectSpecHandle* Effect_Spec_Handle, struct FGameplayEffectContextHandle* Effect_Context_Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "MakeEffectSpecFromTargetData");

	Params::GA_Attack_Base_Hitscan_C_MakeEffectSpecFromTargetData Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.TargetData = std::move(TargetData);
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Spec_Handle != nullptr)
		*Effect_Spec_Handle = std::move(Parms.Effect_Spec_Handle);

	if (Effect_Context_Handle != nullptr)
		*Effect_Context_Handle = std::move(Parms.Effect_Context_Handle);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.Play Gun Click
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Attack_Base_Hitscan_C::Play_Gun_Click()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "Play Gun Click");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.GetMostSuitableMeleeSection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAnimationMontageIdentifier             Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetMostSuitableMeleeSection(EAnimationMontageIdentifier* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "GetMostSuitableMeleeSection");

	Params::GA_Attack_Base_Hitscan_C_GetMostSuitableMeleeSection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.getAggroState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Aggro                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::GetAggroState(bool* Aggro)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "getAggroState");

	Params::GA_Attack_Base_Hitscan_C_GetAggroState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Aggro != nullptr)
		*Aggro = Parms.Aggro;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.setNewAggro
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewAggro                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::SetNewAggro(bool NewAggro, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "setNewAggro");

	Params::GA_Attack_Base_Hitscan_C_SetNewAggro Parms{};

	Parms.NewAggro = NewAggro;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.IncrementJac3ProneCounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ProneCounter                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::IncrementJac3ProneCounter(int32* ProneCounter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "IncrementJac3ProneCounter");

	Params::GA_Attack_Base_Hitscan_C_IncrementJac3ProneCounter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ProneCounter != nullptr)
		*ProneCounter = Parms.ProneCounter;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.GetCharacterSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterSize                          Size_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetCharacterSize(ECharacterSize* Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "GetCharacterSize");

	Params::GA_Attack_Base_Hitscan_C_GetCharacterSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Size_0 != nullptr)
		*Size_0 = Parms.Size_0;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.getCemeteryCreatureType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECemeteryCreatureType                   CemeteryCreatureType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "getCemeteryCreatureType");

	Params::GA_Attack_Base_Hitscan_C_GetCemeteryCreatureType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CemeteryCreatureType != nullptr)
		*CemeteryCreatureType = Parms.CemeteryCreatureType;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.setCanCirculate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanCirculate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::SetCanCirculate(bool CanCirculate, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "setCanCirculate");

	Params::GA_Attack_Base_Hitscan_C_SetCanCirculate Parms{};

	Parms.CanCirculate = CanCirculate;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.setStartOnWall
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StartOnWall                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::SetStartOnWall(bool StartOnWall, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "setStartOnWall");

	Params::GA_Attack_Base_Hitscan_C_SetStartOnWall Parms{};

	Parms.StartOnWall = StartOnWall;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.AimedAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::AimedAt(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "AimedAt");

	Params::GA_Attack_Base_Hitscan_C_AimedAt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.GetUpgradeComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponUpgradeComponent_C*        UpgradeComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetUpgradeComponent(class UWeaponUpgradeComponent_C** UpgradeComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "GetUpgradeComponent");

	Params::GA_Attack_Base_Hitscan_C_GetUpgradeComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeComponent != nullptr)
		*UpgradeComponent = Parms.UpgradeComponent;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.FlashlightHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::FlashlightHit(float Distance, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "FlashlightHit");

	Params::GA_Attack_Base_Hitscan_C_FlashlightHit Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.hitscanWeaponFired
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::HitscanWeaponFired(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "hitscanWeaponFired");

	Params::GA_Attack_Base_Hitscan_C_HitscanWeaponFired Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.setOrderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::SetOrderTarget(const struct FVector& Location, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "setOrderTarget");

	Params::GA_Attack_Base_Hitscan_C_SetOrderTarget Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.setStartBurrowed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    beginBurrowed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_Base_Hitscan_C::SetStartBurrowed(bool beginBurrowed, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "setStartBurrowed");

	Params::GA_Attack_Base_Hitscan_C_SetStartBurrowed Parms{};

	Parms.beginBurrowed = beginBurrowed;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Attack_Base_Hitscan_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "K2_CanActivateAbility");

	Params::GA_Attack_Base_Hitscan_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.GetSourceWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOFWeaponActor*                   WeaponActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetSourceWeapon(class AOFWeaponActor** WeaponActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "GetSourceWeapon");

	Params::GA_Attack_Base_Hitscan_C_GetSourceWeapon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponActor != nullptr)
		*WeaponActor = Parms.WeaponActor;
}


// Function GA_Attack_Base_Hitscan.GA_Attack_Base_Hitscan_C.GetSourceHitscanWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AHitscanWeaponActor*              AsHitscan_Weapon_Actor                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_Base_Hitscan_C::GetSourceHitscanWeapon(class AHitscanWeaponActor** AsHitscan_Weapon_Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_Base_Hitscan_C", "GetSourceHitscanWeapon");

	Params::GA_Attack_Base_Hitscan_C_GetSourceHitscanWeapon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsHitscan_Weapon_Actor != nullptr)
		*AsHitscan_Weapon_Actor = Parms.AsHitscan_Weapon_Actor;
}

}

