#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_GoHomeMoveOrder

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_GoHomeMoveOrder.BTTask_GoHomeMoveOrder_C
// 0x0058 (0x0100 - 0x00A8)
class UBTTask_GoHomeMoveOrder_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 HomeLocationVector;                                // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 OrderTargetVector;                                 // 0x00D8(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_GoHomeMoveOrder(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_GoHomeMoveOrder_C">();
	}
	static class UBTTask_GoHomeMoveOrder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_GoHomeMoveOrder_C>();
	}
};
static_assert(alignof(UBTTask_GoHomeMoveOrder_C) == 0x000008, "Wrong alignment on UBTTask_GoHomeMoveOrder_C");
static_assert(sizeof(UBTTask_GoHomeMoveOrder_C) == 0x000100, "Wrong size on UBTTask_GoHomeMoveOrder_C");
static_assert(offsetof(UBTTask_GoHomeMoveOrder_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_GoHomeMoveOrder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_GoHomeMoveOrder_C, HomeLocationVector) == 0x0000B0, "Member 'UBTTask_GoHomeMoveOrder_C::HomeLocationVector' has a wrong offset!");
static_assert(offsetof(UBTTask_GoHomeMoveOrder_C, OrderTargetVector) == 0x0000D8, "Member 'UBTTask_GoHomeMoveOrder_C::OrderTargetVector' has a wrong offset!");

}
