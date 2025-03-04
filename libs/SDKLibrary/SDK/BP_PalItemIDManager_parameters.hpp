#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalItemIDManager

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalItemIDManager.BP_PalItemIDManager_C.GetPalEggRank
// 0x0050 (0x0050 - 0x0000)
struct BP_PalItemIDManager_C_GetPalEggRank final
{
public:
	int32                                         PalRarity;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                WorldContextObject;                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         PalEggRank;                                        // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalEggRankInfo                        CallFunc_Array_Get_Item;                           // 0x0024(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57FE[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57FF[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalItemIDManager_C_GetPalEggRank) == 0x000008, "Wrong alignment on BP_PalItemIDManager_C_GetPalEggRank");
static_assert(sizeof(BP_PalItemIDManager_C_GetPalEggRank) == 0x000050, "Wrong size on BP_PalItemIDManager_C_GetPalEggRank");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, PalRarity) == 0x000000, "Member 'BP_PalItemIDManager_C_GetPalEggRank::PalRarity' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, WorldContextObject) == 0x000008, "Member 'BP_PalItemIDManager_C_GetPalEggRank::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, PalEggRank) == 0x000010, "Member 'BP_PalItemIDManager_C_GetPalEggRank::PalEggRank' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_PalItemIDManager_C_GetPalEggRank::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Array_Get_Item) == 0x000024, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Array_Length_ReturnValue_1) == 0x000034, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, Temp_int_Variable) == 0x000038, "Member 'BP_PalItemIDManager_C_GetPalEggRank::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_PalItemIDManager_C_GetPalEggRank::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetPalEggRank, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_PalItemIDManager_C_GetPalEggRank::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PalItemIDManager.BP_PalItemIDManager_C.GetStaticItemIdPalEgg
// 0x0098 (0x0098 - 0x0000)
struct BP_PalItemIDManager_C_GetStaticItemIdPalEgg final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterID;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalItemPalEggDataHandle               PalEggDataHandle;                                  // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         PalEggRank;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5800[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5801[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5802[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5803[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element1;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element2;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5804[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRarity_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalItemPalEggDataHandle               CallFunc_Map_Find_Value;                           // 0x0080(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5805[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPalEggRank_PalEggRank;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg) == 0x000008, "Wrong alignment on BP_PalItemIDManager_C_GetStaticItemIdPalEgg");
static_assert(sizeof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg) == 0x000098, "Wrong size on BP_PalItemIDManager_C_GetStaticItemIdPalEgg");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, WorldContextObject) == 0x000000, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CharacterID) == 0x000008, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CharacterID' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, ReturnValue) == 0x000010, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, PalEggDataHandle) == 0x000018, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::PalEggDataHandle' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, PalEggRank) == 0x000028, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::PalEggRank' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Conv_NameToString_ReturnValue) == 0x000030, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000050, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Array_IsEmpty_ReturnValue) == 0x000058, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000068, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000070, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetElementType_Element1) == 0x000078, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetElementType_Element1' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetElementType_Element2) == 0x000079, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetElementType_Element2' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetRarity_ReturnValue) == 0x00007C, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Map_Find_Value) == 0x000080, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalItemIDManager_C_GetStaticItemIdPalEgg, CallFunc_GetPalEggRank_PalEggRank) == 0x000094, "Member 'BP_PalItemIDManager_C_GetStaticItemIdPalEgg::CallFunc_GetPalEggRank_PalEggRank' has a wrong offset!");

}

