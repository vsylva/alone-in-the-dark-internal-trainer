#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_SkipCemeSpawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_SkipCemeSpawn.AN_SkipCemeSpawn_C
// 0x0000 (0x0038 - 0x0038)
class UAN_SkipCemeSpawn_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_SkipCemeSpawn_C">();
	}
	static class UAN_SkipCemeSpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_SkipCemeSpawn_C>();
	}
};
static_assert(alignof(UAN_SkipCemeSpawn_C) == 0x000008, "Wrong alignment on UAN_SkipCemeSpawn_C");
static_assert(sizeof(UAN_SkipCemeSpawn_C) == 0x000038, "Wrong size on UAN_SkipCemeSpawn_C");

}
