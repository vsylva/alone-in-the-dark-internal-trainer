#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesUI

#include "Basic.hpp"

#include "PiecesUI_classes.hpp"
#include "PiecesUI_parameters.hpp"


namespace SDK
{

// Function PiecesUI.PiecesUserWidget.ListenForEnhancedInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UInputAction>      InputAction                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FInputActionValue& Value)>Delegate                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UPiecesUserWidget::ListenForEnhancedInputAction(TSoftObjectPtr<class UInputAction> InputAction, TDelegate<void(struct FInputActionValue& Value)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesUserWidget", "ListenForEnhancedInputAction");

	Params::PiecesUserWidget_ListenForEnhancedInputAction Parms{};

	Parms.InputAction = InputAction;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesUI.PiecesUserWidget.StopListenForAllEnhancedInputActions
// (Final, Native, Public, BlueprintCallable)

void UPiecesUserWidget::StopListenForAllEnhancedInputActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesUserWidget", "StopListenForAllEnhancedInputActions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PiecesUI.PiecesUserWidget.StopListenForInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                     InputAction                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPiecesUserWidget::StopListenForInputAction(class UInputAction* InputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesUserWidget", "StopListenForInputAction");

	Params::PiecesUserWidget_StopListenForInputAction Parms{};

	Parms.InputAction = InputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesUI.PiecesCanvasPanel.OnCultureChangedHandler
// (Final, Native, Private)

void UPiecesCanvasPanel::OnCultureChangedHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesCanvasPanel", "OnCultureChangedHandler");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
