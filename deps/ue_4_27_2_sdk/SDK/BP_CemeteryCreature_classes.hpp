#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CemeteryCreature

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CemeteryCreatureType_structs.hpp"
#include "BP_EnemyCommon_classes.hpp"
#include "ObsidianFoxSettings_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CemeteryCreature.BP_CemeteryCreature_C
// 0x00A0 (0x0B40 - 0x0AA0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_CemeteryCreature_C : public ABP_EnemyCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CemeteryCreature_C;              // 0x0AA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHitReactionHitboxComponent*            Front;                                             // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionHitboxComponent*            Back;                                              // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionComponent*                  Hitreaction;                                       // 0x0AB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeleeWeaponComponent_C*                MeleeWeaponComponentKick;                          // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionHitboxComponent*            HipL;                                              // 0x0AC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionHitboxComponent*            HipR;                                              // 0x0AD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFoliageInteractionComponent*           FoliageInteraction;                                // 0x0AD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDEZInteractionComponent*               DEZInteraction_RightLeg;                           // 0x0AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDEZInteractionComponent*               DEZInteraction_Center;                             // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionHitboxComponent*            ChestL;                                            // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitReactionHitboxComponent*            ChestR;                                            // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDEZInteractionComponent*               DEZInteraction_LeftLeg;                            // 0x0B00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDynamicMaterialEffectsComponent*       DynamicMaterialEffects;                            // 0x0B08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFootPrintSpawnerComponent*             FootPrintSpawner;                                  // 0x0B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeleeWeaponComponent_C*                GrappleWeapon;                                     // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    OnDeathSound;                                      // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitFromType;                                      // 0x0B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ForceAggroAtStart;                                 // 0x0B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECemeteryCreatureType                         CemeteryCreatureType;                              // 0x0B2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_B2B[0x1];                                      // 0x0B2B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RotationLockBlackboardKey_0;                       // 0x0B2C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetWakeupMontage(class UAnimMontage** Montageeee);
	void GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType_0);
	void InjectSpeedTestChanges(bool bIsInCombat);
	void InitializeCreatureType();
	void UserConstructionScript();
	void SetCemeteryCreatureType(ECemeteryCreatureType CreatureType);
	void OnCombatStateChanged_Event_0(bool bNewIsInCombat);
	void BeginPlaySpawn();
	void BeginPlayOnce();
	void ExecuteUbergraph_BP_CemeteryCreature(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CemeteryCreature_C">();
	}
	static class ABP_CemeteryCreature_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CemeteryCreature_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_CemeteryCreature_C) == 0x000010, "Wrong alignment on ABP_CemeteryCreature_C");
static_assert(sizeof(ABP_CemeteryCreature_C) == 0x000B40, "Wrong size on ABP_CemeteryCreature_C");
static_assert(offsetof(ABP_CemeteryCreature_C, UberGraphFrame_BP_CemeteryCreature_C) == 0x000AA0, "Member 'ABP_CemeteryCreature_C::UberGraphFrame_BP_CemeteryCreature_C' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, Front) == 0x000AA8, "Member 'ABP_CemeteryCreature_C::Front' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, Back) == 0x000AB0, "Member 'ABP_CemeteryCreature_C::Back' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, Hitreaction) == 0x000AB8, "Member 'ABP_CemeteryCreature_C::Hitreaction' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, MeleeWeaponComponentKick) == 0x000AC0, "Member 'ABP_CemeteryCreature_C::MeleeWeaponComponentKick' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, HipL) == 0x000AC8, "Member 'ABP_CemeteryCreature_C::HipL' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, HipR) == 0x000AD0, "Member 'ABP_CemeteryCreature_C::HipR' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, FoliageInteraction) == 0x000AD8, "Member 'ABP_CemeteryCreature_C::FoliageInteraction' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, DEZInteraction_RightLeg) == 0x000AE0, "Member 'ABP_CemeteryCreature_C::DEZInteraction_RightLeg' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, DEZInteraction_Center) == 0x000AE8, "Member 'ABP_CemeteryCreature_C::DEZInteraction_Center' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, ChestL) == 0x000AF0, "Member 'ABP_CemeteryCreature_C::ChestL' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, ChestR) == 0x000AF8, "Member 'ABP_CemeteryCreature_C::ChestR' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, DEZInteraction_LeftLeg) == 0x000B00, "Member 'ABP_CemeteryCreature_C::DEZInteraction_LeftLeg' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, DynamicMaterialEffects) == 0x000B08, "Member 'ABP_CemeteryCreature_C::DynamicMaterialEffects' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, FootPrintSpawner) == 0x000B10, "Member 'ABP_CemeteryCreature_C::FootPrintSpawner' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, GrappleWeapon) == 0x000B18, "Member 'ABP_CemeteryCreature_C::GrappleWeapon' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, OnDeathSound) == 0x000B20, "Member 'ABP_CemeteryCreature_C::OnDeathSound' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, InitFromType) == 0x000B28, "Member 'ABP_CemeteryCreature_C::InitFromType' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, ForceAggroAtStart) == 0x000B29, "Member 'ABP_CemeteryCreature_C::ForceAggroAtStart' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, CemeteryCreatureType) == 0x000B2A, "Member 'ABP_CemeteryCreature_C::CemeteryCreatureType' has a wrong offset!");
static_assert(offsetof(ABP_CemeteryCreature_C, RotationLockBlackboardKey_0) == 0x000B2C, "Member 'ABP_CemeteryCreature_C::RotationLockBlackboardKey_0' has a wrong offset!");

}
