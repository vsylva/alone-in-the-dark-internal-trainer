#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TestPerformancePawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TestPerformancePawn.BP_TestPerformancePawn_C
// 0x0008 (0x02C8 - 0x02C0)
class ABP_TestPerformancePawn_C final : public ADefaultPawn
{
public:
	class UCameraComponent*                       Camera;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TestPerformancePawn_C">();
	}
	static class ABP_TestPerformancePawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TestPerformancePawn_C>();
	}
};
static_assert(alignof(ABP_TestPerformancePawn_C) == 0x000008, "Wrong alignment on ABP_TestPerformancePawn_C");
static_assert(sizeof(ABP_TestPerformancePawn_C) == 0x0002C8, "Wrong size on ABP_TestPerformancePawn_C");
static_assert(offsetof(ABP_TestPerformancePawn_C, Camera) == 0x0002C0, "Member 'ABP_TestPerformancePawn_C::Camera' has a wrong offset!");

}
