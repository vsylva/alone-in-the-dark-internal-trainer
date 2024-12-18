#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArchiveSelectionWidget

#include "Basic.hpp"

#include "WBP_ArchiveSelectionWidget_classes.hpp"
#include "WBP_ArchiveSelectionWidget_parameters.hpp"


namespace SDK
{

// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.UpdateListButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ArchiveSelectionWidget_C::UpdateListButtons(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "UpdateListButtons");

	Params::WBP_ArchiveSelectionWidget_C_UpdateListButtons Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OnActive
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.SwitchChapterGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetInputHandlingBase*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::SwitchChapterGrid(class UWidgetInputHandlingBase* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "SwitchChapterGrid");

	Params::WBP_ArchiveSelectionWidget_C_SwitchChapterGrid Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OnArchiveChapterCancelled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::OnArchiveChapterCancelled(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OnArchiveChapterCancelled");

	Params::WBP_ArchiveSelectionWidget_C_OnArchiveChapterCancelled Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.SetupControlButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::SetupControlButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "SetupControlButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.GetWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  Widgets                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_ArchiveSelectionWidget_C::GetWidgets(TArray<class UWidget*>* Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "GetWidgets");

	Params::WBP_ArchiveSelectionWidget_C_GetWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widgets != nullptr)
		*Widgets = std::move(Parms.Widgets);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OnAnimationFinished");

	Params::WBP_ArchiveSelectionWidget_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.SlotPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOFSlotWidget*                    SlotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::SlotPressed(class UOFSlotWidget* SlotWidget, class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "SlotPressed");

	Params::WBP_ArchiveSelectionWidget_C_SlotPressed Parms{};

	Parms.SlotWidget = SlotWidget;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_1_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Archive_Chapter_01_C*        ArchiveChapterSlots                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_1_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_1_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_1_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature Parms{};

	Parms.ArchiveChapterSlots = ArchiveChapterSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_2_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Archive_Chapter_01_C*        ArchiveChapterSlots                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_2_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_2_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_2_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature Parms{};

	Parms.ArchiveChapterSlots = ArchiveChapterSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_3_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Archive_Chapter_01_C*        ArchiveChapterSlots                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_3_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_3_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_3_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature Parms{};

	Parms.ArchiveChapterSlots = ArchiveChapterSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_4_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Archive_Chapter_01_C*        ArchiveChapterSlots                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_4_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_4_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_4_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature Parms{};

	Parms.ArchiveChapterSlots = ArchiveChapterSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_5_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Archive_Chapter_01_C*        ArchiveChapterSlots                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_5_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_5_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_BndEvt__WBP_ArchiveSelectionWidget_ButtonChapter_5_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature Parms{};

	Parms.ArchiveChapterSlots = ArchiveChapterSlots;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OpenMenuPressedHandler
// (Event, Protected, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::OpenMenuPressedHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OpenMenuPressedHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ArchiveSelectionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.ExecuteUbergraph_WBP_ArchiveSelectionWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::ExecuteUbergraph_WBP_ArchiveSelectionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "ExecuteUbergraph_WBP_ArchiveSelectionWidget");

	Params::WBP_ArchiveSelectionWidget_C_ExecuteUbergraph_WBP_ArchiveSelectionWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArchiveSelectionWidget.WBP_ArchiveSelectionWidget_C.OnSlotPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOFSlotWidget*                    SlotWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArchiveSelectionWidget_C::OnSlotPressed__DelegateSignature(class UOFSlotWidget* SlotWidget, class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArchiveSelectionWidget_C", "OnSlotPressed__DelegateSignature");

	Params::WBP_ArchiveSelectionWidget_C_OnSlotPressed__DelegateSignature Parms{};

	Parms.SlotWidget = SlotWidget;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}

}

