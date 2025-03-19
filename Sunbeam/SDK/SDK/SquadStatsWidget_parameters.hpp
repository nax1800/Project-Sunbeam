#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadStatsWidget

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
// 0x0018 (0x0018 - 0x0000)
struct SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget) == 0x000008, "Wrong alignment on SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget");
static_assert(sizeof(SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget) == 0x000018, "Wrong size on SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget");
static_assert(offsetof(SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget, EntryPoint) == 0x000000, "Member 'SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget, K2Node_ComponentBoundEvent_Button2) == 0x000008, "Member 'SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'SquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
// 0x0010 (0x0010 - 0x0000)
struct SquadStatsWidget_C_InitCoreStatsWidgetArray final
{
public:
	TArray<class UFortAttributeListItem_NUI*>     K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(SquadStatsWidget_C_InitCoreStatsWidgetArray) == 0x000008, "Wrong alignment on SquadStatsWidget_C_InitCoreStatsWidgetArray");
static_assert(sizeof(SquadStatsWidget_C_InitCoreStatsWidgetArray) == 0x000010, "Wrong size on SquadStatsWidget_C_InitCoreStatsWidgetArray");
static_assert(offsetof(SquadStatsWidget_C_InitCoreStatsWidgetArray, K2Node_MakeArray_Array) == 0x000000, "Member 'SquadStatsWidget_C_InitCoreStatsWidgetArray::K2Node_MakeArray_Array' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
// 0x0030 (0x0030 - 0x0000)
struct SquadStatsWidget_C_BindDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRegisteredPlayerInfo*              CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_BindDelegates) == 0x000008, "Wrong alignment on SquadStatsWidget_C_BindDelegates");
static_assert(sizeof(SquadStatsWidget_C_BindDelegates) == 0x000030, "Wrong size on SquadStatsWidget_C_BindDelegates");
static_assert(offsetof(SquadStatsWidget_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SquadStatsWidget_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindDelegates, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'SquadStatsWidget_C_BindDelegates::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindDelegates, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000018, "Member 'SquadStatsWidget_C_BindDelegates::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindDelegates, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SquadStatsWidget_C_BindDelegates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindDelegates, CallFunc_GetRegisteredPlayerInfo_ReturnValue) == 0x000028, "Member 'SquadStatsWidget_C_BindDelegates::CallFunc_GetRegisteredPlayerInfo_ReturnValue' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
// 0x0008 (0x0008 - 0x0000)
struct SquadStatsWidget_C_ToggleBetweenStats final
{
public:
	int32                                         NewIndex;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadStatsWidget_C_ToggleBetweenStats) == 0x000004, "Wrong alignment on SquadStatsWidget_C_ToggleBetweenStats");
static_assert(sizeof(SquadStatsWidget_C_ToggleBetweenStats) == 0x000008, "Wrong size on SquadStatsWidget_C_ToggleBetweenStats");
static_assert(offsetof(SquadStatsWidget_C_ToggleBetweenStats, NewIndex) == 0x000000, "Member 'SquadStatsWidget_C_ToggleBetweenStats::NewIndex' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_ToggleBetweenStats, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'SquadStatsWidget_C_ToggleBetweenStats::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
// 0x0038 (0x0038 - 0x0000)
struct SquadStatsWidget_C_UnbindDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemContext*              CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRegisteredPlayerInfo*              CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_UnbindDelegates) == 0x000008, "Wrong alignment on SquadStatsWidget_C_UnbindDelegates");
static_assert(sizeof(SquadStatsWidget_C_UnbindDelegates) == 0x000038, "Wrong size on SquadStatsWidget_C_UnbindDelegates");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SquadStatsWidget_C_UnbindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'SquadStatsWidget_C_UnbindDelegates::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'SquadStatsWidget_C_UnbindDelegates::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000020, "Member 'SquadStatsWidget_C_UnbindDelegates::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SquadStatsWidget_C_UnbindDelegates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_UnbindDelegates, CallFunc_GetRegisteredPlayerInfo_ReturnValue) == 0x000030, "Member 'SquadStatsWidget_C_UnbindDelegates::CallFunc_GetRegisteredPlayerInfo_ReturnValue' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
// 0x0020 (0x0020 - 0x0000)
struct SquadStatsWidget_C_RefreshScroll final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonBorder*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_RefreshScroll) == 0x000008, "Wrong alignment on SquadStatsWidget_C_RefreshScroll");
static_assert(sizeof(SquadStatsWidget_C_RefreshScroll) == 0x000020, "Wrong size on SquadStatsWidget_C_RefreshScroll");
static_assert(offsetof(SquadStatsWidget_C_RefreshScroll, Temp_bool_Variable) == 0x000000, "Member 'SquadStatsWidget_C_RefreshScroll::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_RefreshScroll, Temp_object_Variable) == 0x000008, "Member 'SquadStatsWidget_C_RefreshScroll::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_RefreshScroll, CallFunc_GetUINavigationManager_ReturnValue) == 0x000010, "Member 'SquadStatsWidget_C_RefreshScroll::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_RefreshScroll, K2Node_Select_Default) == 0x000018, "Member 'SquadStatsWidget_C_RefreshScroll::K2Node_Select_Default' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
// 0x0008 (0x0008 - 0x0000)
struct SquadStatsWidget_C_HighlightStat final
{
public:
	int32                                         InStatIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadStatsWidget_C_HighlightStat) == 0x000004, "Wrong alignment on SquadStatsWidget_C_HighlightStat");
