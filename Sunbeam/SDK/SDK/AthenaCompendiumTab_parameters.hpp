#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCompendiumTab

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ExecuteUbergraph_AthenaCompendiumTab
// 0x0040 (0x0040 - 0x0000)
struct AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_Root_C*                      CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab) == 0x000008, "Wrong alignment on AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab");
static_assert(sizeof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab) == 0x000040, "Wrong size on AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, EntryPoint) == 0x000000, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, CallFunc_Create_ReturnValue) == 0x000010, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000020, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab, K2Node_MakeArray_Array) == 0x000030, "Member 'AthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab::K2Node_MakeArray_Array' has a wrong offset!");

// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}

