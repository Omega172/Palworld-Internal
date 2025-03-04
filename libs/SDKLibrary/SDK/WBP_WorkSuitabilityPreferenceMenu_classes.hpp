#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorkSuitabilityPreferenceMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorkSuitabilityPreferenceMenu.WBP_WorkSuitabilityPreferenceMenu_C
// 0x00F0 (0x0368 - 0x0278)
class UWBP_WorkSuitabilityPreferenceMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_WorkIcon;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Change;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkerNum;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*     WBP_IngameMenu_PalBox_PalDetail;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn_Close;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NoData_C*                          WBP_NoData;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*             WBP_PalCommonScrollList_PalList;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_IconPalWork_C*>             SuitabilityIconArray;                              // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftObjectPtr<class UPalIndividualCharacterContainer> SoftTargetContainer;                               // 0x02E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedSuitabilitySetting;                       // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedBattleModeSetting;                        // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> NowDisplayingCharacterHandle;                      // 0x0330(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_WorlSuitabilityPreference_PalList_C* LastHoveredListWidget;                             // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ArrangeHorizontalBoxSlot_ForSuitabilityIcon(class UHorizontalBoxSlot* Param_Slot);
	void BndEvt__WBP_WorkSuitabilityPreferenceMenu_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void Construct();
	class UWidget* CustomNavi_DownList(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_UpList(EUINavigation Param_Navigation);
	void Destruct();
	void ExecuteUbergraph_WBP_WorkSuitabilityPreferenceMenu(int32 EntryPoint);
	class UWidget* GetNextListFocusTarget(int32 TargetListDistance);
	void GetTopFocusTarget(class UWidget** TargetWidget);
	void GetTopFocusTarget_PalList(class UWidget** Target);
	void OnChangedBattleModeCheck_Internal(bool IsChecked, class UPalIndividualCharacterSlot* TargetSlot);
	void OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Param_Slot);
	void OnChangedSuitabilityCheck_Internal(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
	void OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
	void OnClickedCloseButton__DelegateSignature();
	void OnHoveredAnyCheckBox_Internal(class UWBP_WorlSuitabilityPreference_PalList_C* SelfWidget);
	void OnInitialized();
	void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Param_Slot, class UPalIndividualCharacterHandle* LastHandle);
	void SetEnableWorkerInfo(bool IsEnableInfo);
	void SetTargetContainer(class UPalIndividualCharacterContainer* Container);
	void SetupSuitabilityIcon();
	void UpdateWorkerNum();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorkSuitabilityPreferenceMenu_C">();
	}
	static class UWBP_WorkSuitabilityPreferenceMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorkSuitabilityPreferenceMenu_C>();
	}
};
static_assert(alignof(UWBP_WorkSuitabilityPreferenceMenu_C) == 0x000008, "Wrong alignment on UWBP_WorkSuitabilityPreferenceMenu_C");
static_assert(sizeof(UWBP_WorkSuitabilityPreferenceMenu_C) == 0x000368, "Wrong size on UWBP_WorkSuitabilityPreferenceMenu_C");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, UberGraphFrame) == 0x000278, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, HorizontalBox_WorkIcon) == 0x000280, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::HorizontalBox_WorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, Image_Icon_Change) == 0x000288, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::Image_Icon_Change' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, Text_WorkerNum) == 0x000290, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::Text_WorkerNum' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, WBP_IngameMenu_PalBox_PalDetail) == 0x000298, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::WBP_IngameMenu_PalBox_PalDetail' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, WBP_Menu_btn_Close) == 0x0002A0, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::WBP_Menu_btn_Close' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, WBP_NoData) == 0x0002A8, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::WBP_NoData' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, WBP_PalCommonScrollList_PalList) == 0x0002B0, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::WBP_PalCommonScrollList_PalList' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, WBP_PalKeyGuideIcon) == 0x0002B8, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, OnClickedCloseButton) == 0x0002C0, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, SuitabilityIconArray) == 0x0002D0, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::SuitabilityIconArray' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, SoftTargetContainer) == 0x0002E0, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::SoftTargetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, OnChangedSuitabilitySetting) == 0x000310, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::OnChangedSuitabilitySetting' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, OnChangedBattleModeSetting) == 0x000320, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::OnChangedBattleModeSetting' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, NowDisplayingCharacterHandle) == 0x000330, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::NowDisplayingCharacterHandle' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreferenceMenu_C, LastHoveredListWidget) == 0x000360, "Member 'UWBP_WorkSuitabilityPreferenceMenu_C::LastHoveredListWidget' has a wrong offset!");

}

