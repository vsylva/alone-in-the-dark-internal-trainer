#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OFCheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OFCheckBox.WBP_OFCheckBox_C
// 0x0098 (0x0468 - 0x03D0)
class UWBP_OFCheckBox_C : public UOFCheckBoxUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInAnimation;                                   // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class FText                                   OptionText;                                        // 0x03E0(0x0018)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>              HoverdSound;                                       // 0x03F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheckBoxChanged;                                 // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UFMODEvent>              PressSound;                                        // 0x0430(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UFMODEvent*                             HardPTRPressSound;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultValue;                                      // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseDefaultValue;                                  // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void OnCheckBoxChanged__DelegateSignature(bool CheckBoxChanged);
	void ExecuteUbergraph_WBP_OFCheckBox(int32 EntryPoint);
	void BndEvt__WBP_OFCheckBox_CheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WBP_OFButton_OFButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_IncreaseDecrease_VisualOptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void LoadCompleteDelegate_5B243A344743202896C7A1851EFD78BA(const TArray<class UObject*>& LoadedAssets);
	void OnLoaded_DA2226CE4A9D76EC539B558B6811A556(class UObject* Loaded);
	void UpdateButtonState(bool InHoovered);
	void ResetToDefaultValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OFCheckBox_C">();
	}
	static class UWBP_OFCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OFCheckBox_C>();
	}
};
static_assert(alignof(UWBP_OFCheckBox_C) == 0x000008, "Wrong alignment on UWBP_OFCheckBox_C");
static_assert(sizeof(UWBP_OFCheckBox_C) == 0x000468, "Wrong size on UWBP_OFCheckBox_C");
static_assert(offsetof(UWBP_OFCheckBox_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_OFCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, FadeInAnimation) == 0x0003D8, "Member 'UWBP_OFCheckBox_C::FadeInAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, OptionText) == 0x0003E0, "Member 'UWBP_OFCheckBox_C::OptionText' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, HoverdSound) == 0x0003F8, "Member 'UWBP_OFCheckBox_C::HoverdSound' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, OnCheckBoxChanged) == 0x000420, "Member 'UWBP_OFCheckBox_C::OnCheckBoxChanged' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, PressSound) == 0x000430, "Member 'UWBP_OFCheckBox_C::PressSound' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, HardPTRPressSound) == 0x000458, "Member 'UWBP_OFCheckBox_C::HardPTRPressSound' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, DefaultValue) == 0x000460, "Member 'UWBP_OFCheckBox_C::DefaultValue' has a wrong offset!");
static_assert(offsetof(UWBP_OFCheckBox_C, bUseDefaultValue) == 0x000461, "Member 'UWBP_OFCheckBox_C::bUseDefaultValue' has a wrong offset!");

}
