#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_RecentlyDamaged

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_RecentlyDamaged.GE_RecentlyDamaged_C
// 0x0000 (0x0800 - 0x0800)
class UGE_RecentlyDamaged_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_RecentlyDamaged_C">();
	}
	static class UGE_RecentlyDamaged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_RecentlyDamaged_C>();
	}
};
static_assert(alignof(UGE_RecentlyDamaged_C) == 0x000008, "Wrong alignment on UGE_RecentlyDamaged_C");
static_assert(sizeof(UGE_RecentlyDamaged_C) == 0x000800, "Wrong size on UGE_RecentlyDamaged_C");

}
