#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesLevel

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class PiecesLevel.WaitInLevelsUtil_WorldSubsystem
// 0x0030 (0x0060 - 0x0030)
class UWaitInLevelsUtil_WorldSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x30];                                      // 0x0030(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CheckIfLevelsAreLoaded_Handler();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaitInLevelsUtil_WorldSubsystem">();
	}
	static class UWaitInLevelsUtil_WorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaitInLevelsUtil_WorldSubsystem>();
	}
};
static_assert(alignof(UWaitInLevelsUtil_WorldSubsystem) == 0x000008, "Wrong alignment on UWaitInLevelsUtil_WorldSubsystem");
static_assert(sizeof(UWaitInLevelsUtil_WorldSubsystem) == 0x000060, "Wrong size on UWaitInLevelsUtil_WorldSubsystem");

}
