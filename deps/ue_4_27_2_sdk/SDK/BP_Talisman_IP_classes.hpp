#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Talisman_IP

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Talisman_IP.BP_Talisman_IP_C
// 0x0228 (0x05E8 - 0x03C0)
class ABP_Talisman_IP_C final : public ATalisman
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Ring2Floater;                                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ring1Floater;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ring0Floater;                                      // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BlueLight;                                         // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Ring1MarkerLight;                                  // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Ring0MarkerLight;                                  // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Rim;                                               // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Fill;                                              // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   DestinationText;                                   // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Key;                                               // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   OuterMarkerLight;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFlowComponent*                         Flow;                                              // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ring2;                                             // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ring1;                                             // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ring0;                                             // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   OuterRing;                                         // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SolutionCameraMoveTimeline_Alpha_4D131223454BA9465DE2D9A3ED75D91F; // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SolutionCameraMoveTimeline__Direction_4D131223454BA9465DE2D9A3ED75D91F; // 0x045C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D[0x3];                                      // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SolutionCameraMoveTimeline;                        // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestinationTexturesFadeInTimeline_Percent_207E70F34A65903C96D20E9FDDE72A2E; // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DestinationTexturesFadeInTimeline__Direction_207E70F34A65903C96D20E9FDDE72A2E; // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DestinationTexturesFadeInTimeline;                 // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UI_Fade_In_Opacity_CBC94D674245B610D07873827913F939; // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            UI_Fade_In__Direction_CBC94D674245B610D07873827913F939; // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D[0x3];                                      // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     UI_Fade_In;                                        // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RingRotation_Rotation_6CCD37A94A5D1263E766F4A2C03FB039; // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RingRotation__Direction_6CCD37A94A5D1263E766F4A2C03FB039; // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D[0x3];                                      // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RingRotation;                                      // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedRing;                                      // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, int32>                            RingValues;                                        // 0x04A0(0x0050)(Edit, BlueprintVisible)
	TArray<class UStaticMeshComponent*>           Rings;                                             // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FRotator                               RingStartRotation;                                 // 0x0500(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BusyRotating;                                      // 0x050C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D[0x3];                                      // 0x050D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Arctic_Teleport_Location;                          // 0x0510(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowInputExit;                                   // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_51D[0x3];                                      // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValidDestinactionEntered;                        // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                           TalismanLockedFact;                                // 0x0530(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinishedTurning;                                 // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAutoRotating;                                     // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549[0x3];                                      // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Auto_Rotate_Goal;                                  // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMakeInteractableOnAutoRotateEnd;                  // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551[0x7];                                      // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Talisman_Ring_Default_Material;                    // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Talisman_Ring_Selection_Material;                  // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Ring2DynMat;                                       // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlueLightIntensity;                                // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLockedInput;                                      // 0x0574(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_575[0x3];                                      // 0x0575(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           FirstValidCombinationBarkPlayedFact;               // 0x0578(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                           OilRigRevealBarkFact;                              // 0x0580(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                           CemeteryRevealBarkFact;                            // 0x0588(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bSkipCameraBlend;                                  // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_591[0x3];                                      // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpringArmRelative_Location;                        // 0x0594(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraStartingFoV;                                 // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FadeToBlackOnExit;                                 // 0x05A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5A5[0x3];                                      // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAnimMontage>            Queued_Reveal_bark;                                // 0x05A8(0x0028)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         SolveExitDelay;                                    // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AllowExitAfterAmountOfTime;                        // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           RingFloaters;                                      // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void GUIAddBackButton();
	void UpdateDestinationTexturesRotation();
	void BlueLightSetup();
	void SetDestinationOpacity(float NewValue);
	void SetDestinationTextures(class UTexture* Texture1, class UTexture* Texture2, class UTexture* Texture3);
	void CreateRing2DynamicMaterial();
	void UpdateSelectionMaterial();
	void Auto_Spin_Ring(int32 Ring, int32 Current_Value);
	void Auto_Rotate_By_Tag(const struct FGameplayTag& Tag, bool bMakeInteractableOnAutoRotateEnd_0, float InitialDelay);
	void LockTalisman();
	void Input_Allowed(bool* bInputAllowed);
	bool CancelExitsPuzzle();
	void ShowDestinationFeedback(const struct FGameplayTag& GameplayTag);
	void Initialize_Ring_Rotation();
	void Increment_Selected_Ring_Value(bool bClockwise);
	void PortalRoomCheck(bool* CanUseTalisman);
	void RingRotation__FinishedFunc();
	void RingRotation__UpdateFunc();
	void UserConstructionScript();
	void UI_Fade_In__UpdateFunc();
	void DestinationTexturesFadeInTimeline__FinishedFunc();
	void DestinationTexturesFadeInTimeline__UpdateFunc();
	void SolutionCameraMoveTimeline__FinishedFunc();
	void SolutionCameraMoveTimeline__UpdateFunc();
	void InpActEvt_IA_PuzzleSelection_Up_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime);
	void UI_Fade_In__FinishedFunc();
	void InpActEvt_IA_PuzzleSelection_Right_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime);
	void RotateRing(bool Backwards);
	void CombinationCheck();
	void TeleportTransition();
	void Valid_Combination_Entered(const struct FGameplayTag& GameplayTag);
	void EnteringPuzzle(class ACharacter* InteractingCharacter);
	void Ring_Finished_Turning();
	void BndEvt__BP_Talisman_IP_Flow_K2Node_ComponentBoundEvent_0_FlowComponentDynamicNotify__DelegateSignature(class UFlowComponent* FlowComponent_0, const struct FGameplayTag& NotifyTag);
	void ExitingPuzzle(class AOFPlayerController* InteractingPlayerController);
	void Start_Auto_Rotate(int32 Auto_Rotate_Goal_0, bool bMakeInteractableOnAutoRotateEnd_0, float Initial_Delay);
	void EndAutoRotate();
	void AllowInputExitPuzzle();
	void FadeOutUI();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Talisman_IP(int32 EntryPoint);
	void OnFinishedTurning__DelegateSignature(int32 Ring, int32 Current_Value);
	void OnValidDestinactionEntered__DelegateSignature(const struct FGameplayTag& GameplayTag, class ABP_Talisman_IP_C* TalismanActor);
	void FadeInUI();

	void Remove_Camera_Blend() const;
	bool IsTalismanLocked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Talisman_IP_C">();
	}
	static class ABP_Talisman_IP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Talisman_IP_C>();
	}
};
static_assert(alignof(ABP_Talisman_IP_C) == 0x000008, "Wrong alignment on ABP_Talisman_IP_C");
static_assert(sizeof(ABP_Talisman_IP_C) == 0x0005E8, "Wrong size on ABP_Talisman_IP_C");
static_assert(offsetof(ABP_Talisman_IP_C, UberGraphFrame) == 0x0003C0, "Member 'ABP_Talisman_IP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring2Floater) == 0x0003C8, "Member 'ABP_Talisman_IP_C::Ring2Floater' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring1Floater) == 0x0003D0, "Member 'ABP_Talisman_IP_C::Ring1Floater' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring0Floater) == 0x0003D8, "Member 'ABP_Talisman_IP_C::Ring0Floater' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, BlueLight) == 0x0003E0, "Member 'ABP_Talisman_IP_C::BlueLight' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring1MarkerLight) == 0x0003E8, "Member 'ABP_Talisman_IP_C::Ring1MarkerLight' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring0MarkerLight) == 0x0003F0, "Member 'ABP_Talisman_IP_C::Ring0MarkerLight' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Rim) == 0x0003F8, "Member 'ABP_Talisman_IP_C::Rim' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Fill) == 0x000400, "Member 'ABP_Talisman_IP_C::Fill' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, DestinationText) == 0x000408, "Member 'ABP_Talisman_IP_C::DestinationText' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Key) == 0x000410, "Member 'ABP_Talisman_IP_C::Key' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, OuterMarkerLight) == 0x000418, "Member 'ABP_Talisman_IP_C::OuterMarkerLight' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Flow) == 0x000420, "Member 'ABP_Talisman_IP_C::Flow' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Camera) == 0x000428, "Member 'ABP_Talisman_IP_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SpringArm) == 0x000430, "Member 'ABP_Talisman_IP_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring2) == 0x000438, "Member 'ABP_Talisman_IP_C::Ring2' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring1) == 0x000440, "Member 'ABP_Talisman_IP_C::Ring1' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring0) == 0x000448, "Member 'ABP_Talisman_IP_C::Ring0' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, OuterRing) == 0x000450, "Member 'ABP_Talisman_IP_C::OuterRing' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SolutionCameraMoveTimeline_Alpha_4D131223454BA9465DE2D9A3ED75D91F) == 0x000458, "Member 'ABP_Talisman_IP_C::SolutionCameraMoveTimeline_Alpha_4D131223454BA9465DE2D9A3ED75D91F' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SolutionCameraMoveTimeline__Direction_4D131223454BA9465DE2D9A3ED75D91F) == 0x00045C, "Member 'ABP_Talisman_IP_C::SolutionCameraMoveTimeline__Direction_4D131223454BA9465DE2D9A3ED75D91F' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SolutionCameraMoveTimeline) == 0x000460, "Member 'ABP_Talisman_IP_C::SolutionCameraMoveTimeline' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, DestinationTexturesFadeInTimeline_Percent_207E70F34A65903C96D20E9FDDE72A2E) == 0x000468, "Member 'ABP_Talisman_IP_C::DestinationTexturesFadeInTimeline_Percent_207E70F34A65903C96D20E9FDDE72A2E' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, DestinationTexturesFadeInTimeline__Direction_207E70F34A65903C96D20E9FDDE72A2E) == 0x00046C, "Member 'ABP_Talisman_IP_C::DestinationTexturesFadeInTimeline__Direction_207E70F34A65903C96D20E9FDDE72A2E' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, DestinationTexturesFadeInTimeline) == 0x000470, "Member 'ABP_Talisman_IP_C::DestinationTexturesFadeInTimeline' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, UI_Fade_In_Opacity_CBC94D674245B610D07873827913F939) == 0x000478, "Member 'ABP_Talisman_IP_C::UI_Fade_In_Opacity_CBC94D674245B610D07873827913F939' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, UI_Fade_In__Direction_CBC94D674245B610D07873827913F939) == 0x00047C, "Member 'ABP_Talisman_IP_C::UI_Fade_In__Direction_CBC94D674245B610D07873827913F939' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, UI_Fade_In) == 0x000480, "Member 'ABP_Talisman_IP_C::UI_Fade_In' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingRotation_Rotation_6CCD37A94A5D1263E766F4A2C03FB039) == 0x000488, "Member 'ABP_Talisman_IP_C::RingRotation_Rotation_6CCD37A94A5D1263E766F4A2C03FB039' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingRotation__Direction_6CCD37A94A5D1263E766F4A2C03FB039) == 0x00048C, "Member 'ABP_Talisman_IP_C::RingRotation__Direction_6CCD37A94A5D1263E766F4A2C03FB039' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingRotation) == 0x000490, "Member 'ABP_Talisman_IP_C::RingRotation' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SelectedRing) == 0x000498, "Member 'ABP_Talisman_IP_C::SelectedRing' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingValues) == 0x0004A0, "Member 'ABP_Talisman_IP_C::RingValues' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Rings) == 0x0004F0, "Member 'ABP_Talisman_IP_C::Rings' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingStartRotation) == 0x000500, "Member 'ABP_Talisman_IP_C::RingStartRotation' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, BusyRotating) == 0x00050C, "Member 'ABP_Talisman_IP_C::BusyRotating' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Arctic_Teleport_Location) == 0x000510, "Member 'ABP_Talisman_IP_C::Arctic_Teleport_Location' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, bAllowInputExit) == 0x00051C, "Member 'ABP_Talisman_IP_C::bAllowInputExit' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, OnValidDestinactionEntered) == 0x000520, "Member 'ABP_Talisman_IP_C::OnValidDestinactionEntered' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, TalismanLockedFact) == 0x000530, "Member 'ABP_Talisman_IP_C::TalismanLockedFact' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, OnFinishedTurning) == 0x000538, "Member 'ABP_Talisman_IP_C::OnFinishedTurning' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, bAutoRotating) == 0x000548, "Member 'ABP_Talisman_IP_C::bAutoRotating' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Auto_Rotate_Goal) == 0x00054C, "Member 'ABP_Talisman_IP_C::Auto_Rotate_Goal' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, bMakeInteractableOnAutoRotateEnd) == 0x000550, "Member 'ABP_Talisman_IP_C::bMakeInteractableOnAutoRotateEnd' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Talisman_Ring_Default_Material) == 0x000558, "Member 'ABP_Talisman_IP_C::Talisman_Ring_Default_Material' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Talisman_Ring_Selection_Material) == 0x000560, "Member 'ABP_Talisman_IP_C::Talisman_Ring_Selection_Material' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Ring2DynMat) == 0x000568, "Member 'ABP_Talisman_IP_C::Ring2DynMat' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, BlueLightIntensity) == 0x000570, "Member 'ABP_Talisman_IP_C::BlueLightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, bLockedInput) == 0x000574, "Member 'ABP_Talisman_IP_C::bLockedInput' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, FirstValidCombinationBarkPlayedFact) == 0x000578, "Member 'ABP_Talisman_IP_C::FirstValidCombinationBarkPlayedFact' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, OilRigRevealBarkFact) == 0x000580, "Member 'ABP_Talisman_IP_C::OilRigRevealBarkFact' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, CemeteryRevealBarkFact) == 0x000588, "Member 'ABP_Talisman_IP_C::CemeteryRevealBarkFact' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, bSkipCameraBlend) == 0x000590, "Member 'ABP_Talisman_IP_C::bSkipCameraBlend' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SpringArmRelative_Location) == 0x000594, "Member 'ABP_Talisman_IP_C::SpringArmRelative_Location' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, CameraStartingFoV) == 0x0005A0, "Member 'ABP_Talisman_IP_C::CameraStartingFoV' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, FadeToBlackOnExit) == 0x0005A4, "Member 'ABP_Talisman_IP_C::FadeToBlackOnExit' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, Queued_Reveal_bark) == 0x0005A8, "Member 'ABP_Talisman_IP_C::Queued_Reveal_bark' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, SolveExitDelay) == 0x0005D0, "Member 'ABP_Talisman_IP_C::SolveExitDelay' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, AllowExitAfterAmountOfTime) == 0x0005D4, "Member 'ABP_Talisman_IP_C::AllowExitAfterAmountOfTime' has a wrong offset!");
static_assert(offsetof(ABP_Talisman_IP_C, RingFloaters) == 0x0005D8, "Member 'ABP_Talisman_IP_C::RingFloaters' has a wrong offset!");

}
