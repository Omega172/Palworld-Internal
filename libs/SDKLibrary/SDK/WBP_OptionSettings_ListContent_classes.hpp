#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C
// 0x0108 (0x0510 - 0x0408)
class UWBP_OptionSettings_ListContent_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Focus;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Name;                              // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              Button;                                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ClickableButton_C*  WBP_OptionSettings_ClickableButton;                // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentButton_C* WBP_OptionSettings_ListContentButton;              // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentLR_C*    WBP_OptionSettings_ListContentLR;                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider;              // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch;              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SettingNameMsgId;                                  // 0x0468(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TArray<class FString>                         ScreenSelections;                                  // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Current;                                           // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   BackAction;                                        // 0x048C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   LeftPressed;                                       // 0x0490(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   LeftReleased;                                      // 0x0494(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   RightPressed;                                      // 0x0498(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   RightReleased;                                     // 0x049C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   BackActionName;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LeftActionName;                                    // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightActionName;                                   // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Editing;                                           // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E6[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SubtractTimer;                                     // 0x04C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AddTimer;                                          // 0x04C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OriginalColor;                                     // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChangePercent;                                     // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockMouseClick;                                   // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E7[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnKeyConfigClicked;                                // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ActionKeyName;                                     // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Input_Type;                                        // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigAxisFilterType                   Filter_Type;                                       // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ________();
	void SubtractValue();
	void SetUIConfigButton(class FName UIActionName, ECommonInputType InputType, const struct FKey& Key);
	void SetSwitcher(const bool CurrentOn);
	void SetSlider(double CurrentValue, double Min, double Max, double FixedChangeValue, bool UseFixedValue);
	void SetSelecter_String(const TArray<class FString>& Selections, const int32 Param_Current);
	void SetSelecter(const TArray<struct FDataTableRowHandle>& Selections, const int32 Param_Current);
	void SetResolution(const struct FIntPoint& CurrentResolution, const TArray<struct FIntPoint>& Resolutions);
	void SetMsgId(const struct FDataTableRowHandle& RowHandle);
	void SetKeyWarning(bool EnableWarning);
	void SetKeyIcon(const struct FKey& Key, ECommonInputType InputType);
	void SetInteractable(bool CanInteract);
	void SetConfigButton(class FName ActionName, ECommonInputType InputType, EPalKeyConfigAxisFilterType FilterType);
	void SetClickableButton();
	void OnKeyConfigClicked__DelegateSignature(class FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
	void InputMethodChanged(ECommonInputType InputType);
	void Gamepad_RightRelease();
	void Gamepad_RightPress();
	void Gamepad_LeftRelease();
	void Gamepad_LeftPress();
	void ExecuteUbergraph_WBP_OptionSettings_ListContent(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Param_Button);
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Param_Button);
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Param_Button);
	void BackToList();
	void AddValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettings_ListContent_C">();
	}
	static class UWBP_OptionSettings_ListContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettings_ListContent_C>();
	}
};
static_assert(alignof(UWBP_OptionSettings_ListContent_C) == 0x000008, "Wrong alignment on UWBP_OptionSettings_ListContent_C");
static_assert(sizeof(UWBP_OptionSettings_ListContent_C) == 0x000510, "Wrong size on UWBP_OptionSettings_ListContent_C");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, UberGraphFrame) == 0x000408, "Member 'UWBP_OptionSettings_ListContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Anm_NormalToFocus) == 0x000410, "Member 'UWBP_OptionSettings_ListContent_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Base) == 0x000418, "Member 'UWBP_OptionSettings_ListContent_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Base_Focus) == 0x000420, "Member 'UWBP_OptionSettings_ListContent_C::Base_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, BP_PalTextBlock_Name) == 0x000428, "Member 'UWBP_OptionSettings_ListContent_C::BP_PalTextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Button) == 0x000430, "Member 'UWBP_OptionSettings_ListContent_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, CanvasPanel_0) == 0x000438, "Member 'UWBP_OptionSettings_ListContent_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, WBP_OptionSettings_ClickableButton) == 0x000440, "Member 'UWBP_OptionSettings_ListContent_C::WBP_OptionSettings_ClickableButton' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, WBP_OptionSettings_ListContentButton) == 0x000448, "Member 'UWBP_OptionSettings_ListContent_C::WBP_OptionSettings_ListContentButton' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, WBP_OptionSettings_ListContentLR) == 0x000450, "Member 'UWBP_OptionSettings_ListContent_C::WBP_OptionSettings_ListContentLR' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, WBP_OptionSettings_ListContentSlider) == 0x000458, "Member 'UWBP_OptionSettings_ListContent_C::WBP_OptionSettings_ListContentSlider' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, WBP_OptionSettings_ListContentSwitch) == 0x000460, "Member 'UWBP_OptionSettings_ListContent_C::WBP_OptionSettings_ListContentSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, SettingNameMsgId) == 0x000468, "Member 'UWBP_OptionSettings_ListContent_C::SettingNameMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, ScreenSelections) == 0x000478, "Member 'UWBP_OptionSettings_ListContent_C::ScreenSelections' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Current) == 0x000488, "Member 'UWBP_OptionSettings_ListContent_C::Current' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, BackAction) == 0x00048C, "Member 'UWBP_OptionSettings_ListContent_C::BackAction' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, LeftPressed) == 0x000490, "Member 'UWBP_OptionSettings_ListContent_C::LeftPressed' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, LeftReleased) == 0x000494, "Member 'UWBP_OptionSettings_ListContent_C::LeftReleased' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, RightPressed) == 0x000498, "Member 'UWBP_OptionSettings_ListContent_C::RightPressed' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, RightReleased) == 0x00049C, "Member 'UWBP_OptionSettings_ListContent_C::RightReleased' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, BackActionName) == 0x0004A0, "Member 'UWBP_OptionSettings_ListContent_C::BackActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, LeftActionName) == 0x0004A8, "Member 'UWBP_OptionSettings_ListContent_C::LeftActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, RightActionName) == 0x0004B0, "Member 'UWBP_OptionSettings_ListContent_C::RightActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Editing) == 0x0004B8, "Member 'UWBP_OptionSettings_ListContent_C::Editing' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, SubtractTimer) == 0x0004C0, "Member 'UWBP_OptionSettings_ListContent_C::SubtractTimer' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, AddTimer) == 0x0004C8, "Member 'UWBP_OptionSettings_ListContent_C::AddTimer' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, OriginalColor) == 0x0004D0, "Member 'UWBP_OptionSettings_ListContent_C::OriginalColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, ChangePercent) == 0x0004E0, "Member 'UWBP_OptionSettings_ListContent_C::ChangePercent' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, BlockMouseClick) == 0x0004E8, "Member 'UWBP_OptionSettings_ListContent_C::BlockMouseClick' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, OnKeyConfigClicked) == 0x0004F0, "Member 'UWBP_OptionSettings_ListContent_C::OnKeyConfigClicked' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, ActionKeyName) == 0x000500, "Member 'UWBP_OptionSettings_ListContent_C::ActionKeyName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Input_Type) == 0x000508, "Member 'UWBP_OptionSettings_ListContent_C::Input_Type' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContent_C, Filter_Type) == 0x000509, "Member 'UWBP_OptionSettings_ListContent_C::Filter_Type' has a wrong offset!");

}

