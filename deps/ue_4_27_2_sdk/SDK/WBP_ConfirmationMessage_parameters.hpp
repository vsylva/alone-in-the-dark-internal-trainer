#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConfirmationMessage

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ConfirmationMessage.WBP_ConfirmationMessage_C.ExecuteUbergraph_WBP_ConfirmationMessage
// 0x0020 (0x0020 - 0x0000)
struct WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage) == 0x000008, "Wrong alignment on WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage");
static_assert(sizeof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage) == 0x000020, "Wrong size on WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage");
static_assert(offsetof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage, EntryPoint) == 0x000000, "Member 'WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WBP_ConfirmationMessage_C_ExecuteUbergraph_WBP_ConfirmationMessage::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_ConfirmationMessage.WBP_ConfirmationMessage_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ConfirmationMessage_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ConfirmationMessage_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ConfirmationMessage_C_PreConstruct");
static_assert(sizeof(WBP_ConfirmationMessage_C_PreConstruct) == 0x000001, "Wrong size on WBP_ConfirmationMessage_C_PreConstruct");
static_assert(offsetof(WBP_ConfirmationMessage_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ConfirmationMessage_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
