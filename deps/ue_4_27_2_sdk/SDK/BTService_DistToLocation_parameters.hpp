#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_DistToLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTService_DistToLocation.BTService_DistToLocation_C.UpdateDistance
// 0x0030 (0x0030 - 0x0000)
struct BTService_DistToLocation_C_UpdateDistance final
{
public:
	class AActor*                                 Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance2D_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_DistToLocation_C_UpdateDistance) == 0x000008, "Wrong alignment on BTService_DistToLocation_C_UpdateDistance");
static_assert(sizeof(BTService_DistToLocation_C_UpdateDistance) == 0x000030, "Wrong size on BTService_DistToLocation_C_UpdateDistance");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, Pawn) == 0x000000, "Member 'BTService_DistToLocation_C_UpdateDistance::Pawn' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BTService_DistToLocation_C_UpdateDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'BTService_DistToLocation_C_UpdateDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000018, "Member 'BTService_DistToLocation_C_UpdateDistance::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, CallFunc_Vector_Distance2D_ReturnValue) == 0x000024, "Member 'BTService_DistToLocation_C_UpdateDistance::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_UpdateDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000028, "Member 'BTService_DistToLocation_C_UpdateDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");

// Function BTService_DistToLocation.BTService_DistToLocation_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTService_DistToLocation_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_DistToLocation_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTService_DistToLocation_C_ReceiveTickAI");
static_assert(sizeof(BTService_DistToLocation_C_ReceiveTickAI) == 0x000018, "Wrong size on BTService_DistToLocation_C_ReceiveTickAI");
static_assert(offsetof(BTService_DistToLocation_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTService_DistToLocation_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTService_DistToLocation_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTService_DistToLocation_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function BTService_DistToLocation.BTService_DistToLocation_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTService_DistToLocation_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_DistToLocation_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTService_DistToLocation_C_ReceiveActivationAI");
static_assert(sizeof(BTService_DistToLocation_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTService_DistToLocation_C_ReceiveActivationAI");
static_assert(offsetof(BTService_DistToLocation_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTService_DistToLocation_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTService_DistToLocation_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTService_DistToLocation.BTService_DistToLocation_C.ExecuteUbergraph_BTService_DistToLocation
// 0x0030 (0x0030 - 0x0000)
struct BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation) == 0x000008, "Wrong alignment on BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation");
static_assert(sizeof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation) == 0x000030, "Wrong size on BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, EntryPoint) == 0x000000, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, K2Node_Event_OwnerController_1) == 0x000018, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, K2Node_Event_ControlledPawn_1) == 0x000020, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BTService_DistToLocation_C_ExecuteUbergraph_BTService_DistToLocation::K2Node_Event_DeltaSeconds' has a wrong offset!");

}
