#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCActionStepBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCActionStepBase.BP_NPCActionStepBase_C
// 0x0070 (0x01B0 - 0x0140)
class UBP_NPCActionStepBase_C : public UPalActionBase
{
public:
	uint8                                         Pad_3F81[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StepTime;                                          // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        StepType;                                          // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanEndStep;                                        // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F82[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanCrouchCancel;                                   // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F83[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CrouchCancelTime;                                  // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StepDistance;                                      // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Effect;                                            // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StepEndLocation;                                   // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayStepEffect;                                  // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckFrontHight(bool* CanThrough);
	void DisableMovement(bool Disable);
	void EndStep();
	void ExecuteUbergraph_BP_NPCActionStepBase(int32 EntryPoint);
	void GetStepEndLocation(struct FVector* Location);
	void OnBeginAction();
	void OnEndAction();
	void OnEndStepWhenCrouch();
	void StepMove();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCActionStepBase_C">();
	}
	static class UBP_NPCActionStepBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCActionStepBase_C>();
	}
};
static_assert(alignof(UBP_NPCActionStepBase_C) == 0x000010, "Wrong alignment on UBP_NPCActionStepBase_C");
static_assert(sizeof(UBP_NPCActionStepBase_C) == 0x0001B0, "Wrong size on UBP_NPCActionStepBase_C");
static_assert(offsetof(UBP_NPCActionStepBase_C, UberGraphFrame) == 0x000140, "Member 'UBP_NPCActionStepBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, FlagName) == 0x000148, "Member 'UBP_NPCActionStepBase_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, StepTime) == 0x000150, "Member 'UBP_NPCActionStepBase_C::StepTime' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, Timer) == 0x000158, "Member 'UBP_NPCActionStepBase_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, StepType) == 0x000160, "Member 'UBP_NPCActionStepBase_C::StepType' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, CanEndStep) == 0x000161, "Member 'UBP_NPCActionStepBase_C::CanEndStep' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, Montage) == 0x000168, "Member 'UBP_NPCActionStepBase_C::Montage' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, CanCrouchCancel) == 0x000170, "Member 'UBP_NPCActionStepBase_C::CanCrouchCancel' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, CrouchCancelTime) == 0x000178, "Member 'UBP_NPCActionStepBase_C::CrouchCancelTime' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, StepDistance) == 0x000180, "Member 'UBP_NPCActionStepBase_C::StepDistance' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, Effect) == 0x000188, "Member 'UBP_NPCActionStepBase_C::Effect' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, StepEndLocation) == 0x000190, "Member 'UBP_NPCActionStepBase_C::StepEndLocation' has a wrong offset!");
static_assert(offsetof(UBP_NPCActionStepBase_C, IsPlayStepEffect) == 0x0001A8, "Member 'UBP_NPCActionStepBase_C::IsPlayStepEffect' has a wrong offset!");

}

