#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeleeWeapon

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MeleeWeapon.BP_MeleeWeapon_C.IsTwoHanded
// 0x0001 (0x0001 - 0x0000)
struct BP_MeleeWeapon_C_IsTwoHanded final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MeleeWeapon_C_IsTwoHanded) == 0x000001, "Wrong alignment on BP_MeleeWeapon_C_IsTwoHanded");
static_assert(sizeof(BP_MeleeWeapon_C_IsTwoHanded) == 0x000001, "Wrong size on BP_MeleeWeapon_C_IsTwoHanded");
static_assert(offsetof(BP_MeleeWeapon_C_IsTwoHanded, Value) == 0x000000, "Member 'BP_MeleeWeapon_C_IsTwoHanded::Value' has a wrong offset!");

// Function BP_MeleeWeapon.BP_MeleeWeapon_C.SetTickForMesh
// 0x0001 (0x0001 - 0x0000)
struct BP_MeleeWeapon_C_SetTickForMesh final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MeleeWeapon_C_SetTickForMesh) == 0x000001, "Wrong alignment on BP_MeleeWeapon_C_SetTickForMesh");
static_assert(sizeof(BP_MeleeWeapon_C_SetTickForMesh) == 0x000001, "Wrong size on BP_MeleeWeapon_C_SetTickForMesh");
static_assert(offsetof(BP_MeleeWeapon_C_SetTickForMesh, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MeleeWeapon_C_SetTickForMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MeleeWeapon.BP_MeleeWeapon_C.GetMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_MeleeWeapon_C_GetMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeleeWeapon_C_GetMesh) == 0x000008, "Wrong alignment on BP_MeleeWeapon_C_GetMesh");
static_assert(sizeof(BP_MeleeWeapon_C_GetMesh) == 0x000008, "Wrong size on BP_MeleeWeapon_C_GetMesh");
static_assert(offsetof(BP_MeleeWeapon_C_GetMesh, ReturnValue) == 0x000000, "Member 'BP_MeleeWeapon_C_GetMesh::ReturnValue' has a wrong offset!");

// Function BP_MeleeWeapon.BP_MeleeWeapon_C.ExecuteUbergraph_BP_MeleeWeapon
// 0x0004 (0x0004 - 0x0000)
struct BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon) == 0x000004, "Wrong alignment on BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon");
static_assert(sizeof(BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon) == 0x000004, "Wrong size on BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon");
static_assert(offsetof(BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon, EntryPoint) == 0x000000, "Member 'BP_MeleeWeapon_C_ExecuteUbergraph_BP_MeleeWeapon::EntryPoint' has a wrong offset!");

}

