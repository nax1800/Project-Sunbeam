#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_BonusXpType

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_BonusXpType.Results_BonusXpType_C
// 0x0070 (0x02A8 - 0x0238)
class UResults_BonusXpType_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_SkipToInvisible;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkipToVisible;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageXPAmount;                                     // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageXPType;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlaynumber;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlaytype;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextXPAmount;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextXPType;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TypeResizer;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MAT_XpType;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MAT_XpAmount;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Results_BonusXpType(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetInformation(int32 InXPAmount, const class FText& PlayerName, class FName InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_BonusXpType_C">();
	}
	static class UResults_BonusXpType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_BonusXpType_C>();
	}
};
static_assert(alignof(UResults_BonusXpType_C) == 0x000008, "Wrong alignment on UResults_BonusXpType_C");
static_assert(sizeof(UResults_BonusXpType_C) == 0x0002A8, "Wrong size on UResults_BonusXpType_C");
static_assert(offsetof(UResults_BonusXpType_C, UberGraphFrame) == 0x000238, "Member 'UResults_BonusXpType_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, Anim_SkipToInvisible) == 0x000240, "Member 'UResults_BonusXpType_C::Anim_SkipToInvisible' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, Anim_Intro) == 0x000248, "Member 'UResults_BonusXpType_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, Anim_SkipToVisible) == 0x000250, "Member 'UResults_BonusXpType_C::Anim_SkipToVisible' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, ImageXPAmount) == 0x000258, "Member 'UResults_BonusXpType_C::ImageXPAmount' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, ImageXPType) == 0x000260, "Member 'UResults_BonusXpType_C::ImageXPType' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, Overlaynumber) == 0x000268, "Member 'UResults_BonusXpType_C::Overlaynumber' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, Overlaytype) == 0x000270, "Member 'UResults_BonusXpType_C::Overlaytype' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, TextPlayerName) == 0x000278, "Member 'UResults_BonusXpType_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, TextXPAmount) == 0x000280, "Member 'UResults_BonusXpType_C::TextXPAmount' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, TextXPType) == 0x000288, "Member 'UResults_BonusXpType_C::TextXPType' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, TypeResizer) == 0x000290, "Member 'UResults_BonusXpType_C::TypeResizer' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, MAT_XpType) == 0x000298, "Member 'UResults_BonusXpType_C::MAT_XpType' has a wrong offset!");
static_assert(offsetof(UResults_BonusXpType_C, MAT_XpAmount) == 0x0002A0, "Member 'UResults_BonusXpType_C::MAT_XpAmount' has a wrong offset!");

}

