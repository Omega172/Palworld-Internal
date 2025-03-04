#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_Opening_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LS_Opening_01.LS_Opening_01 (Director BP)_C
// 0x0010 (0x0048 - 0x0038)
class ULS_Opening_01__Director_BP__C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DemoOP_EyeTransition_C*            EyeWBP;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AnimFinished();
	void ExecuteUbergraph_LS_Opening_01__Director_BP_(int32 EntryPoint);
	void OnCreated();
	void OnStop();
	void PalFacial_Event_0(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
	void PalFacial_Event_1(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
	void PalFacial_Event_2(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
	void PalFacial_Event_3(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
	void PalFacial_Event_4(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
	void PalFacial_Event_5(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP_();
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__0(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__1(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__10(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__11(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__12(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__13(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__14(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__15(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__16(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__17(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__18(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__2(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__3(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__4(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__5(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__6(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__7(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__8(class UPalFacialComponent* PalFacial);
	void SequenceEvent__ENTRYPOINTLS_Opening_01__Director_BP__9(class UPalFacialComponent* PalFacial);
	void StartEyeTransition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LS_Opening_01 (Director BP)_C">();
	}
	static class ULS_Opening_01__Director_BP__C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULS_Opening_01__Director_BP__C>();
	}
};
static_assert(alignof(ULS_Opening_01__Director_BP__C) == 0x000008, "Wrong alignment on ULS_Opening_01__Director_BP__C");
static_assert(sizeof(ULS_Opening_01__Director_BP__C) == 0x000048, "Wrong size on ULS_Opening_01__Director_BP__C");
static_assert(offsetof(ULS_Opening_01__Director_BP__C, UberGraphFrame) == 0x000038, "Member 'ULS_Opening_01__Director_BP__C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULS_Opening_01__Director_BP__C, EyeWBP) == 0x000040, "Member 'ULS_Opening_01__Director_BP__C::EyeWBP' has a wrong offset!");

}

