#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesSequence

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "PiecesSequence_structs.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "LevelSequence_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class PiecesSequence.InputSequenceObject
// 0x0020 (0x0048 - 0x0028)
class UInputSequenceObject final : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputSequenceObject">();
	}
	static class UInputSequenceObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputSequenceObject>();
	}
};
static_assert(alignof(UInputSequenceObject) == 0x000008, "Wrong alignment on UInputSequenceObject");
static_assert(sizeof(UInputSequenceObject) == 0x000048, "Wrong size on UInputSequenceObject");

// Class PiecesSequence.PiecesLevelSequenceActor
// 0x0148 (0x0418 - 0x02D0)
class APiecesLevelSequenceActor : public ALevelSequenceActor
{
public:
	uint8                                         bUsePlayerCharacterAsOriginTransform : 1;          // 0x02D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPiecesSequenceMetaData*>        MetaData;                                          // 0x02D8(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPiecesLevelSequencePlayerPlaybackSettings OFLevelSequencePlaybackSettings;                   // 0x02E8(0x0020)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FCharacterBinding                      PlayerCharacterBinding;                            // 0x0308(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCharacterBinding>              CharacterBindingMap;                               // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSequenceActorSpawnInfo>        ActorsToSpawnOnPlay;                               // 0x0340(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPersistenceComponent*                  PersistenceComponent;                              // 0x0350(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldCheckIfPlayedAtStartup;                     // 0x0358(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bHasPlayed;                                        // 0x0359(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         LevelSequenceAsset;                                // 0x0360(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_368[0x10];                                     // 0x0368(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FMovieSceneObjectBindingID, struct FTransitionCutEntry> TransitionCuts;                                    // 0x0378(0x0050)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSet<struct FMovieSceneObjectBindingID>       HandledTransitionCuts;                             // 0x03C8(0x0050)(Transient, Protected, NativeAccessSpecifierProtected)

public:
	void OnCameraCutHandler(class UCameraComponent* CameraComponent);
	void OnSequenceFinished();
	void OnSequenceSkipped(class UPiecesLevelSequencePlayer* SkippingSequencePlayer);
	void Play();
	void PreAutoPlay();

	const class UPiecesSequenceMetaData* GetFirstMetaData(TSubclassOf<class UPiecesSequenceMetaData> MetaDataClass) const;
	bool GetMetadata(TSubclassOf<class UPiecesSequenceMetaData> MetaDataClass, const TArray<class UPiecesSequenceMetaData*>* OutMetaData) const;
	void TeleportPlayer(const class UPiecesSequenceMetadataGoalLocation* GoalLocationMetadata) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesLevelSequenceActor">();
	}
	static class APiecesLevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APiecesLevelSequenceActor>();
	}
};
static_assert(alignof(APiecesLevelSequenceActor) == 0x000008, "Wrong alignment on APiecesLevelSequenceActor");
static_assert(sizeof(APiecesLevelSequenceActor) == 0x000418, "Wrong size on APiecesLevelSequenceActor");
static_assert(offsetof(APiecesLevelSequenceActor, MetaData) == 0x0002D8, "Member 'APiecesLevelSequenceActor::MetaData' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, OFLevelSequencePlaybackSettings) == 0x0002E8, "Member 'APiecesLevelSequenceActor::OFLevelSequencePlaybackSettings' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, PlayerCharacterBinding) == 0x000308, "Member 'APiecesLevelSequenceActor::PlayerCharacterBinding' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, CharacterBindingMap) == 0x000330, "Member 'APiecesLevelSequenceActor::CharacterBindingMap' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, ActorsToSpawnOnPlay) == 0x000340, "Member 'APiecesLevelSequenceActor::ActorsToSpawnOnPlay' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, PersistenceComponent) == 0x000350, "Member 'APiecesLevelSequenceActor::PersistenceComponent' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, bShouldCheckIfPlayedAtStartup) == 0x000358, "Member 'APiecesLevelSequenceActor::bShouldCheckIfPlayedAtStartup' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, bHasPlayed) == 0x000359, "Member 'APiecesLevelSequenceActor::bHasPlayed' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, LevelSequenceAsset) == 0x000360, "Member 'APiecesLevelSequenceActor::LevelSequenceAsset' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, TransitionCuts) == 0x000378, "Member 'APiecesLevelSequenceActor::TransitionCuts' has a wrong offset!");
static_assert(offsetof(APiecesLevelSequenceActor, HandledTransitionCuts) == 0x0003C8, "Member 'APiecesLevelSequenceActor::HandledTransitionCuts' has a wrong offset!");

