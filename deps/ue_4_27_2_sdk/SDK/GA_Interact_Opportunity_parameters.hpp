#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interact_Opportunity

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Interact_Opportunity.GA_Interact_Opportunity_C.ExecuteUbergraph_GA_Interact_Opportunity
// 0x0020 (0x0020 - 0x0000)
struct GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponAnimationComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity) == 0x000008, "Wrong alignment on GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity");
static_assert(sizeof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity) == 0x000020, "Wrong size on GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity");
static_assert(offsetof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity, EntryPoint) == 0x000000, "Member 'GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GA_Interact_Opportunity_C_ExecuteUbergraph_GA_Interact_Opportunity::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
