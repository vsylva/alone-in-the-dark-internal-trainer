#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractLedgeComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass InteractLedgeComponent.InteractLedgeComponent_C
// 0x0040 (0x0250 - 0x0210)
class UInteractLedgeComponent_C final : public USceneComponent
{
public:
	uint8                                         Pad_208[0x8];                                      // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Transform1;                                        // 0x0218(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Transform2;                                        // 0x0224(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionFlowComponent*              InteractionComponent;                              // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSpriteComponent*                  SpriteComponent;                                   // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void Tick();
	void ActivateTick(class UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_InteractLedgeComponent(int32 EntryPoint);
	void DeactivateTick(class UActorComponent* Component);
	void SetInteractionComp(const class UInteractionFlowComponent* InteractionComponent_0, const struct FVector& Transform1_0, const struct FVector& Transform2_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractLedgeComponent_C">();
	}
	static class UInteractLedgeComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractLedgeComponent_C>();
	}
};
static_assert(alignof(UInteractLedgeComponent_C) == 0x000010, "Wrong alignment on UInteractLedgeComponent_C");
static_assert(sizeof(UInteractLedgeComponent_C) == 0x000250, "Wrong size on UInteractLedgeComponent_C");
static_assert(offsetof(UInteractLedgeComponent_C, UberGraphFrame) == 0x000210, "Member 'UInteractLedgeComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteractLedgeComponent_C, Transform1) == 0x000218, "Member 'UInteractLedgeComponent_C::Transform1' has a wrong offset!");
static_assert(offsetof(UInteractLedgeComponent_C, Transform2) == 0x000224, "Member 'UInteractLedgeComponent_C::Transform2' has a wrong offset!");
static_assert(offsetof(UInteractLedgeComponent_C, InteractionComponent) == 0x000230, "Member 'UInteractLedgeComponent_C::InteractionComponent' has a wrong offset!");
static_assert(offsetof(UInteractLedgeComponent_C, SpriteComponent) == 0x000238, "Member 'UInteractLedgeComponent_C::SpriteComponent' has a wrong offset!");
static_assert(offsetof(UInteractLedgeComponent_C, TimerHandle) == 0x000240, "Member 'UInteractLedgeComponent_C::TimerHandle' has a wrong offset!");

}
