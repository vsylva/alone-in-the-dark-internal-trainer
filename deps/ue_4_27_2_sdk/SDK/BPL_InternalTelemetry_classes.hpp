#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_InternalTelemetry

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_InternalTelemetry.BPL_InternalTelemetry_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_InternalTelemetry_C final : public UBlueprintFunctionLibrary
{
public:
	static void Internal_Simple_Telemetry(const class FString& Server, const class FString& Type, const class FString& Subtype, const TMap<class FString, class FString>& Parameters, class UObject* __WorldContext);
	static void Internal_Simple_Telemetry_AssetLink(const class FString& Server, const class FString& Type, const class FString& Subtype, class AActor* Actor, const TMap<class FString, class FString>& Parameters, class UObject* __WorldContext);
	static class FString BuildRequestParamsString(const TMap<class FString, class FString>& Parameters, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_InternalTelemetry_C">();
	}
	static class UBPL_InternalTelemetry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_InternalTelemetry_C>();
	}
};
static_assert(alignof(UBPL_InternalTelemetry_C) == 0x000008, "Wrong alignment on UBPL_InternalTelemetry_C");
static_assert(sizeof(UBPL_InternalTelemetry_C) == 0x000028, "Wrong size on UBPL_InternalTelemetry_C");

}
