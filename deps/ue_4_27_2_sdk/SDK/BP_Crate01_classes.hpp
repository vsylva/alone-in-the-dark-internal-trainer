#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Crate01

#include "Basic.hpp"

#include "BP_DestroyablePropLarge_Destructible_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Crate01.BP_Crate01_C
// 0x0008 (0x0320 - 0x0318)
class ABP_Crate01_C final : public ABP_DestroyablePropLarge_Destructible_C
{
public:
	class UBoxComponent*                          Box;                                               // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Crate01_C">();
	}
	static class ABP_Crate01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Crate01_C>();
	}
};
static_assert(alignof(ABP_Crate01_C) == 0x000008, "Wrong alignment on ABP_Crate01_C");
static_assert(sizeof(ABP_Crate01_C) == 0x000320, "Wrong size on ABP_Crate01_C");
static_assert(offsetof(ABP_Crate01_C, Box) == 0x000318, "Member 'ABP_Crate01_C::Box' has a wrong offset!");

}
