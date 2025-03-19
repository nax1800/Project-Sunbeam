#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupManager

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPickupManager.AthenaPickupManager_C
// 0x0058 (0x02B8 - 0x0260)
class UAthenaPickupManager_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UPackResource_C*                        _Pack_Resource__Metal;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                        _Pack_Resource__Stone;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                        _Pack_Resource__Wood;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Pickup_Message_Stream;              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackpackImage;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindInventory;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextInventoryCount;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextInventoryMax;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUIMessageManager*                  MessageManager;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Displayed_Items;                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastUpdateTime;                                    // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaPickupManager(int32 EntryPoint);
	void HandleBuildingMaterialChanged();
	void Destruct();
	void HandleWorldItemListChanged(const TArray<class UFortWorldItem*>& ItemsAdded, const TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleWorldItemsChanged();
	void Construct();
	void TryGetNextItem();
	void HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item);
	void HandleItemPickedUp(class UFortWorldItem* NewItem, int32 Count);
	void RefreshCounts();
	void UpdateKeybinds();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPickupManager_C">();
	}
	static class UAthenaPickupManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPickupManager_C>();
	}
};
static_assert(alignof(UAthenaPickupManager_C) == 0x000008, "Wrong alignment on UAthenaPickupManager_C");
static_assert(sizeof(UAthenaPickupManager_C) == 0x0002B8, "Wrong size on UAthenaPickupManager_C");
static_assert(offsetof(UAthenaPickupManager_C, UberGraphFrame) == 0x000260, "Member 'UAthenaPickupManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, _Pack_Resource__Metal) == 0x000268, "Member 'UAthenaPickupManager_C::_Pack_Resource__Metal' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, _Pack_Resource__Stone) == 0x000270, "Member 'UAthenaPickupManager_C::_Pack_Resource__Stone' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, _Pack_Resource__Wood) == 0x000278, "Member 'UAthenaPickupManager_C::_Pack_Resource__Wood' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, _Vertical_Box__Pickup_Message_Stream) == 0x000280, "Member 'UAthenaPickupManager_C::_Vertical_Box__Pickup_Message_Stream' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, BackpackImage) == 0x000288, "Member 'UAthenaPickupManager_C::BackpackImage' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, KeybindInventory) == 0x000290, "Member 'UAthenaPickupManager_C::KeybindInventory' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, TextInventoryCount) == 0x000298, "Member 'UAthenaPickupManager_C::TextInventoryCount' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, TextInventoryMax) == 0x0002A0, "Member 'UAthenaPickupManager_C::TextInventoryMax' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, MessageManager) == 0x0002A8, "Member 'UAthenaPickupManager_C::MessageManager' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, Max_Displayed_Items) == 0x0002B0, "Member 'UAthenaPickupManager_C::Max_Displayed_Items' has a wrong offset!");
static_assert(offsetof(UAthenaPickupManager_C, LastUpdateTime) == 0x0002B4, "Member 'UAthenaPickupManager_C::LastUpdateTime' has a wrong offset!");

}