// Class PiecesSequence.InteractiveLevelSequenceActor
// 0x0190 (0x05A8 - 0x0418)
class AInteractiveLevelSequenceActor final : public APiecesLevelSequenceActor
{
public:
	uint8                                         Pad_418[0x8];                                      // 0x0418(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<struct FMovieSceneObjectBindingID>       InteractiveSegmentCuts;                            // 0x0420(0x0050)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                   InteractiveSegmentCutFrames;                       // 0x0470(0x0050)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FName                                   InteractiveSequenceCameraTag;                      // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACineCameraActor*                       InteractiveSegmentCamera;                          // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4D0[0x51];                                     // 0x04D0(0x0051)(Fixing Size After Last Property [ Dumper-7 ])
	EInteractiveLevelSequenceState                SequenceState;                                     // 0x0521(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_522[0x86];                                     // 0x0522(0x0086)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InteractiveSegmentStarted(int32 SegmentNumber);
	void InteractiveSegmentTick(float DeltaSeconds);
	void OnSequenceObjectSpawned(class UObject* Object, const struct FMovieSceneEvaluationOperand& Operand);
	void StartNextSection();

	bool CanActivateInteractiveSegment(int32 SectionNumber) const;
	TSoftObjectPtr<class ULevelSequence> GetLevelSequenceAsSoftObject() const;
	struct FInteractiveSequenceSegment GetSectionSequenceData(int32 SectionNumber) const;
	bool HasSection(int32 SectionNumber) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveLevelSequenceActor">();
	}
	static class AInteractiveLevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveLevelSequenceActor>();
	}
};
static_assert(alignof(AInteractiveLevelSequenceActor) == 0x000008, "Wrong alignment on AInteractiveLevelSequenceActor");
static_assert(sizeof(AInteractiveLevelSequenceActor) == 0x0005A8, "Wrong size on AInteractiveLevelSequenceActor");
static_assert(offsetof(AInteractiveLevelSequenceActor, InteractiveSegmentCuts) == 0x000420, "Member 'AInteractiveLevelSequenceActor::InteractiveSegmentCuts' has a wrong offset!");
static_assert(offsetof(AInteractiveLevelSequenceActor, InteractiveSegmentCutFrames) == 0x000470, "Member 'AInteractiveLevelSequenceActor::InteractiveSegmentCutFrames' has a wrong offset!");
static_assert(offsetof(AInteractiveLevelSequenceActor, InteractiveSequenceCameraTag) == 0x0004C0, "Member 'AInteractiveLevelSequenceActor::InteractiveSequenceCameraTag' has a wrong offset!");
static_assert(offsetof(AInteractiveLevelSequenceActor, InteractiveSegmentCamera) == 0x0004C8, "Member 'AInteractiveLevelSequenceActor::InteractiveSegmentCamera' has a wrong offset!");
static_assert(offsetof(AInteractiveLevelSequenceActor, SequenceState) == 0x000521, "Member 'AInteractiveLevelSequenceActor::SequenceState' has a wrong offset!");

