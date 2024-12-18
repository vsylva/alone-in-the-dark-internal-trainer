#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SaveSlotGameButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_SaveSlotGameButton.WBP_SaveSlotGameButton_C.ExecuteUbergraph_WBP_SaveSlotGameButton
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UPiecesDeveloperCommentarySubsystem*    CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;             // 0x0068(0x0020)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0088(0x0058)(HasGetValueTypeHash)
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings_1;           // 0x00E0(0x0020)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;                 // 0x0100(0x0058)(HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0158(0x0028)()
	struct FGameplayTag                           CallFunc_GetProgression_ReturnValue;               // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyTags_ReturnValue;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPAsyncAction_ChunkInstallWaitPopup*   CallFunc_DisplayChunkInstallWaitPopup_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01A8(0x0028)()
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_2;                // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton) == 0x000008, "Wrong alignment on WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton");
static_assert(sizeof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton) == 0x0001E0, "Wrong size on WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, EntryPoint) == 0x000000, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000058, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_FontOutlineSettings) == 0x000068, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_SlateFontInfo) == 0x000088, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_FontOutlineSettings_1) == 0x0000E0, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_FontOutlineSettings_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_SlateFontInfo_1) == 0x000100, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_SlateColor_1) == 0x000158, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_GetProgression_ReturnValue) == 0x000180, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_GetProgression_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_HasAnyTags_ReturnValue) == 0x000188, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_SelectInt_ReturnValue) == 0x00018C, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_DisplayChunkInstallWaitPopup_ReturnValue) == 0x000190, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_DisplayChunkInstallWaitPopup_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_PlayEvent2D_ReturnValue) == 0x0001A0, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, K2Node_MakeStruct_SlateColor_2) == 0x0001A8, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_PlayEvent2D_ReturnValue_1) == 0x0001D0, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton, CallFunc_PlayEvent2D_ReturnValue_2) == 0x0001D8, "Member 'WBP_SaveSlotGameButton_C_ExecuteUbergraph_WBP_SaveSlotGameButton::CallFunc_PlayEvent2D_ReturnValue_2' has a wrong offset!");

// Function WBP_SaveSlotGameButton.WBP_SaveSlotGameButton_C.Get_UnderLine_Visibility_0
// 0x0005 (0x0005 - 0x0000)
struct WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0) == 0x000001, "Wrong alignment on WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0");
static_assert(sizeof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0) == 0x000005, "Wrong size on WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0");
static_assert(offsetof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0, ReturnValue) == 0x000000, "Member 'WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0, K2Node_Select_Default) == 0x000004, "Member 'WBP_SaveSlotGameButton_C_Get_UnderLine_Visibility_0::K2Node_Select_Default' has a wrong offset!");

}

