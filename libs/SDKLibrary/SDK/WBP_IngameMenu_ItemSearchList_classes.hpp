#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_ItemSearchList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_ItemSearchList.WBP_IngameMenu_ItemSearchList_C
// 0x0138 (0x0540 - 0x0408)
class UWBP_IngameMenu_ItemSearchList_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTileView*                        CommonTileView;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FrameFlare;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HorizontalBox_SearchName;                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalEditableTextBox*                    PalEditableTextBox_Search;                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_TargetContainerName;                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_1_C*                  WBP_CommonButton_Filter;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_SerchName;                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class UWBP_PalInGameMenuItemSlotButton_C*> CurrentViewingItemInfoMap;                         // 0x0448(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnRightClickSlot;                                  // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                           Current_Filter;                                    // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CurrentNameFilter;                                 // 0x04B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_PalItemSlotButtonBase_C*           LastHoverSlot;                                     // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSlotHovered;                                     // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class UBP_ItemSlotEntryData_C*> CurrentItemMap;                                    // 0x04E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Remove_Essential;                                  // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddTargetSlot(const struct FPalItemAndNum& ItemInfo);
	void Apply_Filter(TArray<class FName>& Types);
	void Apply_Filter_to_Item(class UPalStaticItemDataBase* ItemData, bool* Visible);
	void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_6_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_IngameMenu_ItemSearchList_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_ItemSearchList(int32 EntryPoint);
	void FocusToFilterButton();
	void GetCurrentFilterResult(const class FName StaticItemId, bool* Enabled);
	void GetLastFocusSlot(class UWidget** Param_Slot);
	void On_Click_Internal(class UWBP_PalItemSlotButtonBase_C* Param_Slot, EPalItemSlotPressType PressType);
	void OnHoverSlot(class UWBP_PalItemSlotButtonBase_C* Param_Slot);
	void OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Param_Slot, EPalItemSlotPressType PressType);
	void OnSlotHovered__DelegateSignature();
	void RefreshForFilter();
	void RefreshTileViewItem();
	void RemoveTargetSlot(class FName ItemInfo);
	void Update_Item_Stack_Info(TArray<struct FPalItemAndNum>& StackInfo, TArray<class FName>& IdArray, bool* SlotUpdated);
	void UpdateTargetSlot(const struct FPalItemAndNum& ItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_ItemSearchList_C">();
	}
	static class UWBP_IngameMenu_ItemSearchList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_ItemSearchList_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_ItemSearchList_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_ItemSearchList_C");
static_assert(sizeof(UWBP_IngameMenu_ItemSearchList_C) == 0x000540, "Wrong size on UWBP_IngameMenu_ItemSearchList_C");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, UberGraphFrame) == 0x000408, "Member 'UWBP_IngameMenu_ItemSearchList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, CommonTileView) == 0x000410, "Member 'UWBP_IngameMenu_ItemSearchList_C::CommonTileView' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, FrameFlare) == 0x000418, "Member 'UWBP_IngameMenu_ItemSearchList_C::FrameFlare' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, HorizontalBox_SearchName) == 0x000420, "Member 'UWBP_IngameMenu_ItemSearchList_C::HorizontalBox_SearchName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, PalEditableTextBox_Search) == 0x000428, "Member 'UWBP_IngameMenu_ItemSearchList_C::PalEditableTextBox_Search' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, Text_TargetContainerName) == 0x000430, "Member 'UWBP_IngameMenu_ItemSearchList_C::Text_TargetContainerName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, WBP_CommonButton_Filter) == 0x000438, "Member 'UWBP_IngameMenu_ItemSearchList_C::WBP_CommonButton_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, WBP_PalInvisibleButton_SerchName) == 0x000440, "Member 'UWBP_IngameMenu_ItemSearchList_C::WBP_PalInvisibleButton_SerchName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, CurrentViewingItemInfoMap) == 0x000448, "Member 'UWBP_IngameMenu_ItemSearchList_C::CurrentViewingItemInfoMap' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, OnRightClickSlot) == 0x000498, "Member 'UWBP_IngameMenu_ItemSearchList_C::OnRightClickSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, Current_Filter) == 0x0004A8, "Member 'UWBP_IngameMenu_ItemSearchList_C::Current_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, CurrentNameFilter) == 0x0004B8, "Member 'UWBP_IngameMenu_ItemSearchList_C::CurrentNameFilter' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, LastHoverSlot) == 0x0004D0, "Member 'UWBP_IngameMenu_ItemSearchList_C::LastHoverSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, OnSlotHovered) == 0x0004D8, "Member 'UWBP_IngameMenu_ItemSearchList_C::OnSlotHovered' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, CurrentItemMap) == 0x0004E8, "Member 'UWBP_IngameMenu_ItemSearchList_C::CurrentItemMap' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_ItemSearchList_C, Remove_Essential) == 0x000538, "Member 'UWBP_IngameMenu_ItemSearchList_C::Remove_Essential' has a wrong offset!");

}

