#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OFButton

#include "Basic.hpp"

#include "WBP_OFButton_classes.hpp"
#include "WBP_OFButton_parameters.hpp"


namespace SDK
{

// Function WBP_OFButton.WBP_OFButton_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.OnWidgetUnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::OnWidgetUnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "OnWidgetUnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.OnUpdateShader__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::OnUpdateShader__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "OnUpdateShader__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.ExecuteUbergraph_WBP_OFButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFButton_C::ExecuteUbergraph_WBP_OFButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "ExecuteUbergraph_WBP_OFButton");

	Params::WBP_OFButton_C_ExecuteUbergraph_WBP_OFButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_OFButton_C::BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_OFButton_C::BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_OFButton_C::BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OFButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "Tick");

	Params::WBP_OFButton_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OFButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OFButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "PreConstruct");

	Params::WBP_OFButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.LoadCompleteDelegate_6C9668414091E74590AF5DA62581129E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OFButton_C::LoadCompleteDelegate_6C9668414091E74590AF5DA62581129E(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "LoadCompleteDelegate_6C9668414091E74590AF5DA62581129E");

	Params::WBP_OFButton_C_LoadCompleteDelegate_6C9668414091E74590AF5DA62581129E Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.LoadCompleteDelegate_C67DCA6A46219A81954A58A137FB5D18
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OFButton_C::LoadCompleteDelegate_C67DCA6A46219A81954A58A137FB5D18(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "LoadCompleteDelegate_C67DCA6A46219A81954A58A137FB5D18");

	Params::WBP_OFButton_C_LoadCompleteDelegate_C67DCA6A46219A81954A58A137FB5D18 Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.Finished_0602E8BB47345BAD09386EA845C6A814
// (BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::Finished_0602E8BB47345BAD09386EA845C6A814()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "Finished_0602E8BB47345BAD09386EA845C6A814");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.Get_OFbuttonTextBlock_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_OFButton_C::Get_OFbuttonTextBlock_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "Get_OFbuttonTextBlock_Text_0");

	Params::WBP_OFButton_C_Get_OFbuttonTextBlock_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OFButton.WBP_OFButton_C.GetWidgetSizeAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::GetWidgetSizeAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "GetWidgetSizeAspectRatio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.UpdateButtonShader
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::UpdateButtonShader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "UpdateButtonShader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OFButton.WBP_OFButton_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OFButton_C::SetButtonState(bool InChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "SetButtonState");

	Params::WBP_OFButton_C_SetButtonState Parms{};

	Parms.InChecked = InChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OFButton.WBP_OFButton_C.Update Button State Brush
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OFButton_C::Update_Button_State_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OFButton_C", "Update Button State Brush");

	UObject::ProcessEvent(Func, nullptr);
}

}
