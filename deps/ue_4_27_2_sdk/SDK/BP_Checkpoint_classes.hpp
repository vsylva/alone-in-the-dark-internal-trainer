#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Checkpoint

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Checkpoint.BP_Checkpoint_C
// 0x0028 (0x0368 - 0x0340)
class ABP_Checkpoint_C final : public AOFCheckpoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlowComponent*                         Flow;                                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSave;                                           // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SaveDelay;                                         // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ContidionalFactTag;                                // 0x0358(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableManualSavesOnSavingCompleted;               // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          bDisableManualSavesOnSavingCommenced;              // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          bElegibleToEnableManualSaves;                      // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

public:
	void ReactivateSaveOnStart();
	void IsSavingAllowed(bool* Allowed);
	void ReactivateSave();
	void StartEventIfPlayerIsOverlapping();
	void K2_StartEvent();
	void SaveGame();
	void OnMainStateChanged(EGameMainState OldGameState, EGameMainState NewGameState);
	void EnableCheckpoint();
	void DisableCheckpoint();
	void BndEvt__BP_Checkpoint_Flow_K2Node_ComponentBoundEvent_0_FlowComponentDynamicNotify__DelegateSignature(class UFlowComponent* FlowComponent, const struct FGameplayTag& NotifyTag);
	void SaveTriggered();
	void TryEnableManualSave(bool Success);
	void TryDisableManualSave();
	void IsPlayerOverlapping(bool* IsPlayerOverlapping_0);
	void ReceiveBeginPlay();
	void UseCooldown();
	void ExecuteUbergraph_BP_Checkpoint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Checkpoint_C">();
	}
	static class ABP_Checkpoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Checkpoint_C>();
	}
};
static_assert(alignof(ABP_Checkpoint_C) == 0x000008, "Wrong alignment on ABP_Checkpoint_C");
static_assert(sizeof(ABP_Checkpoint_C) == 0x000368, "Wrong size on ABP_Checkpoint_C");
static_assert(offsetof(ABP_Checkpoint_C, UberGraphFrame) == 0x000340, "Member 'ABP_Checkpoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, Flow) == 0x000348, "Member 'ABP_Checkpoint_C::Flow' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, CanSave) == 0x000350, "Member 'ABP_Checkpoint_C::CanSave' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, SaveDelay) == 0x000354, "Member 'ABP_Checkpoint_C::SaveDelay' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, ContidionalFactTag) == 0x000358, "Member 'ABP_Checkpoint_C::ContidionalFactTag' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, bEnableManualSavesOnSavingCompleted) == 0x000360, "Member 'ABP_Checkpoint_C::bEnableManualSavesOnSavingCompleted' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, bDisableManualSavesOnSavingCommenced) == 0x000361, "Member 'ABP_Checkpoint_C::bDisableManualSavesOnSavingCommenced' has a wrong offset!");
static_assert(offsetof(ABP_Checkpoint_C, bElegibleToEnableManualSaves) == 0x000362, "Member 'ABP_Checkpoint_C::bElegibleToEnableManualSaves' has a wrong offset!");

}

