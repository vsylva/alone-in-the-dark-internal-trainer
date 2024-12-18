#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_TutorialPrompt

#include "Basic.hpp"


namespace SDK::Params
{

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.TriggerCompleted
// 0x0008 (0x0008 - 0x0000)
struct FN_TutorialPrompt_C_TriggerCompleted final
{
public:
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_TriggerCompleted) == 0x000004, "Wrong alignment on FN_TutorialPrompt_C_TriggerCompleted");
static_assert(sizeof(FN_TutorialPrompt_C_TriggerCompleted) == 0x000008, "Wrong size on FN_TutorialPrompt_C_TriggerCompleted");
static_assert(offsetof(FN_TutorialPrompt_C_TriggerCompleted, CallFunc_MakeLiteralName_ReturnValue) == 0x000000, "Member 'FN_TutorialPrompt_C_TriggerCompleted::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.RemoveActiveWidgets
// 0x0038 (0x0038 - 0x0000)
struct FN_TutorialPrompt_C_RemoveActiveWidgets final
{
public:
	bool                                          DuplicateFound;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FoundDuplicate;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_TutorialPopup_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TutorialPopup_C*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_GameplayTag_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FN_TutorialPrompt_C_RemoveActiveWidgets) == 0x000008, "Wrong alignment on FN_TutorialPrompt_C_RemoveActiveWidgets");
static_assert(sizeof(FN_TutorialPrompt_C_RemoveActiveWidgets) == 0x000038, "Wrong size on FN_TutorialPrompt_C_RemoveActiveWidgets");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, DuplicateFound) == 0x000000, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::DuplicateFound' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, FoundDuplicate) == 0x000001, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::FoundDuplicate' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, Temp_int_Array_Index_Variable) == 0x000004, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000010, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_Array_Get_Item) == 0x000028, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_RemoveActiveWidgets, CallFunc_NotEqual_GameplayTag_ReturnValue) == 0x000031, "Member 'FN_TutorialPrompt_C_RemoveActiveWidgets::CallFunc_NotEqual_GameplayTag_ReturnValue' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6
// 0x0008 (0x0008 - 0x0000)
struct FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6) == 0x000008, "Wrong alignment on FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6");
static_assert(sizeof(FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6) == 0x000008, "Wrong size on FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6");
static_assert(offsetof(FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6, Loaded) == 0x000000, "Member 'FN_TutorialPrompt_C_OnLoaded_DC4B7B6447DB143786D26DB681BCBFA6::Loaded' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.K2_ExecuteInput
// 0x0008 (0x0008 - 0x0000)
struct FN_TutorialPrompt_C_K2_ExecuteInput final
{
public:
	class FName                                   PinName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_K2_ExecuteInput) == 0x000004, "Wrong alignment on FN_TutorialPrompt_C_K2_ExecuteInput");
static_assert(sizeof(FN_TutorialPrompt_C_K2_ExecuteInput) == 0x000008, "Wrong size on FN_TutorialPrompt_C_K2_ExecuteInput");
static_assert(offsetof(FN_TutorialPrompt_C_K2_ExecuteInput, PinName) == 0x000000, "Member 'FN_TutorialPrompt_C_K2_ExecuteInput::PinName' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.OnTutorialDestryed
// 0x0008 (0x0008 - 0x0000)
struct FN_TutorialPrompt_C_OnTutorialDestryed final
{
public:
	class UWBP_TutorialPopup_C*                   WidgetBeingDestroyed;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_OnTutorialDestryed) == 0x000008, "Wrong alignment on FN_TutorialPrompt_C_OnTutorialDestryed");
static_assert(sizeof(FN_TutorialPrompt_C_OnTutorialDestryed) == 0x000008, "Wrong size on FN_TutorialPrompt_C_OnTutorialDestryed");
static_assert(offsetof(FN_TutorialPrompt_C_OnTutorialDestryed, WidgetBeingDestroyed) == 0x000000, "Member 'FN_TutorialPrompt_C_OnTutorialDestryed::WidgetBeingDestroyed' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.ExecuteUbergraph_FN_TutorialPrompt
// 0x0088 (0x0088 - 0x0000)
struct FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_TutorialPopup_C* WidgetBeingDestroyed)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Event_PinName;                              // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveWidgets_DuplicateFound;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 K2Node_ClassDynamicCast_AsWBP_Tutorial_Popup;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_TutorialPopup_C*                   CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_TutorialPopup_C*                   K2Node_CustomEvent_WidgetBeingDestroyed;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt) == 0x000008, "Wrong alignment on FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt");
static_assert(sizeof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt) == 0x000088, "Wrong size on FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, EntryPoint) == 0x000000, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::EntryPoint' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, Temp_class_Variable) == 0x000010, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_Event_PinName) == 0x000028, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_Event_PinName' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_RemoveActiveWidgets_DuplicateFound) == 0x000030, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_RemoveActiveWidgets_DuplicateFound' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000038, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_ClassDynamicCast_AsWBP_Tutorial_Popup) == 0x000050, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_ClassDynamicCast_AsWBP_Tutorial_Popup' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_ClassDynamicCast_bSuccess) == 0x000058, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_CustomEvent_Loaded) == 0x000060, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000068, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_GetPlayerController_ReturnValue) == 0x000070, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, CallFunc_Create_ReturnValue) == 0x000078, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt, K2Node_CustomEvent_WidgetBeingDestroyed) == 0x000080, "Member 'FN_TutorialPrompt_C_ExecuteUbergraph_FN_TutorialPrompt::K2Node_CustomEvent_WidgetBeingDestroyed' has a wrong offset!");

// Function FN_TutorialPrompt.FN_TutorialPrompt_C.K2_GetNodeDescription
// 0x0100 (0x0100 - 0x0000)
struct FN_TutorialPrompt_C_K2_GetNodeDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_SoftClassReferenceToString_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BuildString_Bool_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSubstring_ReturnValue_1;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BuildString_Float_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue_2;               // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDebugStringFromGameplayTag_ReturnValue; // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_TutorialPrompt_C_K2_GetNodeDescription) == 0x000008, "Wrong alignment on FN_TutorialPrompt_C_K2_GetNodeDescription");
static_assert(sizeof(FN_TutorialPrompt_C_K2_GetNodeDescription) == 0x000100, "Wrong size on FN_TutorialPrompt_C_K2_GetNodeDescription");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, ReturnValue) == 0x000000, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000010, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Conv_SoftClassReferenceToString_ReturnValue) == 0x000018, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Conv_SoftClassReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_FindSubstring_ReturnValue) == 0x000028, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_BuildString_Bool_ReturnValue) == 0x000030, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_BuildString_Bool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue) == 0x000048, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_RightChop_ReturnValue) == 0x000058, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_FindSubstring_ReturnValue_1) == 0x000068, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_FindSubstring_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_BuildString_Float_ReturnValue) == 0x000070, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_BuildString_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Left_ReturnValue) == 0x000080, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue_1) == 0x000090, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_SelectString_ReturnValue_2) == 0x0000A0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_SelectString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_GetDebugStringFromGameplayTag_ReturnValue) == 0x0000C0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_GetDebugStringFromGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_TutorialPrompt_C_K2_GetNodeDescription, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F0, "Member 'FN_TutorialPrompt_C_K2_GetNodeDescription::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}

