#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalStorageSortSettingWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C
// 0x0200 (0x0630 - 0x0430)
class UWBP_PalStorageSortSettingWindow_C final : public UPalUIPalBoxSortWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             GridPanel_ElementFilter;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_SuitabilityFilter;                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Dark;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalCheckBox*                           PalCheckBox_Favorite;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalCheckBox*                           PalCheckBox_Gender_Female;                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalCheckBox*                           PalCheckBox_Gender_Male;                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalComboBoxString*                     PalComboBoxString_Passive;                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Favorite;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_1_C*                  WBP_CommonButton_ClearPassive;                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_1_C*                  WBP_CommonButton_Sort;                             // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                 WBP_PalCommonWindow;                               // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGenderIcon_C*                   WBP_PalGenderIcon_Female;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGenderIcon_C*                   WBP_PalGenderIcon_Male;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_Favorite;                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_GenderFemale;               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_GenderMale;                 // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox;           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_1;         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_2;         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_3;         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_1;                    // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_2;                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortTypeButton_C*        WBP_PalStorageSortTypeButton_3;                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox;   // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1; // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2; // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3; // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalElementType, class UWBP_PalStorageSortElementFilterCheckBox_C*> ElementTypeCheckBoxMap;                            // 0x0520(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalStorageSortTypeButton_C*> SortTypeButtonArray;                               // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EPalCharacterContainerSortType                SelectedSortType;                                  // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6669[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalWorkSuitability, class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> WorkSuitabilityCheckBoxMap;                        // 0x0588(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalCharacterContainerSortInfo         CachedSortInfo;                                    // 0x05D8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxColumnNum_CheckBox;                             // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666A[0x4];                                     // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           PassiveIDs;                                        // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IgnoreCloseEvent;                                  // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyCachedSortInfo();
	void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_7_OnOpeningEvent__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_Sort_1_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderFemale_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderMale_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void CacheSortInfo();
	void CloseEvent();
	void CollectFilteringElementType(TArray<EPalElementType>* ElementTypeArray);
	void CollectFilteringSuitability(TArray<EPalWorkSuitability>* SuitabilityArray);
	class UWidget* CustomNavi_ToCloseButton(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToFavoriteCheckBox(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToSortButton(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToSortTypeTop(EUINavigation Param_Navigation);
	void Destruct();
	void ExecuteUbergraph_WBP_PalStorageSortSettingWindow(int32 EntryPoint);
	void OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType);
	void OnClickedSortTypeButton(class UWBP_PalStorageSortTypeButton_C* Widget);
	void OnClickedWorkSuitabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility);
	void OnInitialized();
	void OnSetup();
	void Setup_Passive_Combo_Box();
	void Setup_Sort_Type_Button();
	void SetupElementTypeCheckBox();
	void SetupWorkSuitabilityCheckBox();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageSortSettingWindow_C">();
	}
	static class UWBP_PalStorageSortSettingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageSortSettingWindow_C>();
	}
};
static_assert(alignof(UWBP_PalStorageSortSettingWindow_C) == 0x000008, "Wrong alignment on UWBP_PalStorageSortSettingWindow_C");
static_assert(sizeof(UWBP_PalStorageSortSettingWindow_C) == 0x000630, "Wrong size on UWBP_PalStorageSortSettingWindow_C");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, UberGraphFrame) == 0x000430, "Member 'UWBP_PalStorageSortSettingWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, GridPanel_ElementFilter) == 0x000438, "Member 'UWBP_PalStorageSortSettingWindow_C::GridPanel_ElementFilter' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, GridPanel_SuitabilityFilter) == 0x000440, "Member 'UWBP_PalStorageSortSettingWindow_C::GridPanel_SuitabilityFilter' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, Image_Dark) == 0x000448, "Member 'UWBP_PalStorageSortSettingWindow_C::Image_Dark' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PalCheckBox_Favorite) == 0x000450, "Member 'UWBP_PalStorageSortSettingWindow_C::PalCheckBox_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PalCheckBox_Gender_Female) == 0x000458, "Member 'UWBP_PalStorageSortSettingWindow_C::PalCheckBox_Gender_Female' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PalCheckBox_Gender_Male) == 0x000460, "Member 'UWBP_PalStorageSortSettingWindow_C::PalCheckBox_Gender_Male' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PalComboBoxString_Passive) == 0x000468, "Member 'UWBP_PalStorageSortSettingWindow_C::PalComboBoxString_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, Text_Favorite) == 0x000470, "Member 'UWBP_PalStorageSortSettingWindow_C::Text_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_CommonButton_ClearPassive) == 0x000478, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_CommonButton_ClearPassive' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_CommonButton_Sort) == 0x000480, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_CommonButton_Sort' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_Menu_btn) == 0x000488, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalCommonWindow) == 0x000490, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalCommonWindow' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalGenderIcon_Female) == 0x000498, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalGenderIcon_Female' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalGenderIcon_Male) == 0x0004A0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalGenderIcon_Male' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalInvisibleButton_Favorite) == 0x0004A8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalInvisibleButton_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalInvisibleButton_GenderFemale) == 0x0004B0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalInvisibleButton_GenderFemale' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalInvisibleButton_GenderMale) == 0x0004B8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalInvisibleButton_GenderMale' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox) == 0x0004C0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_1) == 0x0004C8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_2) == 0x0004D0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortElementFilterCheckBox_3) == 0x0004D8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortElementFilterCheckBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton) == 0x0004E0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_1) == 0x0004E8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_2) == 0x0004F0, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortTypeButton_3) == 0x0004F8, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortTypeButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox) == 0x000500, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1) == 0x000508, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2) == 0x000510, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3) == 0x000518, "Member 'UWBP_PalStorageSortSettingWindow_C::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, ElementTypeCheckBoxMap) == 0x000520, "Member 'UWBP_PalStorageSortSettingWindow_C::ElementTypeCheckBoxMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, SortTypeButtonArray) == 0x000570, "Member 'UWBP_PalStorageSortSettingWindow_C::SortTypeButtonArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, SelectedSortType) == 0x000580, "Member 'UWBP_PalStorageSortSettingWindow_C::SelectedSortType' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, WorkSuitabilityCheckBoxMap) == 0x000588, "Member 'UWBP_PalStorageSortSettingWindow_C::WorkSuitabilityCheckBoxMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, CachedSortInfo) == 0x0005D8, "Member 'UWBP_PalStorageSortSettingWindow_C::CachedSortInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, MaxColumnNum_CheckBox) == 0x000610, "Member 'UWBP_PalStorageSortSettingWindow_C::MaxColumnNum_CheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, PassiveIDs) == 0x000618, "Member 'UWBP_PalStorageSortSettingWindow_C::PassiveIDs' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageSortSettingWindow_C, IgnoreCloseEvent) == 0x000628, "Member 'UWBP_PalStorageSortSettingWindow_C::IgnoreCloseEvent' has a wrong offset!");

}

