#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DestructibleMeleeWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_DestructibleMeleeWeapon.ABP_DestructibleMeleeWeapon_C
// 0x0370 (0x0660 - 0x02F0)
class UABP_DestructibleMeleeWeapon_C final : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02F8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0328(0x00B0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x03D8(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0488(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0538(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0568(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0618(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_DestructibleMeleeWeapon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_DestructibleMeleeWeapon_C">();
	}
	static class UABP_DestructibleMeleeWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_DestructibleMeleeWeapon_C>();
	}
};
static_assert(alignof(UABP_DestructibleMeleeWeapon_C) == 0x000010, "Wrong alignment on UABP_DestructibleMeleeWeapon_C");
static_assert(sizeof(UABP_DestructibleMeleeWeapon_C) == 0x000660, "Wrong size on UABP_DestructibleMeleeWeapon_C");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, UberGraphFrame) == 0x0002F0, "Member 'UABP_DestructibleMeleeWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_Root) == 0x0002F8, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_SequencePlayer_1) == 0x000328, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_BlendListByEnum) == 0x0003D8, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_SequencePlayer) == 0x000488, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_StateResult) == 0x000538, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_StateMachine) == 0x000568, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_DestructibleMeleeWeapon_C, AnimGraphNode_Slot) == 0x000618, "Member 'UABP_DestructibleMeleeWeapon_C::AnimGraphNode_Slot' has a wrong offset!");

}

