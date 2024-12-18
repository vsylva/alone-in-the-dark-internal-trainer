#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_CheckFactValue

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_CheckFactValue.BTDecorator_CheckFactValue_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTDecorator_CheckFactValue_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTag                           FactTag;                                           // 0x00A0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         Checked_Value;                                     // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_Value_if_No_Exist;                         // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         ComparisonMethod;                                  // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheck(class AActor* OwnerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_CheckFactValue_C">();
	}
	static class UBTDecorator_CheckFactValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_CheckFactValue_C>();
	}
};
static_assert(alignof(UBTDecorator_CheckFactValue_C) == 0x000008, "Wrong alignment on UBTDecorator_CheckFactValue_C");
static_assert(sizeof(UBTDecorator_CheckFactValue_C) == 0x0000B8, "Wrong size on UBTDecorator_CheckFactValue_C");
static_assert(offsetof(UBTDecorator_CheckFactValue_C, FactTag) == 0x0000A0, "Member 'UBTDecorator_CheckFactValue_C::FactTag' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckFactValue_C, Checked_Value) == 0x0000A8, "Member 'UBTDecorator_CheckFactValue_C::Checked_Value' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckFactValue_C, Default_Value_if_No_Exist) == 0x0000AC, "Member 'UBTDecorator_CheckFactValue_C::Default_Value_if_No_Exist' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckFactValue_C, ComparisonMethod) == 0x0000B0, "Member 'UBTDecorator_CheckFactValue_C::ComparisonMethod' has a wrong offset!");

}

