#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Strider

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class Strider.StriderMath
// 0x0000 (0x0028 - 0x0028)
class UStriderMath final : public UBlueprintFunctionLibrary
{
public:
	static float AngleBetween(const struct FVector& A, const struct FVector& B);
	static float CalculateCircleStrafeDirectionDelta(const float LastDirection, const float Direction, const float DeltaTime);
	static float CalculatePlayRate(const float TotalSpeedScale, const float PlaybackWeight, const float MinPlayRate, const float MaxPlayRate);
	static float CalculateStrideScale(const float TotalSpeedScale, const float PlayRate);
	static float GetAngleDelta(const float StartAngle, const float EndAngle);
	static int32 GetNextCardinalDirection(const int32 CurrentCardinalDirection, const float RelativeDirection, const float StepDelta, const float SkipDelta);
	static float GetRotationRelativeToVelocity(const class AActor* Actor);
	static void MoveComponentsToward(struct FVector* InStart, const struct FVector& End, const float MaxDelta);
	static float MoveToward(const float Start, const float End, const float MaxDelta);
	static float MoveTowardAngle(float StartAngle, float EndAngle, const float MaxDelta);
	static void MoveTowardVector(struct FVector* InStart, const struct FVector& End, const float MaxDelta);
	static float WrapAngle(float Angle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StriderMath">();
	}
	static class UStriderMath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStriderMath>();
	}
};
static_assert(alignof(UStriderMath) == 0x000008, "Wrong alignment on UStriderMath");
static_assert(sizeof(UStriderMath) == 0x000028, "Wrong size on UStriderMath");

}
