#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SaveLoading

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SaveLoading.WBP_SaveLoading_C
// 0x0008 (0x0268 - 0x0260)
class UWBP_SaveLoading_C final : public UUserWidget
{
public:
	class UImage*                                 Image_90;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SaveLoading_C">();
	}
	static class UWBP_SaveLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SaveLoading_C>();
	}
};
static_assert(alignof(UWBP_SaveLoading_C) == 0x000008, "Wrong alignment on UWBP_SaveLoading_C");
static_assert(sizeof(UWBP_SaveLoading_C) == 0x000268, "Wrong size on UWBP_SaveLoading_C");
static_assert(offsetof(UWBP_SaveLoading_C, Image_90) == 0x000260, "Member 'UWBP_SaveLoading_C::Image_90' has a wrong offset!");

}

