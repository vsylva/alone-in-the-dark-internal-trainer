#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CemeteryCreature

#include "Basic.hpp"

#include "BP_CemeteryCreature_classes.hpp"
#include "BP_CemeteryCreature_parameters.hpp"


namespace SDK
{

// Function BP_CemeteryCreature.BP_CemeteryCreature_C.GetWakeupMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montageeee                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CemeteryCreature_C::GetWakeupMontage(class UAnimMontage** Montageeee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "GetWakeupMontage");

	Params::BP_CemeteryCreature_C_GetWakeupMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Montageeee != nullptr)
		*Montageeee = Parms.Montageeee;
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.getCemeteryCreatureType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECemeteryCreatureType                   CemeteryCreatureType_0                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CemeteryCreature_C::GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "getCemeteryCreatureType");

	Params::BP_CemeteryCreature_C_GetCemeteryCreatureType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CemeteryCreatureType_0 != nullptr)
		*CemeteryCreatureType_0 = Parms.CemeteryCreatureType_0;
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.InjectSpeedTestChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsInCombat                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CemeteryCreature_C::InjectSpeedTestChanges(bool bIsInCombat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "InjectSpeedTestChanges");

	Params::BP_CemeteryCreature_C_InjectSpeedTestChanges Parms{};

	Parms.bIsInCombat = bIsInCombat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.InitializeCreatureType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CemeteryCreature_C::InitializeCreatureType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "InitializeCreatureType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CemeteryCreature_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.SetCemeteryCreatureType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECemeteryCreatureType                   CreatureType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CemeteryCreature_C::SetCemeteryCreatureType(ECemeteryCreatureType CreatureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "SetCemeteryCreatureType");

	Params::BP_CemeteryCreature_C_SetCemeteryCreatureType Parms{};

	Parms.CreatureType = CreatureType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.OnCombatStateChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewIsInCombat                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CemeteryCreature_C::OnCombatStateChanged_Event_0(bool bNewIsInCombat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "OnCombatStateChanged_Event_0");

	Params::BP_CemeteryCreature_C_OnCombatStateChanged_Event_0 Parms{};

	Parms.bNewIsInCombat = bNewIsInCombat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.BeginPlaySpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_CemeteryCreature_C::BeginPlaySpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "BeginPlaySpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.BeginPlayOnce
// (BlueprintCallable, BlueprintEvent)

void ABP_CemeteryCreature_C::BeginPlayOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "BeginPlayOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CemeteryCreature.BP_CemeteryCreature_C.ExecuteUbergraph_BP_CemeteryCreature
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CemeteryCreature_C::ExecuteUbergraph_BP_CemeteryCreature(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_C", "ExecuteUbergraph_BP_CemeteryCreature");

	Params::BP_CemeteryCreature_C_ExecuteUbergraph_BP_CemeteryCreature Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
