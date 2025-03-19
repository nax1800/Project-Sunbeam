#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementScreen

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
// 0x0028 (0x0738 - 0x0710)
class UItemManagementScreen_C final : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(Transient, DuplicateTransient)
	class USizeBox*                               SizeBox_Inventory;                                 // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ItemDragEnabled;                                   // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721[0x7];                                      // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemManagementItemTileButton*      SelectedTileButton;                                // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                    QuantitySelectorWidget;                            // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementScreen(int32 EntryPoint);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	void OnActivated();
	void DefaultActionRefresh();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, class FName ResultName);
	void HandleClose();
	void HandleInspect(class UFortItem* ItemToInspect);
	void GetDescriptionText(class FText* ItemDescription);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void SizeInventoryPanel();
	void HandleEquip(class UFortItem* Item);
	void CraftAndSlot(class UFortSchematicItem* SchematicItem);
	void ShowCraftError(EFortCraftFailCause FailCause);
	void HandleTransfer(class UFortItem* ItemToTransfer);
	void CreateQuantitySelector(class UFortItem* Item, const class FText& Title, const class FText& ConfirmText, int32 InitialQuantity, int32 MaxQuantity);
	void DestroyQuantitySelector();
	void HandleTransferItemsCallback(int32 Quantity, class UFortItem* Item);
	void CompleteItemTransfer(class UFortItem* Item, int32 Quantity);
	void HandleDrop(class UFortItem* Item);
	void HandleDropItemsCallback(int32 Quantity, class UFortItem* Item);
	void CompleteItemDrop(class UFortItem* Item, int32 Quantity);
	void HandleMulchItemsCallback(int32 Quantity, class UFortItem* Item);

	void GetMaxTransferCount(class UFortItem* Item, int32* Count) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementScreen_C">();
	}
	static class UItemManagementScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementScreen_C>();
	}
};
static_assert(alignof(UItemManagementScreen_C) == 0x000008, "Wrong alignment on UItemManagementScreen_C");
static_assert(sizeof(UItemManagementScreen_C) == 0x000738, "Wrong size on UItemManagementScreen_C");
static_assert(offsetof(UItemManagementScreen_C, UberGraphFrame) == 0x000710, "Member 'UItemManagementScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementScreen_C, SizeBox_Inventory) == 0x000718, "Member 'UItemManagementScreen_C::SizeBox_Inventory' has a wrong offset!");
static_assert(offsetof(UItemManagementScreen_C, ItemDragEnabled) == 0x000720, "Member 'UItemManagementScreen_C::ItemDragEnabled' has a wrong offset!");
static_assert(offsetof(UItemManagementScreen_C, SelectedTileButton) == 0x000728, "Member 'UItemManagementScreen_C::SelectedTileButton' has a wrong offset!");
static_assert(offsetof(UItemManagementScreen_C, QuantitySelectorWidget) == 0x000730, "Member 'UItemManagementScreen_C::QuantitySelectorWidget' has a wrong offset!");

}

