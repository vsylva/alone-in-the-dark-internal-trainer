#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spline_Paths

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Spline_Paths.BP_Spline_Paths_C
// 0x00A0 (0x02D8 - 0x0238)
class ABP_Spline_Paths_C : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PathMesh;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PathMeshMaterialOverrider;                         // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	ESplineMeshAxis                               ForwardAxis;                                       // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UniformSections;                                   // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A[0x2];                                      // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SectionLength;                                     // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       UniformSpline;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Reduce_Sections;                                   // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visualize_Uniform_Spline;                          // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Cast_Shadow;                                       // 0x026D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E[0x2];                                      // 0x026E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           UniformSplineColor;                                // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_End_Meshes;                                    // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LockRotation;                                      // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x6];                                      // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            EndMesh;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   EndMeshComponent;                                  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Mesh_Scale;                                    // 0x0298(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Mesh_Rotation_Offset;                          // 0x02A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UniformSplineLastIndex;                            // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SeparateEndMeshes;                                 // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            EndMesh02;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Mesh_02_Scale;                                 // 0x02C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Mesh_02_Rotation_Offset;                       // 0x02CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void AddLastIndexMesh(class UStaticMesh* InputMesh, const struct FVector& Rotation, const struct FVector& Scale);
	void SetPathMeshMaterialOverride(class UPrimitiveComponent* PathMeshComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Spline_Paths_C">();
	}
	static class ABP_Spline_Paths_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Spline_Paths_C>();
	}
};
static_assert(alignof(ABP_Spline_Paths_C) == 0x000008, "Wrong alignment on ABP_Spline_Paths_C");
static_assert(sizeof(ABP_Spline_Paths_C) == 0x0002D8, "Wrong size on ABP_Spline_Paths_C");
static_assert(offsetof(ABP_Spline_Paths_C, Spline) == 0x000238, "Member 'ABP_Spline_Paths_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_Spline_Paths_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, PathMesh) == 0x000248, "Member 'ABP_Spline_Paths_C::PathMesh' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, PathMeshMaterialOverrider) == 0x000250, "Member 'ABP_Spline_Paths_C::PathMeshMaterialOverrider' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, ForwardAxis) == 0x000258, "Member 'ABP_Spline_Paths_C::ForwardAxis' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, UniformSections) == 0x000259, "Member 'ABP_Spline_Paths_C::UniformSections' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, SectionLength) == 0x00025C, "Member 'ABP_Spline_Paths_C::SectionLength' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, UniformSpline) == 0x000260, "Member 'ABP_Spline_Paths_C::UniformSpline' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, Reduce_Sections) == 0x000268, "Member 'ABP_Spline_Paths_C::Reduce_Sections' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, Visualize_Uniform_Spline) == 0x00026C, "Member 'ABP_Spline_Paths_C::Visualize_Uniform_Spline' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, Cast_Shadow) == 0x00026D, "Member 'ABP_Spline_Paths_C::Cast_Shadow' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, UniformSplineColor) == 0x000270, "Member 'ABP_Spline_Paths_C::UniformSplineColor' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, Add_End_Meshes) == 0x000280, "Member 'ABP_Spline_Paths_C::Add_End_Meshes' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, LockRotation) == 0x000281, "Member 'ABP_Spline_Paths_C::LockRotation' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, EndMesh) == 0x000288, "Member 'ABP_Spline_Paths_C::EndMesh' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, EndMeshComponent) == 0x000290, "Member 'ABP_Spline_Paths_C::EndMeshComponent' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, End_Mesh_Scale) == 0x000298, "Member 'ABP_Spline_Paths_C::End_Mesh_Scale' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, End_Mesh_Rotation_Offset) == 0x0002A4, "Member 'ABP_Spline_Paths_C::End_Mesh_Rotation_Offset' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, UniformSplineLastIndex) == 0x0002B0, "Member 'ABP_Spline_Paths_C::UniformSplineLastIndex' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, SeparateEndMeshes) == 0x0002B4, "Member 'ABP_Spline_Paths_C::SeparateEndMeshes' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, EndMesh02) == 0x0002B8, "Member 'ABP_Spline_Paths_C::EndMesh02' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, End_Mesh_02_Scale) == 0x0002C0, "Member 'ABP_Spline_Paths_C::End_Mesh_02_Scale' has a wrong offset!");
static_assert(offsetof(ABP_Spline_Paths_C, End_Mesh_02_Rotation_Offset) == 0x0002CC, "Member 'ABP_Spline_Paths_C::End_Mesh_02_Rotation_Offset' has a wrong offset!");

}
