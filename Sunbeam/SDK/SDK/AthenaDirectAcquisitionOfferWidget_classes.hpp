#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C
// 0x0088 (0x0930 - 0x08A8)
class UAthenaDirectAcquisitionOfferWidget_C final : public UFortDirectAcquisitionOfferWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderRarityColored;                               // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BottomBorder;                                      // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HighlightGlow;                                     // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainImage;                                         // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       MainImageLoadGuard;                                // 0x08E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NameText;                                          // 0x08E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OwnedSwitcher;                                     // 0x08F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OwnedText;                                         // 0x08F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCount_C*                           Price1;                                            // 0x0900(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBPriceBox;                                        // 0x0908(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBTileSize;                                        // 0x0910(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ShortDescriptionText;                              // 0x0918(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBHeaderAndDescription;                            // 0x0920(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          LargeTile;                                         // 0x0928(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int32 EntryPoint);
	void OnUnhovered();
	void OnHovered();
	void HandleOfferPurchaseComplete(bool bSuccess);
	void OnClicked();
	void OnOfferSet();
	void OfferSet();
	void UpdateOwnedState();
	void UpdateStyle();
	void SetupPrice(const int32 PriceIndex, class UItemCount_C* PriceWidget);
	void LargeImageLoaded(class UObject* LoadedObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOfferWidget_C">();
	}
	static class UAthenaDirectAcquisitionOfferWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOfferWidget_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionOfferWidget_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionOfferWidget_C");
static_assert(sizeof(UAthenaDirectAcquisitionOfferWidget_C) == 0x000930, "Wrong size on UAthenaDirectAcquisitionOfferWidget_C");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, UberGraphFrame) == 0x0008A8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, Hover) == 0x0008B0, "Member 'UAthenaDirectAcquisitionOfferWidget_C::Hover' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, BorderRarityColored) == 0x0008B8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::BorderRarityColored' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, BottomBorder) == 0x0008C0, "Member 'UAthenaDirectAcquisitionOfferWidget_C::BottomBorder' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, Check) == 0x0008C8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::Check' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, HighlightGlow) == 0x0008D0, "Member 'UAthenaDirectAcquisitionOfferWidget_C::HighlightGlow' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, MainImage) == 0x0008D8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::MainImage' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, MainImageLoadGuard) == 0x0008E0, "Member 'UAthenaDirectAcquisitionOfferWidget_C::MainImageLoadGuard' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, NameText) == 0x0008E8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::NameText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, OwnedSwitcher) == 0x0008F0, "Member 'UAthenaDirectAcquisitionOfferWidget_C::OwnedSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, OwnedText) == 0x0008F8, "Member 'UAthenaDirectAcquisitionOfferWidget_C::OwnedText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, Price1) == 0x000900, "Member 'UAthenaDirectAcquisitionOfferWidget_C::Price1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, SBPriceBox) == 0x000908, "Member 'UAthenaDirectAcquisitionOfferWidget_C::SBPriceBox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, SBTileSize) == 0x000910, "Member 'UAthenaDirectAcquisitionOfferWidget_C::SBTileSize' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, ShortDescriptionText) == 0x000918, "Member 'UAthenaDirectAcquisitionOfferWidget_C::ShortDescriptionText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, VBHeaderAndDescription) == 0x000920, "Member 'UAthenaDirectAcquisitionOfferWidget_C::VBHeaderAndDescription' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferWidget_C, LargeTile) == 0x000928, "Member 'UAthenaDirectAcquisitionOfferWidget_C::LargeTile' has a wrong offset!");

}

