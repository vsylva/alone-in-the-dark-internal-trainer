#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ThreatMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ThreatMeter.WBP_ThreatMeter_C
// 0x0020 (0x0280 - 0x0260)
class UWBP_ThreatMeter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           ThreatBox;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         AggroedEnemies;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_ThreatMeter(int32 EntryPoint);
	void Update();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ThreatMeter_C">();
	}
	static class UWBP_ThreatMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ThreatMeter_C>();
	}
};
static_assert(alignof(UWBP_ThreatMeter_C) == 0x000008, "Wrong alignment on UWBP_ThreatMeter_C");
static_assert(sizeof(UWBP_ThreatMeter_C) == 0x000280, "Wrong size on UWBP_ThreatMeter_C");
static_assert(offsetof(UWBP_ThreatMeter_C, UberGraphFrame) == 0x000260, "Member 'UWBP_ThreatMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ThreatMeter_C, ThreatBox) == 0x000268, "Member 'UWBP_ThreatMeter_C::ThreatBox' has a wrong offset!");
static_assert(offsetof(UWBP_ThreatMeter_C, AggroedEnemies) == 0x000270, "Member 'UWBP_ThreatMeter_C::AggroedEnemies' has a wrong offset!");

}
