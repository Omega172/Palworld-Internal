#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionFriendlyLookat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionFriendlyLookat_C final : public UPalActionBase
{
public:
	uint8                                         Pad_43BF[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagra;                                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Offset;                                            // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeFace(bool Smile);
	void ExecuteUbergraph_BP_ActionFriendlyLookat(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFriendlyLookat_C">();
	}
	static class UBP_ActionFriendlyLookat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFriendlyLookat_C>();
	}
};
static_assert(alignof(UBP_ActionFriendlyLookat_C) == 0x000010, "Wrong alignment on UBP_ActionFriendlyLookat_C");
static_assert(sizeof(UBP_ActionFriendlyLookat_C) == 0x000160, "Wrong size on UBP_ActionFriendlyLookat_C");
static_assert(offsetof(UBP_ActionFriendlyLookat_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionFriendlyLookat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionFriendlyLookat_C, Niagra) == 0x000148, "Member 'UBP_ActionFriendlyLookat_C::Niagra' has a wrong offset!");
static_assert(offsetof(UBP_ActionFriendlyLookat_C, Offset) == 0x000150, "Member 'UBP_ActionFriendlyLookat_C::Offset' has a wrong offset!");

}

