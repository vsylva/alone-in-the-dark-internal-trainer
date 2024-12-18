#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_SpawnEmoteCigarette

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ANS_SpawnEmoteCigarette.ANS_SpawnEmoteCigarette_C
// 0x0000 (0x0030 - 0x0030)
class UANS_SpawnEmoteCigarette_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANS_SpawnEmoteCigarette_C">();
	}
	static class UANS_SpawnEmoteCigarette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_SpawnEmoteCigarette_C>();
	}
};
static_assert(alignof(UANS_SpawnEmoteCigarette_C) == 0x000008, "Wrong alignment on UANS_SpawnEmoteCigarette_C");
static_assert(sizeof(UANS_SpawnEmoteCigarette_C) == 0x000030, "Wrong size on UANS_SpawnEmoteCigarette_C");

}

