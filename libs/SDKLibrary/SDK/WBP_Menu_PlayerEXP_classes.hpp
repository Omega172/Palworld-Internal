#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PlayerEXP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_Menu_CharacterExpGauge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_PlayerEXP.WBP_Menu_PlayerEXP_C
// 0x0008 (0x0610 - 0x0608)
class UWBP_Menu_PlayerEXP_C final : public UWBP_Menu_CharacterExpGauge_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Menu_PlayerEXP_C;               // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Menu_PlayerEXP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_PlayerEXP_C">();
	}
	static class UWBP_Menu_PlayerEXP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_PlayerEXP_C>();
	}
};
static_assert(alignof(UWBP_Menu_PlayerEXP_C) == 0x000008, "Wrong alignment on UWBP_Menu_PlayerEXP_C");
static_assert(sizeof(UWBP_Menu_PlayerEXP_C) == 0x000610, "Wrong size on UWBP_Menu_PlayerEXP_C");
static_assert(offsetof(UWBP_Menu_PlayerEXP_C, UberGraphFrame_WBP_Menu_PlayerEXP_C) == 0x000608, "Member 'UWBP_Menu_PlayerEXP_C::UberGraphFrame_WBP_Menu_PlayerEXP_C' has a wrong offset!");

}

