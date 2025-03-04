#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_ForDisplay

#include "Basic.hpp"

#include "E_PaldexDistributionTimeType_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Paldex_ForDisplay.WBP_Paldex_ForDisplay_C
// 0x00B8 (0x0548 - 0x0490)
class UWBP_Paldex_ForDisplay_C final : public UPalUIPaldex
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Paldex_C*                          WBP_Paldex;                                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ToModelInputAction;                                // 0x04A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ToDistributionInputAction;                         // 0x04A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ToModelInputHandle;                                // 0x04B0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   ToDistributionInputHandle;                         // 0x04B4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsDisplayDistribution;                             // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24CD[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NowDisplayCharacterID;                             // 0x04BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24CE[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MapControllWeight_Gamepad;                         // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MapControllWeight_Mouse;                           // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CaptureCameraRotator;                              // 0x04D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        ModelRotationControllWeight_Gamepad;               // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ChangeDistributionTimeAction;                      // 0x04F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ChangeDistributionTimeActionHandle;                // 0x0500(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	E_PaldexDistributionTimeType                  NowDisplayDistributionTimeType;                    // 0x0504(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24CF[0x3];                                     // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DistributionZoomWeight_Mouse;                      // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ChangeDistributionZoomAction;                      // 0x0510(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ChangeDistributionZoomActionHandle;                // 0x0518(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_24D0[0x4];                                     // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAllNewFlagCleared;                               // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalDataTableRowName_UIInputAction     RandomCryAction;                                   // 0x0530(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   RandomCryActionHandle;                             // 0x0538(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   TmpDelayScrollTargetCharacetr;                     // 0x053C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_1_OnClickedModelTab__DelegateSignature();
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_2_OnClickedDistributionTab__DelegateSignature();
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_3_OnClickedAnyPalPanel__DelegateSignature(class FName CharacterID);
	void Change_Map_Zoom_Rate();
	void ChangeDistributionTime();
	void Construct();
	void DelayScrollToCharacterID(class FName CharacterID);
	void ExecuteUbergraph_WBP_Paldex_ForDisplay(int32 EntryPoint);
	void OnAllNewFlagCleared__DelegateSignature();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnChangeDistributionInput();
	void OnChangeModelInput();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayRandomCry();
	void SetEnableRandomCryAction(bool IsEnableFlag);
	void Setup();
	void SwitchDistributionTime(E_PaldexDistributionTimeType TimeType);
	void ToDistributionDisplayMode();
	void ToModelDisplayMode();
	void UpdateNewFlag(class FName CharacterID);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Paldex_ForDisplay_C">();
	}
	static class UWBP_Paldex_ForDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Paldex_ForDisplay_C>();
	}
};
static_assert(alignof(UWBP_Paldex_ForDisplay_C) == 0x000008, "Wrong alignment on UWBP_Paldex_ForDisplay_C");
static_assert(sizeof(UWBP_Paldex_ForDisplay_C) == 0x000548, "Wrong size on UWBP_Paldex_ForDisplay_C");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, UberGraphFrame) == 0x000490, "Member 'UWBP_Paldex_ForDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, WBP_Paldex) == 0x000498, "Member 'UWBP_Paldex_ForDisplay_C::WBP_Paldex' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ToModelInputAction) == 0x0004A0, "Member 'UWBP_Paldex_ForDisplay_C::ToModelInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ToDistributionInputAction) == 0x0004A8, "Member 'UWBP_Paldex_ForDisplay_C::ToDistributionInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ToModelInputHandle) == 0x0004B0, "Member 'UWBP_Paldex_ForDisplay_C::ToModelInputHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ToDistributionInputHandle) == 0x0004B4, "Member 'UWBP_Paldex_ForDisplay_C::ToDistributionInputHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, IsDisplayDistribution) == 0x0004B8, "Member 'UWBP_Paldex_ForDisplay_C::IsDisplayDistribution' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, NowDisplayCharacterID) == 0x0004BC, "Member 'UWBP_Paldex_ForDisplay_C::NowDisplayCharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, MapControllWeight_Gamepad) == 0x0004C8, "Member 'UWBP_Paldex_ForDisplay_C::MapControllWeight_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, MapControllWeight_Mouse) == 0x0004D0, "Member 'UWBP_Paldex_ForDisplay_C::MapControllWeight_Mouse' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, CaptureCameraRotator) == 0x0004D8, "Member 'UWBP_Paldex_ForDisplay_C::CaptureCameraRotator' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ModelRotationControllWeight_Gamepad) == 0x0004F0, "Member 'UWBP_Paldex_ForDisplay_C::ModelRotationControllWeight_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ChangeDistributionTimeAction) == 0x0004F8, "Member 'UWBP_Paldex_ForDisplay_C::ChangeDistributionTimeAction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ChangeDistributionTimeActionHandle) == 0x000500, "Member 'UWBP_Paldex_ForDisplay_C::ChangeDistributionTimeActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, NowDisplayDistributionTimeType) == 0x000504, "Member 'UWBP_Paldex_ForDisplay_C::NowDisplayDistributionTimeType' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, DistributionZoomWeight_Mouse) == 0x000508, "Member 'UWBP_Paldex_ForDisplay_C::DistributionZoomWeight_Mouse' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ChangeDistributionZoomAction) == 0x000510, "Member 'UWBP_Paldex_ForDisplay_C::ChangeDistributionZoomAction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, ChangeDistributionZoomActionHandle) == 0x000518, "Member 'UWBP_Paldex_ForDisplay_C::ChangeDistributionZoomActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, OnAllNewFlagCleared) == 0x000520, "Member 'UWBP_Paldex_ForDisplay_C::OnAllNewFlagCleared' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, RandomCryAction) == 0x000530, "Member 'UWBP_Paldex_ForDisplay_C::RandomCryAction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, RandomCryActionHandle) == 0x000538, "Member 'UWBP_Paldex_ForDisplay_C::RandomCryActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_ForDisplay_C, TmpDelayScrollTargetCharacetr) == 0x00053C, "Member 'UWBP_Paldex_ForDisplay_C::TmpDelayScrollTargetCharacetr' has a wrong offset!");

}

