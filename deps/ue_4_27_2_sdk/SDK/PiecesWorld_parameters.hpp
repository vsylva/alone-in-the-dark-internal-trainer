#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesWorld

#include "Basic.hpp"


namespace SDK::Params
{

// Function PiecesWorld.PiecesLevelStreamingFilter.ShouldBeDisabled
// 0x0018 (0x0018 - 0x0000)
struct PiecesLevelStreamingFilter_ShouldBeDisabled final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelStreaming*                        InLevelStreaming;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesLevelStreamingFilter_ShouldBeDisabled) == 0x000008, "Wrong alignment on PiecesLevelStreamingFilter_ShouldBeDisabled");
static_assert(sizeof(PiecesLevelStreamingFilter_ShouldBeDisabled) == 0x000018, "Wrong size on PiecesLevelStreamingFilter_ShouldBeDisabled");
static_assert(offsetof(PiecesLevelStreamingFilter_ShouldBeDisabled, WorldContextObject) == 0x000000, "Member 'PiecesLevelStreamingFilter_ShouldBeDisabled::WorldContextObject' has a wrong offset!");
static_assert(offsetof(PiecesLevelStreamingFilter_ShouldBeDisabled, InLevelStreaming) == 0x000008, "Member 'PiecesLevelStreamingFilter_ShouldBeDisabled::InLevelStreaming' has a wrong offset!");
static_assert(offsetof(PiecesLevelStreamingFilter_ShouldBeDisabled, ReturnValue) == 0x000010, "Member 'PiecesLevelStreamingFilter_ShouldBeDisabled::ReturnValue' has a wrong offset!");

}
