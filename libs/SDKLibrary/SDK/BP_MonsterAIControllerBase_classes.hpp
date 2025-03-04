#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIControllerBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C
// 0x0028 (0x0550 - 0x0528)
class ABP_MonsterAIControllerBase_C : public APalAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AIADamageReaction_C*                BP_AIADamageReaction;                              // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DefaultActionClass;                                // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DefaultRootCompositeActionClass;                   // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayDefaultCompositeAction;                       // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSetupEnd;                                        // 0x0549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAutoPlayDefaultAction;                           // 0x054A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CreateBaseCampLogMessageText(struct FPalMonsterControllerBaseCampLogContent& Content, class FText* Result);
	void ExecuteUbergraph_BP_MonsterAIControllerBase(int32 EntryPoint);
	void PlayDefaultAction();
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveTick(float DeltaSeconds);
	void SetupBySpawner();
	void ShowBaseCampLog_Internal(struct FPalMonsterControllerBaseCampLogContent& Content);
	void To_Log_Tone_Type(EPalMonsterControllerBaseCampLogType LogType, EPalLogContentToneType* ToneType);
	void ToLogFontStyleName(EPalMonsterControllerBaseCampLogType LogType, class FName* StyleName);
	void _________0(class APalCharacter* InCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIControllerBase_C">();
	}
	static class ABP_MonsterAIControllerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIControllerBase_C>();
	}
};
static_assert(alignof(ABP_MonsterAIControllerBase_C) == 0x000008, "Wrong alignment on ABP_MonsterAIControllerBase_C");
static_assert(sizeof(ABP_MonsterAIControllerBase_C) == 0x000550, "Wrong size on ABP_MonsterAIControllerBase_C");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, UberGraphFrame) == 0x000528, "Member 'ABP_MonsterAIControllerBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, BP_AIADamageReaction) == 0x000530, "Member 'ABP_MonsterAIControllerBase_C::BP_AIADamageReaction' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, DefaultActionClass) == 0x000538, "Member 'ABP_MonsterAIControllerBase_C::DefaultActionClass' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, DefaultRootCompositeActionClass) == 0x000540, "Member 'ABP_MonsterAIControllerBase_C::DefaultRootCompositeActionClass' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, bPlayDefaultCompositeAction) == 0x000548, "Member 'ABP_MonsterAIControllerBase_C::bPlayDefaultCompositeAction' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, IsSetupEnd) == 0x000549, "Member 'ABP_MonsterAIControllerBase_C::IsSetupEnd' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIControllerBase_C, IsAutoPlayDefaultAction) == 0x00054A, "Member 'ABP_MonsterAIControllerBase_C::IsAutoPlayDefaultAction' has a wrong offset!");

}

