#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Eml

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENPCGrayAptLocation_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ENPCLocation_Batiste_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ENPCLocation_Ruth_structs.hpp"
#include "ENPCLocation_Grace_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NPC_Eml.ABP_NPC_Eml_C
// 0x0F00 (0x20D0 - 0x11D0)
class UABP_NPC_Eml_C final : public UOFNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x11D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x11D8(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1288(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x12B8(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1368(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1418(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1448(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x14F8(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x15A8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x15D8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x1688(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x16D0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1770(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1820(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x18D0(0x00C0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1990(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1A40(0x00A0)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x1AE0(0x0018)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1AF8(0x00A0)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x1B98(0x0018)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x1BB0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1BF8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1CA8(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1CF0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1D20(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1DD0(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1E18(0x01D0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1FE8(0x00B0)()
	float                                         __CustomProperty_FocusAlpha_8E2AF8C347B8A92ABA41C2AB90CDE07F; // 0x2098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_HeadBodyBlend_8E2AF8C347B8A92ABA41C2AB90CDE07F; // 0x209C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_bHasFocusPoint_8E2AF8C347B8A92ABA41C2AB90CDE07F; // 0x20A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bNoRotationLimit_8E2AF8C347B8A92ABA41C2AB90CDE07F; // 0x20A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20A2[0x2];                                     // 0x20A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                __CustomProperty_FocusLocation_8E2AF8C347B8A92ABA41C2AB90CDE07F; // 0x20A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_StepHeight_FE0583D84A4393E5AAAD42B513C8B790; // 0x20B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                __CustomProperty_GroundNormal_FE0583D84A4393E5AAAD42B513C8B790; // 0x20B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_bUseInternalData_FE0583D84A4393E5AAAD42B513C8B790; // 0x20C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENPCGrayAptLocation                           GraysAptLocation;                                  // 0x20C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPlayedAllDialogs;                               // 0x20C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	struct FVector GetFocusPointOnCharacter();
	void SetBatisteLocation(ENPCLocation_Batiste Value);
	void SetRuthLocation(ENPCLocation_Ruth Value);
	void SetGraceLocation(ENPCLocation_Grace Value);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Eml_AnimGraphNode_RotationOffsetBlendSpace_B408CD97403E8991182E2E87CF4768B4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetGraysAptLocation(ENPCGrayAptLocation Value);
	void ExecuteUbergraph_ABP_NPC_Eml(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_Eml_C">();
	}
	static class UABP_NPC_Eml_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_Eml_C>();
	}
};
static_assert(alignof(UABP_NPC_Eml_C) == 0x000010, "Wrong alignment on UABP_NPC_Eml_C");
static_assert(sizeof(UABP_NPC_Eml_C) == 0x0020D0, "Wrong size on UABP_NPC_Eml_C");
static_assert(offsetof(UABP_NPC_Eml_C, UberGraphFrame) == 0x0011D0, "Member 'UABP_NPC_Eml_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_6) == 0x0011D8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateResult_2) == 0x001288, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateMachine_2) == 0x0012B8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_5) == 0x001368, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateResult_1) == 0x001418, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateMachine_1) == 0x001448, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_4) == 0x0014F8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateResult) == 0x0015A8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_StateMachine) == 0x0015D8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_Slot_3) == 0x001688, "Member 'UABP_NPC_Eml_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_BlendListByBool_2) == 0x0016D0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_3) == 0x001770, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_2) == 0x001820, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_LayeredBoneBlend) == 0x0018D0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer_1) == 0x001990, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_BlendListByBool_1) == 0x001A40, "Member 'UABP_NPC_Eml_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_LocalRefPose_1) == 0x001AE0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_BlendListByBool) == 0x001AF8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_LocalRefPose) == 0x001B98, "Member 'UABP_NPC_Eml_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_Slot_2) == 0x001BB0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_BlendListByEnum_1) == 0x001BF8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_Slot_1) == 0x001CA8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_Root) == 0x001CF0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_SequencePlayer) == 0x001D20, "Member 'UABP_NPC_Eml_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_Slot) == 0x001DD0, "Member 'UABP_NPC_Eml_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x001E18, "Member 'UABP_NPC_Eml_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, AnimGraphNode_BlendListByEnum) == 0x001FE8, "Member 'UABP_NPC_Eml_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_FocusAlpha_8E2AF8C347B8A92ABA41C2AB90CDE07F) == 0x002098, "Member 'UABP_NPC_Eml_C::__CustomProperty_FocusAlpha_8E2AF8C347B8A92ABA41C2AB90CDE07F' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_HeadBodyBlend_8E2AF8C347B8A92ABA41C2AB90CDE07F) == 0x00209C, "Member 'UABP_NPC_Eml_C::__CustomProperty_HeadBodyBlend_8E2AF8C347B8A92ABA41C2AB90CDE07F' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_bHasFocusPoint_8E2AF8C347B8A92ABA41C2AB90CDE07F) == 0x0020A0, "Member 'UABP_NPC_Eml_C::__CustomProperty_bHasFocusPoint_8E2AF8C347B8A92ABA41C2AB90CDE07F' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_bNoRotationLimit_8E2AF8C347B8A92ABA41C2AB90CDE07F) == 0x0020A1, "Member 'UABP_NPC_Eml_C::__CustomProperty_bNoRotationLimit_8E2AF8C347B8A92ABA41C2AB90CDE07F' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_FocusLocation_8E2AF8C347B8A92ABA41C2AB90CDE07F) == 0x0020A4, "Member 'UABP_NPC_Eml_C::__CustomProperty_FocusLocation_8E2AF8C347B8A92ABA41C2AB90CDE07F' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_StepHeight_FE0583D84A4393E5AAAD42B513C8B790) == 0x0020B0, "Member 'UABP_NPC_Eml_C::__CustomProperty_StepHeight_FE0583D84A4393E5AAAD42B513C8B790' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_GroundNormal_FE0583D84A4393E5AAAD42B513C8B790) == 0x0020B4, "Member 'UABP_NPC_Eml_C::__CustomProperty_GroundNormal_FE0583D84A4393E5AAAD42B513C8B790' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, __CustomProperty_bUseInternalData_FE0583D84A4393E5AAAD42B513C8B790) == 0x0020C0, "Member 'UABP_NPC_Eml_C::__CustomProperty_bUseInternalData_FE0583D84A4393E5AAAD42B513C8B790' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, GraysAptLocation) == 0x0020C1, "Member 'UABP_NPC_Eml_C::GraysAptLocation' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Eml_C, HasPlayedAllDialogs) == 0x0020C2, "Member 'UABP_NPC_Eml_C::HasPlayedAllDialogs' has a wrong offset!");

}
