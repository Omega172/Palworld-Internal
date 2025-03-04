#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalClimbingComponent

#include "Basic.hpp"

#include "BP_PalClimbingComponent_classes.hpp"
#include "BP_PalClimbingComponent_parameters.hpp"


namespace SDK
{

// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.Cancel Ray Check
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::Cancel_Ray_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "Cancel Ray Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.CanClimbingStart
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::CanClimbingStart(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "CanClimbingStart");

	Params::BP_PalClimbingComponent_C_CanClimbingStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.CenterRayCast
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitPos                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PalClimbingComponent_C::CenterRayCast(bool* IsHit, struct FVector* HitPos, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "CenterRayCast");

	Params::BP_PalClimbingComponent_C_CenterRayCast Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitPos != nullptr)
		*HitPos = std::move(Parms.HitPos);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.CheckClimbingMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::CheckClimbingMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "CheckClimbingMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.CheckUpToTop
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Finish                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::CheckUpToTop(bool* Finish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "CheckUpToTop");

	Params::BP_PalClimbingComponent_C_CheckUpToTop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Finish != nullptr)
		*Finish = Parms.Finish;
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ClimbingMainUpdate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::ClimbingMainUpdate(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ClimbingMainUpdate");

	Params::BP_PalClimbingComponent_C_ClimbingMainUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ClimbUpAtTopEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::ClimbUpAtTopEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ClimbUpAtTopEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.DelayCanClimbing
// (BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::DelayCanClimbing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "DelayCanClimbing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.DiagonalRayCast
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::DiagonalRayCast(bool IsUp, bool IsRight, bool* IsHit, struct FVector* HitPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "DiagonalRayCast");

	Params::BP_PalClimbingComponent_C_DiagonalRayCast Parms{};

	Parms.IsUp = IsUp;
	Parms.IsRight = IsRight;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitPoint != nullptr)
		*HitPoint = std::move(Parms.HitPoint);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ExecuteUbergraph_BP_PalClimbingComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::ExecuteUbergraph_BP_PalClimbingComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ExecuteUbergraph_BP_PalClimbingComponent");

	Params::BP_PalClimbingComponent_C_ExecuteUbergraph_BP_PalClimbingComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.FindLadder
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   OutActors                                              (Parm, OutParm)

void UBP_PalClimbingComponent_C::FindLadder(bool* IsHit, TArray<class AActor*>* OutActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "FindLadder");

	Params::BP_PalClimbingComponent_C_FindLadder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ForceCancelClimb
// (Event, Public, BlueprintEvent)