// Class PiecesSequence.InteractiveSequenceModifier
// 0x0008 (0x00C0 - 0x00B8)
class UInteractiveSequenceModifier : public UActorComponent
{
public:
	class UEnhancedInputComponent*                InputComponent;                                    // 0x00B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveSequenceModifier">();
	}
	static class UInteractiveSequenceModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveSequenceModifier>();
	}
};
static_assert(alignof(UInteractiveSequenceModifier) == 0x000008, "Wrong alignment on UInteractiveSequenceModifier");
static_assert(sizeof(UInteractiveSequenceModifier) == 0x0000C0, "Wrong size on UInteractiveSequenceModifier");
static_assert(offsetof(UInteractiveSequenceModifier, InputComponent) == 0x0000B8, "Member 'UInteractiveSequenceModifier::InputComponent' has a wrong offset!");

// Class PiecesSequence.InteractiveSequenceCameraModifier
// 0x00E0 (0x01A0 - 0x00C0)
class UInteractiveSequenceCameraModifier final : public UInteractiveSequenceModifier
{
public:
	class UInputAction*                           InputAction;                                       // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformTargetLow;                                // 0x00D0(0x0030)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FTransform                             TransformTargetHigh;                               // 0x0100(0x0030)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FTransform                             TransformTargetBase;                               // 0x0130(0x0030)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	EEasingFunc                                   CameraEasingFunc;                                  // 0x0160(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraEasingExponent;                              // 0x0164(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BlendSpeed;                                        // 0x0168(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ACameraActor>            CameraReference;                                   // 0x0170(0x0028)(BlueprintVisible, Transient, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              InputVector;                                       // 0x0198(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	float GetBlendValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveSequenceCameraModifier">();
	}
	static class UInteractiveSequenceCameraModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveSequenceCameraModifier>();
	}
};
static_assert(alignof(UInteractiveSequenceCameraModifier) == 0x000010, "Wrong alignment on UInteractiveSequenceCameraModifier");
static_assert(sizeof(UInteractiveSequenceCameraModifier) == 0x0001A0, "Wrong size on UInteractiveSequenceCameraModifier");
static_assert(offsetof(UInteractiveSequenceCameraModifier, InputAction) == 0x0000C0, "Member 'UInteractiveSequenceCameraModifier::InputAction' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, TransformTargetLow) == 0x0000D0, "Member 'UInteractiveSequenceCameraModifier::TransformTargetLow' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, TransformTargetHigh) == 0x000100, "Member 'UInteractiveSequenceCameraModifier::TransformTargetHigh' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, TransformTargetBase) == 0x000130, "Member 'UInteractiveSequenceCameraModifier::TransformTargetBase' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, CameraEasingFunc) == 0x000160, "Member 'UInteractiveSequenceCameraModifier::CameraEasingFunc' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, CameraEasingExponent) == 0x000164, "Member 'UInteractiveSequenceCameraModifier::CameraEasingExponent' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, BlendSpeed) == 0x000168, "Member 'UInteractiveSequenceCameraModifier::BlendSpeed' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, CameraReference) == 0x000170, "Member 'UInteractiveSequenceCameraModifier::CameraReference' has a wrong offset!");
static_assert(offsetof(UInteractiveSequenceCameraModifier, InputVector) == 0x000198, "Member 'UInteractiveSequenceCameraModifier::InputVector' has a wrong offset!");

// Class PiecesSequence.PiecesCutsceneWidget
// 0x0038 (0x0298 - 0x0260)
class UPiecesCutsceneWidget : public UUserWidget
{
public:
	class UInputAction*                           SkipCutsceneAction;                                // 0x0260(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         AutoDestroyLifetime;                               // 0x0268(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPiecesLevelSequencePlayer*             SequencePlayer;                                    // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputSequenceObject*>           InputSequences;                                    // 0x0278(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bFadeToBlackOnSkip;                                // 0x0290(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BeginAutoDestroy();
	void ListenForInputSequence(const TArray<class FName>& ActionNames, EInputEvent EventType, bool bConsume, TDelegate<void()> Callback);
	void OnAutoDestroy();
	void OnSkipCutscene(bool bPressed);
	void SetFadeToBlackOnSkip(bool Value);
	void SetupInput();
	void SkipCutsceneActionHandler(const struct FInputActionValue& InputActionValue);
	void StartFadingOutBlackScreen();
	void UseFadeOutBlackScreen();

