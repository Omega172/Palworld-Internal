#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalHUD_InGame_InputListener

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "EPalUIInGameMainMenuTabType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C
// 0x0080 (0x04A0 - 0x0420)
class UWBP_PalHUD_InGame_InputListener_C final : public UPalUIInGameInputListener
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_Chat_C*                     WBP_Ingame_Chat;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas;           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_C*                WBP_PlayerRadialMenu;                              // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     EscapeActionName;                                  // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     OpenCharacterMenuActionName;                       // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     OpenBuildMenuActionName;                           // 0x0458(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     OpenTechnologyMenuActionName;                      // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     OpenWorldMapActionName;                            // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     OpenPalStatusActionName;                           // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CharacterMenuActionHandle;                         // 0x0478(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction     OpenChatActionName;                                // 0x047C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ChageCategoryChatActionName;                       // 0x0484(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   ChangeCategoryChatActionHandle;                    // 0x048C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   WorldMapActionHandle;                              // 0x0490(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   TechnologyMenuActionHandle;                        // 0x0494(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   PalStatusActionHandle;                             // 0x0498(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature();
	void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_PlayerRadialMenu_K2Node_ComponentBoundEvent_1_OnRequestOpenChat__DelegateSignature();
	void CanOpenAnyUI(bool* CanOpenUI);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FPalKeyConfigSettings& PrevSettings, const struct FPalKeyConfigSettings& NewSettings);
	void ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint);
	void OnKeyConfigChanged(const struct FPalKeyConfigSettings& PreSetting, const struct FPalKeyConfigSettings& NewSetting);
	void OnSetup_AfterCreatedPlayer();
	void OnTriggerEscape();
	void OnTriggerOpenBuildMenu();
	void OnTriggerOpenCraftMenu();
	void OnTriggerOpenInventoryMenu();
	void OnTriggerOpenPalStatus();
	void OnTriggerOpenTechnologyMenu();
	void OnTriggerWorldMap();
	void OpenBuildMenu(const int32 BuildObjectTypeA);
	void OpenBuildRadialMenu(const class FName BuildObjectId);
	void OpenBuildRadialMenuWithSelectedIndex(const int32 SelectedIndex);
	void OpenChat();
	void OpenMenu_Internal(EPalUIInGameMainMenuTabType TabType, EPalBuildObjectTypeA BuildObjectTypeA);
	void Setup_Input_Action();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalHUD_InGame_InputListener_C">();
	}
	static class UWBP_PalHUD_InGame_InputListener_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalHUD_InGame_InputListener_C>();
	}
};
static_assert(alignof(UWBP_PalHUD_InGame_InputListener_C) == 0x000008, "Wrong alignment on UWBP_PalHUD_InGame_InputListener_C");
static_assert(sizeof(UWBP_PalHUD_InGame_InputListener_C) == 0x0004A0, "Wrong size on UWBP_PalHUD_InGame_InputListener_C");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, UberGraphFrame) == 0x000420, "Member 'UWBP_PalHUD_InGame_InputListener_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, Default_In) == 0x000428, "Member 'UWBP_PalHUD_InGame_InputListener_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, WBP_Ingame_Chat) == 0x000430, "Member 'UWBP_PalHUD_InGame_InputListener_C::WBP_Ingame_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, WBP_PalInteractiveObjectIndicatorCanvas) == 0x000438, "Member 'UWBP_PalHUD_InGame_InputListener_C::WBP_PalInteractiveObjectIndicatorCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, WBP_PlayerRadialMenu) == 0x000440, "Member 'UWBP_PalHUD_InGame_InputListener_C::WBP_PlayerRadialMenu' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, EscapeActionName) == 0x000448, "Member 'UWBP_PalHUD_InGame_InputListener_C::EscapeActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenCharacterMenuActionName) == 0x000450, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenCharacterMenuActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenBuildMenuActionName) == 0x000458, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenBuildMenuActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenTechnologyMenuActionName) == 0x000460, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenTechnologyMenuActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenWorldMapActionName) == 0x000468, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenWorldMapActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenPalStatusActionName) == 0x000470, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenPalStatusActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, CharacterMenuActionHandle) == 0x000478, "Member 'UWBP_PalHUD_InGame_InputListener_C::CharacterMenuActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, OpenChatActionName) == 0x00047C, "Member 'UWBP_PalHUD_InGame_InputListener_C::OpenChatActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, ChageCategoryChatActionName) == 0x000484, "Member 'UWBP_PalHUD_InGame_InputListener_C::ChageCategoryChatActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, ChangeCategoryChatActionHandle) == 0x00048C, "Member 'UWBP_PalHUD_InGame_InputListener_C::ChangeCategoryChatActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, WorldMapActionHandle) == 0x000490, "Member 'UWBP_PalHUD_InGame_InputListener_C::WorldMapActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, TechnologyMenuActionHandle) == 0x000494, "Member 'UWBP_PalHUD_InGame_InputListener_C::TechnologyMenuActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUD_InGame_InputListener_C, PalStatusActionHandle) == 0x000498, "Member 'UWBP_PalHUD_InGame_InputListener_C::PalStatusActionHandle' has a wrong offset!");

}