static_assert(sizeof(SquadStatsWidget_C_HighlightStat) == 0x000008, "Wrong size on SquadStatsWidget_C_HighlightStat");
static_assert(offsetof(SquadStatsWidget_C_HighlightStat, InStatIndex) == 0x000000, "Member 'SquadStatsWidget_C_HighlightStat::InStatIndex' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_HighlightStat, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'SquadStatsWidget_C_HighlightStat::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.HandleActivityChanged
// 0x0002 (0x0002 - 0x0000)
struct SquadStatsWidget_C_HandleActivityChanged final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadStatsWidget_C_HandleActivityChanged) == 0x000001, "Wrong alignment on SquadStatsWidget_C_HandleActivityChanged");
static_assert(sizeof(SquadStatsWidget_C_HandleActivityChanged) == 0x000002, "Wrong size on SquadStatsWidget_C_HandleActivityChanged");
static_assert(offsetof(SquadStatsWidget_C_HandleActivityChanged, IsActive) == 0x000000, "Member 'SquadStatsWidget_C_HandleActivityChanged::IsActive' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_HandleActivityChanged, CallFunc_BooleanAND_ReturnValue) == 0x000001, "Member 'SquadStatsWidget_C_HandleActivityChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.BindToAttributeChanges
// 0x0090 (0x0090 - 0x0000)
struct SquadStatsWidget_C_BindToAttributeChanges final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemContext*              CallFunc_GetContext_ReturnValue2;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*              CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayAttribute>             CallFunc_GetTooltipAttributes_ReturnValue;         // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                     CallFunc_Array_Get_Item;                           // 0x0068(0x0020)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadStatsWidget_C_BindToAttributeChanges) == 0x000008, "Wrong alignment on SquadStatsWidget_C_BindToAttributeChanges");
static_assert(sizeof(SquadStatsWidget_C_BindToAttributeChanges) == 0x000090, "Wrong size on SquadStatsWidget_C_BindToAttributeChanges");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, Temp_int_Array_Index_Variable) == 0x000000, "Member 'SquadStatsWidget_C_BindToAttributeChanges::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SquadStatsWidget_C_BindToAttributeChanges::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'SquadStatsWidget_C_BindToAttributeChanges::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000030, "Member 'SquadStatsWidget_C_BindToAttributeChanges::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'SquadStatsWidget_C_BindToAttributeChanges::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetContext_ReturnValue2) == 0x000040, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetRegisteredPlayerInfo_ReturnValue) == 0x000048, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetRegisteredPlayerInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetTooltipAttributes_ReturnValue) == 0x000050, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetTooltipAttributes_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000060, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_Array_Get_Item) == 0x000068, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadStatsWidget_C_BindToAttributeChanges, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'SquadStatsWidget_C_BindToAttributeChanges::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SquadStatsWidget.SquadStatsWidget_C.HandleAbilitySystemChanged
// 0x0008 (0x0008 - 0x0000)
struct SquadStatsWidget_C_HandleAbilitySystemChanged final
{
public:
	class UFortAbilitySystemContext*              CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadStatsWidget_C_HandleAbilitySystemChanged) == 0x000008, "Wrong alignment on SquadStatsWidget_C_HandleAbilitySystemChanged");
static_assert(sizeof(SquadStatsWidget_C_HandleAbilitySystemChanged) == 0x000008, "Wrong size on SquadStatsWidget_C_HandleAbilitySystemChanged");
static_assert(offsetof(SquadStatsWidget_C_HandleAbilitySystemChanged, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'SquadStatsWidget_C_HandleAbilitySystemChanged::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

