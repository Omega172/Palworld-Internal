#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DemoOP_EyeTransition

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DemoOP_EyeTransition.WBP_DemoOP_EyeTransition_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_DemoOP_EyeTransition_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anim_Open;                                         // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Eye_top;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Eye_top_1;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DemoOP_EyeTransition_C">();
	}
	static class UWBP_DemoOP_EyeTransition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DemoOP_EyeTransition_C>();
	}
};
static_assert(alignof(UWBP_DemoOP_EyeTransition_C) == 0x000008, "Wrong alignment on UWBP_DemoOP_EyeTransition_C");
static_assert(sizeof(UWBP_DemoOP_EyeTransition_C) == 0x000290, "Wrong size on UWBP_DemoOP_EyeTransition_C");
static_assert(offsetof(UWBP_DemoOP_EyeTransition_C, Anim_Open) == 0x000278, "Member 'UWBP_DemoOP_EyeTransition_C::Anim_Open' has a wrong offset!");
static_assert(offsetof(UWBP_DemoOP_EyeTransition_C, Image_Eye_top) == 0x000280, "Member 'UWBP_DemoOP_EyeTransition_C::Image_Eye_top' has a wrong offset!");
static_assert(offsetof(UWBP_DemoOP_EyeTransition_C, Image_Eye_top_1) == 0x000288, "Member 'UWBP_DemoOP_EyeTransition_C::Image_Eye_top_1' has a wrong offset!");

}

