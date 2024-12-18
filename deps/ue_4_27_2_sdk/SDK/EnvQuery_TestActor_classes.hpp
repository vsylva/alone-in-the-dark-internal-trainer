#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQuery_TestActor

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnvQuery_TestActor.EnvQuery_TestActor_C
// 0x0000 (0x0030 - 0x0030)
class UEnvQuery_TestActor_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnvQuery_TestActor_C">();
	}
	static class UEnvQuery_TestActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQuery_TestActor_C>();
	}
};
static_assert(alignof(UEnvQuery_TestActor_C) == 0x000008, "Wrong alignment on UEnvQuery_TestActor_C");
static_assert(sizeof(UEnvQuery_TestActor_C) == 0x000030, "Wrong size on UEnvQuery_TestActor_C");

}

