#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckRateExperienceAction

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
// 0x00C8 (0x00C8 - 0x0000)
struct CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortScriptedActionParams              K2Node_Event_Params;                               // 0x0008(0x0030)(ConstParm, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventSource;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;              // 0x0050(0x0020)(ConstParm, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFeedback_RateExperience_C*             CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetFeedbackTitle_ReturnValue;             // 0x0088(0x0018)()
	bool                                          CallFunc_ShouldShowRateWidget_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPendingLogout_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction) == 0x000008, "Wrong alignment on CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction");
static_assert(sizeof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction) == 0x0000C8, "Wrong size on CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, EntryPoint) == 0x000000, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, K2Node_Event_Params) == 0x000008, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::K2Node_Event_Params' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000038, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, K2Node_HandleClientEvent_EventSource) == 0x000040, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, K2Node_HandleClientEvent_EventFocus) == 0x000048, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, K2Node_HandleClientEvent_ClientEvent) == 0x000050, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetPlayerController_ReturnValue) == 0x000070, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetContext_ReturnValue) == 0x000078, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_Create_ReturnValue) == 0x000080, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetFeedbackTitle_ReturnValue) == 0x000088, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetFeedbackTitle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_ShouldShowRateWidget_ReturnValue) == 0x0000A0, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_ShouldShowRateWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetContext_ReturnValue2) == 0x0000A8, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_IsPendingLogout_ReturnValue) == 0x0000B0, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_IsPendingLogout_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_GetContext_ReturnValue3) == 0x0000B8, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction, CallFunc_Not_PreBool_ReturnValue) == 0x0000C0, "Member 'CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
// 0x0030 (0x0030 - 0x0000)
struct CheckRateExperienceAction_C_Execute final
{
public:
	struct FFortScriptedActionParams              Params_0;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckRateExperienceAction_C_Execute) == 0x000008, "Wrong alignment on CheckRateExperienceAction_C_Execute");
static_assert(sizeof(CheckRateExperienceAction_C_Execute) == 0x000030, "Wrong size on CheckRateExperienceAction_C_Execute");
static_assert(offsetof(CheckRateExperienceAction_C_Execute, Params_0) == 0x000000, "Member 'CheckRateExperienceAction_C_Execute::Params_0' has a wrong offset!");

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
// 0x0030 (0x0030 - 0x0000)
struct CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue) == 0x000008, "Wrong alignment on CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue");
static_assert(sizeof(CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue) == 0x000030, "Wrong size on CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue");
static_assert(offsetof(CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue, EventSource) == 0x000000, "Member 'CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue::EventSource' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue, EventFocus) == 0x000008, "Member 'CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue::EventFocus' has a wrong offset!");
static_assert(offsetof(CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue, ClientEvent) == 0x000010, "Member 'CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue::ClientEvent' has a wrong offset!");

}

