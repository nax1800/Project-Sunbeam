#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_InteractUse

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.ExecuteUbergraph_GA_DefaultPlayer_InteractUse
// 0x0058 (0x0058 - 0x0000)
struct GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse) == 0x000008, "Wrong alignment on GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse");
static_assert(sizeof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse) == 0x000058, "Wrong size on GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000048, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

