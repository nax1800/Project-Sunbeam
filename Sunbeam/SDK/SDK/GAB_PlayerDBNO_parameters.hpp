#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNO

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
// 0x0118 (0x0118 - 0x0000)
struct GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0038(0x00A8)(ConstParm)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO) == 0x000008, "Wrong alignment on GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO");
static_assert(sizeof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO) == 0x000118, "Wrong size on GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, EntryPoint) == 0x000000, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_Event_EventData) == 0x000038, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000E0, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000F0, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000F8, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO, K2Node_CreateDelegate_OutputDelegate4) == 0x000108, "Member 'GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
// 0x0158 (0x0158 - 0x0000)
struct GAB_PlayerDBNO_C_InitializeDeathHitDirection final
{
public:
	struct FGameplayEventData                     EventHitData;                                      // 0x0000(0x00A8)(Parm)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x00A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0148(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_PlayerDBNO_C_InitializeDeathHitDirection) == 0x000008, "Wrong alignment on GAB_PlayerDBNO_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_PlayerDBNO_C_InitializeDeathHitDirection) == 0x000158, "Wrong size on GAB_PlayerDBNO_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000A8, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000B4, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000B8, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000C0, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_PlayerDBNO_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000148, "Member 'GAB_PlayerDBNO_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

}

