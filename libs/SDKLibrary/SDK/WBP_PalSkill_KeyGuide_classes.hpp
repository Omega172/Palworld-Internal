#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalSkill_KeyGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C
// 0x00F8 (0x0500 - 0x0408)
class UWBP_PalSkill_KeyGuide_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_1;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_2;                               // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_3;                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_Aim;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_RideSkill;                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_PalSkillEntry_C*>           SkillEntryArray;                                   // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalShooterComponent*                   CurrentShooter;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ShootMsgID;                                        // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FlyMsgID;                                          // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<int32, class UPalActiveSkill*>           CurrentSkillMap;                                   // 0x0470(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APalCharacter*                          As_Pal_Character;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>           SoftRideCharacter;                                 // 0x04C8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          HasAdditionalRidingSkill;                          // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void EndAim();
	void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint);
	void GetRideCharacterParameter(class UPalIndividualCharacterParameter** IndividualParameter);
	void Hide();
	void OnGetOff(class AActor* RideActor);
	void OnInitialized();
	void OnPlaySkillFail();
	void OnRide(class AActor* RideActor);
	void OnUpdateEquipWaza(class UPalIndividualCharacterParameter* IndividualParameter);
	void Setup();
	void StartAim();
	void UpdateSkillInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalSkill_KeyGuide_C">();
	}
	static class UWBP_PalSkill_KeyGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalSkill_KeyGuide_C>();
	}
};
static_assert(alignof(UWBP_PalSkill_KeyGuide_C) == 0x000008, "Wrong alignment on UWBP_PalSkill_KeyGuide_C");
static_assert(sizeof(UWBP_PalSkill_KeyGuide_C) == 0x000500, "Wrong size on UWBP_PalSkill_KeyGuide_C");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalSkill_KeyGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_1) == 0x000410, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_2) == 0x000418, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_3) == 0x000420, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_Aim) == 0x000428, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_Aim' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_RideSkill) == 0x000430, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_RideSkill' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, SkillEntryArray) == 0x000438, "Member 'UWBP_PalSkill_KeyGuide_C::SkillEntryArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, CurrentShooter) == 0x000448, "Member 'UWBP_PalSkill_KeyGuide_C::CurrentShooter' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, ShootMsgID) == 0x000450, "Member 'UWBP_PalSkill_KeyGuide_C::ShootMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, FlyMsgID) == 0x000460, "Member 'UWBP_PalSkill_KeyGuide_C::FlyMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, CurrentSkillMap) == 0x000470, "Member 'UWBP_PalSkill_KeyGuide_C::CurrentSkillMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, As_Pal_Character) == 0x0004C0, "Member 'UWBP_PalSkill_KeyGuide_C::As_Pal_Character' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, SoftRideCharacter) == 0x0004C8, "Member 'UWBP_PalSkill_KeyGuide_C::SoftRideCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, HasAdditionalRidingSkill) == 0x0004F8, "Member 'UWBP_PalSkill_KeyGuide_C::HasAdditionalRidingSkill' has a wrong offset!");

}

