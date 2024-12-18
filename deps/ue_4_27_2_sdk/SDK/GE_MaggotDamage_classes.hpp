#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_MaggotDamage

#include "Basic.hpp"

#include "GE_DamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_MaggotDamage.GE_MaggotDamage_C
// 0x0000 (0x0800 - 0x0800)
class UGE_MaggotDamage_C final : public UGE_DamageBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_MaggotDamage_C">();
	}
	static class UGE_MaggotDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_MaggotDamage_C>();
	}
};
static_assert(alignof(UGE_MaggotDamage_C) == 0x000008, "Wrong alignment on UGE_MaggotDamage_C");
static_assert(sizeof(UGE_MaggotDamage_C) == 0x000800, "Wrong size on UGE_MaggotDamage_C");

}

