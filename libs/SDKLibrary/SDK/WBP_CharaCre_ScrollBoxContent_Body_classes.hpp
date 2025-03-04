#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Body

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WBP_CharaCre_ScrollBoxContentBase_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C
// 0x00C0 (0x04E8 - 0x0428)
class UWBP_CharaCre_ScrollBoxContent_Body_C final : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_ColorSelect_sq_C*         WBP_CharaCre_ColorSelect_sq;                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*       WBP_PartsSizeSlider_Arm;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*       WBP_PartsSizeSlider_Leg;                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*       WBP_PartsSizeSlider_Torso;                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Body;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> BodyMeshMap;                                       // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   PresetColors;                                      // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelectedSkinColor;                               // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                                RestoreFocusWIdget;                                // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedBodyType;                                 // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_BodyTypeButton_C*         LastClickedBodyTypeButton;                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void Construct();
	class UWidget* CustomNavi_ToSkinColor(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToTorsoSlider(EUINavigation Param_Navigation);
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body(int32 EntryPoint);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnChangedSelectColor(const struct FLinearColor& Color);
	void OnClickedBodyType__DelegateSignature(class FName PresetName);
	void OnClickedBodyTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
	void OnClosedCOlorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnSelectedSkinColor__DelegateSignature(const struct FLinearColor& Color);
	void SetDefaultBodyTypePresetName(class FName PresetName);
	void GetTopFocusTarget(class UWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContent_Body_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContent_Body_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContent_Body_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContent_Body_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContent_Body_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContent_Body_C) == 0x0004E8, "Wrong size on UWBP_CharaCre_ScrollBoxContent_Body_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, UberGraphFrame) == 0x000428, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, WBP_CharaCre_ColorSelect_sq) == 0x000430, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::WBP_CharaCre_ColorSelect_sq' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, WBP_PartsSizeSlider_Arm) == 0x000438, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::WBP_PartsSizeSlider_Arm' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, WBP_PartsSizeSlider_Leg) == 0x000440, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::WBP_PartsSizeSlider_Leg' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, WBP_PartsSizeSlider_Torso) == 0x000448, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::WBP_PartsSizeSlider_Torso' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, WrapBox_Body) == 0x000450, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::WrapBox_Body' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, BodyMeshMap) == 0x000458, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::BodyMeshMap' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, PresetColors) == 0x0004A8, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::PresetColors' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, OnSelectedSkinColor) == 0x0004B8, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::OnSelectedSkinColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, RestoreFocusWIdget) == 0x0004C8, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::RestoreFocusWIdget' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, OnClickedBodyType) == 0x0004D0, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::OnClickedBodyType' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Body_C, LastClickedBodyTypeButton) == 0x0004E0, "Member 'UWBP_CharaCre_ScrollBoxContent_Body_C::LastClickedBodyTypeButton' has a wrong offset!");

}

