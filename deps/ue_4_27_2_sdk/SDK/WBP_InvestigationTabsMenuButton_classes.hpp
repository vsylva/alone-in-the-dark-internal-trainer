#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InvestigationTabsMenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InvestigationTabsMenuButton.WBP_InvestigationTabsMenuButton_C
// 0x0060 (0x0428 - 0x03C8)
class UWBP_InvestigationTabsMenuButton_C final : public UOFButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StrokeRevealAnimation;                             // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgStrokeAlternative;                              // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_50;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StrokeImage;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTab;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x03F8(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnWidgetPressed;                                   // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsHighlighted;                                     // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void PlayHighlightAnimation(bool InState);
	void OnActive();
	class FText GetText_0();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_InvestigationTabsMenuButton_OFButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_InvestigationTabsMenuButton(int32 EntryPoint);
	void OnWidgetPressed__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InvestigationTabsMenuButton_C">();
	}
	static class UWBP_InvestigationTabsMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InvestigationTabsMenuButton_C>();
	}
};
static_assert(alignof(UWBP_InvestigationTabsMenuButton_C) == 0x000008, "Wrong alignment on UWBP_InvestigationTabsMenuButton_C");
static_assert(sizeof(UWBP_InvestigationTabsMenuButton_C) == 0x000428, "Wrong size on UWBP_InvestigationTabsMenuButton_C");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, UberGraphFrame) == 0x0003C8, "Member 'UWBP_InvestigationTabsMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, StrokeRevealAnimation) == 0x0003D0, "Member 'UWBP_InvestigationTabsMenuButton_C::StrokeRevealAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, ImgStrokeAlternative) == 0x0003D8, "Member 'UWBP_InvestigationTabsMenuButton_C::ImgStrokeAlternative' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, ScaleBox_50) == 0x0003E0, "Member 'UWBP_InvestigationTabsMenuButton_C::ScaleBox_50' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, StrokeImage) == 0x0003E8, "Member 'UWBP_InvestigationTabsMenuButton_C::StrokeImage' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, TextTab) == 0x0003F0, "Member 'UWBP_InvestigationTabsMenuButton_C::TextTab' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, ButtonText) == 0x0003F8, "Member 'UWBP_InvestigationTabsMenuButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, OnWidgetPressed) == 0x000410, "Member 'UWBP_InvestigationTabsMenuButton_C::OnWidgetPressed' has a wrong offset!");
static_assert(offsetof(UWBP_InvestigationTabsMenuButton_C, IsHighlighted) == 0x000420, "Member 'UWBP_InvestigationTabsMenuButton_C::IsHighlighted' has a wrong offset!");

}
