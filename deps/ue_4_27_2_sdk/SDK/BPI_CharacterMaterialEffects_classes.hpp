#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharacterMaterialEffects

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CharacterMaterialEffects.BPI_CharacterMaterialEffects_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CharacterMaterialEffects_C final : public IInterface
{
public:
	void SplatterEffect(int32 StageSplatter, const struct FLinearColor& ColorSplatter, float RoughnessSplatter, const float DeltaIntensityForStage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CharacterMaterialEffects_C">();
	}
	static class IBPI_CharacterMaterialEffects_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CharacterMaterialEffects_C>();
	}
};
static_assert(alignof(IBPI_CharacterMaterialEffects_C) == 0x000008, "Wrong alignment on IBPI_CharacterMaterialEffects_C");
static_assert(sizeof(IBPI_CharacterMaterialEffects_C) == 0x000028, "Wrong size on IBPI_CharacterMaterialEffects_C");

}

