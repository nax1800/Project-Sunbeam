#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_ReflectDamage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage
// 0x0008 (0x0008 - 0x0000)
struct GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage) == 0x000004, "Wrong alignment on GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage");
static_assert(sizeof(GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage) == 0x000008, "Wrong size on GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage, EntryPoint) == 0x000000, "Member 'GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCNL_GM_ReflectDamage_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_GM_ReflectDamage_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_GM_ReflectDamage_C_ReceiveTick");
static_assert(sizeof(GCNL_GM_ReflectDamage_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_GM_ReflectDamage_C_ReceiveTick");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_GM_ReflectDamage_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned
// 0x0298 (0x0298 - 0x0000)
struct GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00F0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00FC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0108(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0114(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue2;        // 0x0128(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0138(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue2;           // 0x01C4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue2;       // 0x01D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01DC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x01E8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01F4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0200(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0210(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned) == 0x000298, "Wrong size on GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000C0, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x0000D0, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D8, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_GetAttachParent_ReturnValue) == 0x0000E8, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000F0, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_GetSocketLocation_ReturnValue) == 0x0000FC, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000108, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000114, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000120, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Conv_VectorToRotator_ReturnValue2) == 0x000128, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Conv_VectorToRotator_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_VSize_ReturnValue) == 0x000134, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000138, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0001C0, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_GetSocketLocation_ReturnValue2) == 0x0001C4, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_GetSocketLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Subtract_VectorVector_ReturnValue2) == 0x0001D0, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Subtract_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_MakeVector_ReturnValue) == 0x0001DC, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_RandomUnitVector_ReturnValue) == 0x0001E8, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001F4, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_Add_VectorVector_ReturnValue) == 0x000200, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000210, "Member 'GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

