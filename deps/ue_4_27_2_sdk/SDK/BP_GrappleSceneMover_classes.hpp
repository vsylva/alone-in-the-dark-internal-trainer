#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrappleSceneMover

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GrappleSceneMover.BP_GrappleSceneMover_C
// 0x0008 (0x0240 - 0x0238)
class ABP_GrappleSceneMover_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrappleSceneMover_C">();
	}
	static class ABP_GrappleSceneMover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrappleSceneMover_C>();
	}
};
static_assert(alignof(ABP_GrappleSceneMover_C) == 0x000008, "Wrong alignment on ABP_GrappleSceneMover_C");
static_assert(sizeof(ABP_GrappleSceneMover_C) == 0x000240, "Wrong size on ABP_GrappleSceneMover_C");
static_assert(offsetof(ABP_GrappleSceneMover_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_GrappleSceneMover_C::DefaultSceneRoot' has a wrong offset!");

}

