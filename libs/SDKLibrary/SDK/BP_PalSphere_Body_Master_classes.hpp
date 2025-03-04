#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalSphere_Body_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PalSphere_Body_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C
// 0x0008 (0x0488 - 0x0480)
class ABP_PalSphere_Body_Master_C final : public ABP_PalSphere_Body_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSphere_Body_Master_C;         // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_Body_Master_C">();
	}
	static class ABP_PalSphere_Body_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_Body_Master_C>();
	}
};
static_assert(alignof(ABP_PalSphere_Body_Master_C) == 0x000008, "Wrong alignment on ABP_PalSphere_Body_Master_C");
static_assert(sizeof(ABP_PalSphere_Body_Master_C) == 0x000488, "Wrong size on ABP_PalSphere_Body_Master_C");
static_assert(offsetof(ABP_PalSphere_Body_Master_C, UberGraphFrame_BP_PalSphere_Body_Master_C) == 0x000480, "Member 'ABP_PalSphere_Body_Master_C::UberGraphFrame_BP_PalSphere_Body_Master_C' has a wrong offset!");

}

