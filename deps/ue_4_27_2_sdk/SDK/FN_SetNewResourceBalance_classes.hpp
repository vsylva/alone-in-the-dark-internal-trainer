#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_SetNewResourceBalance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPickupSpawnRateStates_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_SetNewResourceBalance.FN_SetNewResourceBalance_C
// 0x0010 (0x01E0 - 0x01D0)
class UFN_SetNewResourceBalance_C final : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPickupSpawnRateStates                        Pickup_Balance;                                    // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void K2_ExecuteInput(const class FName& PinName);
	void ExecuteUbergraph_FN_SetNewResourceBalance(int32 EntryPoint);

	class FString K2_GetNodeDescription() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_SetNewResourceBalance_C">();
	}
	static class UFN_SetNewResourceBalance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_SetNewResourceBalance_C>();
	}
};
static_assert(alignof(UFN_SetNewResourceBalance_C) == 0x000008, "Wrong alignment on UFN_SetNewResourceBalance_C");
static_assert(sizeof(UFN_SetNewResourceBalance_C) == 0x0001E0, "Wrong size on UFN_SetNewResourceBalance_C");
static_assert(offsetof(UFN_SetNewResourceBalance_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_SetNewResourceBalance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_SetNewResourceBalance_C, Pickup_Balance) == 0x0001D8, "Member 'UFN_SetNewResourceBalance_C::Pickup_Balance' has a wrong offset!");

}
