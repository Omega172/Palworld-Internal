#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalChatUIControlOverlay

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalChatUIControlOverlay.WBP_PalChatUIControlOverlay_C
// 0x0030 (0x0460 - 0x0430)
class UWBP_PalChatUIControlOverlay_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Ingame_Chat_C*                     ControllChatUI;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ChageCategoryChatActionName;                       // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     CancelActionHandle_Default;                        // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     CancelActionHandle_Escape;                         // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     SendChatActionhandle;                              // 0x0458(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeChatCategory();
	void Destruct();
	void ExecuteUbergraph_WBP_PalChatUIControlOverlay(int32 EntryPoint);
	void OnCancel_ForceClose();
	void OnCancel_ForPad();
	void OnClose();
	void OnCompletedChatInput();
	void OnSetup();
	void SendChat();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalChatUIControlOverlay_C">();
	}
	static class UWBP_PalChatUIControlOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalChatUIControlOverlay_C>();
	}
};
static_assert(alignof(UWBP_PalChatUIControlOverlay_C) == 0x000008, "Wrong alignment on UWBP_PalChatUIControlOverlay_C");
static_assert(sizeof(UWBP_PalChatUIControlOverlay_C) == 0x000460, "Wrong size on UWBP_PalChatUIControlOverlay_C");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, UberGraphFrame) == 0x000430, "Member 'UWBP_PalChatUIControlOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, ControllChatUI) == 0x000438, "Member 'UWBP_PalChatUIControlOverlay_C::ControllChatUI' has a wrong offset!");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, ChageCategoryChatActionName) == 0x000440, "Member 'UWBP_PalChatUIControlOverlay_C::ChageCategoryChatActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, CancelActionHandle_Default) == 0x000448, "Member 'UWBP_PalChatUIControlOverlay_C::CancelActionHandle_Default' has a wrong offset!");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, CancelActionHandle_Escape) == 0x000450, "Member 'UWBP_PalChatUIControlOverlay_C::CancelActionHandle_Escape' has a wrong offset!");
static_assert(offsetof(UWBP_PalChatUIControlOverlay_C, SendChatActionhandle) == 0x000458, "Member 'UWBP_PalChatUIControlOverlay_C::SendChatActionhandle' has a wrong offset!");

}

