#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalStatus

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalStatus.WBP_PalStatus_C
// 0x00B0 (0x04E0 - 0x0430)
class UWBP_PalStatus_C final : public UPalUICharacterStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_CaptureImage;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Floor;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Floor_1;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalReflection;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NothingPal;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_00_C*                 WBP_MainMenu_Pal_00;                               // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalMonsterInframeRender_C*         WBP_PalInframeRender;                              // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*>  DisplayHandles;                                    // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTextureRenderTarget2D*                 Render_Target;                                     // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LastShowHandleIndex;                               // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastShowRenderPalIndex;                            // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ToParameterDetailAction;                           // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ToParameterDetailActionHandle;                     // 0x0498(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction     ToSkillDetailAction;                               // 0x049C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ToSkillDetailActionHandle;                         // 0x04A4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsOnePalModel;                                     // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EEB[0x3];                                     // 0x04A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     FavoritePalAction;                                 // 0x04AC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     DropPalAction;                                     // 0x04B4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   FavoritePalActionHandle;                           // 0x04BC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   DropPalActionHandle;                               // 0x04C0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_5EEC[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          LastHoveredPalHandle;                              // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    DropPalDialogMsgID;                                // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BackToList();
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature();
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(const class FText& NewNickName);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(EPalWazaID WazaID, class UPalIndividualCharacterHandle* TargetHandle);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, EPalWazaID ChangeWazaID, EPalWazaID NewWazaID);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_6_OnToggleFavoritePal__DelegateSignature(class UPalIndividualCharacterHandle* CharacterHandle);
	void ClampInputNickName(const class FText& InText, class FText* ClampedNickName);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint);
	void Get_Panel_Index_from_Handle(class UPalIndividualCharacterHandle* Handle, int32* Param_Index, bool* IsValid);
	void HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle);
	void Is_Editing_Nick_Name(bool* IsEditing);
	void NickNameFinalCheck(const class FText& InText, ETextCommit TextCommit, class FText* FinalNickName);
	void OnClosedDropPalDialog(bool bResult);
	void OnCompletedCaptureActorSetup();
	void OnTriggerDropPal();
	void Setup(TArray<class UPalIndividualCharacterHandle*>& Handles);
	void Setup_Input_Action();
	void Setup_One_Pal(class UPalIndividualCharacterHandle* CharacterHandle, bool Editable);
	void Setup_MultiPal();
	void Setup_NothingPal();
	void ShouldBackList(bool* ShouldBack);
	void Toggle_Favorite_Pal_by_Action();
	void ToParameterDetail();
	void ToSkillDetail();
	void UnbindInputAction();
	void UnhoveredAnyPalPanel_Internal();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStatus_C">();
	}
	static class UWBP_PalStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStatus_C>();
	}
};
static_assert(alignof(UWBP_PalStatus_C) == 0x000008, "Wrong alignment on UWBP_PalStatus_C");
static_assert(sizeof(UWBP_PalStatus_C) == 0x0004E0, "Wrong size on UWBP_PalStatus_C");
static_assert(offsetof(UWBP_PalStatus_C, UberGraphFrame) == 0x000430, "Member 'UWBP_PalStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Canvas_CaptureImage) == 0x000438, "Member 'UWBP_PalStatus_C::Canvas_CaptureImage' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Image_Floor) == 0x000440, "Member 'UWBP_PalStatus_C::Image_Floor' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Image_Floor_1) == 0x000448, "Member 'UWBP_PalStatus_C::Image_Floor_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Image_PalReflection) == 0x000450, "Member 'UWBP_PalStatus_C::Image_PalReflection' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Text_NothingPal) == 0x000458, "Member 'UWBP_PalStatus_C::Text_NothingPal' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, WBP_MainMenu_Pal_00) == 0x000460, "Member 'UWBP_PalStatus_C::WBP_MainMenu_Pal_00' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, WBP_PalInframeRender) == 0x000468, "Member 'UWBP_PalStatus_C::WBP_PalInframeRender' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, DisplayHandles) == 0x000470, "Member 'UWBP_PalStatus_C::DisplayHandles' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, Render_Target) == 0x000480, "Member 'UWBP_PalStatus_C::Render_Target' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, LastShowHandleIndex) == 0x000488, "Member 'UWBP_PalStatus_C::LastShowHandleIndex' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, LastShowRenderPalIndex) == 0x00048C, "Member 'UWBP_PalStatus_C::LastShowRenderPalIndex' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, ToParameterDetailAction) == 0x000490, "Member 'UWBP_PalStatus_C::ToParameterDetailAction' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, ToParameterDetailActionHandle) == 0x000498, "Member 'UWBP_PalStatus_C::ToParameterDetailActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, ToSkillDetailAction) == 0x00049C, "Member 'UWBP_PalStatus_C::ToSkillDetailAction' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, ToSkillDetailActionHandle) == 0x0004A4, "Member 'UWBP_PalStatus_C::ToSkillDetailActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, IsOnePalModel) == 0x0004A8, "Member 'UWBP_PalStatus_C::IsOnePalModel' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, FavoritePalAction) == 0x0004AC, "Member 'UWBP_PalStatus_C::FavoritePalAction' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, DropPalAction) == 0x0004B4, "Member 'UWBP_PalStatus_C::DropPalAction' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, FavoritePalActionHandle) == 0x0004BC, "Member 'UWBP_PalStatus_C::FavoritePalActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, DropPalActionHandle) == 0x0004C0, "Member 'UWBP_PalStatus_C::DropPalActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, LastHoveredPalHandle) == 0x0004C8, "Member 'UWBP_PalStatus_C::LastHoveredPalHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStatus_C, DropPalDialogMsgID) == 0x0004D0, "Member 'UWBP_PalStatus_C::DropPalDialogMsgID' has a wrong offset!");

}

