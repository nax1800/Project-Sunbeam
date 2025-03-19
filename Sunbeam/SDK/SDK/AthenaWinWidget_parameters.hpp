#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWinWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaWinWidget.AthenaWinWidget_C.ExecuteUbergraph_AthenaWinWidget
// 0x0030 (0x0030 - 0x0000)
struct AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget) == 0x000008, "Wrong alignment on AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget");
static_assert(sizeof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget) == 0x000030, "Wrong size on AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, EntryPoint) == 0x000000, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000008, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000020, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AthenaWinWidget.AthenaWinWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}