	bool IsAutoDestroyActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesCutsceneWidget">();
	}
	static class UPiecesCutsceneWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesCutsceneWidget>();
	}
};
static_assert(alignof(UPiecesCutsceneWidget) == 0x000008, "Wrong alignment on UPiecesCutsceneWidget");
static_assert(sizeof(UPiecesCutsceneWidget) == 0x000298, "Wrong size on UPiecesCutsceneWidget");
static_assert(offsetof(UPiecesCutsceneWidget, SkipCutsceneAction) == 0x000260, "Member 'UPiecesCutsceneWidget::SkipCutsceneAction' has a wrong offset!");
static_assert(offsetof(UPiecesCutsceneWidget, AutoDestroyLifetime) == 0x000268, "Member 'UPiecesCutsceneWidget::AutoDestroyLifetime' has a wrong offset!");
static_assert(offsetof(UPiecesCutsceneWidget, SequencePlayer) == 0x000270, "Member 'UPiecesCutsceneWidget::SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPiecesCutsceneWidget, InputSequences) == 0x000278, "Member 'UPiecesCutsceneWidget::InputSequences' has a wrong offset!");
static_assert(offsetof(UPiecesCutsceneWidget, bFadeToBlackOnSkip) == 0x000290, "Member 'UPiecesCutsceneWidget::bFadeToBlackOnSkip' has a wrong offset!");

// Class PiecesSequence.PiecesLevelSequenceDirector
// 0x0010 (0x0048 - 0x0038)
class UPiecesLevelSequenceDirector : public ULevelSequenceDirector
{
public:
	TArray<class UInteractiveSequenceModifier*>   InteractiveSequenceModifiers;                      // 0x0038(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	void EndInteractiveSequenceModifier(class UInteractiveSequenceModifier* Modifier, class APlayerController* PlayerController);
	void StartInteractiveSequenceModifier(class UInteractiveSequenceModifier* Modifier, class APlayerController* PlayerController);
	void TriggerSequenceNotify(const struct FGameplayTag& EventTag);

	class UPiecesLevelSequencePlayer* GetSequencePlayer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesLevelSequenceDirector">();
	}
	static class UPiecesLevelSequenceDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesLevelSequenceDirector>();
	}
};
static_assert(alignof(UPiecesLevelSequenceDirector) == 0x000008, "Wrong alignment on UPiecesLevelSequenceDirector");
static_assert(sizeof(UPiecesLevelSequenceDirector) == 0x000048, "Wrong size on UPiecesLevelSequenceDirector");
static_assert(offsetof(UPiecesLevelSequenceDirector, InteractiveSequenceModifiers) == 0x000038, "Member 'UPiecesLevelSequenceDirector::InteractiveSequenceModifiers' has a wrong offset!");

