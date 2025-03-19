#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarSlotCooldown

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ItemDisplayStyle_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// 0x000C (0x000C - 0x0000)
struct QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemCooldownType                         K2Node_Event_CooldownType;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum3_CmpSuccess;                     // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum4_CmpSuccess;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemCooldownType                         K2Node_Event_CooldownType2;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum5_CmpSuccess;                     // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum6_CmpSuccess;                     // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown) == 0x000004, "Wrong alignment on QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown");
static_assert(sizeof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown) == 0x00000C, "Wrong size on QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, EntryPoint) == 0x000000, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_Event_CooldownType) == 0x000005, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_Event_CooldownType' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum2_CmpSuccess) == 0x000006, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum3_CmpSuccess) == 0x000007, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum3_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum4_CmpSuccess) == 0x000008, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum4_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_Event_CooldownType2) == 0x000009, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_Event_CooldownType2' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum5_CmpSuccess) == 0x00000A, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum5_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown, K2Node_SwitchEnum6_CmpSuccess) == 0x00000B, "Member 'QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown::K2Node_SwitchEnum6_CmpSuccess' has a wrong offset!");

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// 0x0001 (0x0001 - 0x0000)
struct QuickbarSlotCooldown_C_OnCooldownStopped final
{
public:
	EFortItemCooldownType                         CooldownType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuickbarSlotCooldown_C_OnCooldownStopped) == 0x000001, "Wrong alignment on QuickbarSlotCooldown_C_OnCooldownStopped");
static_assert(sizeof(QuickbarSlotCooldown_C_OnCooldownStopped) == 0x000001, "Wrong size on QuickbarSlotCooldown_C_OnCooldownStopped");
static_assert(offsetof(QuickbarSlotCooldown_C_OnCooldownStopped, CooldownType) == 0x000000, "Member 'QuickbarSlotCooldown_C_OnCooldownStopped::CooldownType' has a wrong offset!");

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// 0x0001 (0x0001 - 0x0000)
struct QuickbarSlotCooldown_C_OnCooldownStarted final
{
public:
	EFortItemCooldownType                         CooldownType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuickbarSlotCooldown_C_OnCooldownStarted) == 0x000001, "Wrong alignment on QuickbarSlotCooldown_C_OnCooldownStarted");
static_assert(sizeof(QuickbarSlotCooldown_C_OnCooldownStarted) == 0x000001, "Wrong size on QuickbarSlotCooldown_C_OnCooldownStarted");
static_assert(offsetof(QuickbarSlotCooldown_C_OnCooldownStarted, CooldownType) == 0x000000, "Member 'QuickbarSlotCooldown_C_OnCooldownStarted::CooldownType' has a wrong offset!");

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// 0x0005 (0x0005 - 0x0000)
struct QuickbarSlotCooldown_C_Show_Countdown final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuickbarSlotCooldown_C_Show_Countdown) == 0x000001, "Wrong alignment on QuickbarSlotCooldown_C_Show_Countdown");
static_assert(sizeof(QuickbarSlotCooldown_C_Show_Countdown) == 0x000005, "Wrong size on QuickbarSlotCooldown_C_Show_Countdown");
static_assert(offsetof(QuickbarSlotCooldown_C_Show_Countdown, Show) == 0x000000, "Member 'QuickbarSlotCooldown_C_Show_Countdown::Show' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Show_Countdown, Temp_bool_Variable) == 0x000001, "Member 'QuickbarSlotCooldown_C_Show_Countdown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Show_Countdown, Temp_byte_Variable) == 0x000002, "Member 'QuickbarSlotCooldown_C_Show_Countdown::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Show_Countdown, Temp_byte_Variable2) == 0x000003, "Member 'QuickbarSlotCooldown_C_Show_Countdown::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Show_Countdown, K2Node_Select_Default) == 0x000004, "Member 'QuickbarSlotCooldown_C_Show_Countdown::K2Node_Select_Default' has a wrong offset!");

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// 0x0068 (0x0068 - 0x0000)
struct QuickbarSlotCooldown_C_Initialize final
{
public:
	EItemDisplayStyle                             QuickbarItemDisplayStyle;                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFortItemCooldownType>                 DesiredCooldownTypesSupported;                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	EItemDisplayStyle                             Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable2;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable3;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable4;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable5;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable6;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable7;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuickbarSlotCooldown_C_Initialize) == 0x000008, "Wrong alignment on QuickbarSlotCooldown_C_Initialize");
static_assert(sizeof(QuickbarSlotCooldown_C_Initialize) == 0x000068, "Wrong size on QuickbarSlotCooldown_C_Initialize");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, QuickbarItemDisplayStyle) == 0x000000, "Member 'QuickbarSlotCooldown_C_Initialize::QuickbarItemDisplayStyle' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, DesiredCooldownTypesSupported) == 0x000008, "Member 'QuickbarSlotCooldown_C_Initialize::DesiredCooldownTypesSupported' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_byte_Variable) == 0x000018, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable) == 0x000020, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable2) == 0x000028, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable3) == 0x000030, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable3' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable4) == 0x000038, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable4' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable5) == 0x000040, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable5' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable6) == 0x000048, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable6' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, Temp_object_Variable7) == 0x000050, "Member 'QuickbarSlotCooldown_C_Initialize::Temp_object_Variable7' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, K2Node_Select_Default) == 0x000058, "Member 'QuickbarSlotCooldown_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'QuickbarSlotCooldown_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuickbarSlotCooldown_C_Initialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'QuickbarSlotCooldown_C_Initialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

