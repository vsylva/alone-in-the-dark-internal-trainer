#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_GoHomeMoveOrder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTTask_GoHomeMoveOrder.BTTask_GoHomeMoveOrder_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct BTTask_GoHomeMoveOrder_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_GoHomeMoveOrder_C_ReceiveExecute) == 0x000008, "Wrong alignment on BTTask_GoHomeMoveOrder_C_ReceiveExecute");
static_assert(sizeof(BTTask_GoHomeMoveOrder_C_ReceiveExecute) == 0x000008, "Wrong size on BTTask_GoHomeMoveOrder_C_ReceiveExecute");
static_assert(offsetof(BTTask_GoHomeMoveOrder_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'BTTask_GoHomeMoveOrder_C_ReceiveExecute::OwnerActor' has a wrong offset!");

// Function BTTask_GoHomeMoveOrder.BTTask_GoHomeMoveOrder_C.ExecuteUbergraph_BTTask_GoHomeMoveOrder
// 0x0020 (0x0020 - 0x0000)
struct BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder) == 0x000008, "Wrong alignment on BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder");
static_assert(sizeof(BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder) == 0x000020, "Wrong size on BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder");
static_assert(offsetof(BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder, EntryPoint) == 0x000000, "Member 'BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder, K2Node_Event_OwnerActor) == 0x000008, "Member 'BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000010, "Member 'BTTask_GoHomeMoveOrder_C_ExecuteUbergraph_BTTask_GoHomeMoveOrder::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");

}
