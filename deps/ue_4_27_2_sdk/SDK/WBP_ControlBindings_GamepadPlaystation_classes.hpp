#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ControlBindings_GamepadPlaystation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFoxSettings_structs.hpp"
#include "WBP_OptionSelectionPage_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ControlBindings_GamepadPlaystation.WBP_ControlBindings_GamepadPlaystation_C
// 0x0100 (0x03D8 - 0x02D8)
class UWBP_ControlBindings_GamepadPlaystation_C final : public UWBP_OptionSelectionPage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_ControlBindings_GamepadPlaystation_C; // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Color_overlay;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Darkening_overlay_65;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DpadLine;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FaceButtonLine;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgGamepad;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftShoulderButton;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftStickLine;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightShoulderButton;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightStickLine;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CtrlButtons_C*                     WBP_CtrlButtons;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_CameraRotate;                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Consume;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Dodge;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Flaregun;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Flashlight;                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Handgun;                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Interact;                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Interaction;                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Interaction_1;                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_LeftStick;                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_LeftTrigger;                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_MeleeAttack;                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Pause;                              // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_RangedAttackExamine;                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Reload;                             // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_RightShoulder;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Shotgun;                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Sprint;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Stealth;                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadKey_C*                      WBP_GamepadKey_Tommygun;                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputHint_C*                       PopUpWidgetKeyHint;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ControlBindings_GamepadPlaystation(int32 EntryPoint);
	void CancelPressed();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ControlBindings_GamepadPlaystation_C">();
	}
	static class UWBP_ControlBindings_GamepadPlaystation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ControlBindings_GamepadPlaystation_C>();
	}
};
static_assert(alignof(UWBP_ControlBindings_GamepadPlaystation_C) == 0x000008, "Wrong alignment on UWBP_ControlBindings_GamepadPlaystation_C");
static_assert(sizeof(UWBP_ControlBindings_GamepadPlaystation_C) == 0x0003D8, "Wrong size on UWBP_ControlBindings_GamepadPlaystation_C");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, UberGraphFrame_WBP_ControlBindings_GamepadPlaystation_C) == 0x0002D8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::UberGraphFrame_WBP_ControlBindings_GamepadPlaystation_C' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, Color_overlay) == 0x0002E0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::Color_overlay' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, Darkening_overlay_65) == 0x0002E8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::Darkening_overlay_65' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, DpadLine) == 0x0002F0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::DpadLine' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, FaceButtonLine) == 0x0002F8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::FaceButtonLine' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, ImgGamepad) == 0x000300, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::ImgGamepad' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, LeftShoulderButton) == 0x000308, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::LeftShoulderButton' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, LeftStickLine) == 0x000310, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::LeftStickLine' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, RightShoulderButton) == 0x000318, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::RightShoulderButton' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, RightStickLine) == 0x000320, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::RightStickLine' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_CtrlButtons) == 0x000328, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_CtrlButtons' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_CameraRotate) == 0x000330, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_CameraRotate' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Consume) == 0x000338, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Consume' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Dodge) == 0x000340, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Dodge' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Flaregun) == 0x000348, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Flaregun' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Flashlight) == 0x000350, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Flashlight' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Handgun) == 0x000358, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Handgun' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Interact) == 0x000360, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Interact' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Interaction) == 0x000368, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Interaction' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Interaction_1) == 0x000370, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Interaction_1' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_LeftStick) == 0x000378, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_LeftStick' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_LeftTrigger) == 0x000380, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_LeftTrigger' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_MeleeAttack) == 0x000388, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_MeleeAttack' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Pause) == 0x000390, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Pause' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_RangedAttackExamine) == 0x000398, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_RangedAttackExamine' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Reload) == 0x0003A0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Reload' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_RightShoulder) == 0x0003A8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_RightShoulder' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Shotgun) == 0x0003B0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Shotgun' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Sprint) == 0x0003B8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Sprint' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Stealth) == 0x0003C0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Stealth' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, WBP_GamepadKey_Tommygun) == 0x0003C8, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::WBP_GamepadKey_Tommygun' has a wrong offset!");
static_assert(offsetof(UWBP_ControlBindings_GamepadPlaystation_C, PopUpWidgetKeyHint) == 0x0003D0, "Member 'UWBP_ControlBindings_GamepadPlaystation_C::PopUpWidgetKeyHint' has a wrong offset!");

}
