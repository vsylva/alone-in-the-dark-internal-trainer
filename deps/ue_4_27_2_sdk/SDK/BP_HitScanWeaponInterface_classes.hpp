#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitScanWeaponInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EWeapons_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HitScanWeaponInterface.BP_HitScanWeaponInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBP_HitScanWeaponInterface_C final : public IInterface
{
public:
	void GetWeaponType(EWeapons* WeaponType);

	void GetCurrentSpreadPixelAdjustment(float* Pixels, float* Screen_Percentage) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HitScanWeaponInterface_C">();
	}
	static class IBP_HitScanWeaponInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_HitScanWeaponInterface_C>();
	}
};
static_assert(alignof(IBP_HitScanWeaponInterface_C) == 0x000008, "Wrong alignment on IBP_HitScanWeaponInterface_C");
static_assert(sizeof(IBP_HitScanWeaponInterface_C) == 0x000028, "Wrong size on IBP_HitScanWeaponInterface_C");

}
