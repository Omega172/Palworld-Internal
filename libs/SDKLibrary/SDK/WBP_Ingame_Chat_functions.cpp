#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ingame_Chat

#include "Basic.hpp"

#include "WBP_Ingame_Chat_classes.hpp"
#include "WBP_Ingame_Chat_parameters.hpp"


namespace SDK
{

// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_Ingame_Chat_C_BndEvt__WBP_Ingame_Chat_PalMultiLineEditableTextBox_220_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.CanChat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::CanChat(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "CanChat");

	Params::WBP_Ingame_Chat_C_CanChat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ChangeCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::ChangeCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ChangeCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Chat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Chat_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ExecuteUbergraph_WBP_Ingame_Chat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ExecuteUbergraph_WBP_Ingame_Chat");

	Params::WBP_Ingame_Chat_C_ExecuteUbergraph_WBP_Ingame_Chat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Hide Chat Log UI
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::Hide_Chat_Log_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Hide Chat Log UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.HideChatInputUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::HideChatInputUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "HideChatInputUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.On Recived Chat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalChatMessage                  Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Ingame_Chat_C::On_Recived_Chat(const struct FPalChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "On Recived Chat");

	Params::WBP_Ingame_Chat_C_On_Recived_Chat Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnChangedInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::OnChangedInputType(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnChangedInputType");

	Params::WBP_Ingame_Chat_C_OnChangedInputType Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnCompleteInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::OnCompleteInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnCompleteInput__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Ingame_Chat_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnPreviewKeyDown");

	Params::WBP_Ingame_Chat_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnTextCommittedInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ETextCommit                             InTextCommit                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::OnTextCommittedInternal(const class FText& InText, ETextCommit InTextCommit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnTextCommittedInternal");

	Params::WBP_Ingame_Chat_C_OnTextCommittedInternal Parms{};

	Parms.InText = std::move(InText);
	Parms.InTextCommit = InTextCommit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OpenChatUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::OpenChatUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OpenChatUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ShowChatInputUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::ShowChatInputUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ShowChatInputUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Tick");

	Params::WBP_Ingame_Chat_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

