#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapReferenceActor

#include "Basic.hpp"

#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapReferenceActor.BP_MapReferenceActor_C
// 0x0018 (0x0250 - 0x0238)
class ABP_MapReferenceActor_C final : public AMapPositionActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABp_OrtograhicCamera_C*                 OrthoGraphicActor;                                 // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distancebetween;                                   // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float GetDistanceToMapOrthographicCamera() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapReferenceActor_C">();
	}
	static class ABP_MapReferenceActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapReferenceActor_C>();
	}
};
static_assert(alignof(ABP_MapReferenceActor_C) == 0x000008, "Wrong alignment on ABP_MapReferenceActor_C");
static_assert(sizeof(ABP_MapReferenceActor_C) == 0x000250, "Wrong size on ABP_MapReferenceActor_C");
static_assert(offsetof(ABP_MapReferenceActor_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_MapReferenceActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MapReferenceActor_C, OrthoGraphicActor) == 0x000240, "Member 'ABP_MapReferenceActor_C::OrthoGraphicActor' has a wrong offset!");
static_assert(offsetof(ABP_MapReferenceActor_C, Distancebetween) == 0x000248, "Member 'ABP_MapReferenceActor_C::Distancebetween' has a wrong offset!");

}
