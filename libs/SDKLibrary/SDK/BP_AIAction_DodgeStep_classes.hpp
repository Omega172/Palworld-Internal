#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_DodgeStep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C
// 0x0008 (0x0138 - 0x0130)
class UBP_AIAction_DodgeStep_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionStart(class APawn* ControlledPawn);
	void CanStep(class UPalActionComponent* ActionComponent, bool* Param_CanStep);
	void ExecuteUbergraph_BP_AIAction_DodgeStep(int32 EntryPoint);
	void GetStepTime(class UPalActionBase* ActionComp, double* StepTime);
	void GetStepType(EPalActionType* NewParam);
	void RotateToAttacker(class AActor* Defender, class AActor* Attacker);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_DodgeStep_C">();
	}
	static class UBP_AIAction_DodgeStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_DodgeStep_C>();
	}
};
static_assert(alignof(UBP_AIAction_DodgeStep_C) == 0x000008, "Wrong alignment on UBP_AIAction_DodgeStep_C");
static_assert(sizeof(UBP_AIAction_DodgeStep_C) == 0x000138, "Wrong size on UBP_AIAction_DodgeStep_C");
static_assert(offsetof(UBP_AIAction_DodgeStep_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_DodgeStep_C::UberGraphFrame' has a wrong offset!");

}

