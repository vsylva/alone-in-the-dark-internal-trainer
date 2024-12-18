#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_DisableSprint

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_DisableSprint.GE_DisableSprint_C
// 0x0000 (0x0800 - 0x0800)
class UGE_DisableSprint_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DisableSprint_C">();
	}
	static class UGE_DisableSprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DisableSprint_C>();
	}
};
static_assert(alignof(UGE_DisableSprint_C) == 0x000008, "Wrong alignment on UGE_DisableSprint_C");
static_assert(sizeof(UGE_DisableSprint_C) == 0x000800, "Wrong size on UGE_DisableSprint_C");

}

