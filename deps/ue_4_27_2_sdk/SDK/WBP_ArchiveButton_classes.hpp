#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArchiveButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ArchiveButton.WBP_ArchiveButton_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_ArchiveButton_C final : public UArchiveButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                   ChapterText;                                       // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWidgetSwitcher*                        ArchiveSwitcher;                                   // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_Archive_Chapter_01_C*              ArchiveSlots;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonPressed;                                   // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_ArchiveButton_OFButton_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
	void UpdateStatus();
	void BndEvt__WBP_ArchiveButton_OFButton_K2Node_ComponentBoundEvent_0_OnWidgetHover__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_ArchiveButton(int32 EntryPoint);
	void OnButtonPressed__DelegateSignature(class UWBP_Archive_Chapter_01_C* ArchiveChapterSlots);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ArchiveButton_C">();
	}
	static class UWBP_ArchiveButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ArchiveButton_C>();
	}
};
static_assert(alignof(UWBP_ArchiveButton_C) == 0x000008, "Wrong alignment on UWBP_ArchiveButton_C");
static_assert(sizeof(UWBP_ArchiveButton_C) == 0x0002B8, "Wrong size on UWBP_ArchiveButton_C");
static_assert(offsetof(UWBP_ArchiveButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ArchiveButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ArchiveButton_C, ChapterText) == 0x000280, "Member 'UWBP_ArchiveButton_C::ChapterText' has a wrong offset!");
static_assert(offsetof(UWBP_ArchiveButton_C, ArchiveSwitcher) == 0x000298, "Member 'UWBP_ArchiveButton_C::ArchiveSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_ArchiveButton_C, ArchiveSlots) == 0x0002A0, "Member 'UWBP_ArchiveButton_C::ArchiveSlots' has a wrong offset!");
static_assert(offsetof(UWBP_ArchiveButton_C, OnButtonPressed) == 0x0002A8, "Member 'UWBP_ArchiveButton_C::OnButtonPressed' has a wrong offset!");

}
