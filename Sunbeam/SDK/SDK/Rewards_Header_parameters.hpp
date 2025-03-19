#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rewards_Header

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header
// 0x0010 (0x0010 - 0x0000)
struct Rewards_Header_C_ExecuteUbergraph_Rewards_Header final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header) == 0x000004, "Wrong alignment on Rewards_Header_C_ExecuteUbergraph_Rewards_Header");
static_assert(sizeof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header) == 0x000010, "Wrong size on Rewards_Header_C_ExecuteUbergraph_Rewards_Header");
static_assert(offsetof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header, EntryPoint) == 0x000000, "Member 'Rewards_Header_C_ExecuteUbergraph_Rewards_Header::EntryPoint' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Rewards_Header_C_ExecuteUbergraph_Rewards_Header::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header, CallFunc_RandomInteger_ReturnValue) == 0x000008, "Member 'Rewards_Header_C_ExecuteUbergraph_Rewards_Header::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_ExecuteUbergraph_Rewards_Header, K2Node_SwitchInteger_CmpSuccess) == 0x00000C, "Member 'Rewards_Header_C_ExecuteUbergraph_Rewards_Header::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Rewards_Header_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_PreConstruct) == 0x000001, "Wrong alignment on Rewards_Header_C_PreConstruct");
static_assert(sizeof(Rewards_Header_C_PreConstruct) == 0x000001, "Wrong size on Rewards_Header_C_PreConstruct");
static_assert(offsetof(Rewards_Header_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Rewards_Header_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.PopulateFromReward
// 0x0018 (0x0018 - 0x0000)
struct Rewards_Header_C_PopulateFromReward final
{
public:
	class UFortRewardNotificationData*            InReward;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardCollectionBookData*          K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_PopulateFromReward) == 0x000008, "Wrong alignment on Rewards_Header_C_PopulateFromReward");
static_assert(sizeof(Rewards_Header_C_PopulateFromReward) == 0x000018, "Wrong size on Rewards_Header_C_PopulateFromReward");
static_assert(offsetof(Rewards_Header_C_PopulateFromReward, InReward) == 0x000000, "Member 'Rewards_Header_C_PopulateFromReward::InReward' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromReward, K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data) == 0x000008, "Member 'Rewards_Header_C_PopulateFromReward::K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromReward, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Rewards_Header_C_PopulateFromReward::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText
// 0x0080 (0x0080 - 0x0000)
struct Rewards_Header_C_SetMissionLootLevelText final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIRewardReport*                    CallFunc_GetLastMissionRewardReport_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardDisplayLevel_ReturnValue;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
};
static_assert(alignof(Rewards_Header_C_SetMissionLootLevelText) == 0x000008, "Wrong alignment on Rewards_Header_C_SetMissionLootLevelText");
static_assert(sizeof(Rewards_Header_C_SetMissionLootLevelText) == 0x000080, "Wrong size on Rewards_Header_C_SetMissionLootLevelText");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'Rewards_Header_C_SetMissionLootLevelText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, CallFunc_GetLastMissionRewardReport_ReturnValue) == 0x000008, "Member 'Rewards_Header_C_SetMissionLootLevelText::CallFunc_GetLastMissionRewardReport_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, CallFunc_GetRewardDisplayLevel_ReturnValue) == 0x000010, "Member 'Rewards_Header_C_SetMissionLootLevelText::CallFunc_GetRewardDisplayLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Rewards_Header_C_SetMissionLootLevelText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'Rewards_Header_C_SetMissionLootLevelText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, K2Node_MakeArray_Array) == 0x000058, "Member 'Rewards_Header_C_SetMissionLootLevelText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetMissionLootLevelText, CallFunc_Format_ReturnValue) == 0x000068, "Member 'Rewards_Header_C_SetMissionLootLevelText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.FadeInSubHeader
// 0x0010 (0x0010 - 0x0000)
struct Rewards_Header_C_FadeInSubHeader final
{
public:
	float                                         CurrentAlpha;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_FadeInSubHeader) == 0x000004, "Wrong alignment on Rewards_Header_C_FadeInSubHeader");
