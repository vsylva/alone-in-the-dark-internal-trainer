#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerCharacterInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_PlayerCharacterInterface.BPI_PlayerCharacterInterface_C.AddSmokeBuildup
// 0x0004 (0x0004 - 0x0000)
struct BPI_PlayerCharacterInterface_C_AddSmokeBuildup final
{
public:
	float                                         PercentToAdd;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PlayerCharacterInterface_C_AddSmokeBuildup) == 0x000004, "Wrong alignment on BPI_PlayerCharacterInterface_C_AddSmokeBuildup");
static_assert(sizeof(BPI_PlayerCharacterInterface_C_AddSmokeBuildup) == 0x000004, "Wrong size on BPI_PlayerCharacterInterface_C_AddSmokeBuildup");
static_assert(offsetof(BPI_PlayerCharacterInterface_C_AddSmokeBuildup, PercentToAdd) == 0x000000, "Member 'BPI_PlayerCharacterInterface_C_AddSmokeBuildup::PercentToAdd' has a wrong offset!");

}
