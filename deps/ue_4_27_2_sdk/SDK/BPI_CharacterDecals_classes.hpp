#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharacterDecals

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CharacterDecals.BPI_CharacterDecals_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CharacterDecals_C final : public IInterface
{
public:
	void SpawnCharacterDecal(const struct FHitResult& HitResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CharacterDecals_C">();
	}
	static class IBPI_CharacterDecals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CharacterDecals_C>();
	}
};
static_assert(alignof(IBPI_CharacterDecals_C) == 0x000008, "Wrong alignment on IBPI_CharacterDecals_C");
static_assert(sizeof(IBPI_CharacterDecals_C) == 0x000028, "Wrong size on IBPI_CharacterDecals_C");

}

