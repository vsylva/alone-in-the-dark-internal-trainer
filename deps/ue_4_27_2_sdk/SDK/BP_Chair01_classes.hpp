#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chair01

#include "Basic.hpp"

#include "BP_DestroyableChair_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chair01.BP_Chair01_C
// 0x0010 (0x0328 - 0x0318)
class ABP_Chair01_C final : public ABP_DestroyableChair_C
{
public:
	class UBoxComponent*                          Box1;                                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chair01_C">();
	}
	static class ABP_Chair01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chair01_C>();
	}
};
static_assert(alignof(ABP_Chair01_C) == 0x000008, "Wrong alignment on ABP_Chair01_C");
static_assert(sizeof(ABP_Chair01_C) == 0x000328, "Wrong size on ABP_Chair01_C");
static_assert(offsetof(ABP_Chair01_C, Box1) == 0x000318, "Member 'ABP_Chair01_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_Chair01_C, Box) == 0x000320, "Member 'ABP_Chair01_C::Box' has a wrong offset!");

}
