#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_OFWidgets

#include "Basic.hpp"

#include "BPI_OFWidgets_classes.hpp"


namespace SDK
{

// Function BPI_OFWidgets.BPI_OFWidgets_C.Destroy Widget
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_OFWidgets_C::Destroy_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OFWidgets_C", "Destroy Widget");

	UObject::ProcessEvent(Func, nullptr);
}

}
