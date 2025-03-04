#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCutPalMeat_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionCutPalMeat_Player.BP_ActionCutPalMeat_Player_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionCutPalMeat_Player_C final : public UPalActionBase
{
public:
	uint8                                         Pad_4D60[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          TargetCharacter;                                   // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDeletePal;                                       // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangePalFacial(EPalFacialEyeType Eye);
	void ExecuteUbergraph_BP_ActionCutPalMeat_Player(int32 EntryPoint);
	void FixCutTarget();
	void IsValidTarget(bool* IsValid);
	void OnBeginAction();
	void OnBlendOut_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnCompleted_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnNotifyBegin_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnNotifyEnd_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void PlayDamageMotion();
	void SetDisableFlag(bool Disable);
	void TickAction(float DeltaTime);
	void Use_Meat_Cut_Knife(bool* UseKnife);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionCutPalMeat_Player_C">();
	}
	static class UBP_ActionCutPalMeat_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionCutPalMeat_Player_C>();
	}
};
static_assert(alignof(UBP_ActionCutPalMeat_Player_C) == 0x000010, "Wrong alignment on UBP_ActionCutPalMeat_Player_C");
static_assert(sizeof(UBP_ActionCutPalMeat_Player_C) == 0x000160, "Wrong size on UBP_ActionCutPalMeat_Player_C");
static_assert(offsetof(UBP_ActionCutPalMeat_Player_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionCutPalMeat_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionCutPalMeat_Player_C, TargetCharacter) == 0x000148, "Member 'UBP_ActionCutPalMeat_Player_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UBP_ActionCutPalMeat_Player_C, IsDeletePal) == 0x000150, "Member 'UBP_ActionCutPalMeat_Player_C::IsDeletePal' has a wrong offset!");

}

