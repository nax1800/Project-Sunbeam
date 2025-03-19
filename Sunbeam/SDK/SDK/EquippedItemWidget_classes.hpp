#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedItemWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquippedItemWidget.EquippedItemWidget_C
// 0x0070 (0x02D0 - 0x0260)
class UEquippedItemWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__AmmoIcon;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__ResourceIcon;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Separator;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderDivider;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquippedItemMinusBandolier_C*          EquippedItemMinusBandolier;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherContent;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAmmoOutOverlay;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMagazineAmmoCount;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCount;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextTotalAmmoCount;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentQuickbar;                                   // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorModeEnabled;                                 // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InfiniteAmmo;                                      // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InfiniteMagazine;                                  // 0x02CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EquippedItemWidget(int32 EntryPoint);
	void OnBuildingMaterialCycled();
	void OnWorldItemsChanged();
	void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void Construct();
	void FullUpdateAmmoDisplay();
	void FullUpdateResourceDisplay();
	void UpdateVisibility();
	void UpdateWidgetColor(bool HasAmmo);
	void UpdateAmmoCapacity();
	void UpdateCurrentAmmo(int32 LocalCount, int32 LocalRemaining);
	void UpdateResourceCount();

	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquippedItemWidget_C">();
	}
	static class UEquippedItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquippedItemWidget_C>();
	}
};
static_assert(alignof(UEquippedItemWidget_C) == 0x000008, "Wrong alignment on UEquippedItemWidget_C");
static_assert(sizeof(UEquippedItemWidget_C) == 0x0002D0, "Wrong size on UEquippedItemWidget_C");
static_assert(offsetof(UEquippedItemWidget_C, UberGraphFrame) == 0x000260, "Member 'UEquippedItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, _Image__AmmoIcon) == 0x000268, "Member 'UEquippedItemWidget_C::_Image__AmmoIcon' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, _Image__ResourceIcon) == 0x000270, "Member 'UEquippedItemWidget_C::_Image__ResourceIcon' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, _Image__Separator) == 0x000278, "Member 'UEquippedItemWidget_C::_Image__Separator' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, CommonBorderDivider) == 0x000280, "Member 'UEquippedItemWidget_C::CommonBorderDivider' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, EquippedItemMinusBandolier) == 0x000288, "Member 'UEquippedItemWidget_C::EquippedItemMinusBandolier' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, Image_0) == 0x000290, "Member 'UEquippedItemWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, KeybindWidget) == 0x000298, "Member 'UEquippedItemWidget_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, SwitcherContent) == 0x0002A0, "Member 'UEquippedItemWidget_C::SwitcherContent' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, TextAmmoOutOverlay) == 0x0002A8, "Member 'UEquippedItemWidget_C::TextAmmoOutOverlay' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, TextMagazineAmmoCount) == 0x0002B0, "Member 'UEquippedItemWidget_C::TextMagazineAmmoCount' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, TextResourceCount) == 0x0002B8, "Member 'UEquippedItemWidget_C::TextResourceCount' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, TextTotalAmmoCount) == 0x0002C0, "Member 'UEquippedItemWidget_C::TextTotalAmmoCount' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, CurrentQuickbar) == 0x0002C8, "Member 'UEquippedItemWidget_C::CurrentQuickbar' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, CursorModeEnabled) == 0x0002CC, "Member 'UEquippedItemWidget_C::CursorModeEnabled' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, InfiniteAmmo) == 0x0002CD, "Member 'UEquippedItemWidget_C::InfiniteAmmo' has a wrong offset!");
static_assert(offsetof(UEquippedItemWidget_C, InfiniteMagazine) == 0x0002CE, "Member 'UEquippedItemWidget_C::InfiniteMagazine' has a wrong offset!");

}

