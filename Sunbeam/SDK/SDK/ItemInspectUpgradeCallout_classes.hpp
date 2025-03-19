#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectUpgradeCallout

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C
// 0x0090 (0x02D0 - 0x0240)
class UItemInspectUpgradeCallout_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      EvolveButton;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCount_C*                           ItemCount;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemCountBG;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainBorderWidget;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherButton;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      UpgradeButton;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UpgradeHighlight;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UpgradeText;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UpgradeTextOverlay;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UpgradeCost;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnRequestUpgrade;                                  // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           UpgradeColor;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMaxLevel;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRequestUpgrade__DelegateSignature();
	void ExecuteUbergraph_ItemInspectUpgradeCallout(int32 EntryPoint);
	void BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Refresh();
	void SetItemToRepresent(class UFortItem* Item_0);
	void OnShow();
	void DisableUpgrade();
	void EnableUpgrade();
	void RefreshOnUpgrade();
	void IsUpgradeReady(bool* UpgradeReady);
	void ShowUpgradeInfo();
	void ShowEvolutionInfo();
	void IsEvolutionReady(bool* EvolutionReady);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectUpgradeCallout_C">();
	}
	static class UItemInspectUpgradeCallout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectUpgradeCallout_C>();
	}
};
static_assert(alignof(UItemInspectUpgradeCallout_C) == 0x000008, "Wrong alignment on UItemInspectUpgradeCallout_C");
static_assert(sizeof(UItemInspectUpgradeCallout_C) == 0x0002D0, "Wrong size on UItemInspectUpgradeCallout_C");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UberGraphFrame) == 0x000240, "Member 'UItemInspectUpgradeCallout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, EvolveButton) == 0x000248, "Member 'UItemInspectUpgradeCallout_C::EvolveButton' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, Image_3) == 0x000250, "Member 'UItemInspectUpgradeCallout_C::Image_3' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, ItemCount) == 0x000258, "Member 'UItemInspectUpgradeCallout_C::ItemCount' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, ItemCountBG) == 0x000260, "Member 'UItemInspectUpgradeCallout_C::ItemCountBG' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, MainBorderWidget) == 0x000268, "Member 'UItemInspectUpgradeCallout_C::MainBorderWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, SwitcherButton) == 0x000270, "Member 'UItemInspectUpgradeCallout_C::SwitcherButton' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeButton) == 0x000278, "Member 'UItemInspectUpgradeCallout_C::UpgradeButton' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeHighlight) == 0x000280, "Member 'UItemInspectUpgradeCallout_C::UpgradeHighlight' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeText) == 0x000288, "Member 'UItemInspectUpgradeCallout_C::UpgradeText' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeTextOverlay) == 0x000290, "Member 'UItemInspectUpgradeCallout_C::UpgradeTextOverlay' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, Item) == 0x000298, "Member 'UItemInspectUpgradeCallout_C::Item' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeCost) == 0x0002A0, "Member 'UItemInspectUpgradeCallout_C::UpgradeCost' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, OnRequestUpgrade) == 0x0002A8, "Member 'UItemInspectUpgradeCallout_C::OnRequestUpgrade' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, UpgradeColor) == 0x0002B8, "Member 'UItemInspectUpgradeCallout_C::UpgradeColor' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeCallout_C, IsMaxLevel) == 0x0002C8, "Member 'UItemInspectUpgradeCallout_C::IsMaxLevel' has a wrong offset!");

}

