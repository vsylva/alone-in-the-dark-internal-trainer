#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeveloperCommentaryGizmo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "PiecesDeveloperCommentary_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeveloperCommentaryGizmo.BP_DeveloperCommentaryGizmo_C
// 0x0030 (0x0290 - 0x0260)
class ABP_DeveloperCommentaryGizmo_C final : public ADeveloperCommentaryGizmo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_DevIconPlay;                                    // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractionFlowComponent*              InteractionFlow;                                   // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   InvalidText;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   FileText;                                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DevIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__BP_DeveloperCommentaryGizmo_InteractionFlow_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class ACharacter* InteractionCharacter);
	void OnGameMainStateChanged(EGameMainState OldGameState, EGameMainState NewGameState);
	void ExecuteUbergraph_BP_DeveloperCommentaryGizmo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeveloperCommentaryGizmo_C">();
	}
	static class ABP_DeveloperCommentaryGizmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeveloperCommentaryGizmo_C>();
	}
};
static_assert(alignof(ABP_DeveloperCommentaryGizmo_C) == 0x000008, "Wrong alignment on ABP_DeveloperCommentaryGizmo_C");
static_assert(sizeof(ABP_DeveloperCommentaryGizmo_C) == 0x000290, "Wrong size on ABP_DeveloperCommentaryGizmo_C");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, UberGraphFrame) == 0x000260, "Member 'ABP_DeveloperCommentaryGizmo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, SM_DevIconPlay) == 0x000268, "Member 'ABP_DeveloperCommentaryGizmo_C::SM_DevIconPlay' has a wrong offset!");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, InteractionFlow) == 0x000270, "Member 'ABP_DeveloperCommentaryGizmo_C::InteractionFlow' has a wrong offset!");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, InvalidText) == 0x000278, "Member 'ABP_DeveloperCommentaryGizmo_C::InvalidText' has a wrong offset!");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, FileText) == 0x000280, "Member 'ABP_DeveloperCommentaryGizmo_C::FileText' has a wrong offset!");
static_assert(offsetof(ABP_DeveloperCommentaryGizmo_C, SM_DevIcon) == 0x000288, "Member 'ABP_DeveloperCommentaryGizmo_C::SM_DevIcon' has a wrong offset!");

}

