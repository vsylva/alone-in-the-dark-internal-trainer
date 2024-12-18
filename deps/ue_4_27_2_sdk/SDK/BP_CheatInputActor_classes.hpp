#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CheatInputActor

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ObsidianFoxSettings_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CheatInputActor.BP_CheatInputActor_C
// 0x0050 (0x0288 - 0x0238)
class ABP_CheatInputActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlowComponent*                         Flow;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ConsoleCommands_C*                  ConsoleCommandComponentRef;                        // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Noclip;                                            // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            HealthRegenHandle;                                 // 0x025C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SetIdentityTag;                                    // 0x0264(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ChosenIdentityTag;                                 // 0x026C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   TmpIdentityTagArray;                               // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_CheatInputActor(int32 EntryPoint);
	void SetConsoleCommandRef(class AController* Controller);
	void HandleFlowIdentityCheatInput(const struct FGameplayTag& Result, TArray<struct FGameplayTag>& ResultChildren, bool ChildrenExist);
	void HandleFlowTagCheatInput(const struct FGameplayTag& Result, TArray<struct FGameplayTag>& ResultChildren, bool ChildrenExist);
	void ReceiveTick(float DeltaSeconds);
	void KillMyself();
	void NoClipToggle();
	void NoClipUpdate();
	void InpActEvt_Alt_N_K2Node_InputDebugKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Alt_Six_K2Node_InputDebugKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Alt_B_K2Node_InputDebugKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Ctrl_Comma_K2Node_InputDebugKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Ctrl_Period_K2Node_InputDebugKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Ctrl_H_K2Node_InputDebugKeyEvent_5(const struct FKey& Key);
	void InpActEvt_OpenCheatLevel_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Alt_NumPadOne_K2Node_InputDebugKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Alt_NumPadZero_K2Node_InputDebugKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Alt_H_K2Node_InputDebugKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Alt_L_K2Node_InputDebugKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Alt_Q_K2Node_InputDebugKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Alt_V_K2Node_InputDebugKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Alt_X_K2Node_InputDebugKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Alt_R_K2Node_InputDebugKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Alt_A_K2Node_InputDebugKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Alt_E_K2Node_InputDebugKeyEvent_15(const struct FKey& Key);
	void InpActEvt_Alt_U_K2Node_InputDebugKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Alt_G_K2Node_InputDebugKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Alt_K_K2Node_InputDebugKeyEvent_18(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CheatInputActor_C">();
	}
	static class ABP_CheatInputActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CheatInputActor_C>();
	}
};
static_assert(alignof(ABP_CheatInputActor_C) == 0x000008, "Wrong alignment on ABP_CheatInputActor_C");
static_assert(sizeof(ABP_CheatInputActor_C) == 0x000288, "Wrong size on ABP_CheatInputActor_C");
static_assert(offsetof(ABP_CheatInputActor_C, UberGraphFrame) == 0x000238, "Member 'ABP_CheatInputActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, Flow) == 0x000240, "Member 'ABP_CheatInputActor_C::Flow' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_CheatInputActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, ConsoleCommandComponentRef) == 0x000250, "Member 'ABP_CheatInputActor_C::ConsoleCommandComponentRef' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, Noclip) == 0x000258, "Member 'ABP_CheatInputActor_C::Noclip' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, HealthRegenHandle) == 0x00025C, "Member 'ABP_CheatInputActor_C::HealthRegenHandle' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, SetIdentityTag) == 0x000264, "Member 'ABP_CheatInputActor_C::SetIdentityTag' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, ChosenIdentityTag) == 0x00026C, "Member 'ABP_CheatInputActor_C::ChosenIdentityTag' has a wrong offset!");
static_assert(offsetof(ABP_CheatInputActor_C, TmpIdentityTagArray) == 0x000278, "Member 'ABP_CheatInputActor_C::TmpIdentityTagArray' has a wrong offset!");

}

