#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_SendGameplayEvent

#include "Basic.hpp"


namespace SDK::Params
{

// Function AN_SendGameplayEvent.AN_SendGameplayEvent_C.Received_Notify
// 0x0020 (0x0020 - 0x0000)
struct AN_SendGameplayEvent_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_SendGameplayEvent_C_Received_Notify) == 0x000008, "Wrong alignment on AN_SendGameplayEvent_C_Received_Notify");
static_assert(sizeof(AN_SendGameplayEvent_C_Received_Notify) == 0x000020, "Wrong size on AN_SendGameplayEvent_C_Received_Notify");
static_assert(offsetof(AN_SendGameplayEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_SendGameplayEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_SendGameplayEvent_C_Received_Notify, Animation) == 0x000008, "Member 'AN_SendGameplayEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_SendGameplayEvent_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AN_SendGameplayEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SendGameplayEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AN_SendGameplayEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

}
