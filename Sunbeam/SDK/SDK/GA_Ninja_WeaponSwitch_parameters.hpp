#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_WeaponSwitch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C.ExecuteUbergraph_GA_Ninja_WeaponSwitch
// 0x0100 (0x0100 - 0x0000)
struct GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon;                  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon2;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput; // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue2;  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch) == 0x000008, "Wrong alignment on GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch");
static_assert(sizeof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch) == 0x000100, "Wrong size on GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, EntryPoint) == 0x000000, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_Event_EventData) == 0x000008, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_AsFort_Weapon) == 0x0000B0, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_AsFort_Weapon' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_AsFort_Weapon2) == 0x0000C0, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_AsFort_Weapon2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_bSuccess2) == 0x0000C8, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x0000D0, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x0000E0, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput) == 0x0000E8, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue2) == 0x0000F8, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_BooleanAND_ReturnValue) == 0x0000F9, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

