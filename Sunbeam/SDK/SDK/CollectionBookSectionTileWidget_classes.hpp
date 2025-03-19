#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionTileWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C
// 0x0030 (0x0940 - 0x0910)
class UCollectionBookSectionTileWidget_C final : public UFortCollectionBookSectionTileWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          SlotBorder;                                        // 0x0918(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 NormalTextStyle;                                   // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CompletedTextStyle;                                // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NormalBorderStyle;                                 // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CompletedBorderStyle;                              // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint);
	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookSectionTileWidget_C">();
	}
	static class UCollectionBookSectionTileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookSectionTileWidget_C>();
	}
};
static_assert(alignof(UCollectionBookSectionTileWidget_C) == 0x000008, "Wrong alignment on UCollectionBookSectionTileWidget_C");
static_assert(sizeof(UCollectionBookSectionTileWidget_C) == 0x000940, "Wrong size on UCollectionBookSectionTileWidget_C");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, UberGraphFrame) == 0x000910, "Member 'UCollectionBookSectionTileWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, SlotBorder) == 0x000918, "Member 'UCollectionBookSectionTileWidget_C::SlotBorder' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, NormalTextStyle) == 0x000920, "Member 'UCollectionBookSectionTileWidget_C::NormalTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, CompletedTextStyle) == 0x000928, "Member 'UCollectionBookSectionTileWidget_C::CompletedTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, NormalBorderStyle) == 0x000930, "Member 'UCollectionBookSectionTileWidget_C::NormalBorderStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, CompletedBorderStyle) == 0x000938, "Member 'UCollectionBookSectionTileWidget_C::CompletedBorderStyle' has a wrong offset!");

}

