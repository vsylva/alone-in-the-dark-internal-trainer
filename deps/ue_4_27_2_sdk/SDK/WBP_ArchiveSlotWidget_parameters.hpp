#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArchiveSlotWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ArchiveSlotWidget.WBP_ArchiveSlotWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ArchiveSlotWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ArchiveSlotWidget_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ArchiveSlotWidget_C_PreConstruct");
static_assert(sizeof(WBP_ArchiveSlotWidget_C_PreConstruct) == 0x000001, "Wrong size on WBP_ArchiveSlotWidget_C_PreConstruct");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ArchiveSlotWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ArchiveSlotWidget.WBP_ArchiveSlotWidget_C.BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature");
static_assert(sizeof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature, Button) == 0x000000, "Member 'WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ArchiveSlotWidget.WBP_ArchiveSlotWidget_C.BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature");
static_assert(sizeof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature, Button) == 0x000000, "Member 'WBP_ArchiveSlotWidget_C_BndEvt__WBP_ArchiveSlotWidget_SlotButton_K2Node_ComponentBoundEvent_1_OFButtonHoverEvent__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ArchiveSlotWidget.WBP_ArchiveSlotWidget_C.ExecuteUbergraph_WBP_ArchiveSlotWidget
// 0x0050 (0x0050 - 0x0000)
struct WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Button_1;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              K2Node_DynamicCast_AsGrid_Slot;                    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              K2Node_DynamicCast_AsGrid_Slot_1;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget) == 0x000008, "Wrong alignment on WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget");
static_assert(sizeof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget) == 0x000050, "Wrong size on WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, EntryPoint) == 0x000000, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_ComponentBoundEvent_Button_1) == 0x000008, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_DynamicCast_AsGrid_Slot) == 0x000030, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_DynamicCast_AsGrid_Slot' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_DynamicCast_AsGrid_Slot_1) == 0x000040, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_DynamicCast_AsGrid_Slot_1' has a wrong offset!");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_ArchiveSlotWidget_C_ExecuteUbergraph_WBP_ArchiveSlotWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_ArchiveSlotWidget.WBP_ArchiveSlotWidget_C.OnSlotPressed_0__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature final
{
public:
	class UItemData*                              NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature");
static_assert(sizeof(WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature) == 0x000008, "Wrong size on WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature");
static_assert(offsetof(WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_ArchiveSlotWidget_C_OnSlotPressed_0__DelegateSignature::NewParam' has a wrong offset!");

}
