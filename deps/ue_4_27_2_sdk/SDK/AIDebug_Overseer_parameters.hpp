#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIDebug_Overseer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIDebug_Overseer.AIDebug_Overseer_C.ExecuteUbergraph_AIDebug_Overseer
// 0x0048 (0x0048 - 0x0000)
struct AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_EnemyCommon_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	class ABP_EnemyCommon_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer) == 0x000008, "Wrong alignment on AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer");
static_assert(sizeof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer) == 0x000048, "Wrong size on AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, EntryPoint) == 0x000000, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_Array_Get_Item) == 0x000038, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'AIDebug_Overseer_C_ExecuteUbergraph_AIDebug_Overseer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function AIDebug_Overseer.AIDebug_Overseer_C.timerTick
// 0x0088 (0x0088 - 0x0000)
struct AIDebug_Overseer_C_TimerTick final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class UWBP_AIDebug_C*                         CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_EnemyCommon_C*>              CallFunc_GetAllActorsOfClassWithinRange_OutActors; // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EnemyCommon_C*                      CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetComponent*                       CallFunc_AddComponentByClass_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIDebug_Overseer_C_TimerTick) == 0x000008, "Wrong alignment on AIDebug_Overseer_C_TimerTick");
static_assert(sizeof(AIDebug_Overseer_C_TimerTick) == 0x000088, "Wrong size on AIDebug_Overseer_C_TimerTick");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AIDebug_Overseer_C_TimerTick::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AIDebug_Overseer_C_TimerTick::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, K2Node_MakeArray_Array) == 0x000010, "Member 'AIDebug_Overseer_C_TimerTick::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Create_ReturnValue) == 0x000020, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000028, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_GetAllActorsOfClassWithinRange_OutActors) == 0x000040, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_GetAllActorsOfClassWithinRange_OutActors' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Array_Get_Item) == 0x000058, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_AddComponentByClass_ReturnValue) == 0x000068, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_GetComponentsByTag_ReturnValue) == 0x000070, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIDebug_Overseer_C_TimerTick, CallFunc_Greater_IntInt_ReturnValue) == 0x000084, "Member 'AIDebug_Overseer_C_TimerTick::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}
