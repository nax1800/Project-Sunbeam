#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_OfferDetailsAttribute

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C
// 0x0050 (0x0288 - 0x0238)
class UStoreMain_OfferDetailsAttribute_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Value;                                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   AttributeDescription;                              // 0x0258(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   AttributeValue;                                    // 0x0270(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetailsAttribute_C">();
	}
	static class UStoreMain_OfferDetailsAttribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetailsAttribute_C>();
	}
};
static_assert(alignof(UStoreMain_OfferDetailsAttribute_C) == 0x000008, "Wrong alignment on UStoreMain_OfferDetailsAttribute_C");
static_assert(sizeof(UStoreMain_OfferDetailsAttribute_C) == 0x000288, "Wrong size on UStoreMain_OfferDetailsAttribute_C");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, UberGraphFrame) == 0x000238, "Member 'UStoreMain_OfferDetailsAttribute_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Image_0) == 0x000240, "Member 'UStoreMain_OfferDetailsAttribute_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Name_0) == 0x000248, "Member 'UStoreMain_OfferDetailsAttribute_C::Name_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Value) == 0x000250, "Member 'UStoreMain_OfferDetailsAttribute_C::Value' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, AttributeDescription) == 0x000258, "Member 'UStoreMain_OfferDetailsAttribute_C::AttributeDescription' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, AttributeValue) == 0x000270, "Member 'UStoreMain_OfferDetailsAttribute_C::AttributeValue' has a wrong offset!");

}

