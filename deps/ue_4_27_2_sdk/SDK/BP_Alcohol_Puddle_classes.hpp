#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Alcohol_Puddle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Alcohol_Puddle.BP_Alcohol_Puddle_C
// 0x0118 (0x0350 - 0x0238)
class ABP_Alcohol_Puddle_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          ShootBox;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPauseComponent*                        Pause;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LightTimeline_IntensityPercent_6ABDCD6740C2A11775E18BA4A0E7DA85; // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LightTimeline__Direction_6ABDCD6740C2A11775E18BA4A0E7DA85; // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LightTimeline;                                     // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      FireVFX;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RemoveAlcoholPuddleTimer;                          // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           IgniteNearbyTimer;                                 // 0x0298(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     FireSoundLoop;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TSoftObjectPtr<class UNiagaraSystem>          IngitionVFX;                                       // 0x02A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          IdleFireVFX;                                       // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         LightIntensity;                                    // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgniteOnSpawn;                                     // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2FD[0x3];                                      // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayEffect>            Burning_Effect_Class;                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActors;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UNiagaraSystem*                         IgnitionVFXLoaded;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         IdleVFXLoaded;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            Player_Burning_Effect;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         DamageRadius;                                      // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             Ignite_Sound;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnited;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HitNearbyActorsTimer;                              // 0x0348(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Alcohol_Puddle(int32 EntryPoint);
	void SpawnIgnitionVFX();
	void SpawnIdleFire();
	void SimpleIgnite(class APawn* Instigator_0);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void WeaponHit(class AActor* Weapon, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void FireLight();
	void ReceiveBeginPlay();
	void OnPauseChanged(bool bPaused);
	void LoadCompleteDelegate_61AB18CB4583638FEB535EAB291C1EBA(const TArray<class UObject*>& LoadedAssets);
	void LoadCompleteDelegate_3E3893264CDC4B6687C1F6BF28770945(const TArray<class UObject*>& LoadedAssets);
	void LoadCompleteDelegate_CFAA0D214CB2267360F17BA6D5F714AE(const TArray<class UObject*>& LoadedAssets);
	void LoadCompleteDelegate_7D09987A4F8BA9EE168488853E3B327D(const TArray<class UObject*>& LoadedAssets);
	void LightTimeline__UpdateFunc();
	void LightTimeline__FinishedFunc();
	void UserConstructionScript();
	void SpawnBurnedGroundDecal();
	void Ignite();
	void HitNearbyActors();
	void ApplyEffectOnHit(class AActor* HitActor);
	void IgniteNearbyPuddles();
	void RemoveAlcoholPuddle();
	void SetOrphanedPuddleAsPlayers();

	void GetRunningTimers(TArray<struct FTimerHandle>* OutTimers) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Alcohol_Puddle_C">();
	}
	static class ABP_Alcohol_Puddle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Alcohol_Puddle_C>();
	}
};
static_assert(alignof(ABP_Alcohol_Puddle_C) == 0x000008, "Wrong alignment on ABP_Alcohol_Puddle_C");
static_assert(sizeof(ABP_Alcohol_Puddle_C) == 0x000350, "Wrong size on ABP_Alcohol_Puddle_C");
static_assert(offsetof(ABP_Alcohol_Puddle_C, UberGraphFrame) == 0x000238, "Member 'ABP_Alcohol_Puddle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, ShootBox) == 0x000240, "Member 'ABP_Alcohol_Puddle_C::ShootBox' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Pause) == 0x000248, "Member 'ABP_Alcohol_Puddle_C::Pause' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, PointLight) == 0x000250, "Member 'ABP_Alcohol_Puddle_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, AbilitySystem) == 0x000258, "Member 'ABP_Alcohol_Puddle_C::AbilitySystem' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Decal) == 0x000260, "Member 'ABP_Alcohol_Puddle_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_Alcohol_Puddle_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, LightTimeline_IntensityPercent_6ABDCD6740C2A11775E18BA4A0E7DA85) == 0x000270, "Member 'ABP_Alcohol_Puddle_C::LightTimeline_IntensityPercent_6ABDCD6740C2A11775E18BA4A0E7DA85' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, LightTimeline__Direction_6ABDCD6740C2A11775E18BA4A0E7DA85) == 0x000274, "Member 'ABP_Alcohol_Puddle_C::LightTimeline__Direction_6ABDCD6740C2A11775E18BA4A0E7DA85' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, LightTimeline) == 0x000278, "Member 'ABP_Alcohol_Puddle_C::LightTimeline' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Duration) == 0x000280, "Member 'ABP_Alcohol_Puddle_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, FireVFX) == 0x000288, "Member 'ABP_Alcohol_Puddle_C::FireVFX' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, RemoveAlcoholPuddleTimer) == 0x000290, "Member 'ABP_Alcohol_Puddle_C::RemoveAlcoholPuddleTimer' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IgniteNearbyTimer) == 0x000298, "Member 'ABP_Alcohol_Puddle_C::IgniteNearbyTimer' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, FireSoundLoop) == 0x0002A0, "Member 'ABP_Alcohol_Puddle_C::FireSoundLoop' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IngitionVFX) == 0x0002A8, "Member 'ABP_Alcohol_Puddle_C::IngitionVFX' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IdleFireVFX) == 0x0002D0, "Member 'ABP_Alcohol_Puddle_C::IdleFireVFX' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, LightIntensity) == 0x0002F8, "Member 'ABP_Alcohol_Puddle_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IgniteOnSpawn) == 0x0002FC, "Member 'ABP_Alcohol_Puddle_C::IgniteOnSpawn' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Burning_Effect_Class) == 0x000300, "Member 'ABP_Alcohol_Puddle_C::Burning_Effect_Class' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, HitActors) == 0x000308, "Member 'ABP_Alcohol_Puddle_C::HitActors' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IgnitionVFXLoaded) == 0x000318, "Member 'ABP_Alcohol_Puddle_C::IgnitionVFXLoaded' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, IdleVFXLoaded) == 0x000320, "Member 'ABP_Alcohol_Puddle_C::IdleVFXLoaded' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Player_Burning_Effect) == 0x000328, "Member 'ABP_Alcohol_Puddle_C::Player_Burning_Effect' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, DamageRadius) == 0x000330, "Member 'ABP_Alcohol_Puddle_C::DamageRadius' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, Ignite_Sound) == 0x000338, "Member 'ABP_Alcohol_Puddle_C::Ignite_Sound' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, bIgnited) == 0x000340, "Member 'ABP_Alcohol_Puddle_C::bIgnited' has a wrong offset!");
static_assert(offsetof(ABP_Alcohol_Puddle_C, HitNearbyActorsTimer) == 0x000348, "Member 'ABP_Alcohol_Puddle_C::HitNearbyActorsTimer' has a wrong offset!");

}
