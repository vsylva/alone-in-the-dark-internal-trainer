#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LamppostFrenchQuarters

#include "Basic.hpp"

#include "BP_LightFixture_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LamppostFrenchQuarters.BP_LamppostFrenchQuarters_C
// 0x0010 (0x0360 - 0x0350)
class ABP_LamppostFrenchQuarters_C final : public ABP_LightFixture_C
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LamppostFrenchQuarters_C">();
	}
	static class ABP_LamppostFrenchQuarters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LamppostFrenchQuarters_C>();
	}
};
static_assert(alignof(ABP_LamppostFrenchQuarters_C) == 0x000010, "Wrong alignment on ABP_LamppostFrenchQuarters_C");
static_assert(sizeof(ABP_LamppostFrenchQuarters_C) == 0x000360, "Wrong size on ABP_LamppostFrenchQuarters_C");
static_assert(offsetof(ABP_LamppostFrenchQuarters_C, SpotLight) == 0x000350, "Member 'ABP_LamppostFrenchQuarters_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_LamppostFrenchQuarters_C, PointLight) == 0x000358, "Member 'ABP_LamppostFrenchQuarters_C::PointLight' has a wrong offset!");

}
