#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RebindKey

#include "Basic.hpp"

#include "WBP_RebindKey_classes.hpp"
#include "WBP_RebindKey_parameters.hpp"


namespace SDK
{

// Function WBP_RebindKey.WBP_RebindKey_C.OnRebindKeyHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RebindKey_C*                 RebindKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOFButton*                        KeyButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnRebindKeyHovered__DelegateSignature(class UWBP_RebindKey_C* RebindKey, class UOFButton* KeyButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnRebindKeyHovered__DelegateSignature");

	Params::WBP_RebindKey_C_OnRebindKeyHovered__DelegateSignature Parms{};

	Parms.RebindKey = RebindKey;
	Parms.KeyButton = KeyButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.ExecuteUbergraph_WBP_RebindKey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::ExecuteUbergraph_WBP_RebindKey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "ExecuteUbergraph_WBP_RebindKey");

	Params::WBP_RebindKey_C_ExecuteUbergraph_WBP_RebindKey Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.ResetAllKeyBinds
// (BlueprintCallable, BlueprintEvent)

void UWBP_RebindKey_C::ResetAllKeyBinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "ResetAllKeyBinds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.BndEvt__WBP_RebindKey_SecondaryBindingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RebindKey_C::BndEvt__WBP_RebindKey_SecondaryBindingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "BndEvt__WBP_RebindKey_SecondaryBindingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.BndEvt__WBP_RebindKey_PrimaryBindingButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RebindKey_C::BndEvt__WBP_RebindKey_PrimaryBindingButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "BndEvt__WBP_RebindKey_PrimaryBindingButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.BndEvt__WBP_RebindKey_OFButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::BndEvt__WBP_RebindKey_OFButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature(class UButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "BndEvt__WBP_RebindKey_OFButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature");

	Params::WBP_RebindKey_C_BndEvt__WBP_RebindKey_OFButton_K2Node_ComponentBoundEvent_0_OFButtonHoverEvent__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RebindKey_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.PostBindingUpdated
// (Event, Public, BlueprintEvent)

void UWBP_RebindKey_C::PostBindingUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "PostBindingUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.PreBindingUpdated
// (Event, Public, BlueprintEvent)

void UWBP_RebindKey_C::PreBindingUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "PreBindingUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.UpdateKeyDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_RebindKey_C::UpdateKeyDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "UpdateKeyDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.SetupWidget
// (Event, Public, BlueprintEvent)

void UWBP_RebindKey_C::SetupWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "SetupWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RebindKey_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnUpdateKeyBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             KeyBindName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             NewKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    bIsPrimaryKey                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUnbindExisting                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RebindKey_C::OnUpdateKeyBind(class FName KeyBindName, const struct FKey& NewKey, bool bIsPrimaryKey, bool bUnbindExisting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnUpdateKeyBind");

	Params::WBP_RebindKey_C_OnUpdateKeyBind Parms{};

	Parms.KeyBindName = KeyBindName;
	Parms.NewKey = std::move(NewKey);
	Parms.bIsPrimaryKey = bIsPrimaryKey;
	Parms.bUnbindExisting = bUnbindExisting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_A38A087E42833D157E7E04A17DD9D4DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_A38A087E42833D157E7E04A17DD9D4DC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_A38A087E42833D157E7E04A17DD9D4DC");

	Params::WBP_RebindKey_C_OnLoaded_A38A087E42833D157E7E04A17DD9D4DC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_83AE015C4F36E936DEAC5FA3A4B71796
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_83AE015C4F36E936DEAC5FA3A4B71796(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_83AE015C4F36E936DEAC5FA3A4B71796");

	Params::WBP_RebindKey_C_OnLoaded_83AE015C4F36E936DEAC5FA3A4B71796 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_FA7C5A1745A03C863981C7855F8ED9BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_FA7C5A1745A03C863981C7855F8ED9BC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_FA7C5A1745A03C863981C7855F8ED9BC");

	Params::WBP_RebindKey_C_OnLoaded_FA7C5A1745A03C863981C7855F8ED9BC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_9A55998D410D4D5181DC30BD937EFEAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_9A55998D410D4D5181DC30BD937EFEAD(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_9A55998D410D4D5181DC30BD937EFEAD");

	Params::WBP_RebindKey_C_OnLoaded_9A55998D410D4D5181DC30BD937EFEAD Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_369A1E4040E07D14DBB51C84C7E97BA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_369A1E4040E07D14DBB51C84C7E97BA7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_369A1E4040E07D14DBB51C84C7E97BA7");

	Params::WBP_RebindKey_C_OnLoaded_369A1E4040E07D14DBB51C84C7E97BA7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.OnLoaded_6060F28A4A451F7349E9418D1E7060F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::OnLoaded_6060F28A4A451F7349E9418D1E7060F2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "OnLoaded_6060F28A4A451F7349E9418D1E7060F2");

	Params::WBP_RebindKey_C_OnLoaded_6060F28A4A451F7349E9418D1E7060F2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RebindKey.WBP_RebindKey_C.GetTextureAndKeyName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    UseName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RebindKey_C::GetTextureAndKeyName(const struct FKey& Key, TSoftObjectPtr<class UTexture2D>* Texture, class FString* Name_0, bool* UseName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "GetTextureAndKeyName");

	Params::WBP_RebindKey_C_GetTextureAndKeyName Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);

	if (UseName != nullptr)
		*UseName = Parms.UseName;
}


// Function WBP_RebindKey.WBP_RebindKey_C.Find Texture for key Actior
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Value                                                  (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_RebindKey_C::Find_Texture_for_key_Actior(const struct FKey& Key, TSoftObjectPtr<class UTexture2D>* Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "Find Texture for key Actior");

	Params::WBP_RebindKey_C_Find_Texture_for_key_Actior Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;
}


// Function WBP_RebindKey.WBP_RebindKey_C.GetNameForKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_RebindKey_C::GetNameForKey(const struct FKey& Key, class FString* Name_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebindKey_C", "GetNameForKey");

	Params::WBP_RebindKey_C_GetNameForKey Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}

}
