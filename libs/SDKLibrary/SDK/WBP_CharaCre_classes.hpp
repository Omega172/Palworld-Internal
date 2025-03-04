#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_UICharacterMakeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre.WBP_CharaCre_C
// 0x0208 (0x0480 - 0x0278)
class UWBP_CharaCre_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_PlayerNameEdit_OffToOn;                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PlayerName;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_85;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_CancelInGame;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ExitInGame;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ExitNewGame;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PlayerName;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Body;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Cancel_InGame;             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Finish;                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Finish_InGame;             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Hair;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Head;                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Preset;                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*             WBP_CharaCre_MenuButton_Voice;                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_65;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*             WBP_PalCommonScrollList_Setting;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedTab;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_ScrollBoxContentSet_C*    ScrollBoxContentSet;                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeftRotationButtonClicked;                       // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightRotationButtonClicked;                      // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedSkinColor;                                // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedTorsoSize;                                // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedLegSize;                                  // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedArmSize;                                  // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedEyeColor;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedBrowColor;                                // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedHairColor;                                // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedBodyMesh;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelecteddHeadMesh;                               // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedHairMesh;                                // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCategoryButton;                           // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_MenuButton_C*             LastClickedButton;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNotifyOpenSelectColorWindow;                     // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNotifyCloseSelectColorWIndow;                    // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedEditNameButton;                           // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedEyeMaterial;                             // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCompleteButton;                           // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedPreset;                                  // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangedVoiceID;                                  // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedInGameCompleteButton;                     // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentHoveredVoiceID;                             // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_NoRotation();
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Cancel_InGame_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_InGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CommonButton_65_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ChangeMakeCategory(E_UICharacterMakeCategory NewCategory);
	void Construct();
	class UWidget* CustomNavi_ToCategoryTop(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToNameChange(EUINavigation Param_Navigation);
	void Destruct();
	void ExecuteUbergraph_WBP_CharaCre(int32 EntryPoint);
	void GetCategoryButtonByCategory(E_UICharacterMakeCategory CategoryType, class UWBP_CharaCre_MenuButton_C** Button);
	void GetRestoreFocusTarget(E_UICharacterMakeCategory CategoryType, class UWidget** Widget);
	void GetSelectedEyeHSV(struct FLinearColor* HSV);
	void GetTopFocusTarget(E_UICharacterMakeCategory NewCategory, class UWidget** Widget);
	void OnChangedArmSize__DelegateSignature(double Size);
	void OnChangedArmSize_Internal(float Value);
	void OnChangedArmSizeInternal(double Value);
	void OnChangedBrowColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedBrowColor_Internal(const struct FLinearColor& Color);
	void OnChangedEyeColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedEyeColor_Internal(const struct FLinearColor& Color);
	void OnChangedHairColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedHairColor_Internal(const struct FLinearColor& Color);
	void OnChangedLegSize__DelegateSignature(double Size);
	void OnChangedLegSize_Internal(double Value);
	void OnChangedSkinColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedSkinColor_Internal(const struct FLinearColor& Color);
	void OnChangedTab__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget);
	void OnChangedTab_Internal(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
	void OnChangedTorsoSize__DelegateSignature(double Size);
	void OnChangedTorsoSize_Internal(double Value);
	void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
	void OnClickedBodyMesh_Internal(class FName BindedName);
	void OnClickedCategoryButton__DelegateSignature(E_UICharacterMakeCategory CategoryType);
	void OnClickedCategoryButton_Internal(class UWBP_CharaCre_MenuButton_C* Button);
	void OnClickedCompleteButton__DelegateSignature();
	void OnClickedEditNameButton__DelegateSignature();
	void OnClickedHairMesh_Internal(class FName BindedName);
	void OnClickedHeadMesh_Internal(class FName BindedName);
	void OnClickedInGameCompleteButton__DelegateSignature();
	void OnHoverVoiceButton(int32 VoiceID);
	void OnInitialized();
	void OnLeftRotationButtonClicked__DelegateSignature();
	void OnNotifyClosenSelectColorWindow_Internal();
	void OnNotifyCloseSelectColorWIndow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow_Internal();
	void OnRightRotationButtonClicked__DelegateSignature();
	void OnSelectedBodyMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnSelecteddHeadMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnSelectedEyeMaterial__DelegateSignature(class FName EyeMaterialName);
	void OnSelectedEyeMaterial_Internal(class FName BindedName);
	void OnSelectedHairMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnSelectedPreset__DelegateSignature(class FName PresetName);
	void OnSelectedPreset_Internal(class FName PresetName);
	void OnSelectedVoiceID_Internal(int32 VoiceID);
	void OnUnhoverVoiceButton();
	void Request_Play_Sample_Voice(int32 VoiceID);
	void SetEnableNameEdit(bool IsEnable);
	void SetEnableSettingScrollList(bool IsEnable);
	void SetIsNewGame(bool IsNewGame);
	void SetPlayerName(const class FText& NewName);
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_C">();
	}
	static class UWBP_CharaCre_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_C");
