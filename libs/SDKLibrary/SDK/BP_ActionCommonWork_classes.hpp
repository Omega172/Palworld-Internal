#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCommonWork

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionCommonWork.BP_ActionCommonWork_C
// 0x0020 (0x01A0 - 0x0180)
class UBP_ActionCommonWork_C final : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionCommonWork_C;              // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEventPlayerCrafting;                             // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayingID;                                         // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionCommonWork(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionCommonWork_C">();
	}
	static class UBP_ActionCommonWork_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionCommonWork_C>();
	}
};
static_assert(alignof(UBP_ActionCommonWork_C) == 0x000010, "Wrong alignment on UBP_ActionCommonWork_C");
static_assert(sizeof(UBP_ActionCommonWork_C) == 0x0001A0, "Wrong size on UBP_ActionCommonWork_C");
static_assert(offsetof(UBP_ActionCommonWork_C, UberGraphFrame_BP_ActionCommonWork_C) == 0x000180, "Member 'UBP_ActionCommonWork_C::UberGraphFrame_BP_ActionCommonWork_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommonWork_C, FlagName) == 0x000188, "Member 'UBP_ActionCommonWork_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommonWork_C, AkEventPlayerCrafting) == 0x000190, "Member 'UBP_ActionCommonWork_C::AkEventPlayerCrafting' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommonWork_C, PlayingID) == 0x000198, "Member 'UBP_ActionCommonWork_C::PlayingID' has a wrong offset!");

}

