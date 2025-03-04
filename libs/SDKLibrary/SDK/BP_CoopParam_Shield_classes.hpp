#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoopParam_Shield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoopParam_Shield.BP_CoopParam_Shield_C
// 0x0120 (0x01C0 - 0x00A0)
class UBP_CoopParam_Shield_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          ProtectTarget;                                     // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttachSocketName;                                  // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_267D[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             StandAttachTransform;                              // 0x00C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           StandMontage;                                      // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_267E[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReadyAttachTransform;                              // 0x0130(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ReadyMontage;                                      // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AttachStartMontage;                                // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           DetachStartMontage;                                // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   ShieldCollisionComponentTag;                       // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGrabed;                                          // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindToShooterDelegate();
	void ChangeAnimationByWeaponState(bool IsAim, bool IsShoot);
	void ChangeFacial(bool IsCoopActionFace);
	void DelayEnableCollision();
	void DetachProcess();
	void DoAttach(class APalCharacter* AttachTarget);
	void DoAttach_ToAll(class APalCharacter* TargetPlayer);
	void DoDetach(bool IsThrowShield);
	void DoDetach_ToAll(bool IsThrow);
	void ExecuteUbergraph_BP_CoopParam_Shield(int32 EntryPoint);
	void LaunchSheep(double SpeedRate);
	void OnBlendOut_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnBlendOut_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnChangeWeaponState(bool IsAim, bool IsShooting);
	void OnCompleteCharacterInitialize(class APalCharacter* InCharacter);
	void OnCompleted_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnCompleted_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnInterrupted_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnInterrupted_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnNotifyBegin_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnNotifyBegin_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnNotifyEnd_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnNotifyEnd_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void PlayAttachStartAnimation();
	void PlayShieldAnimation();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetOwnerCollision(bool IsEnable);
	void StopShieldAnimation();
	void UnbindFromShooterDelegate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoopParam_Shield_C">();
	}
	static class UBP_CoopParam_Shield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CoopParam_Shield_C>();
	}
};
static_assert(alignof(UBP_CoopParam_Shield_C) == 0x000010, "Wrong alignment on UBP_CoopParam_Shield_C");
static_assert(sizeof(UBP_CoopParam_Shield_C) == 0x0001C0, "Wrong size on UBP_CoopParam_Shield_C");
static_assert(offsetof(UBP_CoopParam_Shield_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_CoopParam_Shield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, ProtectTarget) == 0x0000A8, "Member 'UBP_CoopParam_Shield_C::ProtectTarget' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, AttachSocketName) == 0x0000B0, "Member 'UBP_CoopParam_Shield_C::AttachSocketName' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, StandAttachTransform) == 0x0000C0, "Member 'UBP_CoopParam_Shield_C::StandAttachTransform' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, StandMontage) == 0x000120, "Member 'UBP_CoopParam_Shield_C::StandMontage' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, ReadyAttachTransform) == 0x000130, "Member 'UBP_CoopParam_Shield_C::ReadyAttachTransform' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, ReadyMontage) == 0x000190, "Member 'UBP_CoopParam_Shield_C::ReadyMontage' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, AttachStartMontage) == 0x000198, "Member 'UBP_CoopParam_Shield_C::AttachStartMontage' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, DetachStartMontage) == 0x0001A0, "Member 'UBP_CoopParam_Shield_C::DetachStartMontage' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, ShieldCollisionComponentTag) == 0x0001A8, "Member 'UBP_CoopParam_Shield_C::ShieldCollisionComponentTag' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Shield_C, IsGrabed) == 0x0001B0, "Member 'UBP_CoopParam_Shield_C::IsGrabed' has a wrong offset!");

}

