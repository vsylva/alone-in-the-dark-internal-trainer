#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GamepadKey

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PiecesPlatform_structs.hpp"
#include "ObsidianFoxSettings_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GamepadKey.WBP_GamepadKey_C
// 0x0038 (0x04E8 - 0x04B0)
class UWBP_GamepadKey_C final : public URebindKeyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HBBox;                                             // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformSpecificKey_C*             PlatformPrimaryKey;                                // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerKey;                                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyBindingTextureDataAsset*            TextureDataAtlas;                                  // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flipped;                                           // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          In_Horizontal_Alignment_Text;                      // 0x04D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            In_Vertical_Alignment_Text;                        // 0x04DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DB[0x1];                                      // 0x04DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpacerKeyX;                                        // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PTButton;                                          // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_GamepadKey(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Load_And_Set_Texture(TSoftObjectPtr<class UTexture2D> Texture);
	void UpdateKeyDisplay();
	void SetupWidget();
	void OnUpdateKeyBind(class FName KeyBindName, const struct FKey& NewKey, bool bIsPrimaryKey, bool bUnbindExisting);
	void Construct();
	void OnLoaded_C664A9BD48DA2A2E9B4AEC9AB0394272(class UObject* Loaded);
	void OnLoaded_44550C264E73A7D3C77EA6BFCD7BB533(class UObject* Loaded);
	void SortEntries();
	void GetKeyToTextures(TMap<struct FKey, TSoftObjectPtr<class UTexture2D>>* Key_Textures);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GamepadKey_C">();
	}
	static class UWBP_GamepadKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GamepadKey_C>();
	}
};
static_assert(alignof(UWBP_GamepadKey_C) == 0x000008, "Wrong alignment on UWBP_GamepadKey_C");
static_assert(sizeof(UWBP_GamepadKey_C) == 0x0004E8, "Wrong size on UWBP_GamepadKey_C");
static_assert(offsetof(UWBP_GamepadKey_C, UberGraphFrame) == 0x0004B0, "Member 'UWBP_GamepadKey_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, HBBox) == 0x0004B8, "Member 'UWBP_GamepadKey_C::HBBox' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, PlatformPrimaryKey) == 0x0004C0, "Member 'UWBP_GamepadKey_C::PlatformPrimaryKey' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, SpacerKey) == 0x0004C8, "Member 'UWBP_GamepadKey_C::SpacerKey' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, TextureDataAtlas) == 0x0004D0, "Member 'UWBP_GamepadKey_C::TextureDataAtlas' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, Flipped) == 0x0004D8, "Member 'UWBP_GamepadKey_C::Flipped' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, In_Horizontal_Alignment_Text) == 0x0004D9, "Member 'UWBP_GamepadKey_C::In_Horizontal_Alignment_Text' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, In_Vertical_Alignment_Text) == 0x0004DA, "Member 'UWBP_GamepadKey_C::In_Vertical_Alignment_Text' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, SpacerKeyX) == 0x0004DC, "Member 'UWBP_GamepadKey_C::SpacerKeyX' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadKey_C, PTButton) == 0x0004E0, "Member 'UWBP_GamepadKey_C::PTButton' has a wrong offset!");

}

