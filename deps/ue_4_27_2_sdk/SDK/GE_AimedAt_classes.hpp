#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_AimedAt

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_AimedAt.GE_AimedAt_C
// 0x0000 (0x0800 - 0x0800)
class UGE_AimedAt_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AimedAt_C">();
	}
	static class UGE_AimedAt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AimedAt_C>();
	}
};
static_assert(alignof(UGE_AimedAt_C) == 0x000008, "Wrong alignment on UGE_AimedAt_C");
static_assert(sizeof(UGE_AimedAt_C) == 0x000800, "Wrong size on UGE_AimedAt_C");

}
