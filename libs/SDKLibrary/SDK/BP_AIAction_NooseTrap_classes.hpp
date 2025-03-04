#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NooseTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NooseTrap.BP_AIAction_NooseTrap_C
// 0x0030 (0x0160 - 0x0130)
class UBP_AIAction_NooseTrap_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TrapActor;                                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DeadVelocity;                                      // 0x0140(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         PlayedAction;                                      // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NooseTrap(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NooseTrap_C">();
	}
	static class UBP_AIAction_NooseTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NooseTrap_C>();
	}
};
static_assert(alignof(UBP_AIAction_NooseTrap_C) == 0x000008, "Wrong alignment on UBP_AIAction_NooseTrap_C");
static_assert(sizeof(UBP_AIAction_NooseTrap_C) == 0x000160, "Wrong size on UBP_AIAction_NooseTrap_C");
static_assert(offsetof(UBP_AIAction_NooseTrap_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_NooseTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NooseTrap_C, TrapActor) == 0x000138, "Member 'UBP_AIAction_NooseTrap_C::TrapActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NooseTrap_C, DeadVelocity) == 0x000140, "Member 'UBP_AIAction_NooseTrap_C::DeadVelocity' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NooseTrap_C, PlayedAction) == 0x000158, "Member 'UBP_AIAction_NooseTrap_C::PlayedAction' has a wrong offset!");

}

