#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitscanWeapon_Base

#include "Basic.hpp"

#include "BP_HitscanWeapon_Base_classes.hpp"
#include "BP_HitscanWeapon_Base_parameters.hpp"


namespace SDK
{

// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetWeaponType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeapons                                WeaponType_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::GetWeaponType(EWeapons* WeaponType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetWeaponType");

	Params::BP_HitscanWeapon_Base_C_GetWeaponType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType_0 != nullptr)
		*WeaponType_0 = Parms.WeaponType_0;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.SetCurrentAmmoCheckSaved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::SetCurrentAmmoCheckSaved(int32 NewAmmo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "SetCurrentAmmoCheckSaved");

	Params::BP_HitscanWeapon_Base_C_SetCurrentAmmoCheckSaved Parms{};

	Parms.NewAmmo = NewAmmo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetParentHandBoneName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RightHand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_HitscanWeapon_Base_C::GetParentHandBoneName(bool RightHand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetParentHandBoneName");

	Params::BP_HitscanWeapon_Base_C_GetParentHandBoneName Parms{};

	Parms.RightHand = RightHand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.TriggerMuzzleFlashParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::TriggerMuzzleFlashParticles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "TriggerMuzzleFlashParticles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.EnableMuzzleFlashLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::EnableMuzzleFlashLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "EnableMuzzleFlashLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.getReloadRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReloadRate                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::GetReloadRate(float* ReloadRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "getReloadRate");

	Params::BP_HitscanWeapon_Base_C_GetReloadRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReloadRate != nullptr)
		*ReloadRate = Parms.ReloadRate;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnInstigatorPossessed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::OnInstigatorPossessed(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnInstigatorPossessed");

	Params::BP_HitscanWeapon_Base_C_OnInstigatorPossessed Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.AddHeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::AddHeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "AddHeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.UpdateBarrelHeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::UpdateBarrelHeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "UpdateBarrelHeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.SpawnBulletTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_HitscanWeapon_Base_C::SpawnBulletTrail(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "SpawnBulletTrail");

	Params::BP_HitscanWeapon_Base_C_SpawnBulletTrail Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_HitscanWeapon_Base_C::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetMesh");

	Params::BP_HitscanWeapon_Base_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.AddSpreadBasedOnMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta_Seconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMoving                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HitscanWeapon_Base_C::AddSpreadBasedOnMovement(float Delta_Seconds, bool* bMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "AddSpreadBasedOnMovement");

	Params::BP_HitscanWeapon_Base_C_AddSpreadBasedOnMovement Parms{};

	Parms.Delta_Seconds = Delta_Seconds;

	UObject::ProcessEvent(Func, &Parms);

	if (bMoving != nullptr)
		*bMoving = Parms.bMoving;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.AddSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SpreadToAdd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::AddSpread(float SpreadToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "AddSpread");

	Params::BP_HitscanWeapon_Base_C_AddSpread Parms{};

	Parms.SpreadToAdd = SpreadToAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.UpdateSpreadAndCrosshairSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::UpdateSpreadAndCrosshairSize(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "UpdateSpreadAndCrosshairSize");

	Params::BP_HitscanWeapon_Base_C_UpdateSpreadAndCrosshairSize Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.SetupWeaponData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::SetupWeaponData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "SetupWeaponData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.CheatReload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::CheatReload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "CheatReload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.DisableMuzzleFlashLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::DisableMuzzleFlashLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "DisableMuzzleFlashLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.MuzzleFlashTImeline__FinishedFunc
// (BlueprintEvent)

void ABP_HitscanWeapon_Base_C::MuzzleFlashTImeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "MuzzleFlashTImeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.ResetBarrelHeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::ResetBarrelHeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "ResetBarrelHeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.MuzzleFlashTImeline__UpdateFunc
// (BlueprintEvent)

void ABP_HitscanWeapon_Base_C::MuzzleFlashTImeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "MuzzleFlashTImeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.LoadCompleteDelegate_BA66FBCE41A7518686CE3ABA0CA2CEC5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HitscanWeapon_Base_C::LoadCompleteDelegate_BA66FBCE41A7518686CE3ABA0CA2CEC5(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "LoadCompleteDelegate_BA66FBCE41A7518686CE3ABA0CA2CEC5");

	Params::BP_HitscanWeapon_Base_C_LoadCompleteDelegate_BA66FBCE41A7518686CE3ABA0CA2CEC5 Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.AddRecoilAimOffset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::AddRecoilAimOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "AddRecoilAimOffset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "ReceiveTick");

	Params::BP_HitscanWeapon_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.InstigatorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::InstigatorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "InstigatorDestroyed");

	Params::BP_HitscanWeapon_Base_C_InstigatorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnEffectFire
