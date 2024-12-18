#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_Eml

#include "Basic.hpp"

#include "ABP_PC_Eml_classes.hpp"
#include "ABP_PC_Eml_parameters.hpp"


namespace SDK
{

// Function ABP_PC_Eml.ABP_PC_Eml_C.Load animations
// (BlueprintCallable, BlueprintEvent)

void UABP_PC_Eml_C::Load_animations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Eml_C", "Load animations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC_Eml.ABP_PC_Eml_C.ExecuteUbergraph_ABP_PC_Eml
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC_Eml_C::ExecuteUbergraph_ABP_PC_Eml(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Eml_C", "ExecuteUbergraph_ABP_PC_Eml");

	Params::ABP_PC_Eml_C_ExecuteUbergraph_ABP_PC_Eml Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC_Eml.ABP_PC_Eml_C.GetDynamicsAlpha
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UABP_PC_Eml_C::GetDynamicsAlpha(const struct FGameplayTag& Key) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Eml_C", "GetDynamicsAlpha");

	Params::ABP_PC_Eml_C_GetDynamicsAlpha Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ABP_PC_Eml.ABP_PC_Eml_C.GetDynamicsAlpha_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UABP_PC_Eml_C::GetDynamicsAlpha_0(const struct FGameplayTag& Key) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC_Eml_C", "GetDynamicsAlpha_0");

	Params::ABP_PC_Eml_C_GetDynamicsAlpha_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

