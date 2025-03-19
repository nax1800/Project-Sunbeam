#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OutpostScreenCanEditPanel

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
// 0x0390 (0x0390 - 0x0000)
struct OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0008(0x0190)(ConstParm)
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	class UFortBaseButton*                        K2Node_ComponentBoundEvent_Button2;                // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Selected2;              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate2;             // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_NewTeamMemberInfo;              // 0x01C8(0x0190)()
	int32                                         K2Node_CustomEvent_PlayerIndex;                    // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0360(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Selected;               // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel");
static_assert(sizeof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel) == 0x000390, "Wrong size on OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, EntryPoint) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CustomEvent_PlayerInfo) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CreateDelegate_OutputDelegate) == 0x000198, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_ComponentBoundEvent_Button2) == 0x0001A8, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_ComponentBoundEvent_Selected2) == 0x0001B0, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_ComponentBoundEvent_Selected2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CreateDelegate_OutputDelegate2) == 0x0001B8, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CustomEvent_NewTeamMemberInfo) == 0x0001C8, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CustomEvent_NewTeamMemberInfo' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CustomEvent_PlayerIndex) == 0x000358, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CustomEvent_PlayerIndex' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_CreateDelegate_OutputDelegate3) == 0x000360, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, CallFunc_GetContext_ReturnValue) == 0x000370, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_ComponentBoundEvent_Button) == 0x000378, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, K2Node_ComponentBoundEvent_Selected) == 0x000380, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::K2Node_ComponentBoundEvent_Selected' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000388, "Member 'OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
// 0x0190 (0x0190 - 0x0000)
struct OutpostScreenCanEditPanel_C_PartyUpdated final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_PartyUpdated) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_PartyUpdated");
static_assert(sizeof(OutpostScreenCanEditPanel_C_PartyUpdated) == 0x000190, "Wrong size on OutpostScreenCanEditPanel_C_PartyUpdated");
static_assert(offsetof(OutpostScreenCanEditPanel_C_PartyUpdated, PlayerInfo) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_PartyUpdated::PlayerInfo' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");
static_assert(sizeof(OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature) == 0x000010, "Wrong size on OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");
static_assert(offsetof(OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature, Button) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature, Selected) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature::Selected' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
// 0x0004 (0x0004 - 0x0000)
struct OutpostScreenCanEditPanel_C_HandleRemoved final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_HandleRemoved) == 0x000004, "Wrong alignment on OutpostScreenCanEditPanel_C_HandleRemoved");
static_assert(sizeof(OutpostScreenCanEditPanel_C_HandleRemoved) == 0x000004, "Wrong size on OutpostScreenCanEditPanel_C_HandleRemoved");
static_assert(offsetof(OutpostScreenCanEditPanel_C_HandleRemoved, PlayerIndex) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_HandleRemoved::PlayerIndex' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
// 0x0190 (0x0190 - 0x0000)
struct OutpostScreenCanEditPanel_C_HandleJoined final
{
public:
	struct FFortTeamMemberInfo                    NewTeamMemberInfo;                                 // 0x0000(0x0190)(Parm)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_HandleJoined) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_HandleJoined");
static_assert(sizeof(OutpostScreenCanEditPanel_C_HandleJoined) == 0x000190, "Wrong size on OutpostScreenCanEditPanel_C_HandleJoined");
static_assert(offsetof(OutpostScreenCanEditPanel_C_HandleJoined, NewTeamMemberInfo) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_HandleJoined::NewTeamMemberInfo' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature final
{
public:
	class UFortBaseButton*                        Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");
static_assert(sizeof(OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature) == 0x000010, "Wrong size on OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");
static_assert(offsetof(OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature, Button) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature, Selected) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature::Selected' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
// 0x0088 (0x0088 - 0x0000)
struct OutpostScreenCanEditPanel_C_Init final
{
public:
	class AFortPlayerControllerOutpost*           InOutpostOwner;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutpostOwner_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateOutpost*                K2Node_DynamicCast_AsFort_Player_State_Outpost;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOutpostScreenCanEditRow_C*             CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerPawn*>                CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns; // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateOutpost*                K2Node_DynamicCast_AsFort_Player_State_Outpost2;   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_Init) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_Init");
static_assert(sizeof(OutpostScreenCanEditPanel_C_Init) == 0x000088, "Wrong size on OutpostScreenCanEditPanel_C_Init");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, InOutpostOwner) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_Init::InOutpostOwner' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_IsOutpostOwner_ReturnValue) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_IsOutpostOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, K2Node_DynamicCast_AsFort_Player_State_Outpost) == 0x000010, "Member 'OutpostScreenCanEditPanel_C_Init::K2Node_DynamicCast_AsFort_Player_State_Outpost' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'OutpostScreenCanEditPanel_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'OutpostScreenCanEditPanel_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_GetChildrenCount_ReturnValue) == 0x000020, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'OutpostScreenCanEditPanel_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, Temp_bool_Variable) == 0x000038, "Member 'OutpostScreenCanEditPanel_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_Create_ReturnValue) == 0x000040, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000048, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, Temp_byte_Variable) == 0x000050, "Member 'OutpostScreenCanEditPanel_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns) == 0x000058, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_Array_Get_Item) == 0x000068, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, K2Node_DynamicCast_AsFort_Player_State_Outpost2) == 0x000078, "Member 'OutpostScreenCanEditPanel_C_Init::K2Node_DynamicCast_AsFort_Player_State_Outpost2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, K2Node_DynamicCast_bSuccess2) == 0x000080, "Member 'OutpostScreenCanEditPanel_C_Init::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000081, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, Temp_byte_Variable2) == 0x000082, "Member 'OutpostScreenCanEditPanel_C_Init::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, CallFunc_BooleanAND_ReturnValue2) == 0x000083, "Member 'OutpostScreenCanEditPanel_C_Init::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_Init, K2Node_Select_Default) == 0x000084, "Member 'OutpostScreenCanEditPanel_C_Init::K2Node_Select_Default' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
// 0x0058 (0x0058 - 0x0000)
struct OutpostScreenCanEditPanel_C_SetMasterSwitch final
{
public:
	bool                                          bCanEdit;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateOutpost*                LocalPlayerState;                                  // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalCanEdit;                                      // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerPawn*>                CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns; // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateOutpost*                K2Node_DynamicCast_AsFort_Player_State_Outpost;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_SetMasterSwitch) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_SetMasterSwitch");
static_assert(sizeof(OutpostScreenCanEditPanel_C_SetMasterSwitch) == 0x000058, "Wrong size on OutpostScreenCanEditPanel_C_SetMasterSwitch");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, bCanEdit) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::bCanEdit' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, LocalPlayerState) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::LocalPlayerState' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, LocalCanEdit) == 0x000010, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::LocalCanEdit' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, Temp_int_Array_Index_Variable) == 0x000014, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns) == 0x000028, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_Array_Get_Item) == 0x000038, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, K2Node_DynamicCast_AsFort_Player_State_Outpost) == 0x000048, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::K2Node_DynamicCast_AsFort_Player_State_Outpost' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_SetMasterSwitch, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'OutpostScreenCanEditPanel_C_SetMasterSwitch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
// 0x0028 (0x0028 - 0x0000)
struct OutpostScreenCanEditPanel_C_CenterWidget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutpostScreenCanEditRow_C*             K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OutpostScreenCanEditPanel_C_CenterWidget) == 0x000008, "Wrong alignment on OutpostScreenCanEditPanel_C_CenterWidget");
static_assert(sizeof(OutpostScreenCanEditPanel_C_CenterWidget) == 0x000028, "Wrong size on OutpostScreenCanEditPanel_C_CenterWidget");
static_assert(offsetof(OutpostScreenCanEditPanel_C_CenterWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'OutpostScreenCanEditPanel_C_CenterWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_CenterWidget, CallFunc_IsVisible_ReturnValue) == 0x000008, "Member 'OutpostScreenCanEditPanel_C_CenterWidget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_CenterWidget, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'OutpostScreenCanEditPanel_C_CenterWidget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_CenterWidget, K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row) == 0x000018, "Member 'OutpostScreenCanEditPanel_C_CenterWidget::K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditPanel_C_CenterWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OutpostScreenCanEditPanel_C_CenterWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