// Class PiecesSequence.PiecesLevelSequencePlayer
// 0x0170 (0x0770 - 0x0600)
class UPiecesLevelSequencePlayer final : public ULevelSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_             OnSequenceNotify;                                  // 0x0600(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_610[0x18];                                     // 0x0610(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSequenceSkipped;                                 // 0x0628(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_638[0x30];                                     // 0x0638(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UPiecesCutsceneWidget*                  CutsceneSkipWidget;                                // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPiecesCutsceneWidget*                  FadeToBlackWidget;                                 // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_678[0x70];                                     // 0x0678(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	class APiecesLODPreloadActor*                 LODPreloadActor;                                   // 0x06E8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APiecesLevelStreamingLoaderActor*       LevelPreloadVisibilityActor;                       // 0x06F0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APiecesLevelStreamingLoaderActor*       LevelPreloadLoadingOnlyActor;                      // 0x06F8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_700[0x70];                                     // 0x0700(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UPiecesLevelSequencePlayer* CreatePiecesLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, const struct FPiecesLevelSequencePlayerPlaybackSettings& PiecesSettings, class APiecesLevelSequenceActor** OutActor);

	void OnCameraCutHandler(class UCameraComponent* CameraComponent);
	void OnSequenceSkipped__DelegateSignature(class UPiecesLevelSequencePlayer* SequencePlayer);
	void QueueSkipForOnStartPlaying();
	void ResetDynamics();
	void SetCameraCut();
	void SkipSequence();

	bool IsSkipInitiated() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesLevelSequencePlayer">();
	}
	static class UPiecesLevelSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesLevelSequencePlayer>();
	}
};
static_assert(alignof(UPiecesLevelSequencePlayer) == 0x000008, "Wrong alignment on UPiecesLevelSequencePlayer");
static_assert(sizeof(UPiecesLevelSequencePlayer) == 0x000770, "Wrong size on UPiecesLevelSequencePlayer");
static_assert(offsetof(UPiecesLevelSequencePlayer, OnSequenceNotify) == 0x000600, "Member 'UPiecesLevelSequencePlayer::OnSequenceNotify' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, OnSequenceSkipped) == 0x000628, "Member 'UPiecesLevelSequencePlayer::OnSequenceSkipped' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, CutsceneSkipWidget) == 0x000668, "Member 'UPiecesLevelSequencePlayer::CutsceneSkipWidget' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, FadeToBlackWidget) == 0x000670, "Member 'UPiecesLevelSequencePlayer::FadeToBlackWidget' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, LODPreloadActor) == 0x0006E8, "Member 'UPiecesLevelSequencePlayer::LODPreloadActor' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, LevelPreloadVisibilityActor) == 0x0006F0, "Member 'UPiecesLevelSequencePlayer::LevelPreloadVisibilityActor' has a wrong offset!");
static_assert(offsetof(UPiecesLevelSequencePlayer, LevelPreloadLoadingOnlyActor) == 0x0006F8, "Member 'UPiecesLevelSequencePlayer::LevelPreloadLoadingOnlyActor' has a wrong offset!");

// Class PiecesSequence.PiecesMovieSceneLetterboxSection
// 0x00A0 (0x0188 - 0x00E8)
class UPiecesMovieSceneLetterboxSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                FloatCurve;                                        // 0x00E8(0x00A0)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesMovieSceneLetterboxSection">();
	}
	static class UPiecesMovieSceneLetterboxSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesMovieSceneLetterboxSection>();
	}
};
static_assert(alignof(UPiecesMovieSceneLetterboxSection) == 0x000008, "Wrong alignment on UPiecesMovieSceneLetterboxSection");
static_assert(sizeof(UPiecesMovieSceneLetterboxSection) == 0x000188, "Wrong size on UPiecesMovieSceneLetterboxSection");
static_assert(offsetof(UPiecesMovieSceneLetterboxSection, FloatCurve) == 0x0000E8, "Member 'UPiecesMovieSceneLetterboxSection::FloatCurve' has a wrong offset!");

// Class PiecesSequence.PiecesMovieSceneLetterboxTrack
// 0x0008 (0x00C8 - 0x00C0)
class UPiecesMovieSceneLetterboxTrack final : public UMovieSceneFloatTrack
{
public:
	uint8                                         Pad_C0[0x8];                                       // 0x00C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesMovieSceneLetterboxTrack">();
	}
	static class UPiecesMovieSceneLetterboxTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesMovieSceneLetterboxTrack>();
	}
};
static_assert(alignof(UPiecesMovieSceneLetterboxTrack) == 0x000008, "Wrong alignment on UPiecesMovieSceneLetterboxTrack");
static_assert(sizeof(UPiecesMovieSceneLetterboxTrack) == 0x0000C8, "Wrong size on UPiecesMovieSceneLetterboxTrack");

