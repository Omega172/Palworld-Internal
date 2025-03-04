#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Map_IconBoss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Map_IconBoss.WBP_Map_IconBoss_C
// 0x0090 (0x04E8 - 0x0458)
class UWBP_Map_IconBoss_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Map_IconBoss_C;                 // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_Boss;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Frame;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Oilrig;                                       // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CheckMark;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CheckMark_Shadow;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Defeated;                                       // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F70[0x3];                                     // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalSpawnerOneTribeInfo                Spawner_Info;                                      // 0x049C(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   Character_Id;                                      // 0x04BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Spawner_Id;                                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Original_Character_Id;                             // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Original_Spawner_Id;                               // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              LocationType;                                      // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
	void GetInvisibleButton(class UWidget** Button);
	void GetLocationType(EPalLocationType* Type);
	void SetBoss(class FName CharacterID, int32 Param_Level, class FName Param_Spawner_Id, class FName OriginalCharacterId, class FName OriginalSpawnerId);
	void SetOilrig(int32 Param_Level, class FName Param_Character_Id);
	void UpdateCheckState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconBoss_C">();
	}
	static class UWBP_Map_IconBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconBoss_C>();
	}
};
static_assert(alignof(UWBP_Map_IconBoss_C) == 0x000008, "Wrong alignment on UWBP_Map_IconBoss_C");
static_assert(sizeof(UWBP_Map_IconBoss_C) == 0x0004E8, "Wrong size on UWBP_Map_IconBoss_C");
static_assert(offsetof(UWBP_Map_IconBoss_C, UberGraphFrame_WBP_Map_IconBoss_C) == 0x000458, "Member 'UWBP_Map_IconBoss_C::UberGraphFrame_WBP_Map_IconBoss_C' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, CanvasPanel_Boss) == 0x000460, "Member 'UWBP_Map_IconBoss_C::CanvasPanel_Boss' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Icon_Frame) == 0x000468, "Member 'UWBP_Map_IconBoss_C::Icon_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Icon_Oilrig) == 0x000470, "Member 'UWBP_Map_IconBoss_C::Icon_Oilrig' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Image_CheckMark) == 0x000478, "Member 'UWBP_Map_IconBoss_C::Image_CheckMark' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Image_CheckMark_Shadow) == 0x000480, "Member 'UWBP_Map_IconBoss_C::Image_CheckMark_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, WBP_PalCommonButton) == 0x000488, "Member 'UWBP_Map_IconBoss_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, WBP_PalCommonCharacterIcon) == 0x000490, "Member 'UWBP_Map_IconBoss_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Is_Defeated) == 0x000498, "Member 'UWBP_Map_IconBoss_C::Is_Defeated' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Spawner_Info) == 0x00049C, "Member 'UWBP_Map_IconBoss_C::Spawner_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Character_Id) == 0x0004BC, "Member 'UWBP_Map_IconBoss_C::Character_Id' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Level) == 0x0004C4, "Member 'UWBP_Map_IconBoss_C::Level' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Spawner_Id) == 0x0004C8, "Member 'UWBP_Map_IconBoss_C::Spawner_Id' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Original_Character_Id) == 0x0004D0, "Member 'UWBP_Map_IconBoss_C::Original_Character_Id' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Original_Spawner_Id) == 0x0004D8, "Member 'UWBP_Map_IconBoss_C::Original_Spawner_Id' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, LocationType) == 0x0004E0, "Member 'UWBP_Map_IconBoss_C::LocationType' has a wrong offset!");

}

