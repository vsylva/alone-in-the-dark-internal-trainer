#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OFFSRQualityButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_TextSelection_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OFFSRQualityButton.WBP_OFFSRQualityButton_C
// 0x0008 (0x0528 - 0x0520)
class UWBP_OFFSRQualityButton_C final : public UWBP_TextSelection_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_OFFSRQualityButton_C;           // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_OFFSRQualityButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	class FText GetTextfromValue(const float NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OFFSRQualityButton_C">();
	}
	static class UWBP_OFFSRQualityButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OFFSRQualityButton_C>();
	}
};
static_assert(alignof(UWBP_OFFSRQualityButton_C) == 0x000008, "Wrong alignment on UWBP_OFFSRQualityButton_C");
static_assert(sizeof(UWBP_OFFSRQualityButton_C) == 0x000528, "Wrong size on UWBP_OFFSRQualityButton_C");
static_assert(offsetof(UWBP_OFFSRQualityButton_C, UberGraphFrame_WBP_OFFSRQualityButton_C) == 0x000520, "Member 'UWBP_OFFSRQualityButton_C::UberGraphFrame_WBP_OFFSRQualityButton_C' has a wrong offset!");

}
