#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementDetailsModeBox

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
// 0x0020 (0x0450 - 0x0430)
class UItemManagementDetailsModeBox_C final : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                   DetailPanelTabList;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemSelected;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NoSelectionDetailsBox;                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int32 EntryPoint);
	void Construct();
	void OnDeactivated();
	void BndEvt__DetailPanelTabListMinusMSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabListMinusOI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabListMinusOP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabListMinusOPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnActivated();
	void HandleDifferentItemToDetailSetBP();
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandleClose(bool* PassThrough);
	void HandleInspect(bool* PassThrough);
	void HandleCompare(bool* PassThrough);
	void HandleMulch(bool* PassThrough);
	void HandleSort(bool* PassThrough);
	void TrySetupInputHandling();
	void HandleConsumeItem(bool* PassThrough);
	void HandleCraft(bool* PassThrough);
	void ShowSelection();
	void HandleDrop(bool* PassThrough);
	void RegisterDrop();
	void RegisterCraft();
	void RegisterMulch();
	void RegisterRetire();
	void RegisterInspect();
	void RegisterBack();
	void RegisterSort(bool InGame);
	void RegisterConsumeItem();
	void RegisterCompare();
	void RegisterTrack();
	void HandleTrack(bool* PassThrough);
	void RegisterEquip();
	void HandleEquip(bool* PassThrough);
	void SetupDetailPanels();
	void UpdateConsumeItemButtonState();
	void SetItemVisualization();
	void SetTabStyling(class UObject* Object);
	void RegisterInventoryInspect();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleWorldItemsChanged();
	void RefreshCraftActions();
	void RegisterCraftAndSlot();
	void HandleCraftAndSlot(bool* PassThrough);
	void HandleInputMethodChanged(bool UsingGamepad);
	void RefreshMulchAction();
	void RegisterLeaveInventory();
	void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex);
	void RegisterInspectUpgrade();
	void RegisterTransfer();
	void HandleTransfer(bool* PassThrough);
	void RefreshTransferAction();
	void UnbindEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementDetailsModeBox_C">();
	}
	static class UItemManagementDetailsModeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementDetailsModeBox_C>();
	}
};
static_assert(alignof(UItemManagementDetailsModeBox_C) == 0x000008, "Wrong alignment on UItemManagementDetailsModeBox_C");
static_assert(sizeof(UItemManagementDetailsModeBox_C) == 0x000450, "Wrong size on UItemManagementDetailsModeBox_C");
static_assert(offsetof(UItemManagementDetailsModeBox_C, UberGraphFrame) == 0x000430, "Member 'UItemManagementDetailsModeBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementDetailsModeBox_C, DetailPanelTabList) == 0x000438, "Member 'UItemManagementDetailsModeBox_C::DetailPanelTabList' has a wrong offset!");
static_assert(offsetof(UItemManagementDetailsModeBox_C, ItemSelected) == 0x000440, "Member 'UItemManagementDetailsModeBox_C::ItemSelected' has a wrong offset!");
static_assert(offsetof(UItemManagementDetailsModeBox_C, NoSelectionDetailsBox) == 0x000448, "Member 'UItemManagementDetailsModeBox_C::NoSelectionDetailsBox' has a wrong offset!");

}

