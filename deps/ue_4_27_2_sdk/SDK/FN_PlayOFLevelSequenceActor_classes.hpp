#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_PlayOFLevelSequenceActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "Flow_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FN_PlayOFLevelSequenceActor.FN_PlayOFLevelSequenceActor_C
// 0x00B8 (0x0288 - 0x01D0)
class UFN_PlayOFLevelSequenceActor_C : public UFlowNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class APiecesLevelSequenceActor> LevelSequenceActorEdward;                          // 0x01D8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class APiecesLevelSequenceActor> LevelSequenceActorEmily;                           // 0x0200(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class APiecesLevelSequenceActor> LevelSequenceActorGrace;                           // 0x0228(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          MuteFMODBus;                                       // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          MoveEnemiesToSpawnLocation;                        // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_252[0x2];                                      // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MoveEnemiesToSpawnRadius;                          // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APiecesLevelSequenceActor> SequenceToPlay;                                    // 0x0258(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          LevelIsLoaded;                                     // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CreateLoadingIndicator(TSubclassOf<class UUserWidget> WidgetClass);
	void Warn_If_Still_Not_Loaded(const TSoftObjectPtr<class UObject>& InputPin);
	void Warn_if_Not_Already_Preloaded(const TSoftObjectPtr<class UObject>& SoftObjectReference);
	void IsSequenceFinished(bool* Value);
	void SetupLevelsToIgnore(class APiecesLevelSequenceActor* SequenceActor);
	void SetUpSequenceToPlay();
	void MoveEnemiesToSpawn(const float Radius);
	void K2_ExecuteInput(const class FName& PinName);
	void CutsceneFinished();
	void CutsceneStopped();
	void CutsceneSkipped(class UPiecesLevelSequencePlayer* SequencePlayer);
	void ExecuteUbergraph_FN_PlayOFLevelSequenceActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_PlayOFLevelSequenceActor_C">();
	}
	static class UFN_PlayOFLevelSequenceActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFN_PlayOFLevelSequenceActor_C>();
	}
};
static_assert(alignof(UFN_PlayOFLevelSequenceActor_C) == 0x000008, "Wrong alignment on UFN_PlayOFLevelSequenceActor_C");
static_assert(sizeof(UFN_PlayOFLevelSequenceActor_C) == 0x000288, "Wrong size on UFN_PlayOFLevelSequenceActor_C");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, UberGraphFrame) == 0x0001D0, "Member 'UFN_PlayOFLevelSequenceActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, LevelSequenceActorEdward) == 0x0001D8, "Member 'UFN_PlayOFLevelSequenceActor_C::LevelSequenceActorEdward' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, LevelSequenceActorEmily) == 0x000200, "Member 'UFN_PlayOFLevelSequenceActor_C::LevelSequenceActorEmily' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, LevelSequenceActorGrace) == 0x000228, "Member 'UFN_PlayOFLevelSequenceActor_C::LevelSequenceActorGrace' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, MuteFMODBus) == 0x000250, "Member 'UFN_PlayOFLevelSequenceActor_C::MuteFMODBus' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, MoveEnemiesToSpawnLocation) == 0x000251, "Member 'UFN_PlayOFLevelSequenceActor_C::MoveEnemiesToSpawnLocation' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, MoveEnemiesToSpawnRadius) == 0x000254, "Member 'UFN_PlayOFLevelSequenceActor_C::MoveEnemiesToSpawnRadius' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, SequenceToPlay) == 0x000258, "Member 'UFN_PlayOFLevelSequenceActor_C::SequenceToPlay' has a wrong offset!");
static_assert(offsetof(UFN_PlayOFLevelSequenceActor_C, LevelIsLoaded) == 0x000280, "Member 'UFN_PlayOFLevelSequenceActor_C::LevelIsLoaded' has a wrong offset!");

}
