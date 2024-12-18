#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeleeWeapon

#include "Basic.hpp"

#include "BP_MeleeWeapon_classes.hpp"
#include "BP_MeleeWeapon_parameters.hpp"


namespace SDK
{

// Function BP_MeleeWeapon.BP_MeleeWeapon_C.IsTwoHanded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MeleeWeapon_C::IsTwoHanded(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_C", "IsTwoHanded");

	Params::BP_MeleeWeapon_C_IsTwoHanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_MeleeWeapon.BP_MeleeWeapon_C.SetTickForMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeapon_C::SetTickForMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_C", "SetTickForMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon.BP_MeleeWeapon_C.GetMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_MeleeWeapon_C::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_C", "GetMesh");

	Params::BP_MeleeWeapon_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeapon.BP_MeleeWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MeleeWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon.BP_MeleeWeapon_C.ExecuteUbergraph_BP_MeleeWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeleeWeapon_C::ExecuteUbergraph_BP_MeleeWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_C", "ExecuteUbergraph_BP_MeleeWeapon");

	Params::BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

