#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BalanceDebugInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ObsidianFox_structs.hpp"
#include "ObsidianFoxSettings_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BalanceDebugInfo.WBP_BalanceDebugInfo_C
// 0x00B8 (0x0318 - 0x0260)
class UWBP_BalanceDebugInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BalanceInfoBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BalanceRowName;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FlareGun;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FlareGunMinMax;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FlareGunTarget;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FlareGunVariation;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Health;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HealthMinMax;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HealthTarget;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HealthVariation;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MachineGun;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MachineGunMinMax;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MachineGunTarget;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MachineGunVariation;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Pistol;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PistolMinMax;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PistolTarget;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PistolVariation;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Shotgun;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ShotgunMinMax;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ShotgunTarget;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ShotgunVariation;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Update_Balance_Info(const struct FResourceBalanceCollection& ResourceBalanceCollection);
	void Update_Resource_Value_Widgets(const struct FResourceBalance& ResourceBalance, class UTextBlock*& Current, class UTextBlock*& Target, class UTextBlock*& Variation, class UTextBlock*& Min___Max, EConsumableType Consumable_Type);
	void Construct();
	void OnResourceBalanceValuesUpdated(const struct FResourceBalanceCollection& NewValues);
	void Interval_Update();
	void ExecuteUbergraph_WBP_BalanceDebugInfo(int32 EntryPoint);

	int32 AdjustTargetToMaxItemAndDifficulty(const EConsumableType ConsumableType, int32 Raw_Target) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BalanceDebugInfo_C">();
	}
	static class UWBP_BalanceDebugInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BalanceDebugInfo_C>();
	}
};
static_assert(alignof(UWBP_BalanceDebugInfo_C) == 0x000008, "Wrong alignment on UWBP_BalanceDebugInfo_C");
static_assert(sizeof(UWBP_BalanceDebugInfo_C) == 0x000318, "Wrong size on UWBP_BalanceDebugInfo_C");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, UberGraphFrame) == 0x000260, "Member 'UWBP_BalanceDebugInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, BalanceInfoBox) == 0x000268, "Member 'UWBP_BalanceDebugInfo_C::BalanceInfoBox' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, BalanceRowName) == 0x000270, "Member 'UWBP_BalanceDebugInfo_C::BalanceRowName' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, FlareGun) == 0x000278, "Member 'UWBP_BalanceDebugInfo_C::FlareGun' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, FlareGunMinMax) == 0x000280, "Member 'UWBP_BalanceDebugInfo_C::FlareGunMinMax' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, FlareGunTarget) == 0x000288, "Member 'UWBP_BalanceDebugInfo_C::FlareGunTarget' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, FlareGunVariation) == 0x000290, "Member 'UWBP_BalanceDebugInfo_C::FlareGunVariation' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, Health) == 0x000298, "Member 'UWBP_BalanceDebugInfo_C::Health' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, HealthMinMax) == 0x0002A0, "Member 'UWBP_BalanceDebugInfo_C::HealthMinMax' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, HealthTarget) == 0x0002A8, "Member 'UWBP_BalanceDebugInfo_C::HealthTarget' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, HealthVariation) == 0x0002B0, "Member 'UWBP_BalanceDebugInfo_C::HealthVariation' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, MachineGun) == 0x0002B8, "Member 'UWBP_BalanceDebugInfo_C::MachineGun' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, MachineGunMinMax) == 0x0002C0, "Member 'UWBP_BalanceDebugInfo_C::MachineGunMinMax' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, MachineGunTarget) == 0x0002C8, "Member 'UWBP_BalanceDebugInfo_C::MachineGunTarget' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, MachineGunVariation) == 0x0002D0, "Member 'UWBP_BalanceDebugInfo_C::MachineGunVariation' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, Pistol) == 0x0002D8, "Member 'UWBP_BalanceDebugInfo_C::Pistol' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, PistolMinMax) == 0x0002E0, "Member 'UWBP_BalanceDebugInfo_C::PistolMinMax' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, PistolTarget) == 0x0002E8, "Member 'UWBP_BalanceDebugInfo_C::PistolTarget' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, PistolVariation) == 0x0002F0, "Member 'UWBP_BalanceDebugInfo_C::PistolVariation' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, Shotgun) == 0x0002F8, "Member 'UWBP_BalanceDebugInfo_C::Shotgun' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, ShotgunMinMax) == 0x000300, "Member 'UWBP_BalanceDebugInfo_C::ShotgunMinMax' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, ShotgunTarget) == 0x000308, "Member 'UWBP_BalanceDebugInfo_C::ShotgunTarget' has a wrong offset!");
static_assert(offsetof(UWBP_BalanceDebugInfo_C, ShotgunVariation) == 0x000310, "Member 'UWBP_BalanceDebugInfo_C::ShotgunVariation' has a wrong offset!");

}
