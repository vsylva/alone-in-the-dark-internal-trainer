#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FunctionLibrary_ContextualTraverse

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FunctionLibrary_ContextualTraverse.FunctionLibrary_ContextualTraverse_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_ContextualTraverse_C final : public UBlueprintFunctionLibrary
{
public:
	static void TraceForMotionWarpingLocation(class ACharacter* WarpedCharacter, class USceneComponent* WarpTarget, class UObject* __WorldContext, struct FVector* MotionWarpingLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FunctionLibrary_ContextualTraverse_C">();
	}
	static class UFunctionLibrary_ContextualTraverse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFunctionLibrary_ContextualTraverse_C>();
	}
};
static_assert(alignof(UFunctionLibrary_ContextualTraverse_C) == 0x000008, "Wrong alignment on UFunctionLibrary_ContextualTraverse_C");
static_assert(sizeof(UFunctionLibrary_ContextualTraverse_C) == 0x000028, "Wrong size on UFunctionLibrary_ContextualTraverse_C");

}

