#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_PlayerCharacterInteractiveCutscenes

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_PlayerCharacterInteractiveCutscenes.ALI_PlayerCharacterInteractiveCutscenes_C
// 0x0000 (0x0028 - 0x0028)
class IALI_PlayerCharacterInteractiveCutscenes_C final : public IAnimLayerInterface
{
public:
	void InteractiveCinematicLayer(const struct FPoseLink& InteractiveCinematicInputPose, struct FPoseLink* InteractiveCinematicLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_PlayerCharacterInteractiveCutscenes_C">();
	}
	static class IALI_PlayerCharacterInteractiveCutscenes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_PlayerCharacterInteractiveCutscenes_C>();
	}
};
static_assert(alignof(IALI_PlayerCharacterInteractiveCutscenes_C) == 0x000008, "Wrong alignment on IALI_PlayerCharacterInteractiveCutscenes_C");
static_assert(sizeof(IALI_PlayerCharacterInteractiveCutscenes_C) == 0x000028, "Wrong size on IALI_PlayerCharacterInteractiveCutscenes_C");

}

