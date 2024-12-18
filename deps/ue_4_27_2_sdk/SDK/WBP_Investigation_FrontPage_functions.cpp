#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Investigation_FrontPage

#include "Basic.hpp"

#include "WBP_Investigation_FrontPage_classes.hpp"
#include "WBP_Investigation_FrontPage_parameters.hpp"


namespace SDK
{

// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.TabInvestigationsAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::TabInvestigationsAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "TabInvestigationsAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.Archive
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::Archive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "Archive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.WBP_Investigation_FrontPage_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOFSlotWidget*                    SlotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::WBP_Investigation_FrontPage_AutoGenFunc(class UOFSlotWidget* SlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "WBP_Investigation_FrontPage_AutoGenFunc");

	Params::WBP_Investigation_FrontPage_C_WBP_Investigation_FrontPage_AutoGenFunc Parms{};

	Parms.SlotWidget = SlotWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.SlotUnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Investigation_Selection_Slot_C*InSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::SlotUnHovered(class UWBP_Investigation_Selection_Slot_C* InSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "SlotUnHovered");

	Params::WBP_Investigation_FrontPage_C_SlotUnHovered Parms{};

	Parms.InSlot = InSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.SlotHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Investigation_Selection_Slot_C*InvestigationSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::SlotHovered(class UWBP_Investigation_Selection_Slot_C* InvestigationSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "SlotHovered");

	Params::WBP_Investigation_FrontPage_C_SlotHovered Parms{};

	Parms.InvestigationSlot = InvestigationSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.OpenExaminationView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOFSlotWidget*                    SourceSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlaySound_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Investigation_FrontPage_C::OpenExaminationView(class UItemData* ItemData, class UOFSlotWidget* SourceSlot, bool PlaySound_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "OpenExaminationView");

	Params::WBP_Investigation_FrontPage_C_OpenExaminationView Parms{};

	Parms.ItemData = ItemData;
	Parms.SourceSlot = SourceSlot;
	Parms.PlaySound_0 = PlaySound_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.HoverItemAndOpenExaminationView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlaySound_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Investigation_FrontPage_C::HoverItemAndOpenExaminationView(class UItemData* ItemData, bool PlaySound_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "HoverItemAndOpenExaminationView");

	Params::WBP_Investigation_FrontPage_C_HoverItemAndOpenExaminationView Parms{};

	Parms.ItemData = ItemData;
	Parms.PlaySound_0 = PlaySound_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.OpenMenuPressedHandler
// (Event, Protected, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::OpenMenuPressedHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "OpenMenuPressedHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.OpenArchive
// (Event, Protected, BlueprintEvent)

void UWBP_Investigation_FrontPage_C::OpenArchive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "OpenArchive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.BndEvt__WBP_Investigation_FrontPage_WBP_ArchiveSelectionWidget_K2Node_ComponentBoundEvent_0_OnSlotPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOFSlotWidget*                    SlotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::BndEvt__WBP_Investigation_FrontPage_WBP_ArchiveSelectionWidget_K2Node_ComponentBoundEvent_0_OnSlotPressed__DelegateSignature(class UOFSlotWidget* SlotWidget, class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "BndEvt__WBP_Investigation_FrontPage_WBP_ArchiveSelectionWidget_K2Node_ComponentBoundEvent_0_OnSlotPressed__DelegateSignature");

	Params::WBP_Investigation_FrontPage_C_BndEvt__WBP_Investigation_FrontPage_WBP_ArchiveSelectionWidget_K2Node_ComponentBoundEvent_0_OnSlotPressed__DelegateSignature Parms{};

	Parms.SlotWidget = SlotWidget;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.OnSlotPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOFSlotWidget*                    SlotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::OnSlotPressed_Event(class UOFSlotWidget* SlotWidget, class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "OnSlotPressed_Event");

	Params::WBP_Investigation_FrontPage_C_OnSlotPressed_Event Parms{};

	Parms.SlotWidget = SlotWidget;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Investigation_FrontPage.WBP_Investigation_FrontPage_C.ExecuteUbergraph_WBP_Investigation_FrontPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Investigation_FrontPage_C::ExecuteUbergraph_WBP_Investigation_FrontPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Investigation_FrontPage_C", "ExecuteUbergraph_WBP_Investigation_FrontPage");

	Params::WBP_Investigation_FrontPage_C_ExecuteUbergraph_WBP_Investigation_FrontPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

