#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRatingIndicator

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemRatingIndicator.ItemRatingIndicator_C
// 0x0018 (0x05E8 - 0x05D0)
class UItemRatingIndicator_C final : public UFortItemRatingIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 PowerRatingIconImage;                              // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatNumericTextBlock_C*                PowerRatingText;                                   // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint);
	void HandleViewModelChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRatingIndicator_C">();
	}
	static class UItemRatingIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRatingIndicator_C>();
	}
};
static_assert(alignof(UItemRatingIndicator_C) == 0x000008, "Wrong alignment on UItemRatingIndicator_C");
static_assert(sizeof(UItemRatingIndicator_C) == 0x0005E8, "Wrong size on UItemRatingIndicator_C");
static_assert(offsetof(UItemRatingIndicator_C, UberGraphFrame) == 0x0005D0, "Member 'UItemRatingIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemRatingIndicator_C, PowerRatingIconImage) == 0x0005D8, "Member 'UItemRatingIndicator_C::PowerRatingIconImage' has a wrong offset!");
static_assert(offsetof(UItemRatingIndicator_C, PowerRatingText) == 0x0005E0, "Member 'UItemRatingIndicator_C::PowerRatingText' has a wrong offset!");

}

