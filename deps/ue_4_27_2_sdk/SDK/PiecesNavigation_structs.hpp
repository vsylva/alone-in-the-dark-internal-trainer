#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesNavigation

#include "Basic.hpp"


namespace SDK
{

// Enum PiecesNavigation.EQueryStatus
// NumValues: 0x0006
enum class EQueryStatus : uint8
{
	WAITING_FOR_RESULT                       = 0,
	SUCCESS                                  = 1,
	FAILED                                   = 2,
	INVALID_ID                               = 3,
	NONE                                     = 4,
	EQueryStatus_MAX                         = 5,
};

// ScriptStruct PiecesNavigation.NavigationQueryData
// 0x0018 (0x0018 - 0x0000)
struct FNavigationQueryData final
{
public:
	class UNavigationPath*                        Path;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationQueryData) == 0x000008, "Wrong alignment on FNavigationQueryData");
static_assert(sizeof(FNavigationQueryData) == 0x000018, "Wrong size on FNavigationQueryData");
static_assert(offsetof(FNavigationQueryData, Path) == 0x000000, "Member 'FNavigationQueryData::Path' has a wrong offset!");

// ScriptStruct PiecesNavigation.ExtraParameters
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FExtraParameters final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FExtraParameters) == 0x000004, "Wrong alignment on FExtraParameters");
static_assert(sizeof(FExtraParameters) == 0x00000C, "Wrong size on FExtraParameters");

// ScriptStruct PiecesNavigation.NavAsyncQueryId
// 0x0004 (0x0004 - 0x0000)
struct FNavAsyncQueryId final
{
public:
	uint32                                        QueryID;                                           // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FNavAsyncQueryId) == 0x000004, "Wrong alignment on FNavAsyncQueryId");
static_assert(sizeof(FNavAsyncQueryId) == 0x000004, "Wrong size on FNavAsyncQueryId");
static_assert(offsetof(FNavAsyncQueryId, QueryID) == 0x000000, "Member 'FNavAsyncQueryId::QueryID' has a wrong offset!");

}
