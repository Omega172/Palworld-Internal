#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InLevelLoadingFade

#include "Basic.hpp"

#include "WBP_PalFadeWidgetBase_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C
// 0x0030 (0x0440 - 0x0410)
class UWBP_InLevelLoadingFade_C final : public UWBP_PalFadeWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Crossplay;                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadingScreen_C*                   WBP_LoadingScreen;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_ProgressBar_C*               WBP_Title_ProgressBar;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ProgressDisplay;                                   // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_FadeIn();
	void AnmEvent_FadeOut();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InLevelLoadingFade(int32 EntryPoint);
	void FadeIn();
	void FadeOut();
	void Finished_50648C2D41952F044CFD8F9629D4027A();
	void Finished_BCA2D9DB46EBD8925174F885E2A96DAA();
	void Setup(class UPalHUDDispatchParameter_FadeWidget* Param_FadeParameter);
	void Setup_ForOverride();
	void UpdateProgressStep(int32 AddStep, int32 MaxStep);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InLevelLoadingFade_C">();
	}
	static class UWBP_InLevelLoadingFade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InLevelLoadingFade_C>();
	}
};
static_assert(alignof(UWBP_InLevelLoadingFade_C) == 0x000008, "Wrong alignment on UWBP_InLevelLoadingFade_C");
static_assert(sizeof(UWBP_InLevelLoadingFade_C) == 0x000440, "Wrong size on UWBP_InLevelLoadingFade_C");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, UberGraphFrame) == 0x000410, "Member 'UWBP_InLevelLoadingFade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, Fade) == 0x000418, "Member 'UWBP_InLevelLoadingFade_C::Fade' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, BP_PalTextBlock_Crossplay) == 0x000420, "Member 'UWBP_InLevelLoadingFade_C::BP_PalTextBlock_Crossplay' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, WBP_LoadingScreen) == 0x000428, "Member 'UWBP_InLevelLoadingFade_C::WBP_LoadingScreen' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, WBP_Title_ProgressBar) == 0x000430, "Member 'UWBP_InLevelLoadingFade_C::WBP_Title_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, Step) == 0x000438, "Member 'UWBP_InLevelLoadingFade_C::Step' has a wrong offset!");
static_assert(offsetof(UWBP_InLevelLoadingFade_C, ProgressDisplay) == 0x00043C, "Member 'UWBP_InLevelLoadingFade_C::ProgressDisplay' has a wrong offset!");

}

