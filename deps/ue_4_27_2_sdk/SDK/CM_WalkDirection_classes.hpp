#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_WalkDirection

#include "Basic.hpp"

#include "PiecesThirdPersonCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CM_WalkDirection.CM_WalkDirection_C
// 0x0000 (0x0568 - 0x0568)
class UCM_WalkDirection_C final : public UCameraModifier_WalkDirection
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_WalkDirection_C">();
	}
	static class UCM_WalkDirection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_WalkDirection_C>();
	}
};
static_assert(alignof(UCM_WalkDirection_C) == 0x000008, "Wrong alignment on UCM_WalkDirection_C");
static_assert(sizeof(UCM_WalkDirection_C) == 0x000568, "Wrong size on UCM_WalkDirection_C");

}
