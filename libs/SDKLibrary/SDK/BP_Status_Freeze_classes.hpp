#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Freeze

#include "Basic.hpp"

#include "BP_Status_WithVisualEffect_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_Freeze.BP_Status_Freeze_C
// 0x0028 (0x0088 - 0x0060)
class UBP_Status_Freeze_C final : public UBP_Status_WithVisualEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Status_Freeze_C;                 // 0x0060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAIActionBase*                       AIActionFreeze;                                    // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_Freeze(int32 EntryPoint);
	void OnBeginStatus();
	void OnEndStatus();
	void SetFlag(bool IsFreeze);
	void TickStatus(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_Freeze_C">();
	}
	static class UBP_Status_Freeze_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_Freeze_C>();
	}
};
static_assert(alignof(UBP_Status_Freeze_C) == 0x000008, "Wrong alignment on UBP_Status_Freeze_C");
static_assert(sizeof(UBP_Status_Freeze_C) == 0x000088, "Wrong size on UBP_Status_Freeze_C");
static_assert(offsetof(UBP_Status_Freeze_C, UberGraphFrame_BP_Status_Freeze_C) == 0x000060, "Member 'UBP_Status_Freeze_C::UberGraphFrame_BP_Status_Freeze_C' has a wrong offset!");
static_assert(offsetof(UBP_Status_Freeze_C, AIActionFreeze) == 0x000068, "Member 'UBP_Status_Freeze_C::AIActionFreeze' has a wrong offset!");
static_assert(offsetof(UBP_Status_Freeze_C, StartLocation) == 0x000070, "Member 'UBP_Status_Freeze_C::StartLocation' has a wrong offset!");

}

