#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformSpecificKey

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.ExecuteUbergraph_WBP_PlatformSpecificKey
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_CustomEvent_Texture;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_KeyString;                      // 0x0010(0x0018)()
	TDelegate<void(class UTexture2D* Texture, class FText KeyString)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0038(0x0018)()
	class UTexture2D*                             Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsGamepadType)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPAsyncAction_GetTextureAssociatedWithInputAction* CallFunc_GetTextureAssociatedWithInputAction_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_Event_InInputAction;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AOFPlayerController*                    CallFunc_GetObsidianFoxPlayerController_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsGamepadType;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPiecesInputMappingContext*             K2Node_Event_InInputMappingContext;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey) == 0x000008, "Wrong alignment on WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey");
static_assert(sizeof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey) == 0x0000A8, "Wrong size on WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, EntryPoint) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_CustomEvent_Texture) == 0x000008, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_CustomEvent_KeyString) == 0x000010, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_CustomEvent_KeyString' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, Temp_text_Variable) == 0x000038, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, Temp_object_Variable) == 0x000050, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_Event_IsDesignTime) == 0x000068, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, CallFunc_GetTextureAssociatedWithInputAction_ReturnValue) == 0x000070, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::CallFunc_GetTextureAssociatedWithInputAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_Event_InInputAction) == 0x000078, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_Event_InInputAction' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, CallFunc_GetObsidianFoxPlayerController_ReturnValue) == 0x000088, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::CallFunc_GetObsidianFoxPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_CustomEvent_IsGamepadType) == 0x000091, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_CustomEvent_IsGamepadType' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, K2Node_Event_InInputMappingContext) == 0x000098, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::K2Node_Event_InInputMappingContext' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'WBP_PlatformSpecificKey_C_ExecuteUbergraph_WBP_PlatformSpecificKey::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.SetInputMappingContext
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlatformSpecificKey_C_SetInputMappingContext final
{
public:
	class UPiecesInputMappingContext*             InInputMappingContext;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_SetInputMappingContext) == 0x000008, "Wrong alignment on WBP_PlatformSpecificKey_C_SetInputMappingContext");
static_assert(sizeof(WBP_PlatformSpecificKey_C_SetInputMappingContext) == 0x000008, "Wrong size on WBP_PlatformSpecificKey_C_SetInputMappingContext");
static_assert(offsetof(WBP_PlatformSpecificKey_C_SetInputMappingContext, InInputMappingContext) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_SetInputMappingContext::InInputMappingContext' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.InputTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlatformSpecificKey_C_InputTypeChanged final
{
public:
	bool                                          IsGamepadType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_InputTypeChanged) == 0x000001, "Wrong alignment on WBP_PlatformSpecificKey_C_InputTypeChanged");
static_assert(sizeof(WBP_PlatformSpecificKey_C_InputTypeChanged) == 0x000001, "Wrong size on WBP_PlatformSpecificKey_C_InputTypeChanged");
static_assert(offsetof(WBP_PlatformSpecificKey_C_InputTypeChanged, IsGamepadType) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_InputTypeChanged::IsGamepadType' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.SetInputAction
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlatformSpecificKey_C_SetInputAction final
{
public:
	class UInputAction*                           InInputAction;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_SetInputAction) == 0x000008, "Wrong alignment on WBP_PlatformSpecificKey_C_SetInputAction");
static_assert(sizeof(WBP_PlatformSpecificKey_C_SetInputAction) == 0x000008, "Wrong size on WBP_PlatformSpecificKey_C_SetInputAction");
static_assert(offsetof(WBP_PlatformSpecificKey_C_SetInputAction, InInputAction) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_SetInputAction::InInputAction' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlatformSpecificKey_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PlatformSpecificKey_C_PreConstruct");
static_assert(sizeof(WBP_PlatformSpecificKey_C_PreConstruct) == 0x000001, "Wrong size on WBP_PlatformSpecificKey_C_PreConstruct");
static_assert(offsetof(WBP_PlatformSpecificKey_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627 final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   KeyString;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627) == 0x000008, "Wrong alignment on WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627");
static_assert(sizeof(WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627) == 0x000020, "Wrong size on WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627");
static_assert(offsetof(WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627, Texture) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627::Texture' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627, KeyString) == 0x000008, "Member 'WBP_PlatformSpecificKey_C_OnCompleted_3766A84E43CA49B5EBDF5F87DC1D5627::KeyString' has a wrong offset!");

// Function WBP_PlatformSpecificKey.WBP_PlatformSpecificKey_C.SetWidthHeight
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlatformSpecificKey_C_SetWidthHeight final
{
public:
	float                                         Width;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlatformSpecificKey_C_SetWidthHeight) == 0x000004, "Wrong alignment on WBP_PlatformSpecificKey_C_SetWidthHeight");
static_assert(sizeof(WBP_PlatformSpecificKey_C_SetWidthHeight) == 0x000008, "Wrong size on WBP_PlatformSpecificKey_C_SetWidthHeight");
static_assert(offsetof(WBP_PlatformSpecificKey_C_SetWidthHeight, Width) == 0x000000, "Member 'WBP_PlatformSpecificKey_C_SetWidthHeight::Width' has a wrong offset!");
static_assert(offsetof(WBP_PlatformSpecificKey_C_SetWidthHeight, Height) == 0x000004, "Member 'WBP_PlatformSpecificKey_C_SetWidthHeight::Height' has a wrong offset!");

}
