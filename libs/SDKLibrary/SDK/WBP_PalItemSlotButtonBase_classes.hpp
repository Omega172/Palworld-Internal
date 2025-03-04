#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalItemSlotButtonBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C
// 0x0180 (0x0588 - 0x0408)
class UWBP_PalItemSlotButtonBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonButtonBase*                      My_Button;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotBase_C*                 MyItemSlotWidget;                                  // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMiddleClickedButton;                             // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedButton;                              // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredButton;                                   // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredButton;                                 // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedWidget;                                   // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnFocusedWidget;                                 // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDragged;                                         // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDropped;                                         // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDropCanceled;                                    // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEnableDragDrop;                                  // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6E[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLiftedButton;                                    // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFinishLiftedButton;                              // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDisplayingItemInfo;                              // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplayCommonItemInfoWindow;                     // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6F[0x6];                                     // 0x04EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSetEmptySlot;                                    // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetValidSlot;                                    // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEnableSpreadLift;                                // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUsableSlot;                                      // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A70[0x2];                                     // 0x0512(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     HalfLiftAction_ForPad;                             // 0x0514(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     UseAction_ForPad;                                  // 0x051C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   HalfLiftActionHandle_ForPad;                       // 0x0524(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   UseActionHandle_ForPad;                            // 0x0528(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsSupportedQuickMove;                              // 0x052C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableQuickEquip;                                // 0x052D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A71[0x2];                                     // 0x052E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnNotifyDurability;                                // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCorruptionUpdate;                                // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestUseItem;                                  // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsShowPrice;                                       // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A72[0x7];                                     // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTriedEquipSlot;                                  // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateSlot;                                      // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Bind_Button_Events();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemSlotButtonBase(int32 EntryPoint);
	void Focus();
	void GetDisplayDragItemNum(int32* DisplayNum);
	void GetItemAndNum(struct FPalItemAndNum* ItemAndNum);
	void GetTargetSlot(class UPalItemSlot** TargetSlot);
	void On_Right_Clicked_Internal();
	void On_Use_or_Move_Slot_Input_Pad();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnClicked_Internal(class UCommonButtonBase* Button);
	void OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void OnCorruptionUpdate__DelegateSignature();
	void OnCorruptionUpdate_Internal();
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragged__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDragged_Internal();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDropCanceled__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDropCanceled_Internal(class UDragDropOperation* Operation);
	void OnDropped__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDropped_Internal();
	void OnFinishLiftedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnFinishLiftedButton_Internal();
	void OnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnHalfLiftInput_Pad();
	void OnHovered_Internal(class UCommonButtonBase* Button);
	void OnHoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnInitialized();
	void OnLiftedButton__DelegateSignature(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnLiftedButton_Internal(int32 LiftedItemNum);
	void OnMiddleClicked_Internal();
	void OnMiddleClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
	void OnNotifyDurability_Internal(double MaxDurability, double NowDurability);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnRightClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
	void OnSetEmpty_internal();
	void OnSetEmptySlot__DelegateSignature();
	void OnSetValid_Internal();
	void OnSetValidSlot__DelegateSignature();
	void OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUnhovered_Internal(class UCommonButtonBase* Button);
	void OnUnhoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUpdateSlot__DelegateSignature(class UPalItemSlot* Param_Slot);
	void OnUpdateSlot_Internal(class UPalItemSlot* TargetSlot);
	void RegisterButton(class UCommonButtonBase** Button);
	void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget);
	void RegisterPadAction();
	void Setup(class UPalItemSlot* TargetSlot);
	void TryEquipSlot();
	void Unbind_Button_Events();
	void UnregisterPadAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalItemSlotButtonBase_C">();
	}
	static class UWBP_PalItemSlotButtonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalItemSlotButtonBase_C>();
	}
};
static_assert(alignof(UWBP_PalItemSlotButtonBase_C) == 0x000008, "Wrong alignment on UWBP_PalItemSlotButtonBase_C");
static_assert(sizeof(UWBP_PalItemSlotButtonBase_C) == 0x000588, "Wrong size on UWBP_PalItemSlotButtonBase_C");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalItemSlotButtonBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, My_Button) == 0x000410, "Member 'UWBP_PalItemSlotButtonBase_C::My_Button' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, MyItemSlotWidget) == 0x000418, "Member 'UWBP_PalItemSlotButtonBase_C::MyItemSlotWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnClickedButton) == 0x000420, "Member 'UWBP_PalItemSlotButtonBase_C::OnClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnMiddleClickedButton) == 0x000430, "Member 'UWBP_PalItemSlotButtonBase_C::OnMiddleClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnRightClickedButton) == 0x000440, "Member 'UWBP_PalItemSlotButtonBase_C::OnRightClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnHoveredButton) == 0x000450, "Member 'UWBP_PalItemSlotButtonBase_C::OnHoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnUnhoveredButton) == 0x000460, "Member 'UWBP_PalItemSlotButtonBase_C::OnUnhoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnFocusedWidget) == 0x000470, "Member 'UWBP_PalItemSlotButtonBase_C::OnFocusedWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnUnFocusedWidget) == 0x000480, "Member 'UWBP_PalItemSlotButtonBase_C::OnUnFocusedWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnDragged) == 0x000490, "Member 'UWBP_PalItemSlotButtonBase_C::OnDragged' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnDropped) == 0x0004A0, "Member 'UWBP_PalItemSlotButtonBase_C::OnDropped' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnDropCanceled) == 0x0004B0, "Member 'UWBP_PalItemSlotButtonBase_C::OnDropCanceled' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsEnableDragDrop) == 0x0004C0, "Member 'UWBP_PalItemSlotButtonBase_C::IsEnableDragDrop' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnLiftedButton) == 0x0004C8, "Member 'UWBP_PalItemSlotButtonBase_C::OnLiftedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnFinishLiftedButton) == 0x0004D8, "Member 'UWBP_PalItemSlotButtonBase_C::OnFinishLiftedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsDisplayingItemInfo) == 0x0004E8, "Member 'UWBP_PalItemSlotButtonBase_C::IsDisplayingItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsDisplayCommonItemInfoWindow) == 0x0004E9, "Member 'UWBP_PalItemSlotButtonBase_C::IsDisplayCommonItemInfoWindow' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnSetEmptySlot) == 0x0004F0, "Member 'UWBP_PalItemSlotButtonBase_C::OnSetEmptySlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnSetValidSlot) == 0x000500, "Member 'UWBP_PalItemSlotButtonBase_C::OnSetValidSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsEnableSpreadLift) == 0x000510, "Member 'UWBP_PalItemSlotButtonBase_C::IsEnableSpreadLift' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsUsableSlot) == 0x000511, "Member 'UWBP_PalItemSlotButtonBase_C::IsUsableSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, HalfLiftAction_ForPad) == 0x000514, "Member 'UWBP_PalItemSlotButtonBase_C::HalfLiftAction_ForPad' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, UseAction_ForPad) == 0x00051C, "Member 'UWBP_PalItemSlotButtonBase_C::UseAction_ForPad' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, HalfLiftActionHandle_ForPad) == 0x000524, "Member 'UWBP_PalItemSlotButtonBase_C::HalfLiftActionHandle_ForPad' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, UseActionHandle_ForPad) == 0x000528, "Member 'UWBP_PalItemSlotButtonBase_C::UseActionHandle_ForPad' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsSupportedQuickMove) == 0x00052C, "Member 'UWBP_PalItemSlotButtonBase_C::IsSupportedQuickMove' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsEnableQuickEquip) == 0x00052D, "Member 'UWBP_PalItemSlotButtonBase_C::IsEnableQuickEquip' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnNotifyDurability) == 0x000530, "Member 'UWBP_PalItemSlotButtonBase_C::OnNotifyDurability' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnCorruptionUpdate) == 0x000540, "Member 'UWBP_PalItemSlotButtonBase_C::OnCorruptionUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnRequestUseItem) == 0x000550, "Member 'UWBP_PalItemSlotButtonBase_C::OnRequestUseItem' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, IsShowPrice) == 0x000560, "Member 'UWBP_PalItemSlotButtonBase_C::IsShowPrice' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnTriedEquipSlot) == 0x000568, "Member 'UWBP_PalItemSlotButtonBase_C::OnTriedEquipSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotButtonBase_C, OnUpdateSlot) == 0x000578, "Member 'UWBP_PalItemSlotButtonBase_C::OnUpdateSlot' has a wrong offset!");

}

