#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
// 0x0048 (0x0048 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferDetailsWidget_C* CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget) == 0x000048, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, EntryPoint) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, CallFunc_GetOfferInfo_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000020, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget, K2Node_CustomEvent_bSuccess) == 0x000040, "Member 'AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget::K2Node_CustomEvent_bSuccess' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete) == 0x000001, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete) == 0x000001, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete, bSuccess) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete::bSuccess' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
// 0x0120 (0x0120 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_OfferSet final
{
public:
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetTileImage_ReturnValue;                 // 0x0018(0x0090)()
	class UFortAccountItemDefinition*             CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue;         // 0x00B0(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_HasDisplayAsset_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetShortDescription_ReturnValue;          // 0x00D8(0x0018)()
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x00F0(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0108(0x0018)()
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_OfferSet) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_OfferSet");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_OfferSet) == 0x000120, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_OfferSet");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetOfferInfo_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetTileImage_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetTileImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetFirstGrantItemDefinition_ReturnValue) == 0x0000A8, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetFirstGrantItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetLargePreviewImage_ReturnValue) == 0x0000B0, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetLargePreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_HasDisplayAsset_ReturnValue) == 0x0000D0, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_HasDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetShortDescription_ReturnValue) == 0x0000D8, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetShortDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_GetName_ReturnValue) == 0x0000F0, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_GetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_OfferSet, CallFunc_TextToUpper_ReturnValue) == 0x000108, "Member 'AthenaDirectAcquisitionOfferWidget_C_OfferSet::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateOwnedState
// 0x0038 (0x0038 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOfferId_ReturnValue;                   // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOwned_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState) == 0x000038, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, Temp_bool_Variable) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, Temp_int_Variable) == 0x000004, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, Temp_int_Variable2) == 0x000008, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, CallFunc_GetOfferInfo_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, CallFunc_GetOfferId_ReturnValue) == 0x000020, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::CallFunc_GetOfferId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, CallFunc_IsOwned_ReturnValue) == 0x000030, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::CallFunc_IsOwned_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState, K2Node_Select_Default) == 0x000034, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState::K2Node_Select_Default' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
// 0x0108 (0x0108 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_UpdateStyle final
{
public:
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*             CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0020(0x0080)()
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot2;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00CC(0x0010)(NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue3;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin2;                         // 0x00E8(0x0010)(NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue2;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue4;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_UpdateStyle");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle) == 0x000108, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_UpdateStyle");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetOfferInfo_ReturnValue) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetFirstGrantItemDefinition_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetFirstGrantItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetRarity_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_BPGetRarityData_ReturnValue) == 0x000020, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_DynamicCast_AsBorder_Slot) == 0x0000A0, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000B0, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicMaterial_ReturnValue2) == 0x0000B8, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicMaterial_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_DynamicCast_AsBorder_Slot2) == 0x0000C0, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_DynamicCast_AsBorder_Slot2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_DynamicCast_bSuccess2) == 0x0000C8, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_MakeStruct_Margin) == 0x0000CC, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicMaterial_ReturnValue3) == 0x0000E0, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicMaterial_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, K2Node_MakeStruct_Margin2) == 0x0000E8, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::K2Node_MakeStruct_Margin2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicFontMaterial_ReturnValue2) == 0x0000F8, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicFontMaterial_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_UpdateStyle, CallFunc_GetDynamicMaterial_ReturnValue4) == 0x000100, "Member 'AthenaDirectAcquisitionOfferWidget_C_UpdateStyle::CallFunc_GetDynamicMaterial_ReturnValue4' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
// 0x0030 (0x0030 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_SetupPrice final
{
public:
	int32                                         PriceIndex;                                        // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemCount_C*                           PriceWidget;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPriceItem_RequiredItemCount;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccountItemDefinition*             CallFunc_GetPriceItem_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_SetupPrice");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice) == 0x000030, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_SetupPrice");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, PriceIndex) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::PriceIndex' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, PriceWidget) == 0x000008, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::PriceWidget' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, CallFunc_GetOfferInfo_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, CallFunc_GetPriceItem_RequiredItemCount) == 0x000018, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::CallFunc_GetPriceItem_RequiredItemCount' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, CallFunc_GetPriceItem_ReturnValue) == 0x000020, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::CallFunc_GetPriceItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_SetupPrice, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AthenaDirectAcquisitionOfferWidget_C_SetupPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
// 0x0018 (0x0018 - 0x0000)
struct AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded final
{
public:
	class UObject*                                LoadedObject;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded");
static_assert(sizeof(AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded) == 0x000018, "Wrong size on AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded, LoadedObject) == 0x000000, "Member 'AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded::LoadedObject' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded, K2Node_DynamicCast_AsTexture_2D) == 0x000008, "Member 'AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