static_assert(sizeof(Rewards_Header_C_FadeInSubHeader) == 0x000010, "Wrong size on Rewards_Header_C_FadeInSubHeader");
static_assert(offsetof(Rewards_Header_C_FadeInSubHeader, CurrentAlpha) == 0x000000, "Member 'Rewards_Header_C_FadeInSubHeader::CurrentAlpha' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_FadeInSubHeader, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'Rewards_Header_C_FadeInSubHeader::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_FadeInSubHeader, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'Rewards_Header_C_FadeInSubHeader::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_FadeInSubHeader, CallFunc_Less_FloatFloat_ReturnValue) == 0x00000C, "Member 'Rewards_Header_C_FadeInSubHeader::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_FadeInSubHeader, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'Rewards_Header_C_FadeInSubHeader::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType
// 0x0160 (0x0160 - 0x0000)
struct Rewards_Header_C_PopulateFromRewardType final
{
public:
	EFrontEndRewardType                           Selection;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollectionBookRewardType                     CollectionBookRewardType;                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RewardDetailText;                                  // 0x0008(0x0018)(Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0078(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x00E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x00F8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array3;                           // 0x0138(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue3;                      // 0x0148(0x0018)()
};
static_assert(alignof(Rewards_Header_C_PopulateFromRewardType) == 0x000008, "Wrong alignment on Rewards_Header_C_PopulateFromRewardType");
static_assert(sizeof(Rewards_Header_C_PopulateFromRewardType) == 0x000160, "Wrong size on Rewards_Header_C_PopulateFromRewardType");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, Selection) == 0x000000, "Member 'Rewards_Header_C_PopulateFromRewardType::Selection' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, CollectionBookRewardType) == 0x000001, "Member 'Rewards_Header_C_PopulateFromRewardType::CollectionBookRewardType' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, RewardDetailText) == 0x000008, "Member 'Rewards_Header_C_PopulateFromRewardType::RewardDetailText' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_SwitchEnum2_CmpSuccess) == 0x000021, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeArray_Array) == 0x000068, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeStruct_FormatArgumentData2) == 0x000078, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'Rewards_Header_C_PopulateFromRewardType::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeArray_Array2) == 0x0000D0, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, CallFunc_Format_ReturnValue2) == 0x0000E0, "Member 'Rewards_Header_C_PopulateFromRewardType::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeStruct_FormatArgumentData3) == 0x0000F8, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, K2Node_MakeArray_Array3) == 0x000138, "Member 'Rewards_Header_C_PopulateFromRewardType::K2Node_MakeArray_Array3' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_PopulateFromRewardType, CallFunc_Format_ReturnValue3) == 0x000148, "Member 'Rewards_Header_C_PopulateFromRewardType::CallFunc_Format_ReturnValue3' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.SetQuestNameText
// 0x0050 (0x0050 - 0x0000)
struct Rewards_Header_C_SetQuestNameText final
{
public:
	class UFortRewardQuestData*                   K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0018)()
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRewardHeaderText_ReturnValue;          // 0x0030(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_SetQuestNameText) == 0x000008, "Wrong alignment on Rewards_Header_C_SetQuestNameText");
static_assert(sizeof(Rewards_Header_C_SetQuestNameText) == 0x000050, "Wrong size on Rewards_Header_C_SetQuestNameText");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, K2Node_DynamicCast_AsFort_Reward_Quest_Data) == 0x000000, "Member 'Rewards_Header_C_SetQuestNameText::K2Node_DynamicCast_AsFort_Reward_Quest_Data' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'Rewards_Header_C_SetQuestNameText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'Rewards_Header_C_SetQuestNameText::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x000028, "Member 'Rewards_Header_C_SetQuestNameText::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, CallFunc_GetRewardHeaderText_ReturnValue) == 0x000030, "Member 'Rewards_Header_C_SetQuestNameText::CallFunc_GetRewardHeaderText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SetQuestNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000048, "Member 'Rewards_Header_C_SetQuestNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation
// 0x0014 (0x0014 - 0x0000)
struct Rewards_Header_C_SkipFadeInSubHeaderAnimation final
{
public:
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0000(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Rewards_Header_C_SkipFadeInSubHeaderAnimation) == 0x000004, "Wrong alignment on Rewards_Header_C_SkipFadeInSubHeaderAnimation");
static_assert(sizeof(Rewards_Header_C_SkipFadeInSubHeaderAnimation) == 0x000014, "Wrong size on Rewards_Header_C_SkipFadeInSubHeaderAnimation");
static_assert(offsetof(Rewards_Header_C_SkipFadeInSubHeaderAnimation, K2Node_MakeStruct_LinearColor) == 0x000000, "Member 'Rewards_Header_C_SkipFadeInSubHeaderAnimation::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(Rewards_Header_C_SkipFadeInSubHeaderAnimation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'Rewards_Header_C_SkipFadeInSubHeaderAnimation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

