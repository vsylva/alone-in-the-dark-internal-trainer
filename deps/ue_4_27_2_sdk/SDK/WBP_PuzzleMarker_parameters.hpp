#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PuzzleMarker

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PuzzleMarker.WBP_PuzzleMarker_C.ExecuteUbergraph_WBP_PuzzleMarker
// 0x0020 (0x0020 - 0x0000)
struct WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOFSaveGameDataSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlayerGuidanceSystemState_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker) == 0x000008, "Wrong alignment on WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker");
static_assert(sizeof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker) == 0x000020, "Wrong size on WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker");
static_assert(offsetof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker, EntryPoint) == 0x000000, "Member 'WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker, CallFunc_GetPlayerGuidanceSystemState_ReturnValue) == 0x000018, "Member 'WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker::CallFunc_GetPlayerGuidanceSystemState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'WBP_PuzzleMarker_C_ExecuteUbergraph_WBP_PuzzleMarker::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
