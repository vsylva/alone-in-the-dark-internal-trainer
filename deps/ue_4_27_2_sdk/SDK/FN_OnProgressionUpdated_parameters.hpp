#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_OnProgressionUpdated

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_ExecuteInput
// 0x0008 (0x0008 - 0x0000)
struct FN_OnProgressionUpdated_C_K2_ExecuteInput final
{
public:
	class FName                                   PinName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_OnProgressionUpdated_C_K2_ExecuteInput) == 0x000004, "Wrong alignment on FN_OnProgressionUpdated_C_K2_ExecuteInput");
static_assert(sizeof(FN_OnProgressionUpdated_C_K2_ExecuteInput) == 0x000008, "Wrong size on FN_OnProgressionUpdated_C_K2_ExecuteInput");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_ExecuteInput, PinName) == 0x000000, "Member 'FN_OnProgressionUpdated_C_K2_ExecuteInput::PinName' has a wrong offset!");

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.OnProgressionUpdated_Event_0
// 0x0010 (0x0010 - 0x0000)
struct FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0 final
{
public:
	struct FGameplayTag                           NewTag;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           OldTag;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0) == 0x000004, "Wrong alignment on FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0");
static_assert(sizeof(FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0) == 0x000010, "Wrong size on FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0");
static_assert(offsetof(FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0, NewTag) == 0x000000, "Member 'FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0::NewTag' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0, OldTag) == 0x000008, "Member 'FN_OnProgressionUpdated_C_OnProgressionUpdated_Event_0::OldTag' has a wrong offset!");

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.ExecuteUbergraph_FN_OnProgressionUpdated
// 0x0060 (0x0060 - 0x0000)
struct FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressionSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_PinName;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_NewTag;                         // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_OldTag;                         // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressionSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue_1;         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressionSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& NewTag, const struct FGameplayTag& OldTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated) == 0x000008, "Wrong alignment on FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated");
static_assert(sizeof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated) == 0x000060, "Wrong size on FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, EntryPoint) == 0x000000, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::EntryPoint' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, K2Node_Event_PinName) == 0x000010, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::K2Node_Event_PinName' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, K2Node_CustomEvent_NewTag) == 0x000018, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::K2Node_CustomEvent_NewTag' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, K2Node_CustomEvent_OldTag) == 0x000020, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::K2Node_CustomEvent_OldTag' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000028, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00002A, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00002B, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000030, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000038, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_IsGameplayTagValid_ReturnValue_1) == 0x000039, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_IsGameplayTagValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_BooleanOR_ReturnValue) == 0x00003A, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003B, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x000040, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000048, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_BooleanOR_ReturnValue_1) == 0x000049, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'FN_OnProgressionUpdated_C_ExecuteUbergraph_FN_OnProgressionUpdated::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_GetStatusString
// 0x0098 (0x0098 - 0x0000)
struct FN_OnProgressionUpdated_C_K2_GetStatusString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class UProgressionSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCurrentChapterName_ReturnValue;        // 0x0018(0x0018)()
	class FText                                   CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_OnProgressionUpdated_C_K2_GetStatusString) == 0x000008, "Wrong alignment on FN_OnProgressionUpdated_C_K2_GetStatusString");
static_assert(sizeof(FN_OnProgressionUpdated_C_K2_GetStatusString) == 0x000098, "Wrong size on FN_OnProgressionUpdated_C_K2_GetStatusString");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, ReturnValue) == 0x000000, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_GetCurrentChapterName_ReturnValue) == 0x000018, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_GetCurrentChapterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000030, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000058, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetStatusString, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'FN_OnProgressionUpdated_C_K2_GetStatusString::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function FN_OnProgressionUpdated.FN_OnProgressionUpdated_C.K2_GetNodeDescription
// 0x00C0 (0x00C0 - 0x0000)
struct FN_OnProgressionUpdated_C_K2_GetNodeDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTagName_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTagName_ReturnValue_1;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue_1;         // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue_2;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_OnProgressionUpdated_C_K2_GetNodeDescription) == 0x000008, "Wrong alignment on FN_OnProgressionUpdated_C_K2_GetNodeDescription");
static_assert(sizeof(FN_OnProgressionUpdated_C_K2_GetNodeDescription) == 0x0000C0, "Wrong size on FN_OnProgressionUpdated_C_K2_GetNodeDescription");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, ReturnValue) == 0x000000, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_GetTagName_ReturnValue) == 0x000010, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_GetTagName_ReturnValue_1) == 0x000018, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_GetTagName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Conv_NameToString_ReturnValue) == 0x000020, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000030, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000060, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_IsGameplayTagValid_ReturnValue_1) == 0x000061, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_IsGameplayTagValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue) == 0x000068, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue_1) == 0x000080, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue_2) == 0x000090, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A0, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_OnProgressionUpdated_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000B0, "Member 'FN_OnProgressionUpdated_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}

