#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimationMontageIdentifier_structs.hpp"
#include "BanterInteractionSequence_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ENPCGrayAptLocation_structs.hpp"
#include "CharacterSize_structs.hpp"
#include "CemeteryCreatureType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC.BP_NPC_C
// 0x01C0 (0x0910 - 0x0750)
class ABP_NPC_C : public AObsidianFoxCharacter
{
public:
	uint8                                         Pad_748[0x8];                                      // 0x0748(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ShowBanterIconZone;                                // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractionFlowComponent*              InteractionFlow;                                   // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerAlignWithPosition;                           // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MeleeBlockSphere;                                  // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCheckGroundedAtStartupAC*              CheckGroundedAtStartupAC;                          // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      NoAimZone;                                         // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class APiecesLevelSequenceActor>> BanterSequencesEdward;                             // 0x0790(0x0010)(Edit, BlueprintVisible, SaveGame)
	TArray<TSoftObjectPtr<class APiecesLevelSequenceActor>> BanterSequencesEmily;                              // 0x07A0(0x0010)(Edit, BlueprintVisible, SaveGame)
	bool                                          IsInteractiveNPC;                                  // 0x07B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InteractionAllowed;                                // 0x07B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableWhenPlayingEdward;                          // 0x07B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableWhenPlayingEmily;                           // 0x07B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B4[0x4];                                      // 0x07B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBanterInteractionSequence>     BanterInteractionsEdward;                          // 0x07B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBanterInteractionSequence>     BanterInteractionsEmily;                           // 0x07C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UAnimMontage>>    MontagesToPlay;                                    // 0x07D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BanterInteractionsCounter;                         // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideNPCInCutscenes;                                // 0x07EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED[0x3];                                      // 0x07ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Melee_Block_Gameplay_Effect_Class;                 // 0x07F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLastBanterFinished;                              // 0x0818(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bPlaySpecialBanter;                                // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_829[0x7];                                      // 0x0829(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, struct FGameplayTag>              SpecialBanterMap;                                  // 0x0830(0x0050)(Edit, BlueprintVisible)
	TArray<struct FVector2D>                      SpecialBanterSectionIndices;                       // 0x0880(0x0010)(Edit, BlueprintVisible)
	int32                                         SpecialBanterSectionCounter;                       // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsElegibleToReactivateInteraction;                // 0x0894(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TemporarilyForceCharacterVisibilityInOwnCinematic; // 0x0895(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BlockHideInCinematic;                              // 0x0896(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BlockBanterIconShowing;                            // 0x0897(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LastDialogueFinished;                              // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	ENPCGrayAptLocation                           GraysAptLocation;                                  // 0x0899(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A[0x6];                                      // 0x089A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Banter_Camera_Modifier;                            // 0x08A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Banter_Camera_Modifier_Class_Ref;                  // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UCameraModifier*                        Banter_Camera_Modifier_Ref;                        // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                 Melee_Block_Gameplay_Effect_Ref;                   // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Melee_Attack_Ability_Tags;                         // 0x08E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MeleeBlockingHandleSet;                            // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901[0x3];                                      // 0x0901(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            MeleeBlockGameplayEffectHandle;                    // 0x0904(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetStartBurrowed(bool beginBurrowed, bool* Success);
	void SetOrderTarget(const struct FVector& Location, bool* Success);
	void HitscanWeaponFired(bool* Success);
	void GetMostSuitableMeleeSection(EAnimationMontageIdentifier* Value);
	void GetAggroState(bool* Aggro);
	void SetNewAggro(bool NewAggro, bool* Success);
	void IncrementJac3ProneCounter(int32* ProneCounter);
	void GetCharacterSize(ECharacterSize* Size);
	void GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType);
	void SetCanCirculate(bool CanCirculate, bool* Success);
	void SetStartOnWall(bool StartOnWall, bool* Success);
	void FlashlightHit(float Distance, bool* Success);
	void GetUpgradeComponent(class UWeaponUpgradeComponent_C** UpgradeComponent);
	void AimedAt(bool* Return);
	void AllBantersCompleted();
	void GetLocation(int32* Location);
	void ToggleBanterIcon(bool New_Visible);
	void CheckBanterPlayable(bool* BanterPlayable);
	void HideAndDeactivateNPC();
	void ShowNPC();
	void SetInteractable(bool Interactable);
	void IncreaseBanterIndexIfAvailableInSection();
	void NotifySpecialBanterGraph();
	void DeactivateInteractionIfNoMoreSpecialBanters();
	void GetCurrentSectionStartAndEndIndices(int32* Start, int32* End);
	void IncreaseSpecialBanterSection();
	void Reset_Interaction();
	void Set_Up_Banter_Montages_To_Play(bool* NPC_Speaks_First);
	void GetNextInteractionDialogueLines(class UAnimMontage** MontageToPlay);
	void Update_NPCActivation(bool NPC_Visible);
	void CheckIfMoreDialoguesExists(bool* MoreDialogueExists);
	void OnInterrupted_3E1659B949D1C444DD0A28B22C243E71(class ACharacter* TransformedCharacter);
	void OnCloseEnough_3E1659B949D1C444DD0A28B22C243E71(class ACharacter* TransformedCharacter);
	void OnCompleted_3E1659B949D1C444DD0A28B22C243E71(class ACharacter* TransformedCharacter);
	void OnLoaded_5B8972144EBB1776A58E69A79BA25817(class UObject* Loaded);
	void OnBlendOutAllowedEnd_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnBlendOutAllowedBegin_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnNotifyEnd_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnNotifyBegin_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnInterrupted_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnBlendOut_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnFullyBlendedOut_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnCompleted_5ECDE6ED43FBBDAC4BF51DB71C4D96EB(class FName NotifyName);
	void OnLoaded_003ADBE5488BF107B9C907B02267121B(class UObject* Loaded);
	void OnLoaded_18D0BBC9496AE36CA44B35962EF1E3BE(class UObject* Loaded);
	void LoadCompleteDelegate_59EBA52D40331536E763DEAE93DE1143(const TArray<class UClass*>& LoadedAssets);
	void LoadCompleteDelegate_6DD6ACF64D46EB6E1EA625BB0D4B01D4(const TArray<class UClass*>& LoadedAssets);
	void MoveWeaponToHandSocket();
	void MoveWeaponToHolsterSocket();
	void MeleeAttack();
	void SetCemeteryCreatureType(ECemeteryCreatureType CreatureType);
	void QuicktimeSuccess();
	void QuicktimeInput(float CurrentProgress, float MaxProgress);
	void LaserHit();
	void MeleeAttackTranslate(const struct FVector& StartVector, const struct FVector& EndVector);
	void ControlRotationFocus(class AActor* FocusTarget);
	void MoveToGrappleLocatio(const struct FVector& Grapple_Location);
	void SetMostSuitableMeleeSection(EAnimationMontageIdentifier Value);
	void UpdateBossHealthData(float CurrentHealthPercentage);
	void ReceiveBeginPlay();
	void SetUpCharacter();
	void OnCharacterPosessed(const class AOFPlayerCharacter* Character);
	void BndEvt__BP_NPC_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class ACharacter* InteractionCharacter);
	void OnGameMainStateChanged(EGameMainState OldGameState, EGameMainState NewGameState);
	void Play_Next_Banter_Montage(bool Play_montage_on_player_character);
	void NotifySpecialBanter();
	void BndEvt__BP_NPC_FlowComponent_K2Node_ComponentBoundEvent_3_FlowComponentDynamicNotify__DelegateSignature(class UFlowComponent* FlowComponent_0, const struct FGameplayTag& NotifyTag);
	void FinishedBanterSequence();
	void BndEvt__BP_NPC_PlayerAlignWithPosition_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_NPC_PlayerAlignWithPosition_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_NPC_ShowBanterIconZone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_NPC_ShowBanterIconZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetGrayAptLocation(ENPCGrayAptLocation Location);
	void OnGameMainStateChanged_Event(EGameMainState OldGameState, EGameMainState NewGameState);
	void BndEvt__BP_NPC_InteractionFlow_K2Node_ComponentBoundEvent_8_InteractionSignature__DelegateSignature(class ACharacter* InteractionCharacter);
	void BndEvt__BP_NPC_MeleeBlockSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_NPC_MeleeBlockSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PostCinematicCheck(EGameMainState OldGameState, EGameMainState NewGameState);
	void RemoveMeleeBlockGE();
	void ExecuteUbergraph_BP_NPC(int32 EntryPoint);
	void OnLastBanterFinished__DelegateSignature();

	void HasPlayedAllDialogs(bool* Value) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_C">();
	}
	static class ABP_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_C>();
	}
};
static_assert(alignof(ABP_NPC_C) == 0x000010, "Wrong alignment on ABP_NPC_C");
static_assert(sizeof(ABP_NPC_C) == 0x000910, "Wrong size on ABP_NPC_C");
static_assert(offsetof(ABP_NPC_C, UberGraphFrame) == 0x000750, "Member 'ABP_NPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Billboard) == 0x000758, "Member 'ABP_NPC_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, ShowBanterIconZone) == 0x000760, "Member 'ABP_NPC_C::ShowBanterIconZone' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, InteractionFlow) == 0x000768, "Member 'ABP_NPC_C::InteractionFlow' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, PlayerAlignWithPosition) == 0x000770, "Member 'ABP_NPC_C::PlayerAlignWithPosition' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, MeleeBlockSphere) == 0x000778, "Member 'ABP_NPC_C::MeleeBlockSphere' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, CheckGroundedAtStartupAC) == 0x000780, "Member 'ABP_NPC_C::CheckGroundedAtStartupAC' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, NoAimZone) == 0x000788, "Member 'ABP_NPC_C::NoAimZone' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BanterSequencesEdward) == 0x000790, "Member 'ABP_NPC_C::BanterSequencesEdward' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BanterSequencesEmily) == 0x0007A0, "Member 'ABP_NPC_C::BanterSequencesEmily' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, IsInteractiveNPC) == 0x0007B0, "Member 'ABP_NPC_C::IsInteractiveNPC' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, InteractionAllowed) == 0x0007B1, "Member 'ABP_NPC_C::InteractionAllowed' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, DisableWhenPlayingEdward) == 0x0007B2, "Member 'ABP_NPC_C::DisableWhenPlayingEdward' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, DisableWhenPlayingEmily) == 0x0007B3, "Member 'ABP_NPC_C::DisableWhenPlayingEmily' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BanterInteractionsEdward) == 0x0007B8, "Member 'ABP_NPC_C::BanterInteractionsEdward' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BanterInteractionsEmily) == 0x0007C8, "Member 'ABP_NPC_C::BanterInteractionsEmily' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, MontagesToPlay) == 0x0007D8, "Member 'ABP_NPC_C::MontagesToPlay' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BanterInteractionsCounter) == 0x0007E8, "Member 'ABP_NPC_C::BanterInteractionsCounter' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, HideNPCInCutscenes) == 0x0007EC, "Member 'ABP_NPC_C::HideNPCInCutscenes' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Melee_Block_Gameplay_Effect_Class) == 0x0007F0, "Member 'ABP_NPC_C::Melee_Block_Gameplay_Effect_Class' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, OnLastBanterFinished) == 0x000818, "Member 'ABP_NPC_C::OnLastBanterFinished' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, bPlaySpecialBanter) == 0x000828, "Member 'ABP_NPC_C::bPlaySpecialBanter' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, SpecialBanterMap) == 0x000830, "Member 'ABP_NPC_C::SpecialBanterMap' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, SpecialBanterSectionIndices) == 0x000880, "Member 'ABP_NPC_C::SpecialBanterSectionIndices' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, SpecialBanterSectionCounter) == 0x000890, "Member 'ABP_NPC_C::SpecialBanterSectionCounter' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, bIsElegibleToReactivateInteraction) == 0x000894, "Member 'ABP_NPC_C::bIsElegibleToReactivateInteraction' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, TemporarilyForceCharacterVisibilityInOwnCinematic) == 0x000895, "Member 'ABP_NPC_C::TemporarilyForceCharacterVisibilityInOwnCinematic' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BlockHideInCinematic) == 0x000896, "Member 'ABP_NPC_C::BlockHideInCinematic' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, BlockBanterIconShowing) == 0x000897, "Member 'ABP_NPC_C::BlockBanterIconShowing' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, LastDialogueFinished) == 0x000898, "Member 'ABP_NPC_C::LastDialogueFinished' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, GraysAptLocation) == 0x000899, "Member 'ABP_NPC_C::GraysAptLocation' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Banter_Camera_Modifier) == 0x0008A0, "Member 'ABP_NPC_C::Banter_Camera_Modifier' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Banter_Camera_Modifier_Class_Ref) == 0x0008C8, "Member 'ABP_NPC_C::Banter_Camera_Modifier_Class_Ref' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Banter_Camera_Modifier_Ref) == 0x0008D0, "Member 'ABP_NPC_C::Banter_Camera_Modifier_Ref' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Melee_Block_Gameplay_Effect_Ref) == 0x0008D8, "Member 'ABP_NPC_C::Melee_Block_Gameplay_Effect_Ref' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, Melee_Attack_Ability_Tags) == 0x0008E0, "Member 'ABP_NPC_C::Melee_Attack_Ability_Tags' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, MeleeBlockingHandleSet) == 0x000900, "Member 'ABP_NPC_C::MeleeBlockingHandleSet' has a wrong offset!");
static_assert(offsetof(ABP_NPC_C, MeleeBlockGameplayEffectHandle) == 0x000904, "Member 'ABP_NPC_C::MeleeBlockGameplayEffectHandle' has a wrong offset!");

}
