#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipMinusDescriptionText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Tooltip-DescriptionText.Tooltip-DescriptionText_C
// 0x0028 (0x0258 - 0x0230)
class UTooltipMinusDescriptionText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             TextItemDescription;                               // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DescriptionText;                                   // 0x0240(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_TooltipMinusDescriptionText(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip-DescriptionText_C">();
	}
	static class UTooltipMinusDescriptionText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipMinusDescriptionText_C>();
	}
};
static_assert(alignof(UTooltipMinusDescriptionText_C) == 0x000008, "Wrong alignment on UTooltipMinusDescriptionText_C");
static_assert(sizeof(UTooltipMinusDescriptionText_C) == 0x000258, "Wrong size on UTooltipMinusDescriptionText_C");
static_assert(offsetof(UTooltipMinusDescriptionText_C, UberGraphFrame) == 0x000230, "Member 'UTooltipMinusDescriptionText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltipMinusDescriptionText_C, TextItemDescription) == 0x000238, "Member 'UTooltipMinusDescriptionText_C::TextItemDescription' has a wrong offset!");
static_assert(offsetof(UTooltipMinusDescriptionText_C, DescriptionText) == 0x000240, "Member 'UTooltipMinusDescriptionText_C::DescriptionText' has a wrong offset!");

}

