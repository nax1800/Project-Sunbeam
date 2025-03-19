#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCamera_Blueprint

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// 0x01B8 (0x01B8 - 0x0000)
struct VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0008(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable;                              // 0x0020(0x0018)(HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key3;                         // 0x0048(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputMouseDelta_DeltaX;                // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputMouseDelta_DeltaY;                // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue2;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key4;                         // 0x0088(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key2;                         // 0x00A0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable2;                             // 0x00B8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00D4(0x000C)(IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue3;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0108(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0120(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint");
static_assert(sizeof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint) == 0x0001B8, "Wrong size on VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, EntryPoint) == 0x000000, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_InputKeyEvent_Key) == 0x000008, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, Temp_struct_Variable) == 0x000020, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetHeroPlayerPawnByIndex_ReturnValue) == 0x000040, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetHeroPlayerPawnByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_InputKeyEvent_Key3) == 0x000048, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_InputKeyEvent_Key3' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_Event_DeltaSeconds) == 0x000064, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaX) == 0x000070, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaY) == 0x000074, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000078, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue2) == 0x000080, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_InputKeyEvent_Key4) == 0x000088, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_InputKeyEvent_Key4' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_InputKeyEvent_Key2) == 0x0000A0, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_InputKeyEvent_Key2' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, Temp_struct_Variable2) == 0x0000B8, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_IsValid_ReturnValue2) == 0x0000D0, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000D4, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue3) == 0x0000E0, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue3' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_BreakRotator_Roll) == 0x0000E8, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_BreakRotator_Pitch) == 0x0000EC, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_BreakRotator_Yaw) == 0x0000F0, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000F4, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000F8, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_MakeRotator_ReturnValue) == 0x000108, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000118, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000120, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0001A8, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetTimeOfDayManagerFromContext_ReturnValue) == 0x0001B0, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetTimeOfDayManagerFromContext_ReturnValue' has a wrong offset!");

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct VaultCamera_Blueprint_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong alignment on VaultCamera_Blueprint_C_ReceiveTick");
static_assert(sizeof(VaultCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong size on VaultCamera_Blueprint_C_ReceiveTick");
static_assert(offsetof(VaultCamera_Blueprint_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'VaultCamera_Blueprint_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
// 0x0018 (0x0018 - 0x0000)
struct VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");
static_assert(sizeof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4) == 0x000018, "Wrong size on VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");
static_assert(offsetof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4, Key) == 0x000000, "Member 'VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4::Key' has a wrong offset!");

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
// 0x0018 (0x0018 - 0x0000)
struct VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");
static_assert(sizeof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5) == 0x000018, "Wrong size on VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");
static_assert(offsetof(VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5, Key) == 0x000000, "Member 'VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5::Key' has a wrong offset!");

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6
// 0x0018 (0x0018 - 0x0000)
struct VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6");
static_assert(sizeof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6) == 0x000018, "Wrong size on VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6");
static_assert(offsetof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6, Key) == 0x000000, "Member 'VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6::Key' has a wrong offset!");

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7
// 0x0018 (0x0018 - 0x0000)
struct VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7");
static_assert(sizeof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7) == 0x000018, "Wrong size on VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7");
static_assert(offsetof(VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7, Key) == 0x000000, "Member 'VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7::Key' has a wrong offset!");

}

