#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesGameplayAbilities

#include "Basic.hpp"

#include "PiecesGameplayAbilities_classes.hpp"
#include "PiecesGameplayAbilities_parameters.hpp"


namespace SDK
{

// Function PiecesGameplayAbilities.PiecesGameplayAbility.OnGiveAbility_GetAssetsToBeAsyncLoaded
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwnerActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSoftObjectPath>          AssetsToLoad                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPiecesGameplayAbility::OnGiveAbility_GetAssetsToBeAsyncLoaded(class AActor* OwnerActor, TArray<struct FSoftObjectPath>& AssetsToLoad) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesGameplayAbility", "OnGiveAbility_GetAssetsToBeAsyncLoaded");

	Params::PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.AssetsToLoad = std::move(AssetsToLoad);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	AssetsToLoad = std::move(Parms.AssetsToLoad);
}


// Function PiecesGameplayAbilities.AbilityTask_WaitMaxVelocity.CreateWaitMaxVelocity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 OwningAbility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MaximumMagnitude                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bVelocity2D                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMaxVelocity*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitMaxVelocity* UAbilityTask_WaitMaxVelocity::CreateWaitMaxVelocity(class UGameplayAbility* OwningAbility, float MaximumMagnitude, bool bVelocity2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitMaxVelocity", "CreateWaitMaxVelocity");

	Params::AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.MaximumMagnitude = MaximumMagnitude;
	Parms.bVelocity2D = bVelocity2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PiecesGameplayAbilities.AbilityTask_WaitMinVelocity.CreateWaitMinVelocity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 OwningAbility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MinimumMagnitude                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bVelocity2D                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMinVelocity*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitMinVelocity* UAbilityTask_WaitMinVelocity::CreateWaitMinVelocity(class UGameplayAbility* OwningAbility, float MinimumMagnitude, bool bVelocity2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitMinVelocity", "CreateWaitMinVelocity");

	Params::AbilityTask_WaitMinVelocity_CreateWaitMinVelocity Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.MinimumMagnitude = MinimumMagnitude;
	Parms.bVelocity2D = bVelocity2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PiecesGameplayAbilities.PiecesAbilitySystemComponent.PauseActiveGameplayEffects
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bPaused                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPiecesAbilitySystemComponent::PauseActiveGameplayEffects(const bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesAbilitySystemComponent", "PauseActiveGameplayEffects");

	Params::PiecesAbilitySystemComponent_PauseActiveGameplayEffects Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesGameplayAbilities.PiecesCustomTargetDataFiltersUtils.MakePiecesGameplayTargetDataFilterHandle
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayAbility*                 Ability                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPiecesGameplayTargetDataFilter  Filter                                                 (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle  ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTargetDataFilterHandle UPiecesCustomTargetDataFiltersUtils::MakePiecesGameplayTargetDataFilterHandle(const class UGameplayAbility* Ability, const struct FPiecesGameplayTargetDataFilter& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PiecesCustomTargetDataFiltersUtils", "MakePiecesGameplayTargetDataFilterHandle");

	Params::PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle Parms{};

	Parms.Ability = Ability;
	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
