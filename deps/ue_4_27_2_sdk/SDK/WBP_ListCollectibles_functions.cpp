#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListCollectibles

#include "Basic.hpp"

#include "WBP_ListCollectibles_classes.hpp"
#include "WBP_ListCollectibles_parameters.hpp"


namespace SDK
{

// Function WBP_ListCollectibles.WBP_ListCollectibles_C.Tab Collectibles Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::Tab_Collectibles_Anim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "Tab Collectibles Anim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.SetupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::SetupWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "SetupWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.ShowCollectibleUsingItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::ShowCollectibleUsingItem(class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "ShowCollectibleUsingItem");

	Params::WBP_ListCollectibles_C_ShowCollectibleUsingItem Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.UpdateScrollBoxMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::UpdateScrollBoxMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "UpdateScrollBoxMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.PlayButtonIconAnimations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::PlayButtonIconAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "PlayButtonIconAnimations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.SetCollectibleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::SetCollectibleText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "SetCollectibleText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OnButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          CollectibleWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::OnButtonPressed(class UObject* CollectibleWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OnButtonPressed");

	Params::WBP_ListCollectibles_C_OnButtonPressed Parms{};

	Parms.CollectibleWidget = CollectibleWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.GetWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  Widgets                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_ListCollectibles_C::GetWidgets(TArray<class UWidget*>* Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "GetWidgets");

	Params::WBP_ListCollectibles_C_GetWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widgets != nullptr)
		*Widgets = std::move(Parms.Widgets);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.UpdateWidgetList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CollectiblesButton_C*        Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::UpdateWidgetList(class UWBP_CollectiblesButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "UpdateWidgetList");

	Params::WBP_ListCollectibles_C_UpdateWidgetList Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ListCollectibles_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ListCollectibles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OpenMenuPressedHandler
// (Event, Protected, BlueprintEvent)

void UWBP_ListCollectibles_C::OpenMenuPressedHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OpenMenuPressedHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OnAllCollectiblesAdded
// (BlueprintCallable, BlueprintEvent)

void UWBP_ListCollectibles_C::OnAllCollectiblesAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OnAllCollectiblesAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OnCollectibleHover_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CollectiblesButton_C*        CollectibleButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::OnCollectibleHover_Event_0(class UWBP_CollectiblesButton_C* CollectibleButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OnCollectibleHover_Event_0");

	Params::WBP_ListCollectibles_C_OnCollectibleHover_Event_0 Parms{};

	Parms.CollectibleButton = CollectibleButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.BndEvt__WBP_ListCollectibles_CollectibleScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::BndEvt__WBP_ListCollectibles_CollectibleScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "BndEvt__WBP_ListCollectibles_CollectibleScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	Params::WBP_ListCollectibles_C_BndEvt__WBP_ListCollectibles_CollectibleScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.OnAcceptPressed
// (Event, Protected, BlueprintEvent)

void UWBP_ListCollectibles_C::OnAcceptPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "OnAcceptPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListCollectibles.WBP_ListCollectibles_C.ExecuteUbergraph_WBP_ListCollectibles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListCollectibles_C::ExecuteUbergraph_WBP_ListCollectibles(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListCollectibles_C", "ExecuteUbergraph_WBP_ListCollectibles");

	Params::WBP_ListCollectibles_C_ExecuteUbergraph_WBP_ListCollectibles Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
