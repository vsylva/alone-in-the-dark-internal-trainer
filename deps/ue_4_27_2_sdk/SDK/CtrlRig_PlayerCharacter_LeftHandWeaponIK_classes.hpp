#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CtrlRig_PlayerCharacter_LeftHandWeaponIK

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CtrlRig_PlayerCharacter_LeftHandWeaponIK.CtrlRig_PlayerCharacter_LeftHandWeaponIK_C
// 0x0030 (0x0680 - 0x0650)
class UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C final : public UControlRig
{
public:
	bool                                          InterpolateRightArm;                               // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651[0xF];                                      // 0x0651(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  RotationLag;                                       // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         RotationLagAlpha;                                  // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSprinting;                                      // 0x0674(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsAiming;                                         // 0x0675(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CtrlRig_PlayerCharacter_LeftHandWeaponIK_C">();
	}
	static class UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C>();
	}
};
static_assert(alignof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C) == 0x000010, "Wrong alignment on UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C");
static_assert(sizeof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C) == 0x000680, "Wrong size on UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C");
static_assert(offsetof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C, InterpolateRightArm) == 0x000650, "Member 'UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C::InterpolateRightArm' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C, RotationLag) == 0x000660, "Member 'UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C::RotationLag' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C, RotationLagAlpha) == 0x000670, "Member 'UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C::RotationLagAlpha' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C, bIsSprinting) == 0x000674, "Member 'UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C::bIsSprinting' has a wrong offset!");
static_assert(offsetof(UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C, bIsAiming) == 0x000675, "Member 'UCtrlRig_PlayerCharacter_LeftHandWeaponIK_C::bIsAiming' has a wrong offset!");

}

