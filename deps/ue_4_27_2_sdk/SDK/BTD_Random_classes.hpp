#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_Random

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_Random.BTD_Random_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_Random_C final : public UBTDecorator_BlueprintBase
{
public:
	float                                         Probability;                                       // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_Random_C">();
	}
	static class UBTD_Random_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_Random_C>();
	}
};
static_assert(alignof(UBTD_Random_C) == 0x000008, "Wrong alignment on UBTD_Random_C");
static_assert(sizeof(UBTD_Random_C) == 0x0000A8, "Wrong size on UBTD_Random_C");
static_assert(offsetof(UBTD_Random_C, Probability) == 0x0000A0, "Member 'UBTD_Random_C::Probability' has a wrong offset!");

}
