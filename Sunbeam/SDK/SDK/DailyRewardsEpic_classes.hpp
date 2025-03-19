#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsEpic

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewardsEpic.DailyRewardsEpic_C
// 0x0050 (0x0298 - 0x0248)
class UDailyRewardsEpic_C final : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                DayNumber;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Item_Flare;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ItemBorder;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ScheduleText;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ScheduleName;                                      // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UMaterialInstanceDynamic*               ImageFlare_MID;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DailyRewardsEpic(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewardsEpic_C">();
	}
	static class UDailyRewardsEpic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewardsEpic_C>();
	}
};
static_assert(alignof(UDailyRewardsEpic_C) == 0x000008, "Wrong alignment on UDailyRewardsEpic_C");
static_assert(sizeof(UDailyRewardsEpic_C) == 0x000298, "Wrong size on UDailyRewardsEpic_C");
static_assert(offsetof(UDailyRewardsEpic_C, UberGraphFrame) == 0x000248, "Member 'UDailyRewardsEpic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, DayNumber) == 0x000250, "Member 'UDailyRewardsEpic_C::DayNumber' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, FortItemCard) == 0x000258, "Member 'UDailyRewardsEpic_C::FortItemCard' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, Image_Item_Flare) == 0x000260, "Member 'UDailyRewardsEpic_C::Image_Item_Flare' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, ItemBorder) == 0x000268, "Member 'UDailyRewardsEpic_C::ItemBorder' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, ScheduleText) == 0x000270, "Member 'UDailyRewardsEpic_C::ScheduleText' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, ScheduleName) == 0x000278, "Member 'UDailyRewardsEpic_C::ScheduleName' has a wrong offset!");
static_assert(offsetof(UDailyRewardsEpic_C, ImageFlare_MID) == 0x000290, "Member 'UDailyRewardsEpic_C::ImageFlare_MID' has a wrong offset!");

}

