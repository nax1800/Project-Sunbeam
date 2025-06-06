#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaNewsModal.AthenaNewsModal_C
// 0x0038 (0x0418 - 0x03E0)
class UAthenaNewsModal_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UAthenaNews_C*                          AthenaNews;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseButton;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DescriptionScroll;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaNewsModal(int32 EntryPoint);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaNewsModal_C">();
	}
	static class UAthenaNewsModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNewsModal_C>();
	}
};
static_assert(alignof(UAthenaNewsModal_C) == 0x000008, "Wrong alignment on UAthenaNewsModal_C");
static_assert(sizeof(UAthenaNewsModal_C) == 0x000418, "Wrong size on UAthenaNewsModal_C");
static_assert(offsetof(UAthenaNewsModal_C, UberGraphFrame) == 0x0003E0, "Member 'UAthenaNewsModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, AthenaNews) == 0x0003E8, "Member 'UAthenaNewsModal_C::AthenaNews' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, CloseButton) == 0x0003F0, "Member 'UAthenaNewsModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, DescriptionScroll) == 0x0003F8, "Member 'UAthenaNewsModal_C::DescriptionScroll' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Lightbox) == 0x000400, "Member 'UAthenaNewsModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, MainIcon) == 0x000408, "Member 'UAthenaNewsModal_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Title) == 0x000410, "Member 'UAthenaNewsModal_C::Title' has a wrong offset!");

}

