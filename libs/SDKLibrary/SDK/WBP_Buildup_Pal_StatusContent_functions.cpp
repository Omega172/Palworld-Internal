#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Buildup_Pal_StatusContent

#include "Basic.hpp"

#include "WBP_Buildup_Pal_StatusContent_classes.hpp"
#include "WBP_Buildup_Pal_StatusContent_parameters.hpp"


namespace SDK
{

// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.AnmEvent_RankUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_Buildup_Pal_StatusContent_C::AnmEvent_RankUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "AnmEvent_RankUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Buildup_Pal_StatusContent_C_BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Buildup_Pal_StatusContent_C_BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.ExecuteUbergraph_WBP_Buildup_Pal_StatusContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::ExecuteUbergraph_WBP_Buildup_Pal_StatusContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "ExecuteUbergraph_WBP_Buildup_Pal_StatusContent");

	Params::WBP_Buildup_Pal_StatusContent_C_ExecuteUbergraph_WBP_Buildup_Pal_StatusContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.Get Status
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalCharacterStatusOperationName        Param_Status                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::Get_Status(EPalCharacterStatusOperationName* Param_Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "Get Status");

	Params::WBP_Buildup_Pal_StatusContent_C_Get_Status Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Status != nullptr)
		*Param_Status = Parms.Param_Status;
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCharacterStatusOperationName        Param_Status                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_TargetRank                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::OnClicked__DelegateSignature(EPalCharacterStatusOperationName Param_Status, int32 Param_TargetRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "OnClicked__DelegateSignature");

	Params::WBP_Buildup_Pal_StatusContent_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_Status = Param_Status;
	Parms.Param_TargetRank = Param_TargetRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.RestoreAnmEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_Buildup_Pal_StatusContent_C::RestoreAnmEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "RestoreAnmEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "SetEnable");

	Params::WBP_Buildup_Pal_StatusContent_C_SetEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SetTargetRank                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::SetInfo(class UPalIndividualCharacterParameter* IndividualParam, int32 SetTargetRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "SetInfo");

	Params::WBP_Buildup_Pal_StatusContent_C_SetInfo Parms{};

	Parms.IndividualParam = IndividualParam;
	Parms.SetTargetRank = SetTargetRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.SetItemRequireInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Buildup_Pal_StatusContent_C::SetItemRequireInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "SetItemRequireInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.SetSelectRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ToRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::SetSelectRank(int32 ToRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "SetSelectRank");

	Params::WBP_Buildup_Pal_StatusContent_C_SetSelectRank Parms{};

	Parms.ToRank = ToRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buildup_Pal_StatusContent.WBP_Buildup_Pal_StatusContent_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCharacterStatusOperationName        Param_Status                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_StatusContent_C::Setup(EPalCharacterStatusOperationName Param_Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buildup_Pal_StatusContent_C", "Setup");

	Params::WBP_Buildup_Pal_StatusContent_C_Setup Parms{};

	Parms.Param_Status = Param_Status;

	UObject::ProcessEvent(Func, &Parms);
}

}

