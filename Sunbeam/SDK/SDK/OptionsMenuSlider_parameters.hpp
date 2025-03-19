#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuSlider.OptionsMenuSlider_C.SliderChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_SliderChanged__DelegateSignature final
{
public:
	float                                         Slider_Value;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_SliderChanged__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_SliderChanged__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_SliderChanged__DelegateSignature, Slider_Value) == 0x000000, "Member 'OptionsMenuSlider_C_SliderChanged__DelegateSignature::Slider_Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.ExecuteUbergraph_OptionsMenuSlider
// 0x0188 (0x0188 - 0x0000)
struct OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent2;                          // 0x0018(0x0078)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0090(0x0034)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	float                                         K2Node_ComponentBoundEvent_Value2;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0148(0x0018)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0160(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor2;                    // 0x0170(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue2;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue3;                    // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider");
static_assert(sizeof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider) == 0x000188, "Wrong size on OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, EntryPoint) == 0x000000, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue) == 0x000004, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_MakeLiteralName_ReturnValue) == 0x000008, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MouseEvent2) == 0x000018, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MouseEvent2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MyGeometry) == 0x000090, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_ComponentBoundEvent_Value2) == 0x000140, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_ComponentBoundEvent_Value2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_ComponentBoundEvent_Value) == 0x000144, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_Conv_FloatToText_ReturnValue) == 0x000148, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_MakeStruct_LinearColor) == 0x000160, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_MakeStruct_LinearColor2) == 0x000170, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_MakeStruct_LinearColor2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue2) == 0x000180, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue3) == 0x000184, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue3' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct OptionsMenuSlider_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_C_OnMouseEnter) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_OnMouseEnter");
static_assert(sizeof(OptionsMenuSlider_C_OnMouseEnter) == 0x0000B0, "Wrong size on OptionsMenuSlider_C_OnMouseEnter");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'OptionsMenuSlider_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'OptionsMenuSlider_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct OptionsMenuSlider_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_C_OnMouseLeave) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_OnMouseLeave");
static_assert(sizeof(OptionsMenuSlider_C_OnMouseLeave) == 0x000078, "Wrong size on OptionsMenuSlider_C_OnMouseLeave");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'OptionsMenuSlider_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.Update Slider
// 0x0060 (0x0060 - 0x0000)
struct OptionsMenuSlider_C_Update_Slider final
{
public:
	class FText                                   Slider_Text;                                       // 0x0000(0x0018)(Parm)
	float                                         Slider_Value;                                      // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Hover_Text_0;                                      // 0x0020(0x0018)(Parm)
	class UCommonTextBlock*                       Tooltip_Text_Block;                                // 0x0038(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0048(0x0018)()
};
static_assert(alignof(OptionsMenuSlider_C_Update_Slider) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_Update_Slider");
static_assert(sizeof(OptionsMenuSlider_C_Update_Slider) == 0x000060, "Wrong size on OptionsMenuSlider_C_Update_Slider");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Slider_Text) == 0x000000, "Member 'OptionsMenuSlider_C_Update_Slider::Slider_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Slider_Value) == 0x000018, "Member 'OptionsMenuSlider_C_Update_Slider::Slider_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Hover_Text_0) == 0x000020, "Member 'OptionsMenuSlider_C_Update_Slider::Hover_Text_0' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Tooltip_Text_Block) == 0x000038, "Member 'OptionsMenuSlider_C_Update_Slider::Tooltip_Text_Block' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, CallFunc_MakeLiteralName_ReturnValue) == 0x000040, "Member 'OptionsMenuSlider_C_Update_Slider::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, CallFunc_Conv_FloatToText_ReturnValue) == 0x000048, "Member 'OptionsMenuSlider_C_Update_Slider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.Center on Widget
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuSlider_C_Center_on_Widget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_Center_on_Widget) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_Center_on_Widget");
static_assert(sizeof(OptionsMenuSlider_C_Center_on_Widget) == 0x000008, "Wrong size on OptionsMenuSlider_C_Center_on_Widget");
static_assert(offsetof(OptionsMenuSlider_C_Center_on_Widget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'OptionsMenuSlider_C_Center_on_Widget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

}

