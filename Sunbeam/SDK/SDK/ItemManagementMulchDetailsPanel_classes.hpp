#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementMulchDetailsPanel

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C
// 0x0040 (0x0290 - 0x0250)
class UItemManagementMulchDetailsPanel_C final : public UFortItemManagementMulchDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      DoneButton;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MulchPromptText;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MulchResourceBox;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ResourceListWidgetSwitcher;                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          RecyclingAnimateItems;                             // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   MulchListChanged;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void MulchListChanged__DelegateSignature();
	void ExecuteUbergraph_ItemManagementMulchDetailsPanel(int32 EntryPoint);
	void BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSetOfItemsToMulchChangedBP();
	void DialogResult_58BF1F8B4DC97D1C2902828F65095294(EFortDialogResult Result, class FName ResultName);
	void GetWarningText(TArray<EItemRecyclingWarning>& Warnings, bool HasAnimateItems, class FText* WarningText);
	void UpdateDoneButtonText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementMulchDetailsPanel_C">();
	}
	static class UItemManagementMulchDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementMulchDetailsPanel_C>();
	}
};
static_assert(alignof(UItemManagementMulchDetailsPanel_C) == 0x000008, "Wrong alignment on UItemManagementMulchDetailsPanel_C");
static_assert(sizeof(UItemManagementMulchDetailsPanel_C) == 0x000290, "Wrong size on UItemManagementMulchDetailsPanel_C");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, UberGraphFrame) == 0x000250, "Member 'UItemManagementMulchDetailsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, DoneButton) == 0x000258, "Member 'UItemManagementMulchDetailsPanel_C::DoneButton' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, MulchPromptText) == 0x000260, "Member 'UItemManagementMulchDetailsPanel_C::MulchPromptText' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, MulchResourceBox) == 0x000268, "Member 'UItemManagementMulchDetailsPanel_C::MulchResourceBox' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, ResourceListWidgetSwitcher) == 0x000270, "Member 'UItemManagementMulchDetailsPanel_C::ResourceListWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, RecyclingAnimateItems) == 0x000278, "Member 'UItemManagementMulchDetailsPanel_C::RecyclingAnimateItems' has a wrong offset!");
static_assert(offsetof(UItemManagementMulchDetailsPanel_C, MulchListChanged) == 0x000280, "Member 'UItemManagementMulchDetailsPanel_C::MulchListChanged' has a wrong offset!");

}

