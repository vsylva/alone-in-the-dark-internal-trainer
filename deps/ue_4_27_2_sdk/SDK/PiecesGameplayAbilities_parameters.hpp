#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesGameplayAbilities

#include "Basic.hpp"

#include "PiecesGameplayAbilities_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PiecesGameplayAbilities.PiecesGameplayAbility.OnGiveAbility_GetAssetsToBeAsyncLoaded
// 0x0018 (0x0018 - 0x0000)
struct PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                AssetsToLoad;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded) == 0x000008, "Wrong alignment on PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded");
static_assert(sizeof(PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded) == 0x000018, "Wrong size on PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded");
static_assert(offsetof(PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded, OwnerActor) == 0x000000, "Member 'PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded::OwnerActor' has a wrong offset!");
static_assert(offsetof(PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded, AssetsToLoad) == 0x000008, "Member 'PiecesGameplayAbility_OnGiveAbility_GetAssetsToBeAsyncLoaded::AssetsToLoad' has a wrong offset!");

// Function PiecesGameplayAbilities.AbilityTask_WaitMaxVelocity.CreateWaitMaxVelocity
// 0x0018 (0x0018 - 0x0000)
struct AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity final
{
public:
	class UGameplayAbility*                       OwningAbility;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumMagnitude;                                  // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVelocity2D;                                       // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMaxVelocity*           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity) == 0x000008, "Wrong alignment on AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity");
static_assert(sizeof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity) == 0x000018, "Wrong size on AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity");
static_assert(offsetof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity, OwningAbility) == 0x000000, "Member 'AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity::OwningAbility' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity, MaximumMagnitude) == 0x000008, "Member 'AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity::MaximumMagnitude' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity, bVelocity2D) == 0x00000C, "Member 'AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity::bVelocity2D' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity, ReturnValue) == 0x000010, "Member 'AbilityTask_WaitMaxVelocity_CreateWaitMaxVelocity::ReturnValue' has a wrong offset!");

// Function PiecesGameplayAbilities.AbilityTask_WaitMinVelocity.CreateWaitMinVelocity
// 0x0018 (0x0018 - 0x0000)
struct AbilityTask_WaitMinVelocity_CreateWaitMinVelocity final
{
public:
	class UGameplayAbility*                       OwningAbility;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumMagnitude;                                  // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVelocity2D;                                       // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMinVelocity*           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity) == 0x000008, "Wrong alignment on AbilityTask_WaitMinVelocity_CreateWaitMinVelocity");
static_assert(sizeof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity) == 0x000018, "Wrong size on AbilityTask_WaitMinVelocity_CreateWaitMinVelocity");
static_assert(offsetof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity, OwningAbility) == 0x000000, "Member 'AbilityTask_WaitMinVelocity_CreateWaitMinVelocity::OwningAbility' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity, MinimumMagnitude) == 0x000008, "Member 'AbilityTask_WaitMinVelocity_CreateWaitMinVelocity::MinimumMagnitude' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity, bVelocity2D) == 0x00000C, "Member 'AbilityTask_WaitMinVelocity_CreateWaitMinVelocity::bVelocity2D' has a wrong offset!");
static_assert(offsetof(AbilityTask_WaitMinVelocity_CreateWaitMinVelocity, ReturnValue) == 0x000010, "Member 'AbilityTask_WaitMinVelocity_CreateWaitMinVelocity::ReturnValue' has a wrong offset!");

// Function PiecesGameplayAbilities.PiecesAbilitySystemComponent.PauseActiveGameplayEffects
// 0x0001 (0x0001 - 0x0000)
struct PiecesAbilitySystemComponent_PauseActiveGameplayEffects final
{
public:
	bool                                          bPaused;                                           // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesAbilitySystemComponent_PauseActiveGameplayEffects) == 0x000001, "Wrong alignment on PiecesAbilitySystemComponent_PauseActiveGameplayEffects");
static_assert(sizeof(PiecesAbilitySystemComponent_PauseActiveGameplayEffects) == 0x000001, "Wrong size on PiecesAbilitySystemComponent_PauseActiveGameplayEffects");
static_assert(offsetof(PiecesAbilitySystemComponent_PauseActiveGameplayEffects, bPaused) == 0x000000, "Member 'PiecesAbilitySystemComponent_PauseActiveGameplayEffects::bPaused' has a wrong offset!");

// Function PiecesGameplayAbilities.PiecesCustomTargetDataFiltersUtils.MakePiecesGameplayTargetDataFilterHandle
// 0x0088 (0x0088 - 0x0000)
struct PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle final
{
public:
	const class UGameplayAbility*                 Ability;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPiecesGameplayTargetDataFilter        Filter;                                            // 0x0008(0x0070)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle        ReturnValue;                                       // 0x0078(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle) == 0x000008, "Wrong alignment on PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle");
static_assert(sizeof(PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle) == 0x000088, "Wrong size on PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle");
static_assert(offsetof(PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle, Ability) == 0x000000, "Member 'PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle::Ability' has a wrong offset!");
static_assert(offsetof(PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle, Filter) == 0x000008, "Member 'PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle::Filter' has a wrong offset!");
static_assert(offsetof(PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle, ReturnValue) == 0x000078, "Member 'PiecesCustomTargetDataFiltersUtils_MakePiecesGameplayTargetDataFilterHandle::ReturnValue' has a wrong offset!");

}
