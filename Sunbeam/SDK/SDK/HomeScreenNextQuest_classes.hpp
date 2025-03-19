#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeScreenNextQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HomeScreenNextQuest.HomeScreenNextQuest_C
// 0x0080 (0x0460 - 0x03E0)
class UHomeScreenNextQuest_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BorderQuestMapToggle;                              // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapWidget_C*                   CampaignMapWidget;                                 // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  DetailsSwitcher;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloween_QuestMapWidget_C*            Halloween_QuestMapWidget;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenQuestsTile_C*                 HalloweenQuestsTile;                               // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEvent;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainQuestsTile_C*                      MainQuestsTile;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  QuestMapSwitcher;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HalloweenEvent_QuestMap;                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_QuestMap;                                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeboxEventDetails;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeboxMainQuest;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SwitchQuestMap;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               CutOffQuest;                                       // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MainQuestMapShown;                                 // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_HomeScreenNextQuest(int32 EntryPoint);
	void OnActivated();
	void HandleTabSwitch();
	void Construct();
	void Handle_Event_Flags_Changed(const TArray<class FString>& ActiveEventFlags);
	void BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateButtonBasedOnEventStatus(bool* EventIsActive);
	void UpdateSceenBasedOnQuestMapShown();
	void ConfigureScreenForEvent();
	void HandleBeyondCutOffQuest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HomeScreenNextQuest_C">();
	}
	static class UHomeScreenNextQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHomeScreenNextQuest_C>();
	}
};
static_assert(alignof(UHomeScreenNextQuest_C) == 0x000008, "Wrong alignment on UHomeScreenNextQuest_C");
static_assert(sizeof(UHomeScreenNextQuest_C) == 0x000460, "Wrong size on UHomeScreenNextQuest_C");
static_assert(offsetof(UHomeScreenNextQuest_C, UberGraphFrame) == 0x0003E0, "Member 'UHomeScreenNextQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, BorderQuestMapToggle) == 0x0003E8, "Member 'UHomeScreenNextQuest_C::BorderQuestMapToggle' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, CampaignMapWidget) == 0x0003F0, "Member 'UHomeScreenNextQuest_C::CampaignMapWidget' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, DetailsSwitcher) == 0x0003F8, "Member 'UHomeScreenNextQuest_C::DetailsSwitcher' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, Halloween_QuestMapWidget) == 0x000400, "Member 'UHomeScreenNextQuest_C::Halloween_QuestMapWidget' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, HalloweenQuestsTile) == 0x000408, "Member 'UHomeScreenNextQuest_C::HalloweenQuestsTile' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, ImageEvent) == 0x000410, "Member 'UHomeScreenNextQuest_C::ImageEvent' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, MainQuestsTile) == 0x000418, "Member 'UHomeScreenNextQuest_C::MainQuestsTile' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, QuestMapSwitcher) == 0x000420, "Member 'UHomeScreenNextQuest_C::QuestMapSwitcher' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, SizeBox_HalloweenEvent_QuestMap) == 0x000428, "Member 'UHomeScreenNextQuest_C::SizeBox_HalloweenEvent_QuestMap' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, SizeBox_QuestMap) == 0x000430, "Member 'UHomeScreenNextQuest_C::SizeBox_QuestMap' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, SizeboxEventDetails) == 0x000438, "Member 'UHomeScreenNextQuest_C::SizeboxEventDetails' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, SizeboxMainQuest) == 0x000440, "Member 'UHomeScreenNextQuest_C::SizeboxMainQuest' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, SwitchQuestMap) == 0x000448, "Member 'UHomeScreenNextQuest_C::SwitchQuestMap' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, CutOffQuest) == 0x000450, "Member 'UHomeScreenNextQuest_C::CutOffQuest' has a wrong offset!");
static_assert(offsetof(UHomeScreenNextQuest_C, MainQuestMapShown) == 0x000458, "Member 'UHomeScreenNextQuest_C::MainQuestMapShown' has a wrong offset!");

}