// Class PiecesSequence.PiecesMovieSceneLetterboxWidget
// 0x0028 (0x0288 - 0x0260)
class UPiecesMovieSceneLetterboxWidget : public UUserWidget
{
public:
	float                                         TargetAspectRatio;                                 // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 TopBlackBar;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                 BottomBlackBar;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                 LeftBlackBar;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                 RightBlackBar;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void FadeOutAndRemoveFromParent();
	void SetAlpha(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesMovieSceneLetterboxWidget">();
	}
	static class UPiecesMovieSceneLetterboxWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesMovieSceneLetterboxWidget>();
	}
};
static_assert(alignof(UPiecesMovieSceneLetterboxWidget) == 0x000008, "Wrong alignment on UPiecesMovieSceneLetterboxWidget");
static_assert(sizeof(UPiecesMovieSceneLetterboxWidget) == 0x000288, "Wrong size on UPiecesMovieSceneLetterboxWidget");
static_assert(offsetof(UPiecesMovieSceneLetterboxWidget, TargetAspectRatio) == 0x000260, "Member 'UPiecesMovieSceneLetterboxWidget::TargetAspectRatio' has a wrong offset!");
static_assert(offsetof(UPiecesMovieSceneLetterboxWidget, TopBlackBar) == 0x000268, "Member 'UPiecesMovieSceneLetterboxWidget::TopBlackBar' has a wrong offset!");
static_assert(offsetof(UPiecesMovieSceneLetterboxWidget, BottomBlackBar) == 0x000270, "Member 'UPiecesMovieSceneLetterboxWidget::BottomBlackBar' has a wrong offset!");
static_assert(offsetof(UPiecesMovieSceneLetterboxWidget, LeftBlackBar) == 0x000278, "Member 'UPiecesMovieSceneLetterboxWidget::LeftBlackBar' has a wrong offset!");
static_assert(offsetof(UPiecesMovieSceneLetterboxWidget, RightBlackBar) == 0x000280, "Member 'UPiecesMovieSceneLetterboxWidget::RightBlackBar' has a wrong offset!");

// Class PiecesSequence.PiecesSequenceDeveloperSettings
// 0x0078 (0x00B0 - 0x0038)
class UPiecesSequenceDeveloperSettings final : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   FullScreenFadeToBlackWidget;                       // 0x0038(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   CutsceneSkipWidgetClass;                           // 0x0060(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   LetterboxWidgetClass;                              // 0x0088(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesSequenceDeveloperSettings">();
	}
	static class UPiecesSequenceDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesSequenceDeveloperSettings>();
	}
};
static_assert(alignof(UPiecesSequenceDeveloperSettings) == 0x000008, "Wrong alignment on UPiecesSequenceDeveloperSettings");
static_assert(sizeof(UPiecesSequenceDeveloperSettings) == 0x0000B0, "Wrong size on UPiecesSequenceDeveloperSettings");
static_assert(offsetof(UPiecesSequenceDeveloperSettings, FullScreenFadeToBlackWidget) == 0x000038, "Member 'UPiecesSequenceDeveloperSettings::FullScreenFadeToBlackWidget' has a wrong offset!");
static_assert(offsetof(UPiecesSequenceDeveloperSettings, CutsceneSkipWidgetClass) == 0x000060, "Member 'UPiecesSequenceDeveloperSettings::CutsceneSkipWidgetClass' has a wrong offset!");
static_assert(offsetof(UPiecesSequenceDeveloperSettings, LetterboxWidgetClass) == 0x000088, "Member 'UPiecesSequenceDeveloperSettings::LetterboxWidgetClass' has a wrong offset!");

// Class PiecesSequence.SequenceInfosDataAsset
// 0x0010 (0x0040 - 0x0030)
class USequenceInfosDataAsset final : public UDataAsset
{
public:
	TArray<struct FSequenceInfo>                  SequenceInfos;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceInfosDataAsset">();
	}
	static class USequenceInfosDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceInfosDataAsset>();
	}
};
static_assert(alignof(USequenceInfosDataAsset) == 0x000008, "Wrong alignment on USequenceInfosDataAsset");
static_assert(sizeof(USequenceInfosDataAsset) == 0x000040, "Wrong size on USequenceInfosDataAsset");
static_assert(offsetof(USequenceInfosDataAsset, SequenceInfos) == 0x000030, "Member 'USequenceInfosDataAsset::SequenceInfos' has a wrong offset!");

