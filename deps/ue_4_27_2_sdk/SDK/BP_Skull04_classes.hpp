#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skull04

#include "Basic.hpp"

#include "BP_DestroyablePropLarge_Destructible_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Skull04.BP_Skull04_C
// 0x0000 (0x0318 - 0x0318)
class ABP_Skull04_C final : public ABP_DestroyablePropLarge_Destructible_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skull04_C">();
	}
	static class ABP_Skull04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skull04_C>();
	}
};
static_assert(alignof(ABP_Skull04_C) == 0x000008, "Wrong alignment on ABP_Skull04_C");
static_assert(sizeof(ABP_Skull04_C) == 0x000318, "Wrong size on ABP_Skull04_C");

}
