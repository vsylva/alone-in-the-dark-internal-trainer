#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EnemyCommon

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EnemyCommon.BPI_EnemyCommon_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EnemyCommon_C final : public IInterface
{
public:
	void SetHasDeathReactionHappened(bool HasDied);
	void GetHasDeathReactionHappened(bool* HasDied);
	void GetMobPlayerCollision(class UCapsuleComponent** MobPlayerCollission);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EnemyCommon_C">();
	}
	static class IBPI_EnemyCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EnemyCommon_C>();
	}
};
static_assert(alignof(IBPI_EnemyCommon_C) == 0x000008, "Wrong alignment on IBPI_EnemyCommon_C");
static_assert(sizeof(IBPI_EnemyCommon_C) == 0x000028, "Wrong size on IBPI_EnemyCommon_C");

}
