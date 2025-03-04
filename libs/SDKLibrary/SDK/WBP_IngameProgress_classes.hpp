#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameProgress.WBP_IngameProgress_C
// 0x00F0 (0x04F8 - 0x0408)
class UWBP_IngameProgress_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Assinged;                                      // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NonWorker;                                     // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Finish;                                        // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Hour;               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Hour_1;             // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Minute;             // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Minute_1;           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Second;             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_RemainTime_Second_1;           // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_sp2;                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_64;                              // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_95;                              // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_1150;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BuilddingCanvas;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RemainTime;                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NonWorkerCanvas;                                   // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress_Finish;                                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Progress;                              // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                WBP_PalCraftInfo_Pal_01;                           // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                WBP_PalCraftInfo_Pal_02;                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                WBP_PalCraftInfo_Pal_03;                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                WBP_PalCraftInfo_Pal_04;                           // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                WBP_PalCraftInfo_Pal_05;                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WorkerPalCanvas;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_PalCraftInfo_Pal_C*>        WorkerPalInfoWidgets;                              // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         LastNum;                                           // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasWorker;                                         // 0x04F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_DisplayWorker();
	void AnmEvent_NonWorker();
	void Change_Non_Worker_Mode(bool IsNonWorker);
	void ExecuteUbergraph_WBP_IngameProgress(int32 EntryPoint);
	void OnInitialized();
	void Set_Second(int32 RemainingSecond);
	void Set_Visible_Number(ESlateVisibility NewVisibility);
	void Set_Work_Amount(double WorkAmount);
	void SetWorkerPal(TArray<class UPalIndividualCharacterSlot*>& Slots);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameProgress_C">();
	}
	static class UWBP_IngameProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameProgress_C>();
	}
};
static_assert(alignof(UWBP_IngameProgress_C) == 0x000008, "Wrong alignment on UWBP_IngameProgress_C");
static_assert(sizeof(UWBP_IngameProgress_C) == 0x0004F8, "Wrong size on UWBP_IngameProgress_C");
static_assert(offsetof(UWBP_IngameProgress_C, UberGraphFrame) == 0x000408, "Member 'UWBP_IngameProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Anm_Assinged) == 0x000410, "Member 'UWBP_IngameProgress_C::Anm_Assinged' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Anm_NonWorker) == 0x000418, "Member 'UWBP_IngameProgress_C::Anm_NonWorker' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Anm_Finish) == 0x000420, "Member 'UWBP_IngameProgress_C::Anm_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Anm_Close) == 0x000428, "Member 'UWBP_IngameProgress_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Anm_Open) == 0x000430, "Member 'UWBP_IngameProgress_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Hour) == 0x000438, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Hour' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Hour_1) == 0x000440, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Hour_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Minute) == 0x000448, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Minute' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Minute_1) == 0x000450, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Minute_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Second) == 0x000458, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Second' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_RemainTime_Second_1) == 0x000460, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_RemainTime_Second_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalRichTextBlock_sp2) == 0x000468, "Member 'UWBP_IngameProgress_C::BP_PalRichTextBlock_sp2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalTextBlock_C_64) == 0x000470, "Member 'UWBP_IngameProgress_C::BP_PalTextBlock_C_64' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalTextBlock_C_95) == 0x000478, "Member 'UWBP_IngameProgress_C::BP_PalTextBlock_C_95' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BP_PalTextBlock_C_1150) == 0x000480, "Member 'UWBP_IngameProgress_C::BP_PalTextBlock_C_1150' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, BuilddingCanvas) == 0x000488, "Member 'UWBP_IngameProgress_C::BuilddingCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, HorizontalBox_RemainTime) == 0x000490, "Member 'UWBP_IngameProgress_C::HorizontalBox_RemainTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, NonWorkerCanvas) == 0x000498, "Member 'UWBP_IngameProgress_C::NonWorkerCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, Progress_Finish) == 0x0004A0, "Member 'UWBP_IngameProgress_C::Progress_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, ProgressBar_Progress) == 0x0004A8, "Member 'UWBP_IngameProgress_C::ProgressBar_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WBP_PalCraftInfo_Pal_01) == 0x0004B0, "Member 'UWBP_IngameProgress_C::WBP_PalCraftInfo_Pal_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WBP_PalCraftInfo_Pal_02) == 0x0004B8, "Member 'UWBP_IngameProgress_C::WBP_PalCraftInfo_Pal_02' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WBP_PalCraftInfo_Pal_03) == 0x0004C0, "Member 'UWBP_IngameProgress_C::WBP_PalCraftInfo_Pal_03' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WBP_PalCraftInfo_Pal_04) == 0x0004C8, "Member 'UWBP_IngameProgress_C::WBP_PalCraftInfo_Pal_04' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WBP_PalCraftInfo_Pal_05) == 0x0004D0, "Member 'UWBP_IngameProgress_C::WBP_PalCraftInfo_Pal_05' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WorkerPalCanvas) == 0x0004D8, "Member 'UWBP_IngameProgress_C::WorkerPalCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, WorkerPalInfoWidgets) == 0x0004E0, "Member 'UWBP_IngameProgress_C::WorkerPalInfoWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, LastNum) == 0x0004F0, "Member 'UWBP_IngameProgress_C::LastNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameProgress_C, HasWorker) == 0x0004F4, "Member 'UWBP_IngameProgress_C::HasWorker' has a wrong offset!");

}

