#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Collectibles_Slot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.HideItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_Collectibles_Slot_C_HideItem final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Collectibles_Slot_C_HideItem) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_HideItem");
static_assert(sizeof(WBP_Collectibles_Slot_C_HideItem) == 0x000008, "Wrong size on WBP_Collectibles_Slot_C_HideItem");
static_assert(offsetof(WBP_Collectibles_Slot_C_HideItem, CallFunc_GetEffectMaterial_ReturnValue) == 0x000000, "Member 'WBP_Collectibles_Slot_C_HideItem::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.Update Slot
// 0x0050 (0x0050 - 0x0000)
struct WBP_Collectibles_Slot_C_Update_Slot final
{
public:
	TSoftObjectPtr<class UItemData>               ItemData_0;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TSoftObjectPtr<class UCollectiblesDataAsset>  CollectibleDataAsset;                              // 0x0028(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Collectibles_Slot_C_Update_Slot) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_Update_Slot");
static_assert(sizeof(WBP_Collectibles_Slot_C_Update_Slot) == 0x000050, "Wrong size on WBP_Collectibles_Slot_C_Update_Slot");
static_assert(offsetof(WBP_Collectibles_Slot_C_Update_Slot, ItemData_0) == 0x000000, "Member 'WBP_Collectibles_Slot_C_Update_Slot::ItemData_0' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_Update_Slot, CollectibleDataAsset) == 0x000028, "Member 'WBP_Collectibles_Slot_C_Update_Slot::CollectibleDataAsset' has a wrong offset!");

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.ExecuteUbergraph_WBP_Collectibles_Slot
// 0x0030 (0x0030 - 0x0000)
struct WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerController*                    CallFunc_GetObsidianFoxPlayerController_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UCollectibleManager*              CallFunc_GetCollectibleManager_ReturnValue;        // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HaveGatheredItem_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot");
static_assert(sizeof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot) == 0x000030, "Wrong size on WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, EntryPoint) == 0x000000, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, Temp_bool_Variable) == 0x000004, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, Temp_byte_Variable) == 0x000005, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000008, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, K2Node_Select_Default) == 0x00000C, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, CallFunc_GetEffectMaterial_ReturnValue) == 0x000010, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, CallFunc_GetObsidianFoxPlayerController_ReturnValue) == 0x000018, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::CallFunc_GetObsidianFoxPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, CallFunc_GetCollectibleManager_ReturnValue) == 0x000020, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::CallFunc_GetCollectibleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot, CallFunc_HaveGatheredItem_ReturnValue) == 0x000028, "Member 'WBP_Collectibles_Slot_C_ExecuteUbergraph_WBP_Collectibles_Slot::CallFunc_HaveGatheredItem_ReturnValue' has a wrong offset!");

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.OnSlotUnhovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature final
{
public:
	class UWBP_Investigation_Selection_Slot_C*    NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature");
static_assert(sizeof(WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature) == 0x000008, "Wrong size on WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature");
static_assert(offsetof(WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_Collectibles_Slot_C_OnSlotUnhovered__DelegateSignature::NewParam' has a wrong offset!");

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.OnSlotHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature final
{
public:
	class UWBP_Investigation_Selection_Slot_C*    InvestigationSlot;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature");
static_assert(sizeof(WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature");
static_assert(offsetof(WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature, InvestigationSlot) == 0x000000, "Member 'WBP_Collectibles_Slot_C_OnSlotHovered__DelegateSignature::InvestigationSlot' has a wrong offset!");

// Function WBP_Collectibles_Slot.WBP_Collectibles_Slot_C.OnIconClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature final
{
public:
	class UItemData*                              ItemData_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature");
static_assert(sizeof(WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature");
static_assert(offsetof(WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature, ItemData_0) == 0x000000, "Member 'WBP_Collectibles_Slot_C_OnIconClicked__DelegateSignature::ItemData_0' has a wrong offset!");

}
