#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Attack_Rotate

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BTTask_Attack_Rotate.BTTask_Attack_Rotate_C.getRotationData
// 0x00A8 (0x00A8 - 0x0000)
struct BTTask_Attack_Rotate_C_GetRotationData final
{
public:
	bool                                          RotatedTowardsTarget;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutsideLookAtCone;                                 // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShouldRotatePositiveDirection;                     // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotationBetweenActors_ReturnValue; // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_2;                      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_2;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_2;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93[0x1];                                       // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_3;                           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_Attack_Rotate_C_GetRotationData) == 0x000008, "Wrong alignment on BTTask_Attack_Rotate_C_GetRotationData");
static_assert(sizeof(BTTask_Attack_Rotate_C_GetRotationData) == 0x0000A8, "Wrong size on BTTask_Attack_Rotate_C_GetRotationData");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, RotatedTowardsTarget) == 0x000000, "Member 'BTTask_Attack_Rotate_C_GetRotationData::RotatedTowardsTarget' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, OutsideLookAtCone) == 0x000001, "Member 'BTTask_Attack_Rotate_C_GetRotationData::OutsideLookAtCone' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, ShouldRotatePositiveDirection) == 0x000002, "Member 'BTTask_Attack_Rotate_C_GetRotationData::ShouldRotatePositiveDirection' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, Temp_bool_Variable) == 0x000003, "Member 'BTTask_Attack_Rotate_C_GetRotationData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, Temp_bool_Variable_1) == 0x000004, "Member 'BTTask_Attack_Rotate_C_GetRotationData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, Temp_bool_Variable_2) == 0x000005, "Member 'BTTask_Attack_Rotate_C_GetRotationData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, Temp_bool_Variable_3) == 0x000006, "Member 'BTTask_Attack_Rotate_C_GetRotationData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000008, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000010, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Roll) == 0x000028, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Pitch) == 0x00002C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Yaw) == 0x000030, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000038, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000040, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_FindLookAtRotationBetweenActors_ReturnValue) == 0x00004C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_FindLookAtRotationBetweenActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_FindLookAtRotation_ReturnValue) == 0x000058, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Roll_1) == 0x000064, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Pitch_1) == 0x000068, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Yaw_1) == 0x00006C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Roll_2) == 0x000070, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Roll_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Pitch_2) == 0x000074, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Pitch_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BreakRotator_Yaw_2) == 0x000078, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BreakRotator_Yaw_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Add_FloatFloat_ReturnValue) == 0x00007C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, K2Node_Select_Default) == 0x000080, "Member 'BTTask_Attack_Rotate_C_GetRotationData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000084, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000088, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, K2Node_Select_Default_1) == 0x00008C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000090, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Less_FloatFloat_ReturnValue) == 0x000091, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000092, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000094, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, K2Node_Select_Default_2) == 0x000098, "Member 'BTTask_Attack_Rotate_C_GetRotationData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x00009C, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_Less_FloatFloat_ReturnValue_2) == 0x00009D, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_Less_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BooleanAND_ReturnValue) == 0x00009E, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, CallFunc_BooleanAND_ReturnValue_1) == 0x00009F, "Member 'BTTask_Attack_Rotate_C_GetRotationData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_GetRotationData, K2Node_Select_Default_3) == 0x0000A0, "Member 'BTTask_Attack_Rotate_C_GetRotationData::K2Node_Select_Default_3' has a wrong offset!");

// Function BTTask_Attack_Rotate.BTTask_Attack_Rotate_C.ReceiveTick
// 0x0010 (0x0010 - 0x0000)
struct BTTask_Attack_Rotate_C_ReceiveTick final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Attack_Rotate_C_ReceiveTick) == 0x000008, "Wrong alignment on BTTask_Attack_Rotate_C_ReceiveTick");
static_assert(sizeof(BTTask_Attack_Rotate_C_ReceiveTick) == 0x000010, "Wrong size on BTTask_Attack_Rotate_C_ReceiveTick");
static_assert(offsetof(BTTask_Attack_Rotate_C_ReceiveTick, OwnerActor) == 0x000000, "Member 'BTTask_Attack_Rotate_C_ReceiveTick::OwnerActor' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ReceiveTick, DeltaSeconds) == 0x000008, "Member 'BTTask_Attack_Rotate_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BTTask_Attack_Rotate.BTTask_Attack_Rotate_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_Attack_Rotate_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Attack_Rotate_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_Attack_Rotate_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_Attack_Rotate_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_Attack_Rotate_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_Attack_Rotate_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_Attack_Rotate_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_Attack_Rotate_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTTask_Attack_Rotate.BTTask_Attack_Rotate_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct BTTask_Attack_Rotate_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Attack_Rotate_C_ReceiveExecute) == 0x000008, "Wrong alignment on BTTask_Attack_Rotate_C_ReceiveExecute");
static_assert(sizeof(BTTask_Attack_Rotate_C_ReceiveExecute) == 0x000008, "Wrong size on BTTask_Attack_Rotate_C_ReceiveExecute");
static_assert(offsetof(BTTask_Attack_Rotate_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'BTTask_Attack_Rotate_C_ReceiveExecute::OwnerActor' has a wrong offset!");

// Function BTTask_Attack_Rotate.BTTask_Attack_Rotate_C.ExecuteUbergraph_BTTask_Attack_Rotate
// 0x0110 (0x0110 - 0x0000)
struct BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor_1;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimationTagComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingRequestResult                   CallFunc_MoveToLocation_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_getRotationData_rotatedTowardsTarget;     // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_getRotationData_outsideLookAtCone;        // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_getRotationData_shouldRotatePositiveDirection; // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorWorldRotation_SweepHitResult;  // 0x0088(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate) == 0x000008, "Wrong alignment on BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate");
static_assert(sizeof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate) == 0x000110, "Wrong size on BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, EntryPoint) == 0x000000, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Event_OwnerActor) == 0x000008, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, Temp_bool_Variable) == 0x000010, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Event_OwnerActor_1) == 0x000018, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Event_OwnerActor_1' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000028, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000030, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Event_OwnerController) == 0x000048, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Event_ControlledPawn) == 0x000050, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_BooleanOR_ReturnValue) == 0x000058, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000060, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_MoveToLocation_ReturnValue) == 0x000074, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_MoveToLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_getRotationData_rotatedTowardsTarget) == 0x000075, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_getRotationData_rotatedTowardsTarget' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_getRotationData_outsideLookAtCone) == 0x000076, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_getRotationData_outsideLookAtCone' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_getRotationData_shouldRotatePositiveDirection) == 0x000077, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_getRotationData_shouldRotatePositiveDirection' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, K2Node_Select_Default) == 0x000078, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_MakeRotator_ReturnValue) == 0x00007C, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate, CallFunc_K2_AddActorWorldRotation_SweepHitResult) == 0x000088, "Member 'BTTask_Attack_Rotate_C_ExecuteUbergraph_BTTask_Attack_Rotate::CallFunc_K2_AddActorWorldRotation_SweepHitResult' has a wrong offset!");

}
