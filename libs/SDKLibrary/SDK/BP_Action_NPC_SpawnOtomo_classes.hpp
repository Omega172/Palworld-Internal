#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_SpawnOtomo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_NPC_SpawnOtomo_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3FDD[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_NPC_SpawnOtomo(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnCompleted_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnInterrupted_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnNotifyBegin_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnNotifyEnd_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void RequestSpawnPal(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_NPC_SpawnOtomo_C">();
	}
	static class UBP_Action_NPC_SpawnOtomo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_NPC_SpawnOtomo_C>();
	}
};
static_assert(alignof(UBP_Action_NPC_SpawnOtomo_C) == 0x000010, "Wrong alignment on UBP_Action_NPC_SpawnOtomo_C");
static_assert(sizeof(UBP_Action_NPC_SpawnOtomo_C) == 0x000150, "Wrong size on UBP_Action_NPC_SpawnOtomo_C");
static_assert(offsetof(UBP_Action_NPC_SpawnOtomo_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_NPC_SpawnOtomo_C::UberGraphFrame' has a wrong offset!");

}

