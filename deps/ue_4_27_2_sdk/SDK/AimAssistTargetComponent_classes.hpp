#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AimAssistTargetComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AimAssistTargetComponent.AimAssistTargetComponent_C
// 0x0000 (0x0210 - 0x0210)
class UAimAssistTargetComponent_C final : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AimAssistTargetComponent_C">();
	}
	static class UAimAssistTargetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimAssistTargetComponent_C>();
	}
};
static_assert(alignof(UAimAssistTargetComponent_C) == 0x000010, "Wrong alignment on UAimAssistTargetComponent_C");
static_assert(sizeof(UAimAssistTargetComponent_C) == 0x000210, "Wrong size on UAimAssistTargetComponent_C");

}
