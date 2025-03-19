#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// 0x0038 (0x0038 - 0x0000)
struct PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetGameAccountId_ReturnValue;             // 0x0020(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem) == 0x000008, "Wrong alignment on PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem");
static_assert(sizeof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem) == 0x000038, "Wrong size on PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, EntryPoint) == 0x000000, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000010, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, CallFunc_GetGameAccountId_ReturnValue) == 0x000020, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::CallFunc_GetGameAccountId_ReturnValue' has a wrong offset!");

}

