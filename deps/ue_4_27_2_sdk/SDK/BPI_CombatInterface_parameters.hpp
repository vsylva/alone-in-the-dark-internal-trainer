#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CombatInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CharacterSize_structs.hpp"
#include "AnimationMontageIdentifier_structs.hpp"
#include "CemeteryCreatureType_structs.hpp"


namespace SDK::Params
{

// Function BPI_CombatInterface.BPI_CombatInterface_C.setStartBurrowed
// 0x0002 (0x0002 - 0x0000)
struct BPI_CombatInterface_C_SetStartBurrowed final
{
public:
	bool                                          beginBurrowed;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_SetStartBurrowed) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetStartBurrowed");
static_assert(sizeof(BPI_CombatInterface_C_SetStartBurrowed) == 0x000002, "Wrong size on BPI_CombatInterface_C_SetStartBurrowed");
static_assert(offsetof(BPI_CombatInterface_C_SetStartBurrowed, beginBurrowed) == 0x000000, "Member 'BPI_CombatInterface_C_SetStartBurrowed::beginBurrowed' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_SetStartBurrowed, Success) == 0x000001, "Member 'BPI_CombatInterface_C_SetStartBurrowed::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.setOrderTarget
// 0x0010 (0x0010 - 0x0000)
struct BPI_CombatInterface_C_SetOrderTarget final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_SetOrderTarget) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_SetOrderTarget");
static_assert(sizeof(BPI_CombatInterface_C_SetOrderTarget) == 0x000010, "Wrong size on BPI_CombatInterface_C_SetOrderTarget");
static_assert(offsetof(BPI_CombatInterface_C_SetOrderTarget, Location) == 0x000000, "Member 'BPI_CombatInterface_C_SetOrderTarget::Location' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_SetOrderTarget, Success) == 0x00000C, "Member 'BPI_CombatInterface_C_SetOrderTarget::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.updateBossHealthData
// 0x0004 (0x0004 - 0x0000)
struct BPI_CombatInterface_C_UpdateBossHealthData final
{
public:
	float                                         CurrentHealthPercentage;                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_UpdateBossHealthData) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_UpdateBossHealthData");
static_assert(sizeof(BPI_CombatInterface_C_UpdateBossHealthData) == 0x000004, "Wrong size on BPI_CombatInterface_C_UpdateBossHealthData");
static_assert(offsetof(BPI_CombatInterface_C_UpdateBossHealthData, CurrentHealthPercentage) == 0x000000, "Member 'BPI_CombatInterface_C_UpdateBossHealthData::CurrentHealthPercentage' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.hitscanWeaponFired
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_HitscanWeaponFired final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_HitscanWeaponFired) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_HitscanWeaponFired");
static_assert(sizeof(BPI_CombatInterface_C_HitscanWeaponFired) == 0x000001, "Wrong size on BPI_CombatInterface_C_HitscanWeaponFired");
static_assert(offsetof(BPI_CombatInterface_C_HitscanWeaponFired, Success) == 0x000000, "Member 'BPI_CombatInterface_C_HitscanWeaponFired::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.GetMostSuitableMeleeSection
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_GetMostSuitableMeleeSection final
{
public:
	EAnimationMontageIdentifier                   Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_GetMostSuitableMeleeSection) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_GetMostSuitableMeleeSection");
static_assert(sizeof(BPI_CombatInterface_C_GetMostSuitableMeleeSection) == 0x000001, "Wrong size on BPI_CombatInterface_C_GetMostSuitableMeleeSection");
static_assert(offsetof(BPI_CombatInterface_C_GetMostSuitableMeleeSection, Value) == 0x000000, "Member 'BPI_CombatInterface_C_GetMostSuitableMeleeSection::Value' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.SetMostSuitableMeleeSection
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_SetMostSuitableMeleeSection final
{
public:
	EAnimationMontageIdentifier                   Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_SetMostSuitableMeleeSection) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetMostSuitableMeleeSection");
static_assert(sizeof(BPI_CombatInterface_C_SetMostSuitableMeleeSection) == 0x000001, "Wrong size on BPI_CombatInterface_C_SetMostSuitableMeleeSection");
static_assert(offsetof(BPI_CombatInterface_C_SetMostSuitableMeleeSection, Value) == 0x000000, "Member 'BPI_CombatInterface_C_SetMostSuitableMeleeSection::Value' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.getAggroState
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_GetAggroState final
{
public:
	bool                                          Aggro;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_GetAggroState) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_GetAggroState");
static_assert(sizeof(BPI_CombatInterface_C_GetAggroState) == 0x000001, "Wrong size on BPI_CombatInterface_C_GetAggroState");
static_assert(offsetof(BPI_CombatInterface_C_GetAggroState, Aggro) == 0x000000, "Member 'BPI_CombatInterface_C_GetAggroState::Aggro' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.setNewAggro
// 0x0002 (0x0002 - 0x0000)
struct BPI_CombatInterface_C_SetNewAggro final
{
public:
	bool                                          NewAggro;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_SetNewAggro) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetNewAggro");
static_assert(sizeof(BPI_CombatInterface_C_SetNewAggro) == 0x000002, "Wrong size on BPI_CombatInterface_C_SetNewAggro");
static_assert(offsetof(BPI_CombatInterface_C_SetNewAggro, NewAggro) == 0x000000, "Member 'BPI_CombatInterface_C_SetNewAggro::NewAggro' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_SetNewAggro, Success) == 0x000001, "Member 'BPI_CombatInterface_C_SetNewAggro::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.IncrementJac3ProneCounter
// 0x0004 (0x0004 - 0x0000)
struct BPI_CombatInterface_C_IncrementJac3ProneCounter final
{
public:
	int32                                         ProneCounter;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_IncrementJac3ProneCounter) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_IncrementJac3ProneCounter");
static_assert(sizeof(BPI_CombatInterface_C_IncrementJac3ProneCounter) == 0x000004, "Wrong size on BPI_CombatInterface_C_IncrementJac3ProneCounter");
static_assert(offsetof(BPI_CombatInterface_C_IncrementJac3ProneCounter, ProneCounter) == 0x000000, "Member 'BPI_CombatInterface_C_IncrementJac3ProneCounter::ProneCounter' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.MoveToGrappleLocatio
// 0x000C (0x000C - 0x0000)
struct BPI_CombatInterface_C_MoveToGrappleLocatio final
{
public:
	struct FVector                                Grapple_Location;                                  // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_MoveToGrappleLocatio) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_MoveToGrappleLocatio");
static_assert(sizeof(BPI_CombatInterface_C_MoveToGrappleLocatio) == 0x00000C, "Wrong size on BPI_CombatInterface_C_MoveToGrappleLocatio");
static_assert(offsetof(BPI_CombatInterface_C_MoveToGrappleLocatio, Grapple_Location) == 0x000000, "Member 'BPI_CombatInterface_C_MoveToGrappleLocatio::Grapple_Location' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.ControlRotationFocus
// 0x0008 (0x0008 - 0x0000)
struct BPI_CombatInterface_C_ControlRotationFocus final
{
public:
	class AActor*                                 FocusTarget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_ControlRotationFocus) == 0x000008, "Wrong alignment on BPI_CombatInterface_C_ControlRotationFocus");
static_assert(sizeof(BPI_CombatInterface_C_ControlRotationFocus) == 0x000008, "Wrong size on BPI_CombatInterface_C_ControlRotationFocus");
static_assert(offsetof(BPI_CombatInterface_C_ControlRotationFocus, FocusTarget) == 0x000000, "Member 'BPI_CombatInterface_C_ControlRotationFocus::FocusTarget' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.MeleeAttackTranslate
// 0x0018 (0x0018 - 0x0000)
struct BPI_CombatInterface_C_MeleeAttackTranslate final
{
public:
	struct FVector                                StartVector;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndVector;                                         // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_MeleeAttackTranslate) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_MeleeAttackTranslate");
static_assert(sizeof(BPI_CombatInterface_C_MeleeAttackTranslate) == 0x000018, "Wrong size on BPI_CombatInterface_C_MeleeAttackTranslate");
static_assert(offsetof(BPI_CombatInterface_C_MeleeAttackTranslate, StartVector) == 0x000000, "Member 'BPI_CombatInterface_C_MeleeAttackTranslate::StartVector' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_MeleeAttackTranslate, EndVector) == 0x00000C, "Member 'BPI_CombatInterface_C_MeleeAttackTranslate::EndVector' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.GetCharacterSize
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_GetCharacterSize final
{
public:
	ECharacterSize                                Size;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_GetCharacterSize) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_GetCharacterSize");
static_assert(sizeof(BPI_CombatInterface_C_GetCharacterSize) == 0x000001, "Wrong size on BPI_CombatInterface_C_GetCharacterSize");
static_assert(offsetof(BPI_CombatInterface_C_GetCharacterSize, Size) == 0x000000, "Member 'BPI_CombatInterface_C_GetCharacterSize::Size' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.getCemeteryCreatureType
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_GetCemeteryCreatureType final
{
public:
	ECemeteryCreatureType                         CemeteryCreatureType;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_GetCemeteryCreatureType) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_GetCemeteryCreatureType");
static_assert(sizeof(BPI_CombatInterface_C_GetCemeteryCreatureType) == 0x000001, "Wrong size on BPI_CombatInterface_C_GetCemeteryCreatureType");
static_assert(offsetof(BPI_CombatInterface_C_GetCemeteryCreatureType, CemeteryCreatureType) == 0x000000, "Member 'BPI_CombatInterface_C_GetCemeteryCreatureType::CemeteryCreatureType' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.setCanCirculate
// 0x0002 (0x0002 - 0x0000)
struct BPI_CombatInterface_C_SetCanCirculate final
{
public:
	bool                                          CanCirculate;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_SetCanCirculate) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetCanCirculate");
static_assert(sizeof(BPI_CombatInterface_C_SetCanCirculate) == 0x000002, "Wrong size on BPI_CombatInterface_C_SetCanCirculate");
static_assert(offsetof(BPI_CombatInterface_C_SetCanCirculate, CanCirculate) == 0x000000, "Member 'BPI_CombatInterface_C_SetCanCirculate::CanCirculate' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_SetCanCirculate, Success) == 0x000001, "Member 'BPI_CombatInterface_C_SetCanCirculate::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.setStartOnWall
// 0x0002 (0x0002 - 0x0000)
struct BPI_CombatInterface_C_SetStartOnWall final
{
public:
	bool                                          StartOnWall;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_SetStartOnWall) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetStartOnWall");
static_assert(sizeof(BPI_CombatInterface_C_SetStartOnWall) == 0x000002, "Wrong size on BPI_CombatInterface_C_SetStartOnWall");
static_assert(offsetof(BPI_CombatInterface_C_SetStartOnWall, StartOnWall) == 0x000000, "Member 'BPI_CombatInterface_C_SetStartOnWall::StartOnWall' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_SetStartOnWall, Success) == 0x000001, "Member 'BPI_CombatInterface_C_SetStartOnWall::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.AimedAt
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_AimedAt final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_AimedAt) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_AimedAt");
static_assert(sizeof(BPI_CombatInterface_C_AimedAt) == 0x000001, "Wrong size on BPI_CombatInterface_C_AimedAt");
static_assert(offsetof(BPI_CombatInterface_C_AimedAt, Return) == 0x000000, "Member 'BPI_CombatInterface_C_AimedAt::Return' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.GetUpgradeComponent
// 0x0008 (0x0008 - 0x0000)
struct BPI_CombatInterface_C_GetUpgradeComponent final
{
public:
	class UWeaponUpgradeComponent_C*              UpgradeComponent;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_GetUpgradeComponent) == 0x000008, "Wrong alignment on BPI_CombatInterface_C_GetUpgradeComponent");
static_assert(sizeof(BPI_CombatInterface_C_GetUpgradeComponent) == 0x000008, "Wrong size on BPI_CombatInterface_C_GetUpgradeComponent");
static_assert(offsetof(BPI_CombatInterface_C_GetUpgradeComponent, UpgradeComponent) == 0x000000, "Member 'BPI_CombatInterface_C_GetUpgradeComponent::UpgradeComponent' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.QuicktimeInput
// 0x0008 (0x0008 - 0x0000)
struct BPI_CombatInterface_C_QuicktimeInput final
{
public:
	float                                         CurrentProgress;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxProgress;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_QuicktimeInput) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_QuicktimeInput");
static_assert(sizeof(BPI_CombatInterface_C_QuicktimeInput) == 0x000008, "Wrong size on BPI_CombatInterface_C_QuicktimeInput");
static_assert(offsetof(BPI_CombatInterface_C_QuicktimeInput, CurrentProgress) == 0x000000, "Member 'BPI_CombatInterface_C_QuicktimeInput::CurrentProgress' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_QuicktimeInput, MaxProgress) == 0x000004, "Member 'BPI_CombatInterface_C_QuicktimeInput::MaxProgress' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.FlashlightHit
// 0x0008 (0x0008 - 0x0000)
struct BPI_CombatInterface_C_FlashlightHit final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CombatInterface_C_FlashlightHit) == 0x000004, "Wrong alignment on BPI_CombatInterface_C_FlashlightHit");
static_assert(sizeof(BPI_CombatInterface_C_FlashlightHit) == 0x000008, "Wrong size on BPI_CombatInterface_C_FlashlightHit");
static_assert(offsetof(BPI_CombatInterface_C_FlashlightHit, Distance) == 0x000000, "Member 'BPI_CombatInterface_C_FlashlightHit::Distance' has a wrong offset!");
static_assert(offsetof(BPI_CombatInterface_C_FlashlightHit, Success) == 0x000004, "Member 'BPI_CombatInterface_C_FlashlightHit::Success' has a wrong offset!");

// Function BPI_CombatInterface.BPI_CombatInterface_C.SetCemeteryCreatureType
// 0x0001 (0x0001 - 0x0000)
struct BPI_CombatInterface_C_SetCemeteryCreatureType final
{
public:
	ECemeteryCreatureType                         CreatureType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CombatInterface_C_SetCemeteryCreatureType) == 0x000001, "Wrong alignment on BPI_CombatInterface_C_SetCemeteryCreatureType");
static_assert(sizeof(BPI_CombatInterface_C_SetCemeteryCreatureType) == 0x000001, "Wrong size on BPI_CombatInterface_C_SetCemeteryCreatureType");
static_assert(offsetof(BPI_CombatInterface_C_SetCemeteryCreatureType, CreatureType) == 0x000000, "Member 'BPI_CombatInterface_C_SetCemeteryCreatureType::CreatureType' has a wrong offset!");

}
