#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_RevolverRecoilWrapper

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_RevolverRecoilWrapper.CS_RevolverRecoilWrapper_C
// 0x0000 (0x00B0 - 0x00B0)
class UCS_RevolverRecoilWrapper_C final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_RevolverRecoilWrapper_C">();
	}
	static class UCS_RevolverRecoilWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_RevolverRecoilWrapper_C>();
	}
};
static_assert(alignof(UCS_RevolverRecoilWrapper_C) == 0x000010, "Wrong alignment on UCS_RevolverRecoilWrapper_C");
static_assert(sizeof(UCS_RevolverRecoilWrapper_C) == 0x0000B0, "Wrong size on UCS_RevolverRecoilWrapper_C");

}
