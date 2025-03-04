#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalInvaderManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalInvaderManager.BP_PalInvaderManager_C
// 0x0020 (0x0240 - 0x0220)
class UBP_PalInvaderManager_C final : public UPalInvaderManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalIncidentNotifyListener_C*        IncidentListener;                                  // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   InvaderEnemyIncidentId;                            // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   VisitorNPCIncidentId;                              // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalInvaderManager(int32 EntryPoint);
	void OnIncidentStateNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const struct FPalIncidentNotifyParameter& Parameter);
	void RegisterIncidentListener();
	class UPalInvaderIncidentBase* RequestIncident(class FName IncidentName, class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
	class UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
	class UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
	void UnregisterIncidentListener();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalInvaderManager_C">();
	}
	static class UBP_PalInvaderManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalInvaderManager_C>();
	}
};
static_assert(alignof(UBP_PalInvaderManager_C) == 0x000008, "Wrong alignment on UBP_PalInvaderManager_C");
static_assert(sizeof(UBP_PalInvaderManager_C) == 0x000240, "Wrong size on UBP_PalInvaderManager_C");
static_assert(offsetof(UBP_PalInvaderManager_C, UberGraphFrame) == 0x000220, "Member 'UBP_PalInvaderManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalInvaderManager_C, IncidentListener) == 0x000228, "Member 'UBP_PalInvaderManager_C::IncidentListener' has a wrong offset!");
static_assert(offsetof(UBP_PalInvaderManager_C, InvaderEnemyIncidentId) == 0x000230, "Member 'UBP_PalInvaderManager_C::InvaderEnemyIncidentId' has a wrong offset!");
static_assert(offsetof(UBP_PalInvaderManager_C, VisitorNPCIncidentId) == 0x000238, "Member 'UBP_PalInvaderManager_C::VisitorNPCIncidentId' has a wrong offset!");

}

