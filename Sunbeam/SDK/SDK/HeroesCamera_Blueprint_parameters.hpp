#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroesCamera_Blueprint

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
// 0x0120 (0x0120 - 0x0000)
struct HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key3;                         // 0x0008(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable;                              // 0x0020(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key2;                         // 0x0038(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0050(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable2;                             // 0x0068(0x0018)(HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key4;                         // 0x0088(0x0018)(HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue2;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputMouseDelta_DeltaX;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputMouseDelta_DeltaY;                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x00C0(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00E0(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue3;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0104(0x000C)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint");
static_assert(sizeof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint) == 0x000120, "Wrong size on HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, EntryPoint) == 0x000000, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key3) == 0x000008, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key3' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_struct_Variable) == 0x000020, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key2) == 0x000038, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key2' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key) == 0x000050, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_struct_Variable2) == 0x000068, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key4) == 0x000088, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key4' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_Event_DeltaSeconds) == 0x0000A0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue2) == 0x0000A8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaX) == 0x0000B0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaY) == 0x0000B4, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000C0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000E0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Roll) == 0x0000EC, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Pitch) == 0x0000F0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Yaw) == 0x0000F4, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue3) == 0x0000F8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue3' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000100, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_MakeRotator_ReturnValue) == 0x000104, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000110, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetTimeOfDayManagerFromContext_ReturnValue) == 0x000118, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetTimeOfDayManagerFromContext_ReturnValue' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct HeroesCamera_Blueprint_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong alignment on HeroesCamera_Blueprint_C_ReceiveTick");
static_assert(sizeof(HeroesCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong size on HeroesCamera_Blueprint_C_ReceiveTick");
static_assert(offsetof(HeroesCamera_Blueprint_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'HeroesCamera_Blueprint_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
// 0x0018 (0x0018 - 0x0000)
struct HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4::Key' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5
// 0x0018 (0x0018 - 0x0000)
struct HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5::Key' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
// 0x0018 (0x0018 - 0x0000)
struct HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6::Key' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
// 0x0018 (0x0018 - 0x0000)
struct HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7::Key' has a wrong offset!");

// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
// 0x0018 (0x0018 - 0x0000)
struct HeroesCamera_Blueprint_C_HandleMousePress final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroesCamera_Blueprint_C_HandleMousePress) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_HandleMousePress");
static_assert(sizeof(HeroesCamera_Blueprint_C_HandleMousePress) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_HandleMousePress");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_GetHeroPlayerPawnByIndex_ReturnValue) == 0x000008, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_GetHeroPlayerPawnByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

