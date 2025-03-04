#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameConstruction

#include "Basic.hpp"

#include "WBP_IngameConstruction_classes.hpp"
#include "WBP_IngameConstruction_parameters.hpp"


namespace SDK
{

// Function WBP_IngameConstruction.WBP_IngameConstruction_C.UpdateDisplayContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBuildingModel*              Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::UpdateDisplayContent(class UPalUIBuildingModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "UpdateDisplayContent");

	Params::WBP_IngameConstruction_C_UpdateDisplayContent Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.UpdateBuildingLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBuildingModel*              Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::UpdateBuildingLimit(class UPalUIBuildingModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "UpdateBuildingLimit");

	Params::WBP_IngameConstruction_C_UpdateBuildingLimit Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameConstruction_C::SetWarningText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetWarningText");

	Params::WBP_IngameConstruction_C_SetWarningText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetVisibilityOutSideBaseCampWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::SetVisibilityOutSideBaseCampWarning(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetVisibilityOutSideBaseCampWarning");

	Params::WBP_IngameConstruction_C_SetVisibilityOutSideBaseCampWarning Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetupKeyGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBuildingModel*              Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::SetupKeyGuide(class UPalUIBuildingModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetupKeyGuide");

	Params::WBP_IngameConstruction_C_SetupKeyGuide Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData              InBuildObjectData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameConstruction_C::Setup(const struct FPalBuildObjectData& InBuildObjectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "Setup");

	Params::WBP_IngameConstruction_C_Setup Parms{};

	Parms.InBuildObjectData = std::move(InBuildObjectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetMaterial
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             StaticItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::SetMaterial(int32 Param_Index, class FName StaticItemId, int32 ItemCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetMaterial");

	Params::WBP_IngameConstruction_C_SetMaterial Parms{};

	Parms.Param_Index = Param_Index;
	Parms.StaticItemId = StaticItemId;
	Parms.ItemCount = ItemCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetEnableWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::SetEnableWarning(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetEnableWarning");

	Params::WBP_IngameConstruction_C_SetEnableWarning Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.SetBuildObjectName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameConstruction_C::SetBuildObjectName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "SetBuildObjectName");

	Params::WBP_IngameConstruction_C_SetBuildObjectName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.ResetAllUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBuildingModel*              Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::ResetAllUI(class UPalUIBuildingModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "ResetAllUI");

	Params::WBP_IngameConstruction_C_ResetAllUI Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameConstruction_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.GetBuildingWarningType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalUIBuildingModel*              Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalBuildingNumWarningType              NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::GetBuildingWarningType(class UPalUIBuildingModel* Model, EPalBuildingNumWarningType* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "GetBuildingWarningType");

	Params::WBP_IngameConstruction_C_GetBuildingWarningType Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.ExecuteUbergraph_WBP_IngameConstruction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_C::ExecuteUbergraph_WBP_IngameConstruction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "ExecuteUbergraph_WBP_IngameConstruction");

	Params::WBP_IngameConstruction_C_ExecuteUbergraph_WBP_IngameConstruction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction.WBP_IngameConstruction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameConstruction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

