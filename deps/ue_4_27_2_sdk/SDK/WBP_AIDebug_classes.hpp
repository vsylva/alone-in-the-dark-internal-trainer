#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AIDebug

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AIDebug.WBP_AIDebug_C
// 0x0078 (0x02D8 - 0x0260)
class UWBP_AIDebug_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Alive;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Dead;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_101;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_187;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_55;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_94;                                      // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_EnemyCommon_C*                      EnemyRef;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_AIDebug(int32 EntryPoint);
	void ParentDeath(const struct FGameplayTagContainer& EventTags);
	void Construct();
	class FText HPText();
	float HPProgressBar();
	class FText Name_0();
	class FText Threat();
	class FText CombatRole();
	struct FLinearColor CanSeePlayer();
	struct FLinearColor OrderTarget();
	struct FSlateColor ThreatColor();
	struct FLinearColor ShouldPatrol();
	class FText TaskText();
	struct FLinearColor BehaviorTree();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AIDebug_C">();
	}
	static class UWBP_AIDebug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AIDebug_C>();
	}
};
static_assert(alignof(UWBP_AIDebug_C) == 0x000008, "Wrong alignment on UWBP_AIDebug_C");
static_assert(sizeof(UWBP_AIDebug_C) == 0x0002D8, "Wrong size on UWBP_AIDebug_C");
static_assert(offsetof(UWBP_AIDebug_C, UberGraphFrame) == 0x000260, "Member 'UWBP_AIDebug_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Alive) == 0x000268, "Member 'UWBP_AIDebug_C::Alive' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Dead) == 0x000270, "Member 'UWBP_AIDebug_C::Dead' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Image) == 0x000278, "Member 'UWBP_AIDebug_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Image_1) == 0x000280, "Member 'UWBP_AIDebug_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Image_2) == 0x000288, "Member 'UWBP_AIDebug_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Image_101) == 0x000290, "Member 'UWBP_AIDebug_C::Image_101' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, Image_187) == 0x000298, "Member 'UWBP_AIDebug_C::Image_187' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, ProgressBar_55) == 0x0002A0, "Member 'UWBP_AIDebug_C::ProgressBar_55' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, TextBlock) == 0x0002A8, "Member 'UWBP_AIDebug_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, TextBlock_1) == 0x0002B0, "Member 'UWBP_AIDebug_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, TextBlock_2) == 0x0002B8, "Member 'UWBP_AIDebug_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, TextBlock_3) == 0x0002C0, "Member 'UWBP_AIDebug_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, TextBlock_94) == 0x0002C8, "Member 'UWBP_AIDebug_C::TextBlock_94' has a wrong offset!");
static_assert(offsetof(UWBP_AIDebug_C, EnemyRef) == 0x0002D0, "Member 'UWBP_AIDebug_C::EnemyRef' has a wrong offset!");

}

