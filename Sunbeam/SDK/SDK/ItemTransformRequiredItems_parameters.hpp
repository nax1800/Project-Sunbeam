#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformRequiredItems

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ItemTransformRequiredItems.ItemTransformRequiredItems_C.UpdateItems
// 0x0118 (0x0118 - 0x0000)
struct ItemTransformRequiredItems_C_UpdateItems final
{
public:
	class UFortItem*                              TransformKey;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SacrificePoints;                                   // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            NotHaveColor;                                      // 0x0010(0x0028)(Edit)
	struct FSlateColor                            HaveColor;                                         // 0x0038(0x0028)(Edit)
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*   K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable2;                                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequiredItemQuantity_ReturnValue;      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccountItemDefinition*             CallFunc_GetRequiredItemDefinition_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00A0(0x0018)()
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumInInventory_ReturnValue;            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable3;                                // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable4;                                // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select2_Default;                            // 0x00E0(0x0028)()
	bool                                          Temp_bool_Variable3;                               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select3_Default;                            // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable4;                               // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select4_Default;                            // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformRequiredItems_C_UpdateItems) == 0x000008, "Wrong alignment on ItemTransformRequiredItems_C_UpdateItems");
static_assert(sizeof(ItemTransformRequiredItems_C_UpdateItems) == 0x000118, "Wrong size on ItemTransformRequiredItems_C_UpdateItems");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, TransformKey) == 0x000000, "Member 'ItemTransformRequiredItems_C_UpdateItems::TransformKey' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, SacrificePoints) == 0x000008, "Member 'ItemTransformRequiredItems_C_UpdateItems::SacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, NotHaveColor) == 0x000010, "Member 'ItemTransformRequiredItems_C_UpdateItems::NotHaveColor' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, HaveColor) == 0x000038, "Member 'ItemTransformRequiredItems_C_UpdateItems::HaveColor' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_int_Variable) == 0x000060, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000068, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition) == 0x000070, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_int_Variable2) == 0x00007C, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetRequiredItemQuantity_ReturnValue) == 0x000080, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetRequiredItemQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000084, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetRequiredItemDefinition_ReturnValue) == 0x000090, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetRequiredItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_bool_Variable) == 0x000098, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetDisplayName_ReturnValue) == 0x0000A0, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetContext_ReturnValue) == 0x0000B8, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_GetNumInInventory_ReturnValue) == 0x0000C0, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_GetNumInInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x0000C8, "Member 'ItemTransformRequiredItems_C_UpdateItems::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_bool_Variable2) == 0x0000CC, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_int_Variable3) == 0x0000D0, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_Select_Default) == 0x0000D4, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_int_Variable4) == 0x0000D8, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_int_Variable4' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_Select2_Default) == 0x0000E0, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_bool_Variable3) == 0x000108, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_Select3_Default) == 0x00010C, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_byte_Variable) == 0x000110, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_byte_Variable2) == 0x000111, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, Temp_bool_Variable4) == 0x000112, "Member 'ItemTransformRequiredItems_C_UpdateItems::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(ItemTransformRequiredItems_C_UpdateItems, K2Node_Select4_Default) == 0x000113, "Member 'ItemTransformRequiredItems_C_UpdateItems::K2Node_Select4_Default' has a wrong offset!");

}