void UBP_PalClimbingComponent_C::ForceCancelClimb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ForceCancelClimb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.GetSelfLocationWithOffsetBack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          SelfPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::GetSelfLocationWithOffsetBack(struct FVector* SelfPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "GetSelfLocationWithOffsetBack");

	Params::BP_PalClimbingComponent_C_GetSelfLocationWithOffsetBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelfPos != nullptr)
		*SelfPos = std::move(Parms.SelfPos);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.GroundCheck
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsGround                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::GroundCheck(bool* IsGround)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "GroundCheck");

	Params::BP_PalClimbingComponent_C_GroundCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsGround != nullptr)
		*IsGround = Parms.IsGround;
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.HandIK
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::HandIK()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "HandIK");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.IsStaminaEmpty
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Empty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::IsStaminaEmpty(bool* Empty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "IsStaminaEmpty");

	Params::BP_PalClimbingComponent_C_IsStaminaEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Empty != nullptr)
		*Empty = Parms.Empty;
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.LineTrace_ForClimbComponent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EndPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PalClimbingComponent_C::LineTrace_ForClimbComponent(const struct FVector& StartPos, const struct FVector& EndPos, bool* IsHit, struct FHitResult* HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "LineTrace_ForClimbComponent");

	Params::BP_PalClimbingComponent_C_LineTrace_ForClimbComponent Parms{};

	Parms.StartPos = std::move(StartPos);
	Parms.EndPos = std::move(EndPos);

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ObjectName_DebugShow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::ObjectName_DebugShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ObjectName_DebugShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnBlendOut_085F600F42305157C1A542B1D6539EF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnBlendOut_085F600F42305157C1A542B1D6539EF9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnBlendOut_085F600F42305157C1A542B1D6539EF9");

	Params::BP_PalClimbingComponent_C_OnBlendOut_085F600F42305157C1A542B1D6539EF9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnCompleted_085F600F42305157C1A542B1D6539EF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnCompleted_085F600F42305157C1A542B1D6539EF9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnCompleted_085F600F42305157C1A542B1D6539EF9");

	Params::BP_PalClimbingComponent_C_OnCompleted_085F600F42305157C1A542B1D6539EF9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnEndClimbing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::OnEndClimbing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnEndClimbing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnInterrupted_085F600F42305157C1A542B1D6539EF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnInterrupted_085F600F42305157C1A542B1D6539EF9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnInterrupted_085F600F42305157C1A542B1D6539EF9");

	Params::BP_PalClimbingComponent_C_OnInterrupted_085F600F42305157C1A542B1D6539EF9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnMovementModeChangedDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*   Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           NewMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalCharacterMovementCustomMode         PrevCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalCharacterMovementCustomMode         NewCustomMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnMovementModeChangedDelegate______0(class UPalCharacterMovementComponent* Component, EMovementMode PrevMode, EMovementMode NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnMovementModeChangedDelegate_����_0");

	Params::BP_PalClimbingComponent_C_OnMovementModeChangedDelegate______0 Parms{};

	Parms.Component = Component;
	Parms.PrevMode = PrevMode;
	Parms.NewMode = NewMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnNotifyBegin_085F600F42305157C1A542B1D6539EF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnNotifyBegin_085F600F42305157C1A542B1D6539EF9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnNotifyBegin_085F600F42305157C1A542B1D6539EF9");

	Params::BP_PalClimbingComponent_C_OnNotifyBegin_085F600F42305157C1A542B1D6539EF9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.OnNotifyEnd_085F600F42305157C1A542B1D6539EF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::OnNotifyEnd_085F600F42305157C1A542B1D6539EF9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "OnNotifyEnd_085F600F42305157C1A542B1D6539EF9");

	Params::BP_PalClimbingComponent_C_OnNotifyEnd_085F600F42305157C1A542B1D6539EF9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.RayCollisionCheckEndExtrusion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::RayCollisionCheckEndExtrusion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "RayCollisionCheckEndExtrusion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalClimbingComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ReceiveTick");

	Params::BP_PalClimbingComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.RequestEndClimbing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::RequestEndClimbing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "RequestEndClimbing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.ResetPlayerCollision
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::ResetPlayerCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "ResetPlayerCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.SideRayCast
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::SideRayCast(bool IsRight, bool* IsHit, struct FVector* HitPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "SideRayCast");

	Params::BP_PalClimbingComponent_C_SideRayCast Parms{};

	Parms.IsRight = IsRight;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitPoint != nullptr)
		*HitPoint = std::move(Parms.HitPoint);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.SphereTrace_ForClimbComponent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EndPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PalClimbingComponent_C::SphereTrace_ForClimbComponent(const struct FVector& StartPos, const struct FVector& EndPos, bool* IsHit, struct FHitResult* HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "SphereTrace_ForClimbComponent");

	Params::BP_PalClimbingComponent_C_SphereTrace_ForClimbComponent Parms{};

	Parms.StartPos = std::move(StartPos);
	Parms.EndPos = std::move(EndPos);

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.StartClimb
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PalClimbingComponent_C::StartClimb(const struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "StartClimb");

	Params::BP_PalClimbingComponent_C_StartClimb Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.StartClimbByNetwork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::StartClimbByNetwork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "StartClimbByNetwork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.StartClimbing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PalClimbingComponent_C::StartClimbing(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "StartClimbing");

	Params::BP_PalClimbingComponent_C_StartClimbing Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.TryClimbAfterGrappling
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalClimbingComponent_C::TryClimbAfterGrappling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "TryClimbAfterGrappling");

	Params::BP_PalClimbingComponent_C_TryClimbAfterGrappling Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.UpdateActorRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          CheckDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::UpdateActorRotate(const struct FVector& CheckDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "UpdateActorRotate");

	Params::BP_PalClimbingComponent_C_UpdateActorRotate Parms{};

	Parms.CheckDirection = std::move(CheckDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.UpdateClimbBuff
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalClimbingComponent_C::UpdateClimbBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "UpdateClimbBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.UpRayCast
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitPos                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::UpRayCast(bool IsUp, bool* IsHit, struct FVector* HitPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "UpRayCast");

	Params::BP_PalClimbingComponent_C_UpRayCast Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

	if (HitPos != nullptr)
		*HitPos = std::move(Parms.HitPos);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.UpToTopUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalClimbingComponent_C::UpToTopUpdate(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "UpToTopUpdate");

	Params::BP_PalClimbingComponent_C_UpToTopUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalClimbingComponent.BP_PalClimbingComponent_C.�������_OnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_PalClimbingComponent_C::_________OnDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalClimbingComponent_C", "�������_OnDead");

	Params::BP_PalClimbingComponent_C__________OnDead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

