#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingThrobber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoadingThrobber.WBP_LoadingThrobber_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_LoadingThrobber_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 LoadingIcon;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TimeLimitBeforeDisplay;                            // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTimeLimit;                                      // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Destroying;                                        // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Finished_51A6ED054795664183E33E9433C94EBF();
	void Finished_7BB0C5D9455F356F8B6C9AABC5B626C5();
	void Destroy_Widget();
	void Construct();
	void FadeOutAndThenDestroy();
	void ExecuteUbergraph_WBP_LoadingThrobber(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadingThrobber_C">();
	}
	static class UWBP_LoadingThrobber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadingThrobber_C>();
	}
};
static_assert(alignof(UWBP_LoadingThrobber_C) == 0x000008, "Wrong alignment on UWBP_LoadingThrobber_C");
static_assert(sizeof(UWBP_LoadingThrobber_C) == 0x000288, "Wrong size on UWBP_LoadingThrobber_C");
static_assert(offsetof(UWBP_LoadingThrobber_C, UberGraphFrame) == 0x000260, "Member 'UWBP_LoadingThrobber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingThrobber_C, FadeIn) == 0x000268, "Member 'UWBP_LoadingThrobber_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingThrobber_C, LoadingIcon) == 0x000270, "Member 'UWBP_LoadingThrobber_C::LoadingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingThrobber_C, TimeLimitBeforeDisplay) == 0x000278, "Member 'UWBP_LoadingThrobber_C::TimeLimitBeforeDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingThrobber_C, MaxTimeLimit) == 0x00027C, "Member 'UWBP_LoadingThrobber_C::MaxTimeLimit' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingThrobber_C, Destroying) == 0x000280, "Member 'UWBP_LoadingThrobber_C::Destroying' has a wrong offset!");

}
