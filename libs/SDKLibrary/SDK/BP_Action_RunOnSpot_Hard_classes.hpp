#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_RunOnSpot_Hard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Action_RunOnSpot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_RunOnSpot_Hard.BP_Action_RunOnSpot_Hard_C
// 0x0000 (0x0150 - 0x0150)
class UBP_Action_RunOnSpot_Hard_C final : public UBP_Action_RunOnSpot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_RunOnSpot_Hard_C;         // 0x0148(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_RunOnSpot_Hard(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_RunOnSpot_Hard_C">();
	}
	static class UBP_Action_RunOnSpot_Hard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_RunOnSpot_Hard_C>();
	}
};
static_assert(alignof(UBP_Action_RunOnSpot_Hard_C) == 0x000010, "Wrong alignment on UBP_Action_RunOnSpot_Hard_C");
static_assert(sizeof(UBP_Action_RunOnSpot_Hard_C) == 0x000150, "Wrong size on UBP_Action_RunOnSpot_Hard_C");
static_assert(offsetof(UBP_Action_RunOnSpot_Hard_C, UberGraphFrame_BP_Action_RunOnSpot_Hard_C) == 0x000148, "Member 'UBP_Action_RunOnSpot_Hard_C::UberGraphFrame_BP_Action_RunOnSpot_Hard_C' has a wrong offset!");

}

