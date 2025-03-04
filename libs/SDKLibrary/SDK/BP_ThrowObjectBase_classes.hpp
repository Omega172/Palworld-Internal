#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowObjectBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThrowObjectBase.BP_ThrowObjectBase_C
// 0x0038 (0x03A0 - 0x0368)
class ABP_ThrowObjectBase_C : public APalBullet
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalSoundPlayerComponent_C*          SoundPlayer;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         BoundCount;                                        // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A9[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EnableGravityInterval;                             // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultGravityScale;                               // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ThrowEffect;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCachedGravityScale;                              // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CacheDefaultGravity();
	void ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint);
	class USceneComponent* GetAkOwnerComponent();
	void GetMaxBoundCount(int32* Count);
	void IncrementBoundCountAndCheckDestroy();
	void IsCountDestroy(bool* Param_IsDestroy);
	bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnEnableGravity();
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void Play_Throw_Sound();
	void PlaySound(const struct FPalDataTableRowName_SoundID& ID);
	void PlaySoundWithMaterial(const struct FPalDataTableRowName_SoundID& ID, EPhysicalSurface PhysicalMaterial);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowObjectBase_C">();
	}
	static class ABP_ThrowObjectBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowObjectBase_C>();
	}
};
static_assert(alignof(ABP_ThrowObjectBase_C) == 0x000008, "Wrong alignment on ABP_ThrowObjectBase_C");
static_assert(sizeof(ABP_ThrowObjectBase_C) == 0x0003A0, "Wrong size on ABP_ThrowObjectBase_C");
static_assert(offsetof(ABP_ThrowObjectBase_C, UberGraphFrame) == 0x000368, "Member 'ABP_ThrowObjectBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, SoundPlayer) == 0x000370, "Member 'ABP_ThrowObjectBase_C::SoundPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, BoundCount) == 0x000378, "Member 'ABP_ThrowObjectBase_C::BoundCount' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, EnableGravityInterval) == 0x000380, "Member 'ABP_ThrowObjectBase_C::EnableGravityInterval' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, DefaultGravityScale) == 0x000388, "Member 'ABP_ThrowObjectBase_C::DefaultGravityScale' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, ThrowEffect) == 0x000390, "Member 'ABP_ThrowObjectBase_C::ThrowEffect' has a wrong offset!");
static_assert(offsetof(ABP_ThrowObjectBase_C, IsCachedGravityScale) == 0x000398, "Member 'ABP_ThrowObjectBase_C::IsCachedGravityScale' has a wrong offset!");

}

