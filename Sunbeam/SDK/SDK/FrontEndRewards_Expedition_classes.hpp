#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Expedition

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_Expedition.FrontEndRewards_Expedition_C
// 0x0068 (0x0330 - 0x02C8)
class UFrontEndRewards_Expedition_C final : public UFortRewardExpeditionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               OverlayCheck;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayFailure;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySuccess;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextChanceSuccess;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextExpeditionName;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VehicleImage;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortExpeditionItem*                    ExpeditionItem;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair>  CurrentRewards;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnExpeditionCompleted;                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnExpeditionCompleted__DelegateSignature(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ExecuteUbergraph_FrontEndRewards_Expedition(int32 EntryPoint);
	void Construct();
	void OnPrimaryAction();
	void OnCollectExpeditionCompleted(const class UFortExpeditionItem* Expedition, bool bSucceeded, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void TransitionOutBegin();
	void TransitionInBegin();
	void PopulateFromExpedition(class UFortExpeditionItem* Item);
	void SetBrushFromExpedition();
	void SetTitleFromExpedition();
	void SetSuccessChanceFromExpedition();
	void Check();
	void ContinueFail();
	void ContinueSuccess();
	void HandleTransitionInComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_Expedition_C">();
	}
	static class UFrontEndRewards_Expedition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_Expedition_C>();
	}
};
static_assert(alignof(UFrontEndRewards_Expedition_C) == 0x000008, "Wrong alignment on UFrontEndRewards_Expedition_C");
static_assert(sizeof(UFrontEndRewards_Expedition_C) == 0x000330, "Wrong size on UFrontEndRewards_Expedition_C");
static_assert(offsetof(UFrontEndRewards_Expedition_C, UberGraphFrame) == 0x0002C8, "Member 'UFrontEndRewards_Expedition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, OverlayCheck) == 0x0002D0, "Member 'UFrontEndRewards_Expedition_C::OverlayCheck' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, OverlayFailure) == 0x0002D8, "Member 'UFrontEndRewards_Expedition_C::OverlayFailure' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, OverlaySuccess) == 0x0002E0, "Member 'UFrontEndRewards_Expedition_C::OverlaySuccess' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, Switcher) == 0x0002E8, "Member 'UFrontEndRewards_Expedition_C::Switcher' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, TextChanceSuccess) == 0x0002F0, "Member 'UFrontEndRewards_Expedition_C::TextChanceSuccess' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, TextExpeditionName) == 0x0002F8, "Member 'UFrontEndRewards_Expedition_C::TextExpeditionName' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, VehicleImage) == 0x000300, "Member 'UFrontEndRewards_Expedition_C::VehicleImage' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, ExpeditionItem) == 0x000308, "Member 'UFrontEndRewards_Expedition_C::ExpeditionItem' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, CurrentRewards) == 0x000310, "Member 'UFrontEndRewards_Expedition_C::CurrentRewards' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Expedition_C, OnExpeditionCompleted) == 0x000320, "Member 'UFrontEndRewards_Expedition_C::OnExpeditionCompleted' has a wrong offset!");

}

