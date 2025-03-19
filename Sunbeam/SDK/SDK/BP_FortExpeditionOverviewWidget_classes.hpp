#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionOverviewWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C
// 0x00A8 (0x0308 - 0x0260)
class UBP_FortExpeditionOverviewWidget_C final : public UFortExpeditionOverviewWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UBP_FortExpeditionDetailsWidget_C*      BP_FortExpeditionDetailsWidget;                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoExpeditionsText;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectedTabName;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnCollectCompletedExpedition;                      // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    BuildExpeditionAction;                             // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    AbandonExpeditionAction;                           // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CollectExpeditionAction;                           // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SortInputAction;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBP_FortExpeditionMasterWidget_C*       ParentWidget;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurrentTabId;                                      // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_FortExpeditionIconTabButton_C*> TabButtons;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bIgnoreBuildExpeditionAction;                      // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCollectCompletedExpedition__DelegateSignature();
	void ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int32 EntryPoint);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature(class UObject* Item);
	void HandleOnListViewRefreshed();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature(class UFortExpeditionItem* Item);
	void OnExpeditionOverviewRefresh();
	void Destruct();
	void BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleAbandonExpedition();
	void OnExpeditionTabSelected(const class FName& TabNameID);
	void Construct();
	void Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item);
	void FireCollectCompletedExpedition();
	void On_Widget_Activated();
	void Set_Current_Tab_Name(class FName TabId);
	void Hide_All_Input_Actions();
	void Determine_Active_Input_Action(class UFortExpeditionItem* InItem);
	void HandleBuildExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleCollectExpeditionAction(bool* PassThrough);
	void Update_List_View_Area();
	void Update_Details_Visibility();
	void Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject);
	void Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition);
	void Try_to_Build_Expedition(class UFortExpeditionItem* Expedition);
	void Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable);
	void Set_List_Sort_Type(EFortExpeditionListSort InSortType);
	struct FTimespan Get_Utc_Now_Offset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionOverviewWidget_C">();
	}
	static class UBP_FortExpeditionOverviewWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionOverviewWidget_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionOverviewWidget_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionOverviewWidget_C");
static_assert(sizeof(UBP_FortExpeditionOverviewWidget_C) == 0x000308, "Wrong size on UBP_FortExpeditionOverviewWidget_C");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, UberGraphFrame) == 0x000260, "Member 'UBP_FortExpeditionOverviewWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, BP_FortExpeditionDetailsWidget) == 0x000268, "Member 'UBP_FortExpeditionOverviewWidget_C::BP_FortExpeditionDetailsWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, CommonWidgetSwitcher_0) == 0x000270, "Member 'UBP_FortExpeditionOverviewWidget_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, NoExpeditionsText) == 0x000278, "Member 'UBP_FortExpeditionOverviewWidget_C::NoExpeditionsText' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, SafeZone_0) == 0x000280, "Member 'UBP_FortExpeditionOverviewWidget_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, SelectedTabName) == 0x000288, "Member 'UBP_FortExpeditionOverviewWidget_C::SelectedTabName' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, OnCollectCompletedExpedition) == 0x000290, "Member 'UBP_FortExpeditionOverviewWidget_C::OnCollectCompletedExpedition' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, BuildExpeditionAction) == 0x0002A0, "Member 'UBP_FortExpeditionOverviewWidget_C::BuildExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, AbandonExpeditionAction) == 0x0002B0, "Member 'UBP_FortExpeditionOverviewWidget_C::AbandonExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, CollectExpeditionAction) == 0x0002C0, "Member 'UBP_FortExpeditionOverviewWidget_C::CollectExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, SortInputAction) == 0x0002D0, "Member 'UBP_FortExpeditionOverviewWidget_C::SortInputAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, ParentWidget) == 0x0002E0, "Member 'UBP_FortExpeditionOverviewWidget_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, CurrentTabId) == 0x0002E8, "Member 'UBP_FortExpeditionOverviewWidget_C::CurrentTabId' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, TabButtons) == 0x0002F0, "Member 'UBP_FortExpeditionOverviewWidget_C::TabButtons' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionOverviewWidget_C, bIgnoreBuildExpeditionAction) == 0x000300, "Member 'UBP_FortExpeditionOverviewWidget_C::bIgnoreBuildExpeditionAction' has a wrong offset!");

}

