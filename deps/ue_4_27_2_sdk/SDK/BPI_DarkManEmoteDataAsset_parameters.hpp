#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DarkManEmoteDataAsset

#include "Basic.hpp"

#include "DarkManEmoteType_structs.hpp"


namespace SDK::Params
{

// Function BPI_DarkManEmoteDataAsset.BPI_DarkManEmoteDataAsset_C.GetEmoteType
// 0x0001 (0x0001 - 0x0000)
struct BPI_DarkManEmoteDataAsset_C_GetEmoteType final
{
public:
	EDarkManEmoteType                             EmoteType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_DarkManEmoteDataAsset_C_GetEmoteType) == 0x000001, "Wrong alignment on BPI_DarkManEmoteDataAsset_C_GetEmoteType");
static_assert(sizeof(BPI_DarkManEmoteDataAsset_C_GetEmoteType) == 0x000001, "Wrong size on BPI_DarkManEmoteDataAsset_C_GetEmoteType");
static_assert(offsetof(BPI_DarkManEmoteDataAsset_C_GetEmoteType, EmoteType) == 0x000000, "Member 'BPI_DarkManEmoteDataAsset_C_GetEmoteType::EmoteType' has a wrong offset!");

}
