#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StruckTextObjectiveEntryList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StruckTextObjectiveEntryList.WBP_StruckTextObjectiveEntryList_C
// 0x0020 (0x0348 - 0x0328)
class UWBP_StruckTextObjectiveEntryList_C final : public UOFStruckTextWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_79;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Wrap_At;                                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void FadeIn();
	void ExecuteUbergraph_WBP_StruckTextObjectiveEntryList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StruckTextObjectiveEntryList_C">();
	}
	static class UWBP_StruckTextObjectiveEntryList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StruckTextObjectiveEntryList_C>();
	}
};
static_assert(alignof(UWBP_StruckTextObjectiveEntryList_C) == 0x000008, "Wrong alignment on UWBP_StruckTextObjectiveEntryList_C");
static_assert(sizeof(UWBP_StruckTextObjectiveEntryList_C) == 0x000348, "Wrong size on UWBP_StruckTextObjectiveEntryList_C");
static_assert(offsetof(UWBP_StruckTextObjectiveEntryList_C, UberGraphFrame) == 0x000328, "Member 'UWBP_StruckTextObjectiveEntryList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StruckTextObjectiveEntryList_C, Anim_FadeIn) == 0x000330, "Member 'UWBP_StruckTextObjectiveEntryList_C::Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_StruckTextObjectiveEntryList_C, Image_79) == 0x000338, "Member 'UWBP_StruckTextObjectiveEntryList_C::Image_79' has a wrong offset!");
static_assert(offsetof(UWBP_StruckTextObjectiveEntryList_C, Wrap_At) == 0x000340, "Member 'UWBP_StruckTextObjectiveEntryList_C::Wrap_At' has a wrong offset!");

}
