#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_InstaKill

#include "Basic.hpp"

#include "GE_DamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_InstaKill.GE_InstaKill_C
// 0x0000 (0x0800 - 0x0800)
class UGE_InstaKill_C final : public UGE_DamageBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_InstaKill_C">();
	}
	static class UGE_InstaKill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_InstaKill_C>();
	}
};
static_assert(alignof(UGE_InstaKill_C) == 0x000008, "Wrong alignment on UGE_InstaKill_C");
static_assert(sizeof(UGE_InstaKill_C) == 0x000800, "Wrong size on UGE_InstaKill_C");

}

