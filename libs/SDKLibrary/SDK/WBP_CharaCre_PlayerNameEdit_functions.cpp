#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_PlayerNameEdit

#include "Basic.hpp"

#include "WBP_CharaCre_PlayerNameEdit_classes.hpp"
#include "WBP_CharaCre_PlayerNameEdit_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CharaCre_PlayerNameEdit_C::BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PlayerNameEdit_C::BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_PalEditableTextBox_83_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CharaCre_PlayerNameEdit_C::BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CharaCre_PlayerNameEdit_C::BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.ClampInputName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             ClampedNickName                                        (Parm, OutParm)

void UWBP_CharaCre_PlayerNameEdit_C::ClampInputName(const class FText& InText, class FText* ClampedNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "ClampInputName");

	Params::WBP_CharaCre_PlayerNameEdit_C_ClampInputName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (ClampedNickName != nullptr)
		*ClampedNickName = std::move(Parms.ClampedNickName);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PlayerNameEdit_C::ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit");

	Params::WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.OnCancelAction
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_PlayerNameEdit_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_PlayerNameEdit_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.OnShortcutConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_PlayerNameEdit_C::OnShortcutConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "OnShortcutConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.SetEnableConfirmButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PlayerNameEdit_C::SetEnableConfirmButton(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "SetEnableConfirmButton");

	Params::WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_PlayerNameEdit_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PlayerNameEdit_C", "BP_GetDesiredFocusTarget");

	Params::WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

