#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PotentialResourceWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget) == 0x000008, "Wrong alignment on PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget");
static_assert(sizeof(PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget) == 0x000018, "Wrong size on PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget");
static_assert(offsetof(PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget, EntryPoint) == 0x000000, "Member 'PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
// 0x0018 (0x0018 - 0x0000)
struct PotentialResourceWidget_C_UpdateResourceCountText final
{
public:
	class FText                                   CallFunc_GetResourceCountAsText_Result;            // 0x0000(0x0018)()
};
static_assert(alignof(PotentialResourceWidget_C_UpdateResourceCountText) == 0x000008, "Wrong alignment on PotentialResourceWidget_C_UpdateResourceCountText");
static_assert(sizeof(PotentialResourceWidget_C_UpdateResourceCountText) == 0x000018, "Wrong size on PotentialResourceWidget_C_UpdateResourceCountText");
static_assert(offsetof(PotentialResourceWidget_C_UpdateResourceCountText, CallFunc_GetResourceCountAsText_Result) == 0x000000, "Member 'PotentialResourceWidget_C_UpdateResourceCountText::CallFunc_GetResourceCountAsText_Result' has a wrong offset!");

// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
// 0x00A8 (0x00A8 - 0x0000)
struct PotentialResourceWidget_C_GetResourceCountAsText final
{
public:
	class UFortItem*                              Resource;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Result;                                            // 0x0008(0x0018)(Parm, OutParm)
	int32                                         CallFunc_GetNumInStack_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(PotentialResourceWidget_C_GetResourceCountAsText) == 0x000008, "Wrong alignment on PotentialResourceWidget_C_GetResourceCountAsText");
static_assert(sizeof(PotentialResourceWidget_C_GetResourceCountAsText) == 0x0000A8, "Wrong size on PotentialResourceWidget_C_GetResourceCountAsText");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, Resource) == 0x000000, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::Resource' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, Result) == 0x000008, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::Result' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, CallFunc_GetNumInStack_ReturnValue) == 0x000020, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::CallFunc_GetNumInStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, K2Node_MakeArray_Array) == 0x000080, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_GetResourceCountAsText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'PotentialResourceWidget_C_GetResourceCountAsText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
// 0x0068 (0x0068 - 0x0000)
struct PotentialResourceWidget_C_SetupFont final
{
public:
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0000(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut; // 0x0014(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select2_Default;                            // 0x002C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
};
static_assert(alignof(PotentialResourceWidget_C_SetupFont) == 0x000008, "Wrong alignment on PotentialResourceWidget_C_SetupFont");
static_assert(sizeof(PotentialResourceWidget_C_SetupFont) == 0x000068, "Wrong size on PotentialResourceWidget_C_SetupFont");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, Temp_struct_Variable) == 0x000000, "Member 'PotentialResourceWidget_C_SetupFont::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, Temp_bool_Variable) == 0x000010, "Member 'PotentialResourceWidget_C_SetupFont::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut) == 0x000014, "Member 'PotentialResourceWidget_C_SetupFont::CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, Temp_bool_Variable2) == 0x000024, "Member 'PotentialResourceWidget_C_SetupFont::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, K2Node_Select_Default) == 0x000028, "Member 'PotentialResourceWidget_C_SetupFont::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, K2Node_Select2_Default) == 0x00002C, "Member 'PotentialResourceWidget_C_SetupFont::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_SetupFont, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'PotentialResourceWidget_C_SetupFont::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
// 0x0010 (0x0010 - 0x0000)
struct PotentialResourceWidget_C_ShowPotentialResource final
{
public:
	class UFortItem*                              PotentialResource_0;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWeakpointDamage;                                  // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PotentialResourceWidget_C_ShowPotentialResource) == 0x000008, "Wrong alignment on PotentialResourceWidget_C_ShowPotentialResource");
static_assert(sizeof(PotentialResourceWidget_C_ShowPotentialResource) == 0x000010, "Wrong size on PotentialResourceWidget_C_ShowPotentialResource");
static_assert(offsetof(PotentialResourceWidget_C_ShowPotentialResource, PotentialResource_0) == 0x000000, "Member 'PotentialResourceWidget_C_ShowPotentialResource::PotentialResource_0' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_ShowPotentialResource, bWeakpointDamage) == 0x000008, "Member 'PotentialResourceWidget_C_ShowPotentialResource::bWeakpointDamage' has a wrong offset!");
static_assert(offsetof(PotentialResourceWidget_C_ShowPotentialResource, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'PotentialResourceWidget_C_ShowPotentialResource::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

