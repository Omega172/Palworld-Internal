#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GliderComponent

#include "Basic.hpp"

#include "BP_GliderComponent_classes.hpp"
#include "BP_GliderComponent_parameters.hpp"


namespace SDK
{

// Function BP_GliderComponent.BP_GliderComponent_C.CheckReturnSpawnedOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GliderComponent_C::CheckReturnSpawnedOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "CheckReturnSpawnedOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.ExecuteUbergraph_BP_GliderComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::ExecuteUbergraph_BP_GliderComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "ExecuteUbergraph_BP_GliderComponent");

	Params::BP_GliderComponent_C_ExecuteUbergraph_BP_GliderComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderComponent.BP_GliderComponent_C.OnChangeGliderVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::OnChangeGliderVisibility(bool bIsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnChangeGliderVisibility");

	Params::BP_GliderComponent_C_OnChangeGliderVisibility Parms{};

	Parms.bIsVisibility = bIsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderComponent.BP_GliderComponent_C.OnEndGliding
// (Event, Public, BlueprintEvent)

void UBP_GliderComponent_C::OnEndGliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnEndGliding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.OnGlidingCancleAction
// (BlueprintCallable, BlueprintEvent)

void UBP_GliderComponent_C::OnGlidingCancleAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnGlidingCancleAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.OnInitializeGlider
// (Event, Public, BlueprintEvent)

void UBP_GliderComponent_C::OnInitializeGlider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnInitializeGlider");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.OnStartGliding
// (Event, Public, BlueprintEvent)

void UBP_GliderComponent_C::OnStartGliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnStartGliding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GliderComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "ReceiveTick");

	Params::BP_GliderComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderComponent.BP_GliderComponent_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GliderComponent_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.SpawnGlidingEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GliderComponent_C::SpawnGlidingEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "SpawnGlidingEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderComponent.BP_GliderComponent_C.�������
// (BlueprintCallable, BlueprintEvent)

void UBP_GliderComponent_C::________()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderComponent_C", "�������");

	UObject::ProcessEvent(Func, nullptr);
}

}

