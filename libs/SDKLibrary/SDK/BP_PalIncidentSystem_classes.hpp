#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentSystem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalIncidentSystem.BP_PalIncidentSystem_C
// 0x0010 (0x0200 - 0x01F0)
class UBP_PalIncidentSystem_C final : public UPalIncidentSystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PalIncidentSystem(int32 EntryPoint);
	void TalkCustomFunction_AttackToPlayer(class APalPlayerCharacter* TalkPlayer, class APalCharacter* TargetNPC, const class UDataTable* CunstomFuncParam);
	void TalkCustomFunction_VisitorPresentAndReturn(class APalPlayerCharacter* TalkPlayer, class APalCharacter* TargetNPC, const class UDataTable* CunstomFuncParam);

	void Lottery_Index_by_Weights(TArray<double>& Weights, int32* Param_Index) const;
	void LotteryItemAndNum(const class UDataTable* PresentLotteryDataTable, class FName* OutItemName, int32* OutNum) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentSystem_C">();
	}
	static class UBP_PalIncidentSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentSystem_C>();
	}
};
static_assert(alignof(UBP_PalIncidentSystem_C) == 0x000010, "Wrong alignment on UBP_PalIncidentSystem_C");
static_assert(sizeof(UBP_PalIncidentSystem_C) == 0x000200, "Wrong size on UBP_PalIncidentSystem_C");
static_assert(offsetof(UBP_PalIncidentSystem_C, UberGraphFrame) == 0x0001F0, "Member 'UBP_PalIncidentSystem_C::UberGraphFrame' has a wrong offset!");

}

