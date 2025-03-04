#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CapturePrismBullet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ThrowObjectBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CapturePrismBullet.BP_CapturePrismBullet_C
// 0x0038 (0x03D8 - 0x03A0)
class ABP_CapturePrismBullet_C final : public ABP_ThrowObjectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CapturePrismBullet_C;            // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CaptureTarget;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBound;                                           // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_507E[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ThrowRotator;                                      // 0x03C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void ExecuteUbergraph_BP_CapturePrismBullet(int32 EntryPoint);
	bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void SpawnCaptureObject(const struct FGuid& Guid, class AActor* Actor);
	void UpdateRotation(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CapturePrismBullet_C">();
	}
	static class ABP_CapturePrismBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CapturePrismBullet_C>();
	}
};
static_assert(alignof(ABP_CapturePrismBullet_C) == 0x000008, "Wrong alignment on ABP_CapturePrismBullet_C");
static_assert(sizeof(ABP_CapturePrismBullet_C) == 0x0003D8, "Wrong size on ABP_CapturePrismBullet_C");
static_assert(offsetof(ABP_CapturePrismBullet_C, UberGraphFrame_BP_CapturePrismBullet_C) == 0x0003A0, "Member 'ABP_CapturePrismBullet_C::UberGraphFrame_BP_CapturePrismBullet_C' has a wrong offset!");
static_assert(offsetof(ABP_CapturePrismBullet_C, StaticMesh) == 0x0003A8, "Member 'ABP_CapturePrismBullet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CapturePrismBullet_C, CaptureTarget) == 0x0003B0, "Member 'ABP_CapturePrismBullet_C::CaptureTarget' has a wrong offset!");
static_assert(offsetof(ABP_CapturePrismBullet_C, IsBound) == 0x0003B8, "Member 'ABP_CapturePrismBullet_C::IsBound' has a wrong offset!");
static_assert(offsetof(ABP_CapturePrismBullet_C, ThrowRotator) == 0x0003C0, "Member 'ABP_CapturePrismBullet_C::ThrowRotator' has a wrong offset!");

}

