#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavArea_NoLarge

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavArea_NoLarge.NavArea_NoLarge_C
// 0x0000 (0x0048 - 0x0048)
class UNavArea_NoLarge_C final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavArea_NoLarge_C">();
	}
	static class UNavArea_NoLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_NoLarge_C>();
	}
};
static_assert(alignof(UNavArea_NoLarge_C) == 0x000008, "Wrong alignment on UNavArea_NoLarge_C");
static_assert(sizeof(UNavArea_NoLarge_C) == 0x000048, "Wrong size on UNavArea_NoLarge_C");

}