// (Event, Public, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::OnEffectFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnEffectFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnEffectImpact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       OutHit                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_HitscanWeapon_Base_C::OnEffectImpact(const struct FHitResult& OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnEffectImpact");

	Params::BP_HitscanWeapon_Base_C_OnEffectImpact Parms{};

	Parms.OutHit = std::move(OutHit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.LoadCompleteDelegate_F4C5A1CB49D346BD47EDFDB598E0ACB7
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HitscanWeapon_Base_C::LoadCompleteDelegate_F4C5A1CB49D346BD47EDFDB598E0ACB7(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "LoadCompleteDelegate_F4C5A1CB49D346BD47EDFDB598E0ACB7");

	Params::BP_HitscanWeapon_Base_C_LoadCompleteDelegate_F4C5A1CB49D346BD47EDFDB598E0ACB7 Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.TriggerWeaponShootVFX
// (Event, Protected, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::TriggerWeaponShootVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "TriggerWeaponShootVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnAimingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAiming                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HitscanWeapon_Base_C::OnAimingEvent(bool bIsAiming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnAimingEvent");

	Params::BP_HitscanWeapon_Base_C_OnAimingEvent Parms{};

	Parms.bIsAiming = bIsAiming;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.CheckWeaponUpgrades
// (BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::CheckWeaponUpgrades()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "CheckWeaponUpgrades");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.ApplyRecoil
// (Event, Public, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::ApplyRecoil()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "ApplyRecoil");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnUnequipEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOFWeaponActor*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::OnUnequipEvent(class AOFWeaponActor* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnUnequipEvent");

	Params::BP_HitscanWeapon_Base_C_OnUnequipEvent Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.TriggerMuzzleFlash
// (BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::TriggerMuzzleFlash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "TriggerMuzzleFlash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnEquipEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOFWeaponActor*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::OnEquipEvent(class AOFWeaponActor* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnEquipEvent");

	Params::BP_HitscanWeapon_Base_C_OnEquipEvent Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnHealthChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewCurrentHealth                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            EventTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HitscanWeapon_Base_C::OnHealthChanged(float NewCurrentHealth, float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnHealthChanged");

	Params::BP_HitscanWeapon_Base_C_OnHealthChanged Parms{};

	Parms.NewCurrentHealth = NewCurrentHealth;
	Parms.DeltaValue = DeltaValue;
	Parms.EventTags = std::move(EventTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.OnFireEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::OnFireEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "OnFireEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.ExecuteUbergraph_BP_HitscanWeapon_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::ExecuteUbergraph_BP_HitscanWeapon_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "ExecuteUbergraph_BP_HitscanWeapon_Base");

	Params::BP_HitscanWeapon_Base_C_ExecuteUbergraph_BP_HitscanWeapon_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.UpgradedWeaponEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_HitscanWeapon_Base_C::UpgradedWeaponEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "UpgradedWeaponEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetCurrentSpreadPixelAdjustment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   Pixels                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Screen_Percentage                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::GetCurrentSpreadPixelAdjustment(float* Pixels, float* Screen_Percentage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetCurrentSpreadPixelAdjustment");

	Params::BP_HitscanWeapon_Base_C_GetCurrentSpreadPixelAdjustment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

	if (Screen_Percentage != nullptr)
		*Screen_Percentage = Parms.Screen_Percentage;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetCurrentSpreadPixelAdjustmentInternal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   Pixels                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Screen_Percentage                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::GetCurrentSpreadPixelAdjustmentInternal(float* Pixels, float* Screen_Percentage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetCurrentSpreadPixelAdjustmentInternal");

	Params::BP_HitscanWeapon_Base_C_GetCurrentSpreadPixelAdjustmentInternal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

	if (Screen_Percentage != nullptr)
		*Screen_Percentage = Parms.Screen_Percentage;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetTraceParameters
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          Start                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          End                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HitscanWeapon_Base_C::GetTraceParameters(struct FVector* Start, struct FVector* End, struct FVector* Direction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetTraceParameters");

	Params::BP_HitscanWeapon_Base_C_GetTraceParameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	if (End != nullptr)
		*End = std::move(Parms.End);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetTraceEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_HitscanWeapon_Base_C::GetTraceEnd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetTraceEnd");

	Params::BP_HitscanWeapon_Base_C_GetTraceEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.GetTraceStart
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_HitscanWeapon_Base_C::GetTraceStart() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "GetTraceStart");

	Params::BP_HitscanWeapon_Base_C_GetTraceStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HitscanWeapon_Base.BP_HitscanWeapon_Base_C.TraceForTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FHitResult>               OutHit                                                 (Parm, OutParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HitscanWeapon_Base_C::TraceForTarget(TArray<struct FHitResult>* OutHit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitscanWeapon_Base_C", "TraceForTarget");

	Params::BP_HitscanWeapon_Base_C_TraceForTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;
}

}
