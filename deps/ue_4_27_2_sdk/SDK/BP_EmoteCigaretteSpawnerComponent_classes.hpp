#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmoteCigaretteSpawnerComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EmoteCigaretteSpawnerComponent.BP_EmoteCigaretteSpawnerComponent_C
// 0x0020 (0x00D8 - 0x00B8)
class UBP_EmoteCigaretteSpawnerComponent_C final : public UActorComponent
{
public:
	class FName                                   CigaretteSocketName;                               // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Player_Cigarette_C*                 CurrentCigarette;                                  // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Player_Lighter_C*                   CurrentLighter;                                    // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LighterSocketName;                                 // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCigaretteLit();
	void DestroyLighter();
	void DestroyCigarette();
	void SpawnAndAttachLighter(class AActor* Owner);
	void SpawnAndAttachCigarette(class AActor* Owner);
	void DespawnCigarette();
	void ActivatePhysics();
	void SpawnCigarette();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EmoteCigaretteSpawnerComponent_C">();
	}
	static class UBP_EmoteCigaretteSpawnerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EmoteCigaretteSpawnerComponent_C>();
	}
};
static_assert(alignof(UBP_EmoteCigaretteSpawnerComponent_C) == 0x000008, "Wrong alignment on UBP_EmoteCigaretteSpawnerComponent_C");
static_assert(sizeof(UBP_EmoteCigaretteSpawnerComponent_C) == 0x0000D8, "Wrong size on UBP_EmoteCigaretteSpawnerComponent_C");
static_assert(offsetof(UBP_EmoteCigaretteSpawnerComponent_C, CigaretteSocketName) == 0x0000B8, "Member 'UBP_EmoteCigaretteSpawnerComponent_C::CigaretteSocketName' has a wrong offset!");
static_assert(offsetof(UBP_EmoteCigaretteSpawnerComponent_C, CurrentCigarette) == 0x0000C0, "Member 'UBP_EmoteCigaretteSpawnerComponent_C::CurrentCigarette' has a wrong offset!");
static_assert(offsetof(UBP_EmoteCigaretteSpawnerComponent_C, CurrentLighter) == 0x0000C8, "Member 'UBP_EmoteCigaretteSpawnerComponent_C::CurrentLighter' has a wrong offset!");
static_assert(offsetof(UBP_EmoteCigaretteSpawnerComponent_C, LighterSocketName) == 0x0000D0, "Member 'UBP_EmoteCigaretteSpawnerComponent_C::LighterSocketName' has a wrong offset!");

}

