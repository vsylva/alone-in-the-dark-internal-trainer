#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_HDR

#include "Basic.hpp"

#include "WBP_Menu_HDR_classes.hpp"
#include "WBP_Menu_HDR_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_HDR.WBP_Menu_HDR_C.ExecuteUbergraph_WBP_Menu_HDR
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_HDR_C::ExecuteUbergraph_WBP_Menu_HDR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "ExecuteUbergraph_WBP_Menu_HDR");

	Params::WBP_Menu_HDR_C_ExecuteUbergraph_WBP_Menu_HDR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_HDR_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_HDR_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_2_OnDecreaseHandler__DelegateSignature
// (BlueprintEvent)

void UWBP_Menu_HDR_C::BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_2_OnDecreaseHandler__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_2_OnDecreaseHandler__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_0_OnIncreaseHandler__DelegateSignature
// (BlueprintEvent)

void UWBP_Menu_HDR_C::BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_0_OnIncreaseHandler__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_0_OnIncreaseHandler__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_1_OnDecreaseHandler__DelegateSignature
// (BlueprintEvent)

void UWBP_Menu_HDR_C::BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_1_OnDecreaseHandler__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "BndEvt__WBP_Menu_HDR_WBP_Contrast_K2Node_ComponentBoundEvent_1_OnDecreaseHandler__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.OnResetPressed
// (Event, Protected, BlueprintEvent)

void UWBP_Menu_HDR_C::OnResetPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "OnResetPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_3_OnIncreaseHandler__DelegateSignature
// (BlueprintEvent)

void UWBP_Menu_HDR_C::BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_3_OnIncreaseHandler__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "BndEvt__WBP_Menu_HDR_WBP_Gamma_K2Node_ComponentBoundEvent_3_OnIncreaseHandler__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.GetWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  Widgets                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_Menu_HDR_C::GetWidgets(TArray<class UWidget*>* Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "GetWidgets");

	Params::WBP_Menu_HDR_C_GetWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widgets != nullptr)
		*Widgets = std::move(Parms.Widgets);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.ResetToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "ResetToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.AddButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::AddButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "AddButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.UpdateIncreaseDecreaseButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::UpdateIncreaseDecreaseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "UpdateIncreaseDecreaseButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IncreaseDecrease_C*          IncreaseDecreaseInput                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_HDR_C::UpdateProgress(class UWBP_IncreaseDecrease_C* IncreaseDecreaseInput, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "UpdateProgress");

	Params::WBP_Menu_HDR_C_UpdateProgress Parms{};

	Parms.IncreaseDecreaseInput = IncreaseDecreaseInput;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.Create HDR Screen Capture
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::Create_HDR_Screen_Capture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "Create HDR Screen Capture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.CreateDisplayAdjustmentSceneCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       SourceHDRTextureToTonemap                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EV100                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           TargetImage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_HDR_C::CreateDisplayAdjustmentSceneCapture(class UTexture2D* SourceHDRTextureToTonemap, float EV100, class UImage* TargetImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "CreateDisplayAdjustmentSceneCapture");

	Params::WBP_Menu_HDR_C_CreateDisplayAdjustmentSceneCapture Parms{};

	Parms.SourceHDRTextureToTonemap = SourceHDRTextureToTonemap;
	Parms.EV100 = EV100;
	Parms.TargetImage = TargetImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.UpdateDisplayAdjustmentSceneCaptures
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::UpdateDisplayAdjustmentSceneCaptures()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "UpdateDisplayAdjustmentSceneCaptures");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_HDR.WBP_Menu_HDR_C.DeleteDisplayAdjustmentSceneCaptures
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_HDR_C::DeleteDisplayAdjustmentSceneCaptures()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_HDR_C", "DeleteDisplayAdjustmentSceneCaptures");

	UObject::ProcessEvent(Func, nullptr);
}

}
