#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatItemLarge

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatItemLarge.StatItemLarge_C
// 0x00E0 (0x0410 - 0x0330)
class UStatItemLarge_C final : public UFortAttributeListItem_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BasicPairBuffArrow;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                BuffArrowSpacer;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                Value;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundCue*                              SoundCueValueUp;                                   // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              SoundCueValueDown;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            IconBrush;                                         // 0x0370(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                           IconColor;                                         // 0x0400(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatItemLarge(int32 EntryPoint);
	void ValueChanged(float Delta);
	void PreviewEnded();
	void PreviewStarted();
	void PreConstruct(bool IsDesignTime);
	void DisplayAttributeChanged();
	void Construct();
	void GetLocalPlayerId(struct FUniqueNetIdRepl* LocalPlayerNetId);
	void UpdateDisplayData();
	void UpdateIcon();
	void UpdateValue(float NewValue, float CurrentValue, EFortStatValueDisplayType DisplayType, EFortBuffState BuffState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatItemLarge_C">();
	}
	static class UStatItemLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatItemLarge_C>();
	}
};
static_assert(alignof(UStatItemLarge_C) == 0x000008, "Wrong alignment on UStatItemLarge_C");
static_assert(sizeof(UStatItemLarge_C) == 0x000410, "Wrong size on UStatItemLarge_C");
static_assert(offsetof(UStatItemLarge_C, UberGraphFrame) == 0x000330, "Member 'UStatItemLarge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, BasicPairBuffArrow) == 0x000338, "Member 'UStatItemLarge_C::BasicPairBuffArrow' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, BuffArrowSpacer) == 0x000340, "Member 'UStatItemLarge_C::BuffArrowSpacer' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, Icon) == 0x000348, "Member 'UStatItemLarge_C::Icon' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, Name_0) == 0x000350, "Member 'UStatItemLarge_C::Name_0' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, Value) == 0x000358, "Member 'UStatItemLarge_C::Value' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, SoundCueValueUp) == 0x000360, "Member 'UStatItemLarge_C::SoundCueValueUp' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, SoundCueValueDown) == 0x000368, "Member 'UStatItemLarge_C::SoundCueValueDown' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, IconBrush) == 0x000370, "Member 'UStatItemLarge_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UStatItemLarge_C, IconColor) == 0x000400, "Member 'UStatItemLarge_C::IconColor' has a wrong offset!");

}

