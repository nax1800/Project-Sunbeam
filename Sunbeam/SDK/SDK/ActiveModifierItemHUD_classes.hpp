#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveModifierItemHUD

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
// 0x0008 (0x0240 - 0x0238)
class UActiveModifierItemHUD_C final : public UCommonUserWidget
{
public:
	class UImage*                                 ImageModifier;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AssignIcon(const struct FSlateBrush& InIconSlateBrush);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActiveModifierItemHUD_C">();
	}
	static class UActiveModifierItemHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActiveModifierItemHUD_C>();
	}
};
static_assert(alignof(UActiveModifierItemHUD_C) == 0x000008, "Wrong alignment on UActiveModifierItemHUD_C");
static_assert(sizeof(UActiveModifierItemHUD_C) == 0x000240, "Wrong size on UActiveModifierItemHUD_C");
static_assert(offsetof(UActiveModifierItemHUD_C, ImageModifier) == 0x000238, "Member 'UActiveModifierItemHUD_C::ImageModifier' has a wrong offset!");

}

