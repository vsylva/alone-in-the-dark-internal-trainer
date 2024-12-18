#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThreatVisualizer

#include "Basic.hpp"

#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThreatVisualizer.BP_ThreatVisualizer_C
// 0x0000 (0x0140 - 0x0140)
class UBP_ThreatVisualizer_C final : public UThreatVisualizerComponent
{
public:
	void K2_ConvertWorldToScreenLocation(const class UWorld* WorldContextObject, const struct FVector& WorldLocation, const float& EdgePercent, struct FVector2D* ScreenPosition, float* EdgePositionAlpha);
	void ProjectWorldToScreen(class APlayerController* PlayerController, const struct FVector& WorldPosition, struct FVector2D* ScreenLocation);
	void GetScreenLocationAndEdgeDetection(float ScreenPosition, float TotalScreenSize, float SoftEdgeStart, float* OutLocation, float* EdgeAlpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThreatVisualizer_C">();
	}
	static class UBP_ThreatVisualizer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ThreatVisualizer_C>();
	}
};
static_assert(alignof(UBP_ThreatVisualizer_C) == 0x000008, "Wrong alignment on UBP_ThreatVisualizer_C");
static_assert(sizeof(UBP_ThreatVisualizer_C) == 0x000140, "Wrong size on UBP_ThreatVisualizer_C");

}

