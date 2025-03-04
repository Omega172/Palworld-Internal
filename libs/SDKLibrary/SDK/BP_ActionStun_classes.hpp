#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionStun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionStun.BP_ActionStun_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionStun_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3C82[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionStun(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC(class FName NotifyName);
	void OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC(class FName NotifyName);
	void OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC(class FName NotifyName);
	void OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionStun_C">();
	}
	static class UBP_ActionStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionStun_C>();
	}
};
static_assert(alignof(UBP_ActionStun_C) == 0x000010, "Wrong alignment on UBP_ActionStun_C");
static_assert(sizeof(UBP_ActionStun_C) == 0x000150, "Wrong size on UBP_ActionStun_C");
static_assert(offsetof(UBP_ActionStun_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionStun_C::UberGraphFrame' has a wrong offset!");

}

