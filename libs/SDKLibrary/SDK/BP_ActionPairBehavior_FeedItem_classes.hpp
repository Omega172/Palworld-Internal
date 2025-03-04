#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairBehavior_FeedItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_ActionPairBehaviorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C
// 0x0010 (0x0270 - 0x0260)
class UBP_ActionPairBehavior_FeedItem_C final : public UBP_ActionPairBehaviorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionPairBehavior_FeedItem_C;   // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionPairBehavior_FeedItem(int32 EntryPoint);
	void GetHumanAnime(class UAnimMontage** Montage);
	void OnBeginAction();
	void OnCompleted(class AActor* Human, class AActor* Monster);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPairBehavior_FeedItem_C">();
	}
	static class UBP_ActionPairBehavior_FeedItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPairBehavior_FeedItem_C>();
	}
};
static_assert(alignof(UBP_ActionPairBehavior_FeedItem_C) == 0x000010, "Wrong alignment on UBP_ActionPairBehavior_FeedItem_C");
static_assert(sizeof(UBP_ActionPairBehavior_FeedItem_C) == 0x000270, "Wrong size on UBP_ActionPairBehavior_FeedItem_C");
static_assert(offsetof(UBP_ActionPairBehavior_FeedItem_C, UberGraphFrame_BP_ActionPairBehavior_FeedItem_C) == 0x000260, "Member 'UBP_ActionPairBehavior_FeedItem_C::UberGraphFrame_BP_ActionPairBehavior_FeedItem_C' has a wrong offset!");

}

