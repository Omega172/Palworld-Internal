#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lamp.BP_Lamp_C
// 0x0068 (0x02F8 - 0x0290)
class ABP_Lamp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTimerPointLightComponent_C*      BP_PalTimerPointLightComponent;                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lantern_Flames;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_lamp_01;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLightEnable;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C49[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APPSkyCreator>           SkyCreatorCache;                                   // 0x02C8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void CheckLightEnable();
	void ExecuteUbergraph_BP_Lamp(int32 EntryPoint);
	void OnChangeCrouchDelegate______0(class UPalCharacterMovementComponent* Component, bool IsInCrouch);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetLightEnable(bool IsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lamp_C">();
	}
	static class ABP_Lamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lamp_C>();
	}
};
static_assert(alignof(ABP_Lamp_C) == 0x000008, "Wrong alignment on ABP_Lamp_C");
static_assert(sizeof(ABP_Lamp_C) == 0x0002F8, "Wrong size on ABP_Lamp_C");
static_assert(offsetof(ABP_Lamp_C, UberGraphFrame) == 0x000290, "Member 'ABP_Lamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, BP_PalTimerPointLightComponent) == 0x000298, "Member 'ABP_Lamp_C::BP_PalTimerPointLightComponent' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, SM_Lantern_Flames) == 0x0002A0, "Member 'ABP_Lamp_C::SM_Lantern_Flames' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, SM_lamp_01) == 0x0002A8, "Member 'ABP_Lamp_C::SM_lamp_01' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_Lamp_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, IsLightEnable) == 0x0002B8, "Member 'ABP_Lamp_C::IsLightEnable' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, TimerHandle) == 0x0002C0, "Member 'ABP_Lamp_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_Lamp_C, SkyCreatorCache) == 0x0002C8, "Member 'ABP_Lamp_C::SkyCreatorCache' has a wrong offset!");

}

