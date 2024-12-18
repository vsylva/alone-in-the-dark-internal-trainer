#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilLamp01

#include "Basic.hpp"

#include "BP_LightFixture_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OilLamp01.BP_OilLamp01_C
// 0x0010 (0x0360 - 0x0350)
class ABP_OilLamp01_C final : public ABP_LightFixture_C
{
public:
	class UNiagaraComponent*                      N_CandleFire;                                      // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ToggleLights();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilLamp01_C">();
	}
	static class ABP_OilLamp01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OilLamp01_C>();
	}
};
static_assert(alignof(ABP_OilLamp01_C) == 0x000010, "Wrong alignment on ABP_OilLamp01_C");
static_assert(sizeof(ABP_OilLamp01_C) == 0x000360, "Wrong size on ABP_OilLamp01_C");
static_assert(offsetof(ABP_OilLamp01_C, N_CandleFire) == 0x000350, "Member 'ABP_OilLamp01_C::N_CandleFire' has a wrong offset!");
static_assert(offsetof(ABP_OilLamp01_C, PointLight) == 0x000358, "Member 'ABP_OilLamp01_C::PointLight' has a wrong offset!");

}

