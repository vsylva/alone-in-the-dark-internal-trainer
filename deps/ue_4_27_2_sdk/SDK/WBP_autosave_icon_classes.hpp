#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_autosave_icon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_autosave_icon.WBP_autosave_icon_C
// 0x0020 (0x02D0 - 0x02B0)
class UWBP_autosave_icon_C final : public UOFSaveGameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Flash;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Fx_flash;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gfx_icon_save;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PlayFlashAnimation();
	void ExecuteUbergraph_WBP_autosave_icon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_autosave_icon_C">();
	}
	static class UWBP_autosave_icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_autosave_icon_C>();
	}
};
static_assert(alignof(UWBP_autosave_icon_C) == 0x000008, "Wrong alignment on UWBP_autosave_icon_C");
static_assert(sizeof(UWBP_autosave_icon_C) == 0x0002D0, "Wrong size on UWBP_autosave_icon_C");
static_assert(offsetof(UWBP_autosave_icon_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_autosave_icon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_autosave_icon_C, Anim_Flash) == 0x0002B8, "Member 'UWBP_autosave_icon_C::Anim_Flash' has a wrong offset!");
static_assert(offsetof(UWBP_autosave_icon_C, Fx_flash) == 0x0002C0, "Member 'UWBP_autosave_icon_C::Fx_flash' has a wrong offset!");
static_assert(offsetof(UWBP_autosave_icon_C, Gfx_icon_save) == 0x0002C8, "Member 'UWBP_autosave_icon_C::Gfx_icon_save' has a wrong offset!");

}
