#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DarkManAnimation

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DarkManAnimation.BPI_DarkManAnimation_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DarkManAnimation_C final : public IInterface
{
public:
	void SetTransitionInstantlyToEmoteLoop(bool Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DarkManAnimation_C">();
	}
	static class IBPI_DarkManAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DarkManAnimation_C>();
	}
};
static_assert(alignof(IBPI_DarkManAnimation_C) == 0x000008, "Wrong alignment on IBPI_DarkManAnimation_C");
static_assert(sizeof(IBPI_DarkManAnimation_C) == 0x000028, "Wrong size on IBPI_DarkManAnimation_C");

}
