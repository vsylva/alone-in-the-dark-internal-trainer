#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQSC_Player

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EQSC_Player.EQSC_Player_C
// 0x0008 (0x0038 - 0x0030)
class UEQSC_Player_C final : public UEnvQueryContext_BlueprintBase
{
public:
	class AActor*                                 Resulting_Actor;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EQSC_Player_C">();
	}
	static class UEQSC_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEQSC_Player_C>();
	}
};
static_assert(alignof(UEQSC_Player_C) == 0x000008, "Wrong alignment on UEQSC_Player_C");
static_assert(sizeof(UEQSC_Player_C) == 0x000038, "Wrong size on UEQSC_Player_C");
static_assert(offsetof(UEQSC_Player_C, Resulting_Actor) == 0x000030, "Member 'UEQSC_Player_C::Resulting_Actor' has a wrong offset!");

}
