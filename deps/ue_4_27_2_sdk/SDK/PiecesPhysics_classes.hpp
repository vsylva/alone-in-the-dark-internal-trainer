#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesPhysics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class PiecesPhysics.BPAsyncAction_LineTraceByChannel
// 0x00A8 (0x00D8 - 0x0030)
class UBPAsyncAction_LineTraceByChannel final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnCompleted;                                       // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailed;                                          // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x88];                                      // 0x0050(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UBPAsyncAction_LineTraceByChannel* LineTraceByChannelAsync(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, bool bIgnoreSelf, EDrawDebugTrace DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);

	void OnLineTraceByChannelFinished__DelegateSignature(bool bAnyHit, const struct FHitResult& HitResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BPAsyncAction_LineTraceByChannel">();
	}
	static class UBPAsyncAction_LineTraceByChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPAsyncAction_LineTraceByChannel>();
	}
};
static_assert(alignof(UBPAsyncAction_LineTraceByChannel) == 0x000008, "Wrong alignment on UBPAsyncAction_LineTraceByChannel");
static_assert(sizeof(UBPAsyncAction_LineTraceByChannel) == 0x0000D8, "Wrong size on UBPAsyncAction_LineTraceByChannel");
static_assert(offsetof(UBPAsyncAction_LineTraceByChannel, OnCompleted) == 0x000030, "Member 'UBPAsyncAction_LineTraceByChannel::OnCompleted' has a wrong offset!");
static_assert(offsetof(UBPAsyncAction_LineTraceByChannel, OnFailed) == 0x000040, "Member 'UBPAsyncAction_LineTraceByChannel::OnFailed' has a wrong offset!");

}
