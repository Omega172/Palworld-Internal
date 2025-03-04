#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_ChestManage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_ChestManage.WBP_IngameMenu_ChestManage_C
// 0x00A0 (0x04D0 - 0x0430)
class UWBP_IngameMenu_ChestManage_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_TargetContainer;                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Inventory_C*                WBP_Common_Inventory;                              // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_ChestManage_TakeOut_C*  WBP_IngameMenu_ChestManage_TakeOut;                // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_ItemSearchList_C*       WBP_IngameMenu_ItemSearchList;                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*                InventoryModel;                                    // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedQuickMoveButton;                          // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedPreferenceButton;                         // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalUIBaseCampItemDispenserModel*       DispenserModel;                                    // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TakeOutPanelEnabled;                               // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A4[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalUIActionBindData>           TakeOutBindedActions;                              // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LastFocusListSlot;                                 // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Updateable;                                        // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A5[0x6];                                     // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           UpdateableTimer;                                   // 0x04B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentInFocusPath;                                // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceReset;                                        // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A6[0x6];                                     // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalItemSlotId>                 FillableSlotIds;                                   // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Param_Slot, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_12_OnClickedInventorySortButton__DelegateSignature();
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_5_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_2_OnTakeOutClosed__DelegateSignature();
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_3_OnTakeOutConfirmed__DelegateSignature(const struct FPalItemId& TakeOutId, int32 TakeOutCount);
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Param_Slot, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_6_OnSlotHovered__DelegateSignature();
	void Construct();
	class UWidget* CustomNavi_ToCloseButton(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToInventorySlot(EUINavigation Param_Navigation);
	void Destruct();
	void EnableUpdate();
	void ExecuteUbergraph_WBP_IngameMenu_ChestManage(int32 EntryPoint);
	void GetInventoryLastHoveredFocusTarget(class UWidget** Widget);
	void GetInventoryTopFocustTarget(class UWidget** FocusTarget);
	void InputMethodChanged(ECommonInputType InputType);
	void On_Camp_Item_Stack_Info_Update(class UPalUIBaseCampItemDispenserModel* Model);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnCancelAction();
	void OnClickedPreferenceButton__DelegateSignature();
	void OnClickedQuickMoveButton__DelegateSignature();
	void OnClose();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSetup();
	void OnTakeOutClose();
	void Refill();
	void Reset_Focus(bool TryFocusItemList);
	void Setup(class UBP_PalInventoryModel_C* Param_InventoryModel, class UPalUIBaseCampItemDispenserModel* Param_DispenserModel);
	void Setup_Take_Out(const struct FPalItemAndNum& ItemAndNum);
	void Unbind();
	void UpdateInventoryGreyout(class UPalItemSlot* Param_Slot);
	void UpdateInventorySlot(class UWBP_PalItemSlotButtonBase_C* Param_Slot, const TArray<class FName>& ItemList);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_ChestManage_C">();
	}
	static class UWBP_IngameMenu_ChestManage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_ChestManage_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_ChestManage_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_ChestManage_C");
static_assert(sizeof(UWBP_IngameMenu_ChestManage_C) == 0x0004D0, "Wrong size on UWBP_IngameMenu_ChestManage_C");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, UberGraphFrame) == 0x000430, "Member 'UWBP_IngameMenu_ChestManage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, Canvas_TargetContainer) == 0x000438, "Member 'UWBP_IngameMenu_ChestManage_C::Canvas_TargetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, WBP_Common_Inventory) == 0x000440, "Member 'UWBP_IngameMenu_ChestManage_C::WBP_Common_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, WBP_IngameMenu_ChestManage_TakeOut) == 0x000448, "Member 'UWBP_IngameMenu_ChestManage_C::WBP_IngameMenu_ChestManage_TakeOut' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, WBP_IngameMenu_ItemSearchList) == 0x000450, "Member 'UWBP_IngameMenu_ChestManage_C::WBP_IngameMenu_ItemSearchList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, WBP_Menu_btn) == 0x000458, "Member 'UWBP_IngameMenu_ChestManage_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, InventoryModel) == 0x000460, "Member 'UWBP_IngameMenu_ChestManage_C::InventoryModel' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, OnClickedQuickMoveButton) == 0x000468, "Member 'UWBP_IngameMenu_ChestManage_C::OnClickedQuickMoveButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, OnClickedPreferenceButton) == 0x000478, "Member 'UWBP_IngameMenu_ChestManage_C::OnClickedPreferenceButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, DispenserModel) == 0x000488, "Member 'UWBP_IngameMenu_ChestManage_C::DispenserModel' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, TakeOutPanelEnabled) == 0x000490, "Member 'UWBP_IngameMenu_ChestManage_C::TakeOutPanelEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, TakeOutBindedActions) == 0x000498, "Member 'UWBP_IngameMenu_ChestManage_C::TakeOutBindedActions' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, LastFocusListSlot) == 0x0004A8, "Member 'UWBP_IngameMenu_ChestManage_C::LastFocusListSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, Updateable) == 0x0004A9, "Member 'UWBP_IngameMenu_ChestManage_C::Updateable' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, UpdateableTimer) == 0x0004B0, "Member 'UWBP_IngameMenu_ChestManage_C::UpdateableTimer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, CurrentInFocusPath) == 0x0004B8, "Member 'UWBP_IngameMenu_ChestManage_C::CurrentInFocusPath' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, ForceReset) == 0x0004B9, "Member 'UWBP_IngameMenu_ChestManage_C::ForceReset' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ChestManage_C, FillableSlotIds) == 0x0004C0, "Member 'UWBP_IngameMenu_ChestManage_C::FillableSlotIds' has a wrong offset!");

}

