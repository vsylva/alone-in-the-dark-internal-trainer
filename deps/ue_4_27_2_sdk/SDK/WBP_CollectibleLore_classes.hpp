#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CollectibleLore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CollectibleLore.WBP_CollectibleLore_C
// 0x0050 (0x0388 - 0x0338)
class UWBP_CollectibleLore_C final : public UCollectibleLoreTextExamination
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ExpansionAnimationImage;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gradient;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GradientInverted;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InkFrame;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Scrollbox_Material;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Curve_Scrollbox;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Input_Action_Scroll;                               // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateScrollBoxMaterial();
	void UpdateCollectibleLore(class UCollectiblesDataAsset* Collectible);
	void OnInitialized();
	void BndEvt__WBP_CollectibleLore_LoreTextScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void OnCloseDownWidgetPressedHandler();
	void OnClosePressedHandler();
	void ShowHideScrollKey();
	void ExecuteUbergraph_WBP_CollectibleLore(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CollectibleLore_C">();
	}
	static class UWBP_CollectibleLore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CollectibleLore_C>();
	}
};
static_assert(alignof(UWBP_CollectibleLore_C) == 0x000008, "Wrong alignment on UWBP_CollectibleLore_C");
static_assert(sizeof(UWBP_CollectibleLore_C) == 0x000388, "Wrong size on UWBP_CollectibleLore_C");
static_assert(offsetof(UWBP_CollectibleLore_C, UberGraphFrame) == 0x000338, "Member 'UWBP_CollectibleLore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, FadeIn) == 0x000340, "Member 'UWBP_CollectibleLore_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, ExpansionAnimationImage) == 0x000348, "Member 'UWBP_CollectibleLore_C::ExpansionAnimationImage' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, Gradient) == 0x000350, "Member 'UWBP_CollectibleLore_C::Gradient' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, GradientInverted) == 0x000358, "Member 'UWBP_CollectibleLore_C::GradientInverted' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, InkFrame) == 0x000360, "Member 'UWBP_CollectibleLore_C::InkFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, RetainerBox_0) == 0x000368, "Member 'UWBP_CollectibleLore_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, Scrollbox_Material) == 0x000370, "Member 'UWBP_CollectibleLore_C::Scrollbox_Material' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, Curve_Scrollbox) == 0x000378, "Member 'UWBP_CollectibleLore_C::Curve_Scrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_CollectibleLore_C, Input_Action_Scroll) == 0x000380, "Member 'UWBP_CollectibleLore_C::Input_Action_Scroll' has a wrong offset!");

}

