#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Inventory_Selection_Slot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Inventory_Selection_Slot.WBP_Menu_Inventory_Selection_Slot_C.TextAmountVisibility
// 0x0006 (0x0006 - 0x0000)
struct WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility) == 0x000001, "Wrong alignment on WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility");
static_assert(sizeof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility) == 0x000006, "Wrong size on WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, ReturnValue) == 0x000000, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility, K2Node_Select_Default) == 0x000005, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Menu_Inventory_Selection_Slot.WBP_Menu_Inventory_Selection_Slot_C.TextAmountBinding
// 0x0058 (0x0058 - 0x0000)
struct WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding) == 0x000008, "Wrong alignment on WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding");
static_assert(sizeof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding) == 0x000058, "Wrong size on WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding, ReturnValue) == 0x000000, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_Menu_Inventory_Selection_Slot_C_TextAmountBinding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Inventory_Selection_Slot.WBP_Menu_Inventory_Selection_Slot_C.OnIconClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature final
{
public:
	class UItemData*                              ItemData_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature");
static_assert(sizeof(WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature");
static_assert(offsetof(WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature, ItemData_0) == 0x000000, "Member 'WBP_Menu_Inventory_Selection_Slot_C_OnIconClicked__DelegateSignature::ItemData_0' has a wrong offset!");

}

