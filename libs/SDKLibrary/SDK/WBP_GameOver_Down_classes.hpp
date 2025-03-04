#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameOver_Down

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameOver_Down.WBP_GameOver_Down_C
// 0x0090 (0x04C0 - 0x0430)
class UWBP_GameOver_Down_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_CountDown;                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_CountDown;                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RoundProgress;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_Interact_C*                 WBP_Ingame_Interact;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CurrentInRescue;                                   // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F88[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     UIInputAction;                                     // 0x0464(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   Trigger_Action_Handle;                             // 0x046C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   End_Trigger_Actionhandle;                          // 0x0470(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_4F89[0x4];                                     // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LongPushTime;                                      // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PressingGiveup;                                    // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F8A[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentPressedTime;                                // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGiveup;                                          // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCreateRescueWidget;                              // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    GiveupMsgId;                                       // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void CloseWidget();
	void Construct();
	void CustomEvent();
	void Destruct();
	void EndTriggerInteract();
	void ExecuteUbergraph_WBP_GameOver_Down(int32 EntryPoint);
	void OnCreateRescueWidget__DelegateSignature(class UWBP_GameOver_Rescue_C* Widget);
	void OnGiveup__DelegateSignature();
	void OnSetup();
	void RegisterAction(bool IsInputConsume);
	void SetInRescue(bool InRescue);
	void Setup();
	void StartTriggerInteract();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Unregister_Action();
	void UpdateDying(double Remain, double Max);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameOver_Down_C">();
	}
	static class UWBP_GameOver_Down_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameOver_Down_C>();
	}
};
static_assert(alignof(UWBP_GameOver_Down_C) == 0x000008, "Wrong alignment on UWBP_GameOver_Down_C");
static_assert(sizeof(UWBP_GameOver_Down_C) == 0x0004C0, "Wrong size on UWBP_GameOver_Down_C");
static_assert(offsetof(UWBP_GameOver_Down_C, UberGraphFrame) == 0x000430, "Member 'UWBP_GameOver_Down_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, BP_PalTextBlock_CountDown) == 0x000438, "Member 'UWBP_GameOver_Down_C::BP_PalTextBlock_CountDown' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, CanvasPanel_CountDown) == 0x000440, "Member 'UWBP_GameOver_Down_C::CanvasPanel_CountDown' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, RoundProgress) == 0x000448, "Member 'UWBP_GameOver_Down_C::RoundProgress' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, WBP_Ingame_Interact) == 0x000450, "Member 'UWBP_GameOver_Down_C::WBP_Ingame_Interact' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, WBP_PalCommonButton) == 0x000458, "Member 'UWBP_GameOver_Down_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, CurrentInRescue) == 0x000460, "Member 'UWBP_GameOver_Down_C::CurrentInRescue' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, UIInputAction) == 0x000464, "Member 'UWBP_GameOver_Down_C::UIInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, Trigger_Action_Handle) == 0x00046C, "Member 'UWBP_GameOver_Down_C::Trigger_Action_Handle' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, End_Trigger_Actionhandle) == 0x000470, "Member 'UWBP_GameOver_Down_C::End_Trigger_Actionhandle' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, LongPushTime) == 0x000478, "Member 'UWBP_GameOver_Down_C::LongPushTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, PressingGiveup) == 0x000480, "Member 'UWBP_GameOver_Down_C::PressingGiveup' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, CurrentPressedTime) == 0x000488, "Member 'UWBP_GameOver_Down_C::CurrentPressedTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, OnGiveup) == 0x000490, "Member 'UWBP_GameOver_Down_C::OnGiveup' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, OnCreateRescueWidget) == 0x0004A0, "Member 'UWBP_GameOver_Down_C::OnCreateRescueWidget' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Down_C, GiveupMsgId) == 0x0004B0, "Member 'UWBP_GameOver_Down_C::GiveupMsgId' has a wrong offset!");

}