// Class PiecesSequence.PiecesSequenceEngineSubsystem
// 0x0048 (0x0078 - 0x0030)
class UPiecesSequenceEngineSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x30];                                      // 0x0030(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UPiecesCutsceneWidget>      FullScreenFadeToBlackWidget;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPiecesCutsceneWidget>      CutsceneSkipWidgetClass;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPiecesMovieSceneLetterboxWidget> LetterboxWidgetClass;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnSequenceFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesSequenceEngineSubsystem">();
	}
	static class UPiecesSequenceEngineSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesSequenceEngineSubsystem>();
	}
};
static_assert(alignof(UPiecesSequenceEngineSubsystem) == 0x000008, "Wrong alignment on UPiecesSequenceEngineSubsystem");
static_assert(sizeof(UPiecesSequenceEngineSubsystem) == 0x000078, "Wrong size on UPiecesSequenceEngineSubsystem");
static_assert(offsetof(UPiecesSequenceEngineSubsystem, FullScreenFadeToBlackWidget) == 0x000060, "Member 'UPiecesSequenceEngineSubsystem::FullScreenFadeToBlackWidget' has a wrong offset!");
static_assert(offsetof(UPiecesSequenceEngineSubsystem, CutsceneSkipWidgetClass) == 0x000068, "Member 'UPiecesSequenceEngineSubsystem::CutsceneSkipWidgetClass' has a wrong offset!");
static_assert(offsetof(UPiecesSequenceEngineSubsystem, LetterboxWidgetClass) == 0x000070, "Member 'UPiecesSequenceEngineSubsystem::LetterboxWidgetClass' has a wrong offset!");

// Class PiecesSequence.PiecesSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class UPiecesSequenceMetaData : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesSequenceMetaData">();
	}
	static class UPiecesSequenceMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesSequenceMetaData>();
	}
};
static_assert(alignof(UPiecesSequenceMetaData) == 0x000008, "Wrong alignment on UPiecesSequenceMetaData");
static_assert(sizeof(UPiecesSequenceMetaData) == 0x000028, "Wrong size on UPiecesSequenceMetaData");

// Class PiecesSequence.PiecesSequenceMetadataGoalLocation
// 0x0030 (0x0058 - 0x0028)
class UPiecesSequenceMetadataGoalLocation final : public UPiecesSequenceMetaData
{
public:
	uint8                                         bTeleportAtSequenceStart : 1;                      // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSaveGameWhenTeleporting : 1;                      // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ATargetPoint>            TargetPoint;                                       // 0x0030(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesSequenceMetadataGoalLocation">();
	}
	static class UPiecesSequenceMetadataGoalLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesSequenceMetadataGoalLocation>();
	}
};
static_assert(alignof(UPiecesSequenceMetadataGoalLocation) == 0x000008, "Wrong alignment on UPiecesSequenceMetadataGoalLocation");
static_assert(sizeof(UPiecesSequenceMetadataGoalLocation) == 0x000058, "Wrong size on UPiecesSequenceMetadataGoalLocation");
static_assert(offsetof(UPiecesSequenceMetadataGoalLocation, TargetPoint) == 0x000030, "Member 'UPiecesSequenceMetadataGoalLocation::TargetPoint' has a wrong offset!");

// Class PiecesSequence.PiecesSequence_ActorInterface
// 0x0000 (0x0028 - 0x0028)
class IPiecesSequence_ActorInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesSequence_ActorInterface">();
	}
	static class IPiecesSequence_ActorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPiecesSequence_ActorInterface>();
	}
};
static_assert(alignof(IPiecesSequence_ActorInterface) == 0x000008, "Wrong alignment on IPiecesSequence_ActorInterface");
static_assert(sizeof(IPiecesSequence_ActorInterface) == 0x000028, "Wrong size on IPiecesSequence_ActorInterface");

}

