#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Player_Aim_Target_Check

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CharacterSize_structs.hpp"
#include "AnimationMontageIdentifier_structs.hpp"
#include "CemeteryCreatureType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Player_Aim_Target_Check.GA_Player_Aim_Target_Check_C
// 0x0070 (0x0430 - 0x03C0)
class UGA_Player_Aim_Target_Check_C final : public UGameplayAbility_Passive
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                            AimStrengthCurve;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimAssistStrength;                                 // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimBlockDistanceThreshold;                         // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedRelativeAimPoint;                            // 0x03D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AimInputDown;                                      // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5[0x3];                                      // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AimInputDelta;                                     // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            AimAssistCurve;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinimumAutoAimRange;                               // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitTargetData*            AimAssistEnemyDetectionTask;                       // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 AimAssistTarget;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AimAssistTargetSocketName;                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EndAimBlockedAssistTimerHandle;                    // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         AimAssistMaxDuration;                              // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTimeBeforeBlockageEndsAimAssist;                // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EndMaxTimeAimAssistTimerHandle;                    // 0x0428(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Player_Aim_Target_Check(int32 EntryPoint);
	void MeleeAttack();
	void Start_Aim_Assist();
	void K2_ActivateAbility();
	void UpdateBossHealthData(float CurrentHealthPercentage);
	void SetMostSuitableMeleeSection(EAnimationMontageIdentifier Value);
	void MoveToGrappleLocatio(const struct FVector& Grapple_Location);
	void ControlRotationFocus(class AActor* FocusTarget);
	void MeleeAttackTranslate(const struct FVector& StartVector, const struct FVector& EndVector);
	void LaserHit();
	void QuicktimeInput(float CurrentProgress, float MaxProgress);
	void QuicktimeSuccess();
	void SetCemeteryCreatureType(ECemeteryCreatureType CreatureType);
	void Triggered_006A72AB49E9C46267C83583A97E6534(const struct FVector2D& Value, float ElapsedTime, float TriggeredSeconds);
	void ValidData_E0F84E8A4305C51ADA12A6BAD8CDA469(const struct FGameplayAbilityTargetDataHandle& Data);
	void Cancelled_E0F84E8A4305C51ADA12A6BAD8CDA469(const struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_84311F3F44DD37131F18D89ACE2BDDA7(const struct FGameplayAbilityTargetDataHandle& Data);
	void Cancelled_84311F3F44DD37131F18D89ACE2BDDA7(const struct FGameplayAbilityTargetDataHandle& Data);
	void TryApplyingAimBlockerForCloseObjects(const struct FGameplayAbilityTargetDataHandle& HitResult);
	void Send_Aim_At_GameplayEvent(const struct FGameplayAbilityTargetDataHandle& InputPin);
	void Run_Aim_Assist_On_Target_Data(const struct FGameplayAbilityTargetDataHandle& Target_Data, bool* Target_Met);
	void Stop_Aim_Assist();
	void Handle_Aim_Assist_Blockage_Timer(bool bSocket_Is_Visible);
	void AimedAt(bool* Return);
	void GetUpgradeComponent(class UWeaponUpgradeComponent_C** UpgradeComponent);
	void FlashlightHit(float Distance, bool* Success);
	void SetStartOnWall(bool StartOnWall, bool* Success);
	void SetCanCirculate(bool CanCirculate, bool* Success);
	void GetCemeteryCreatureType(ECemeteryCreatureType* CemeteryCreatureType);
	void GetCharacterSize(ECharacterSize* Size);
	void IncrementJac3ProneCounter(int32* ProneCounter);
	void SetNewAggro(bool NewAggro, bool* Success);
	void GetAggroState(bool* Aggro);
	void GetMostSuitableMeleeSection(EAnimationMontageIdentifier* Value);
	void HitscanWeaponFired(bool* Success);
	void SetOrderTarget(const struct FVector& Location, bool* Success);
	void SetStartBurrowed(bool beginBurrowed, bool* Success);

	void GetCameraLookAtRotationForActor(class AActor* Look_At_Actor, const struct FVector& Aim_Assist_Location, struct FRotator* Look_At_Rotation, struct FVector* Look_at_Vector) const;
	void GetCamera_Angle_Dot_Product(const struct FRotator& InRot, float* Dot_Product) const;
	float SelectActorWithClosestDotProduct(const TMap<class AActor*, class FName>& TargetMap, struct FRotator* Look_At_Rotation, class AActor** Selected_Actor, class FName* Socket_Name, struct FVector* Look_at_Vector) const;
	bool TargetDataHasAnyActor(const struct FGameplayAbilityTargetDataHandle& TargetData) const;
	void Parse_Visible_Targets(const struct FGameplayAbilityTargetDataHandle& TargetData, TMap<class AActor*, class FName>* ActorsWithVisibleSockets) const;
	void GetActorsVisibleAimSocket(class AActor* TargetActor, bool* bHasVisisbleSocket, class FName* VisibleSocketName) const;
	void Is_Character_Socket_Visible(class AActor* Target_Actor, class FName SocketName, bool* SocketIsVisible, struct FVector* SocketWorldLocation) const;
	bool IsGamepadLastInputUsed() const;
	void GetEasedAimRotation(struct FRotator& Control_Rot, struct FVector& Look_at_Vector, struct FRotator* New_Control_Rotation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Player_Aim_Target_Check_C">();
	}
	static class UGA_Player_Aim_Target_Check_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Player_Aim_Target_Check_C>();
	}
};
static_assert(alignof(UGA_Player_Aim_Target_Check_C) == 0x000008, "Wrong alignment on UGA_Player_Aim_Target_Check_C");
static_assert(sizeof(UGA_Player_Aim_Target_Check_C) == 0x000430, "Wrong size on UGA_Player_Aim_Target_Check_C");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, UberGraphFrame) == 0x0003C0, "Member 'UGA_Player_Aim_Target_Check_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimStrengthCurve) == 0x0003C8, "Member 'UGA_Player_Aim_Target_Check_C::AimStrengthCurve' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistStrength) == 0x0003D0, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistStrength' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimBlockDistanceThreshold) == 0x0003D4, "Member 'UGA_Player_Aim_Target_Check_C::AimBlockDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, CachedRelativeAimPoint) == 0x0003D8, "Member 'UGA_Player_Aim_Target_Check_C::CachedRelativeAimPoint' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimInputDown) == 0x0003E4, "Member 'UGA_Player_Aim_Target_Check_C::AimInputDown' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimInputDelta) == 0x0003E8, "Member 'UGA_Player_Aim_Target_Check_C::AimInputDelta' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistCurve) == 0x0003F0, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistCurve' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, MinimumAutoAimRange) == 0x0003F8, "Member 'UGA_Player_Aim_Target_Check_C::MinimumAutoAimRange' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistEnemyDetectionTask) == 0x000400, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistEnemyDetectionTask' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistTarget) == 0x000408, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistTarget' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistTargetSocketName) == 0x000410, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistTargetSocketName' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, EndAimBlockedAssistTimerHandle) == 0x000418, "Member 'UGA_Player_Aim_Target_Check_C::EndAimBlockedAssistTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, AimAssistMaxDuration) == 0x000420, "Member 'UGA_Player_Aim_Target_Check_C::AimAssistMaxDuration' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, MaxTimeBeforeBlockageEndsAimAssist) == 0x000424, "Member 'UGA_Player_Aim_Target_Check_C::MaxTimeBeforeBlockageEndsAimAssist' has a wrong offset!");
static_assert(offsetof(UGA_Player_Aim_Target_Check_C, EndMaxTimeAimAssistTimerHandle) == 0x000428, "Member 'UGA_Player_Aim_Target_Check_C::EndMaxTimeAimAssistTimerHandle' has a wrong offset!");

}

