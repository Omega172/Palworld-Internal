#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerRadialMenu

#include "Basic.hpp"

#include "WBP_PlayerRadialMenu_classes.hpp"
#include "WBP_PlayerRadialMenu_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.BindOpenPlayerActionMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::BindOpenPlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "BindOpenPlayerActionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.BindPlayerActionMenuEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::BindPlayerActionMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "BindPlayerActionMenuEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.Can Open Player Action Menu
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::Can_Open_Player_Action_Menu(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "Can Open Player Action Menu");

	Params::WBP_PlayerRadialMenu_C_Can_Open_Player_Action_Menu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseConstructionMenu
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::CloseConstructionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseConstructionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseSetup
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::CloseSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateConstructionMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenuConstruction_Radial_C*CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateConstructionMenu");

	Params::WBP_PlayerRadialMenu_C_CreateConstructionMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateEmoteMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::CreateEmoteMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateEmoteMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateInstructionsAdditionalWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerRadialMenu_MenuContent_C*CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreateInstructionsAdditionalWidget(const class FText& InText, class UWBP_PlayerRadialMenu_MenuContent_C** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateInstructionsAdditionalWidget");

	Params::WBP_PlayerRadialMenu_C_CreateInstructionsAdditionalWidget Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreatePlayerActionMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::CreatePlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreatePlayerActionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.EmptyFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::EmptyFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "EmptyFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.ExecuteUbergraph_WBP_PlayerRadialMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "ExecuteUbergraph_WBP_PlayerRadialMenu");

	Params::WBP_PlayerRadialMenu_C_ExecuteUbergraph_WBP_PlayerRadialMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsAnyMenuOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOpened                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::IsAnyMenuOpened(bool* IsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "IsAnyMenuOpened");

	Params::WBP_PlayerRadialMenu_C_IsAnyMenuOpened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpened != nullptr)
		*IsOpened = Parms.IsOpened;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDamagedPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerRadialMenu_C::OnDamagedPlayer(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDamagedPlayer");

	Params::WBP_PlayerRadialMenu_C_OnDamagedPlayer Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedEmoteMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedEmoteMenu(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedEmoteMenu");

	Params::WBP_PlayerRadialMenu_C_OnDecidedEmoteMenu Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Care
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnDecidedInstruction_Care()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedInstruction_Care");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Feed
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnDecidedInstruction_Feed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedInstruction_Feed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedPlayerActionMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedPlayerActionMenu(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedPlayerActionMenu");

	Params::WBP_PlayerRadialMenu_C_OnDecidedPlayerActionMenu Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnOtomoChanged_Activated
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnOtomoChanged_Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnOtomoChanged_Activated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnOtomoChanged_Inactivated
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnOtomoChanged_Inactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnOtomoChanged_Inactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPlayerRideOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnPlayerRideOn(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPlayerRideOn");

	Params::WBP_PlayerRadialMenu_C_OnPlayerRideOn Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPressConstructionMenuButton
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnPressConstructionMenuButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPressConstructionMenuButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPushedAnyWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            PushedWidgetID                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnPushedAnyWidget(const struct FGuid& PushedWidgetID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPushedAnyWidget");

	Params::WBP_PlayerRadialMenu_C_OnPushedAnyWidget Parms{};

	Parms.PushedWidgetID = std::move(PushedWidgetID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnRequestOpenChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OnRequestOpenChat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnRequestOpenChat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.Open Emote Menu
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::Open_Emote_Menu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "Open Emote Menu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenConstructionMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SelectMapObjectId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OpenConstructionMenu(class FName SelectMapObjectId, int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenConstructionMenu");

	Params::WBP_PlayerRadialMenu_C_OpenConstructionMenu Parms{};

	Parms.SelectMapObjectId = SelectMapObjectId;
	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenMenu
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenPlayerActionMenu
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OpenPlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenPlayerActionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenSetup
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::OpenSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.SetInteractEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInteractEnable                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::SetInteractEnable(bool IsInteractEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "SetInteractEnable");

	Params::WBP_PlayerRadialMenu_C_SetInteractEnable Parms{};

	Parms.IsInteractEnable = IsInteractEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.SetupEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::SetupEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "SetupEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.ShouldDisplayOpenChatPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bShouldDisplay                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::ShouldDisplayOpenChatPanel(bool* bShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "ShouldDisplayOpenChatPanel");

	Params::WBP_PlayerRadialMenu_C_ShouldDisplayOpenChatPanel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldDisplay != nullptr)
		*bShouldDisplay = Parms.bShouldDisplay;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.UnbindOpenPlayerActionMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::UnbindOpenPlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "UnbindOpenPlayerActionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.UnbindPlayerActionMenuEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerRadialMenu_C::UnbindPlayerActionMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "UnbindPlayerActionMenuEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.HasConstructionMenu
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    HasMenu                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::HasConstructionMenu(bool* HasMenu) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "HasConstructionMenu");

	Params::WBP_PlayerRadialMenu_C_HasConstructionMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasMenu != nullptr)
		*HasMenu = Parms.HasMenu;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsPlayerDying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsDying                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::IsPlayerDying(bool* IsDying) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "IsPlayerDying");

	Params::WBP_PlayerRadialMenu_C_IsPlayerDying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDying != nullptr)
		*IsDying = Parms.IsDying;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsPlayerRiding
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsRiding                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::IsPlayerRiding(bool* IsRiding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "IsPlayerRiding");

	Params::WBP_PlayerRadialMenu_C_IsPlayerRiding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsRiding != nullptr)
		*IsRiding = Parms.IsRiding;
}

}