static_assert(sizeof(UWBP_CharaCre_C) == 0x000480, "Wrong size on UWBP_CharaCre_C");
static_assert(offsetof(UWBP_CharaCre_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, Anm_PlayerNameEdit_OffToOn) == 0x000280, "Member 'UWBP_CharaCre_C::Anm_PlayerNameEdit_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, Canvas_PlayerName) == 0x000288, "Member 'UWBP_CharaCre_C::Canvas_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, Image_85) == 0x000290, "Member 'UWBP_CharaCre_C::Image_85' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, SizeBox_CancelInGame) == 0x000298, "Member 'UWBP_CharaCre_C::SizeBox_CancelInGame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, SizeBox_ExitInGame) == 0x0002A0, "Member 'UWBP_CharaCre_C::SizeBox_ExitInGame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, SizeBox_ExitNewGame) == 0x0002A8, "Member 'UWBP_CharaCre_C::SizeBox_ExitNewGame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, Text_PlayerName) == 0x0002B0, "Member 'UWBP_CharaCre_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Body) == 0x0002B8, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Body' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Cancel_InGame) == 0x0002C0, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Cancel_InGame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Finish) == 0x0002C8, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Finish_InGame) == 0x0002D0, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Finish_InGame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Hair) == 0x0002D8, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Hair' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Head) == 0x0002E0, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Head' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Preset) == 0x0002E8, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Preset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CharaCre_MenuButton_Voice) == 0x0002F0, "Member 'UWBP_CharaCre_C::WBP_CharaCre_MenuButton_Voice' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_CommonButton_65) == 0x0002F8, "Member 'UWBP_CharaCre_C::WBP_CommonButton_65' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, WBP_PalCommonScrollList_Setting) == 0x000300, "Member 'UWBP_CharaCre_C::WBP_PalCommonScrollList_Setting' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedTab) == 0x000308, "Member 'UWBP_CharaCre_C::OnChangedTab' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, ScrollBoxContentSet) == 0x000318, "Member 'UWBP_CharaCre_C::ScrollBoxContentSet' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnLeftRotationButtonClicked) == 0x000320, "Member 'UWBP_CharaCre_C::OnLeftRotationButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnRightRotationButtonClicked) == 0x000330, "Member 'UWBP_CharaCre_C::OnRightRotationButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedSkinColor) == 0x000340, "Member 'UWBP_CharaCre_C::OnChangedSkinColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedTorsoSize) == 0x000350, "Member 'UWBP_CharaCre_C::OnChangedTorsoSize' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedLegSize) == 0x000360, "Member 'UWBP_CharaCre_C::OnChangedLegSize' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedArmSize) == 0x000370, "Member 'UWBP_CharaCre_C::OnChangedArmSize' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedEyeColor) == 0x000380, "Member 'UWBP_CharaCre_C::OnChangedEyeColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedBrowColor) == 0x000390, "Member 'UWBP_CharaCre_C::OnChangedBrowColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedHairColor) == 0x0003A0, "Member 'UWBP_CharaCre_C::OnChangedHairColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnSelectedBodyMesh) == 0x0003B0, "Member 'UWBP_CharaCre_C::OnSelectedBodyMesh' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnSelecteddHeadMesh) == 0x0003C0, "Member 'UWBP_CharaCre_C::OnSelecteddHeadMesh' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnSelectedHairMesh) == 0x0003D0, "Member 'UWBP_CharaCre_C::OnSelectedHairMesh' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnClickedCategoryButton) == 0x0003E0, "Member 'UWBP_CharaCre_C::OnClickedCategoryButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, LastClickedButton) == 0x0003F0, "Member 'UWBP_CharaCre_C::LastClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnNotifyOpenSelectColorWindow) == 0x0003F8, "Member 'UWBP_CharaCre_C::OnNotifyOpenSelectColorWindow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnNotifyCloseSelectColorWIndow) == 0x000408, "Member 'UWBP_CharaCre_C::OnNotifyCloseSelectColorWIndow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnClickedEditNameButton) == 0x000418, "Member 'UWBP_CharaCre_C::OnClickedEditNameButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnSelectedEyeMaterial) == 0x000428, "Member 'UWBP_CharaCre_C::OnSelectedEyeMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnClickedCompleteButton) == 0x000438, "Member 'UWBP_CharaCre_C::OnClickedCompleteButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnSelectedPreset) == 0x000448, "Member 'UWBP_CharaCre_C::OnSelectedPreset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnChangedVoiceID) == 0x000458, "Member 'UWBP_CharaCre_C::OnChangedVoiceID' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, OnClickedInGameCompleteButton) == 0x000468, "Member 'UWBP_CharaCre_C::OnClickedInGameCompleteButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_C, CurrentHoveredVoiceID) == 0x000478, "Member 'UWBP_CharaCre_C::CurrentHoveredVoiceID' has a wrong offset!");

}

