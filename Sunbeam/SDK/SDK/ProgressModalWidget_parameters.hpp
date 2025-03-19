#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000008, "Wrong alignment on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(sizeof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000048, "Wrong size on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, EntryPoint) == 0x000000, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct ProgressModalWidget_C_Initialize final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProgressModalWidget_C_Initialize) == 0x000008, "Wrong alignment on ProgressModalWidget_C_Initialize");
static_assert(sizeof(ProgressModalWidget_C_Initialize) == 0x000008, "Wrong size on ProgressModalWidget_C_Initialize");
static_assert(offsetof(ProgressModalWidget_C_Initialize, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'ProgressModalWidget_C_Initialize::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetTitle final
{
public:
	class FText                                   Title_0;                                           // 0x0000(0x0018)(Parm)
};
static_assert(alignof(ProgressModalWidget_C_SetTitle) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetTitle");
static_assert(sizeof(ProgressModalWidget_C_SetTitle) == 0x000018, "Wrong size on ProgressModalWidget_C_SetTitle");
static_assert(offsetof(ProgressModalWidget_C_SetTitle, Title_0) == 0x000000, "Member 'ProgressModalWidget_C_SetTitle::Title_0' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetDescription final
{
public:
	class FText                                   Description_0;                                     // 0x0000(0x0018)(Parm)
};
static_assert(alignof(ProgressModalWidget_C_SetDescription) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetDescription");
static_assert(sizeof(ProgressModalWidget_C_SetDescription) == 0x000018, "Wrong size on ProgressModalWidget_C_SetDescription");
static_assert(offsetof(ProgressModalWidget_C_SetDescription, Description_0) == 0x000000, "Member 'ProgressModalWidget_C_SetDescription::Description_0' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// 0x0090 (0x0090 - 0x0000)
struct ProgressModalWidget_C_SetIcon final
{
public:
	struct FSlateBrush                            Icon_0;                                            // 0x0000(0x0090)(Parm)
};
static_assert(alignof(ProgressModalWidget_C_SetIcon) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetIcon");
static_assert(sizeof(ProgressModalWidget_C_SetIcon) == 0x000090, "Wrong size on ProgressModalWidget_C_SetIcon");
static_assert(offsetof(ProgressModalWidget_C_SetIcon, Icon_0) == 0x000000, "Member 'ProgressModalWidget_C_SetIcon::Icon_0' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// 0x02A8 (0x02A8 - 0x0000)
struct ProgressModalWidget_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0038(0x0048)(Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0138(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01F0(0x00B8)()
};
static_assert(alignof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(sizeof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x0002A8, "Wrong size on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000038, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, ReturnValue) == 0x000080, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000138, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Handled_ReturnValue) == 0x0001F0, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

