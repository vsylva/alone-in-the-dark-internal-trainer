#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InteractionIcon

#include "Basic.hpp"

#include "WBP_InteractionIcon_classes.hpp"
#include "WBP_InteractionIcon_parameters.hpp"


namespace SDK
{

// Function WBP_InteractionIcon.WBP_InteractionIcon_C.UpdateIsUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StandardIsUsable                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OpportunityIsUsable                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InteractionIcon_C::UpdateIsUsable(bool StandardIsUsable, bool OpportunityIsUsable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "UpdateIsUsable");

	Params::WBP_InteractionIcon_C_UpdateIsUsable Parms{};

	Parms.StandardIsUsable = StandardIsUsable;
	Parms.OpportunityIsUsable = OpportunityIsUsable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.IsSelectedAndUsable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_InteractionIcon_C::IsSelectedAndUsable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "IsSelectedAndUsable");

	Params::WBP_InteractionIcon_C_IsSelectedAndUsable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Set Icon Texture and Size
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::Set_Icon_Texture_and_Size()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Set Icon Texture and Size");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Interaction Type Settings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::Interaction_Type_Settings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Interaction Type Settings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.GetInteractableScreenPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        ScreenPosition                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bProjectsToScreen                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InteractionIcon_C::GetInteractableScreenPosition(struct FVector2D* ScreenPosition, bool* bProjectsToScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "GetInteractableScreenPosition");

	Params::WBP_InteractionIcon_C_GetInteractableScreenPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	if (bProjectsToScreen != nullptr)
		*bProjectsToScreen = Parms.bProjectsToScreen;
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Get Interaction Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInteractionType                        InteractionType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::Get_Interaction_Type(EInteractionType* InteractionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Get Interaction Type");

	Params::WBP_InteractionIcon_C_Get_Interaction_Type Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionType != nullptr)
		*InteractionType = Parms.InteractionType;
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.SetDirectionalArrowValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::SetDirectionalArrowValues(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "SetDirectionalArrowValues");

	Params::WBP_InteractionIcon_C_SetDirectionalArrowValues Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Project Icon from Interactable to Screen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector4                         Icon_Safe_Zone                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::Project_Icon_from_Interactable_to_Screen(const struct FVector4& Icon_Safe_Zone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Project Icon from Interactable to Screen");

	Params::WBP_InteractionIcon_C_Project_Icon_from_Interactable_to_Screen Parms{};

	Parms.Icon_Safe_Zone = std::move(Icon_Safe_Zone);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Interpolate Opacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::Interpolate_Opacity(class UWidget* Widget, bool Visible, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Interpolate Opacity");

	Params::WBP_InteractionIcon_C_Interpolate_Opacity Parms{};

	Parms.Widget = Widget;
	Parms.Visible = Visible;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.SequenceEvent_IconHid
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::SequenceEvent_IconHid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "SequenceEvent_IconHid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.OnCompleted_485500A047BF171946DC96932E7180D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             KeyString                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractionIcon_C::OnCompleted_485500A047BF171946DC96932E7180D3(class UTexture2D* Texture, const class FText& KeyString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "OnCompleted_485500A047BF171946DC96932E7180D3");

	Params::WBP_InteractionIcon_C_OnCompleted_485500A047BF171946DC96932E7180D3 Parms{};

	Parms.Texture = Texture;
	Parms.KeyString = std::move(KeyString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.OnCompleted_0C62419A4F013AC5E646499DD56E2F05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             KeyString                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractionIcon_C::OnCompleted_0C62419A4F013AC5E646499DD56E2F05(class UTexture2D* Texture, const class FText& KeyString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "OnCompleted_0C62419A4F013AC5E646499DD56E2F05");

	Params::WBP_InteractionIcon_C_OnCompleted_0C62419A4F013AC5E646499DD56E2F05 Parms{};

	Parms.Texture = Texture;
	Parms.KeyString = std::move(KeyString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Hide Icon
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::Hide_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Hide Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InteractionIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.HideSelectionIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::HideSelectionIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "HideSelectionIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.ShowSelectionIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::ShowSelectionIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "ShowSelectionIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.ShowIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractionIcon_C::ShowIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "ShowIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.OnShowSelectionExtraIconStatusChangedDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowSelectionExtraIcon                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InteractionIcon_C::OnShowSelectionExtraIconStatusChangedDone(bool bShowSelectionExtraIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "OnShowSelectionExtraIconStatusChangedDone");

	Params::WBP_InteractionIcon_C_OnShowSelectionExtraIconStatusChangedDone Parms{};

	Parms.bShowSelectionExtraIcon = bShowSelectionExtraIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.InputTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepadType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InteractionIcon_C::InputTypeChanged(bool IsGamepadType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "InputTypeChanged");

	Params::WBP_InteractionIcon_C_InputTypeChanged Parms{};

	Parms.IsGamepadType = IsGamepadType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.HUD Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::HUD_Tick(float Delta_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "HUD Tick");

	Params::WBP_InteractionIcon_C_HUD_Tick Parms{};

	Parms.Delta_Time = Delta_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.ExecuteUbergraph_WBP_InteractionIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::ExecuteUbergraph_WBP_InteractionIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "ExecuteUbergraph_WBP_InteractionIcon");

	Params::WBP_InteractionIcon_C_ExecuteUbergraph_WBP_InteractionIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.IconHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractionIcon_C*           IconReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractionIcon_C::IconHidden__DelegateSignature(class UWBP_InteractionIcon_C* IconReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "IconHidden__DelegateSignature");

	Params::WBP_InteractionIcon_C_IconHidden__DelegateSignature Parms{};

	Parms.IconReference = IconReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractionIcon.WBP_InteractionIcon_C.IsWidgetVisibilityAllowed
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_InteractionIcon_C::IsWidgetVisibilityAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractionIcon_C", "IsWidgetVisibilityAllowed");

	Params::WBP_InteractionIcon_C_IsWidgetVisibilityAllowed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
