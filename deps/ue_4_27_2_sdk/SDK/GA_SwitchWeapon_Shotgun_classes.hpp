#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SwitchWeapon_Shotgun

#include "Basic.hpp"

#include "GA_SwitchWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SwitchWeapon_Shotgun.GA_SwitchWeapon_Shotgun_C
// 0x0000 (0x03C8 - 0x03C8)
class UGA_SwitchWeapon_Shotgun_C final : public UGA_SwitchWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SwitchWeapon_Shotgun_C">();
	}
	static class UGA_SwitchWeapon_Shotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SwitchWeapon_Shotgun_C>();
	}
};
static_assert(alignof(UGA_SwitchWeapon_Shotgun_C) == 0x000008, "Wrong alignment on UGA_SwitchWeapon_Shotgun_C");
static_assert(sizeof(UGA_SwitchWeapon_Shotgun_C) == 0x0003C8, "Wrong size on UGA_SwitchWeapon_Shotgun_C");

}
