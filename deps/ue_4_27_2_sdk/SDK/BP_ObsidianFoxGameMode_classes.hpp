#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObsidianFoxGameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "PiecesUtils_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObsidianFoxGameMode.BP_ObsidianFoxGameMode_C
// 0x0058 (0x0348 - 0x02F0)
class ABP_ObsidianFoxGameMode_C final : public AObsidianFoxGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UglyHaxySkyLightTimerHandle;                       // 0x0300(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ClosestSkylightDistance;                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkyLight*                              ClosestSkylightObject;                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              PrevClosestSkylightObject;                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Cheat_Input_Actor_Class;                           // 0x0320(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

public:
	class AActor* ChoosePlayerStart(class AController* Player);
	void OnLoaded_990FCBA54D94565FB44251B5509AF73D(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ObsidianFoxGameMode(int32 EntryPoint);
	void SpawnCheatActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObsidianFoxGameMode_C">();
	}
	static class ABP_ObsidianFoxGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObsidianFoxGameMode_C>();
	}
};
static_assert(alignof(ABP_ObsidianFoxGameMode_C) == 0x000008, "Wrong alignment on ABP_ObsidianFoxGameMode_C");
static_assert(sizeof(ABP_ObsidianFoxGameMode_C) == 0x000348, "Wrong size on ABP_ObsidianFoxGameMode_C");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, UberGraphFrame) == 0x0002F0, "Member 'ABP_ObsidianFoxGameMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_ObsidianFoxGameMode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, UglyHaxySkyLightTimerHandle) == 0x000300, "Member 'ABP_ObsidianFoxGameMode_C::UglyHaxySkyLightTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, ClosestSkylightDistance) == 0x000308, "Member 'ABP_ObsidianFoxGameMode_C::ClosestSkylightDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, ClosestSkylightObject) == 0x000310, "Member 'ABP_ObsidianFoxGameMode_C::ClosestSkylightObject' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, PrevClosestSkylightObject) == 0x000318, "Member 'ABP_ObsidianFoxGameMode_C::PrevClosestSkylightObject' has a wrong offset!");
static_assert(offsetof(ABP_ObsidianFoxGameMode_C, Cheat_Input_Actor_Class) == 0x000320, "Member 'ABP_ObsidianFoxGameMode_C::Cheat_Input_Actor_Class' has a wrong offset!");

}
