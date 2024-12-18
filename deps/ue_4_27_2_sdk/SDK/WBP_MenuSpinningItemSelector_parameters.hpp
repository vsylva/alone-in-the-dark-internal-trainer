#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuSpinningItemSelector

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_MenuSpinningItemSelector.WBP_MenuSpinningItemSelector_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MenuSpinningItemSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MenuSpinningItemSelector_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MenuSpinningItemSelector_C_PreConstruct");
static_assert(sizeof(WBP_MenuSpinningItemSelector_C_PreConstruct) == 0x000001, "Wrong size on WBP_MenuSpinningItemSelector_C_PreConstruct");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MenuSpinningItemSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MenuSpinningItemSelector.WBP_MenuSpinningItemSelector_C.UpdateSelectorState
// 0x0004 (0x0004 - 0x0000)
struct WBP_MenuSpinningItemSelector_C_UpdateSelectorState final
{
public:
	float                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MenuSpinningItemSelector_C_UpdateSelectorState) == 0x000004, "Wrong alignment on WBP_MenuSpinningItemSelector_C_UpdateSelectorState");
static_assert(sizeof(WBP_MenuSpinningItemSelector_C_UpdateSelectorState) == 0x000004, "Wrong size on WBP_MenuSpinningItemSelector_C_UpdateSelectorState");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_UpdateSelectorState, State) == 0x000000, "Member 'WBP_MenuSpinningItemSelector_C_UpdateSelectorState::State' has a wrong offset!");

// Function WBP_MenuSpinningItemSelector.WBP_MenuSpinningItemSelector_C.ExecuteUbergraph_WBP_MenuSpinningItemSelector
// 0x0018 (0x0018 - 0x0000)
struct WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_State;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector) == 0x000008, "Wrong alignment on WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector");
static_assert(sizeof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector) == 0x000018, "Wrong size on WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector, EntryPoint) == 0x000000, "Member 'WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector, K2Node_Event_State) == 0x000010, "Member 'WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'WBP_MenuSpinningItemSelector_C_ExecuteUbergraph_WBP_MenuSpinningItemSelector::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

