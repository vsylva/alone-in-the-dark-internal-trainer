#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_Placeholder_Blend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LSD_Placeholder_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LS_Placeholder_Blend.SequenceDirector_C
// 0x0008 (0x0080 - 0x0078)
class LS_Placeholder_Blend::USequenceDirector_C final : public ULSD_Placeholder_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SequenceDirector_C;                 // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineCameraActor* CineCameraActor13);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ACineCameraActor* CineCameraActor13);
	void CineCameraActor13_Event_0(class ACineCameraActor* CineCameraActor13);
	void CineCameraActor13_Event_1(class ACineCameraActor* CineCameraActor13);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass LS_Placeholder_Blend.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class LS_Placeholder_Blend::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<LS_Placeholder_Blend::USequenceDirector_C>();
	}
};
static_assert(alignof(LS_Placeholder_Blend::USequenceDirector_C) == 0x000008, "Wrong alignment on LS_Placeholder_Blend::USequenceDirector_C");
static_assert(sizeof(LS_Placeholder_Blend::USequenceDirector_C) == 0x000080, "Wrong size on LS_Placeholder_Blend::USequenceDirector_C");
static_assert(offsetof(LS_Placeholder_Blend::USequenceDirector_C, UberGraphFrame_SequenceDirector_C) == 0x000078, "Member 'LS_Placeholder_Blend::USequenceDirector_C::UberGraphFrame_SequenceDirector_C' has a wrong offset!");

}
