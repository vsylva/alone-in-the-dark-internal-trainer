#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFGTickOptimizer

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "BFGTickOptimizer_structs.hpp"
#include "BFGUITools_structs.hpp"


namespace SDK
{

// Class BFGTickOptimizer.BFGTickOptimizerSystem
// 0x01E0 (0x0210 - 0x0030)
class UBFGTickOptimizerSystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBFGTickOptimizerLODLevel>      M_LODLevels;                                       // 0x0038(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_48[0x80];                                      // 0x0048(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBFGDebugPanel                         M_DebugPanel;                                      // 0x00C8(0x0148)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static bool IsActorBucketTickingThisFrame(class AActor* _Actor);
	static void SetTickOptimizationRuntime_DetermineLODByDistance(class AActor* _Actor);
	static void SetTickOptimizationRuntime_ForcedLOD(class AActor* _Actor, int32 _NewLOD);
	static void SetTickOptimizationRuntime_HibernateState(class AActor* _Actor, bool _TickHibernateState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BFGTickOptimizerSystem">();
	}
	static class UBFGTickOptimizerSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFGTickOptimizerSystem>();
	}
};
static_assert(alignof(UBFGTickOptimizerSystem) == 0x000008, "Wrong alignment on UBFGTickOptimizerSystem");
static_assert(sizeof(UBFGTickOptimizerSystem) == 0x000210, "Wrong size on UBFGTickOptimizerSystem");
static_assert(offsetof(UBFGTickOptimizerSystem, M_LODLevels) == 0x000038, "Member 'UBFGTickOptimizerSystem::M_LODLevels' has a wrong offset!");
static_assert(offsetof(UBFGTickOptimizerSystem, M_DebugPanel) == 0x0000C8, "Member 'UBFGTickOptimizerSystem::M_DebugPanel' has a wrong offset!");

}
