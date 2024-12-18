#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CtrlRig_PlayerCharacterFocus

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CtrlRig_PlayerCharacterFocus.CtrlRig_PlayerCharacterFocus_C
// 0x0090 (0x06E0 - 0x0650)
class UCtrlRig_PlayerCharacterFocus_C final : public UControlRig
{
public:
	struct FVector                                FocusLocation;                                     // 0x0650(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxYaw;                                            // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxPitch;                                          // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNoRotationLimit;                                  // 0x0664(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_665[0x3];                                      // 0x0665(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FocusInterpolationToSpeed;                         // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FocusInterpolationFromSpeed;                       // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasFocusPoint;                                    // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671[0x3];                                      // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotationClamp;                                     // 0x0674(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Test;                                              // 0x0680(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         SpineStiffness;                                    // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadBodyBlend;                                     // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FocusAlpha;                                        // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpSpeedDisable;                                // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationLimitAlpha;                                // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesLeft;                                          // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesRight;                                         // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesUp;                                            // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesDown;                                          // 0x06AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  EyesRotation;                                      // 0x06B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         EyesBlendShapeScale;                               // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesLeftScaled;                                    // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesRightScaled;                                   // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesUpScaled;                                      // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyesDownScaled;                                    // 0x06D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CalculatedMasterAlpha;                             // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CtrlRig_PlayerCharacterFocus_C">();
	}
	static class UCtrlRig_PlayerCharacterFocus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrlRig_PlayerCharacterFocus_C>();
	}
};
static_assert(alignof(UCtrlRig_PlayerCharacterFocus_C) == 0x000010, "Wrong alignment on UCtrlRig_PlayerCharacterFocus_C");
static_assert(sizeof(UCtrlRig_PlayerCharacterFocus_C) == 0x0006E0, "Wrong size on UCtrlRig_PlayerCharacterFocus_C");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, FocusLocation) == 0x000650, "Member 'UCtrlRig_PlayerCharacterFocus_C::FocusLocation' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, MaxYaw) == 0x00065C, "Member 'UCtrlRig_PlayerCharacterFocus_C::MaxYaw' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, MaxPitch) == 0x000660, "Member 'UCtrlRig_PlayerCharacterFocus_C::MaxPitch' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, bNoRotationLimit) == 0x000664, "Member 'UCtrlRig_PlayerCharacterFocus_C::bNoRotationLimit' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, FocusInterpolationToSpeed) == 0x000668, "Member 'UCtrlRig_PlayerCharacterFocus_C::FocusInterpolationToSpeed' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, FocusInterpolationFromSpeed) == 0x00066C, "Member 'UCtrlRig_PlayerCharacterFocus_C::FocusInterpolationFromSpeed' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, bHasFocusPoint) == 0x000670, "Member 'UCtrlRig_PlayerCharacterFocus_C::bHasFocusPoint' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, RotationClamp) == 0x000674, "Member 'UCtrlRig_PlayerCharacterFocus_C::RotationClamp' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, Test) == 0x000680, "Member 'UCtrlRig_PlayerCharacterFocus_C::Test' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, SpineStiffness) == 0x00068C, "Member 'UCtrlRig_PlayerCharacterFocus_C::SpineStiffness' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, HeadBodyBlend) == 0x000690, "Member 'UCtrlRig_PlayerCharacterFocus_C::HeadBodyBlend' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, FocusAlpha) == 0x000694, "Member 'UCtrlRig_PlayerCharacterFocus_C::FocusAlpha' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, InterpSpeedDisable) == 0x000698, "Member 'UCtrlRig_PlayerCharacterFocus_C::InterpSpeedDisable' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, RotationLimitAlpha) == 0x00069C, "Member 'UCtrlRig_PlayerCharacterFocus_C::RotationLimitAlpha' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesLeft) == 0x0006A0, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesLeft' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesRight) == 0x0006A4, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesRight' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesUp) == 0x0006A8, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesUp' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesDown) == 0x0006AC, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesDown' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesRotation) == 0x0006B0, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesRotation' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesBlendShapeScale) == 0x0006C0, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesBlendShapeScale' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesLeftScaled) == 0x0006C4, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesLeftScaled' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesRightScaled) == 0x0006C8, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesRightScaled' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesUpScaled) == 0x0006CC, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesUpScaled' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, EyesDownScaled) == 0x0006D0, "Member 'UCtrlRig_PlayerCharacterFocus_C::EyesDownScaled' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacterFocus_C, CalculatedMasterAlpha) == 0x0006D4, "Member 'UCtrlRig_PlayerCharacterFocus_C::CalculatedMasterAlpha' has a wrong offset!");

}

