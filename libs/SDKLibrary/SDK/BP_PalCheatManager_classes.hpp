#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalCheatManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalCheatManager.BP_PalCheatManager_C
// 0x0010 (0x00D8 - 0x00C8)
class UBP_PalCheatManager_C final : public UPalCheatManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TempPlayer;                                        // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DebugItemWindow();
	void ExecuteUbergraph_BP_PalCheatManager(int32 EntryPoint);
	void HideTutorialQuest_BP();
	void OpenMultiBattleMapForBP();
	void OpenPrivateServerForBP();
	void SpectatorOnForBP();
	void StartWildPalCombat();
	void TimeStopForBP();
	void ToggleAllDebugInfo();
	void ToggleRevision_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCheatManager_C">();
	}
	static class UBP_PalCheatManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalCheatManager_C>();
	}
};
static_assert(alignof(UBP_PalCheatManager_C) == 0x000008, "Wrong alignment on UBP_PalCheatManager_C");
static_assert(sizeof(UBP_PalCheatManager_C) == 0x0000D8, "Wrong size on UBP_PalCheatManager_C");
static_assert(offsetof(UBP_PalCheatManager_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_PalCheatManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalCheatManager_C, TempPlayer) == 0x0000D0, "Member 'UBP_PalCheatManager_C::TempPlayer' has a wrong offset!");

}

