#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BirdFlock_Area

#include "Basic.hpp"

#include "BP_BirdFlock_Area_classes.hpp"
#include "BP_BirdFlock_Area_parameters.hpp"


namespace SDK
{

// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.GetRandomRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BirdFlock_Area_C::GetRandomRotation(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "GetRandomRotation");

	Params::BP_BirdFlock_Area_C_GetRandomRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.GetRandomLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BirdFlock_Area_C::GetRandomLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "GetRandomLocation");

	Params::BP_BirdFlock_Area_C_GetRandomLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.SpawnBoidsInArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BirdFlock_Area_C::SpawnBoidsInArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "SpawnBoidsInArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BirdFlock_Area_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.CreateBoids
// (BlueprintEvent)

void ABP_BirdFlock_Area_C::CreateBoids()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "CreateBoids");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BirdFlock_Area.BP_BirdFlock_Area_C.ExecuteUbergraph_BP_BirdFlock_Area
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BirdFlock_Area_C::ExecuteUbergraph_BP_BirdFlock_Area(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BirdFlock_Area_C", "ExecuteUbergraph_BP_BirdFlock_Area");

	Params::BP_BirdFlock_Area_C_ExecuteUbergraph_BP_BirdFlock_Area Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
