#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_8Bit_HDR

#include "Basic.hpp"

#include "CM_8Bit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CM_8Bit_HDR.CM_8Bit_HDR_C
// 0x0000 (0x0080 - 0x0080)
class UCM_8Bit_HDR_C final : public UCM_8Bit_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_8Bit_HDR_C">();
	}
	static class UCM_8Bit_HDR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_8Bit_HDR_C>();
	}
};
static_assert(alignof(UCM_8Bit_HDR_C) == 0x000008, "Wrong alignment on UCM_8Bit_HDR_C");
static_assert(sizeof(UCM_8Bit_HDR_C) == 0x000080, "Wrong size on UCM_8Bit_HDR_C");

}
