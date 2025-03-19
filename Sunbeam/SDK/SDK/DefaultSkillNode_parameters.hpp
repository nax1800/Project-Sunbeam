#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultSkillNode

#include "Basic.hpp"

#include "SkillTreePages_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkillTreeGroups_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
// 0x0100 (0x0100 - 0x0000)
struct DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue2;                 // 0x0010(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue3;                 // 0x0018(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue4;                 // 0x0020(0x0008)(NoDestructor)
	struct FHomebaseNode                          CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x0028(0x00C0)()
	bool                                          CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode) == 0x000008, "Wrong alignment on DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode");
static_assert(sizeof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode) == 0x000100, "Wrong size on DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, EntryPoint) == 0x000000, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::EntryPoint' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, K2Node_Event_IsDesignTime) == 0x000004, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_K2_SetTimer_ReturnValue2) == 0x000010, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_K2_SetTimer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_K2_SetTimer_ReturnValue3) == 0x000018, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_K2_SetTimer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_K2_SetTimer_ReturnValue4) == 0x000020, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_K2_SetTimer_ReturnValue4' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData) == 0x000028, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue) == 0x0000E8, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000F0, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F8, "Member 'DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DefaultSkillNode_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_PreConstruct) == 0x000001, "Wrong alignment on DefaultSkillNode_C_PreConstruct");
static_assert(sizeof(DefaultSkillNode_C_PreConstruct) == 0x000001, "Wrong size on DefaultSkillNode_C_PreConstruct");
static_assert(offsetof(DefaultSkillNode_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DefaultSkillNode_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
// 0x0018 (0x0018 - 0x0000)
struct DefaultSkillNode_C_UpdateFromNodeState final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                     CallFunc_TryGetSkillTreeNodeState_OutNodeState;    // 0x0008(0x0008)(NoDestructor)
	bool                                          CallFunc_TryGetSkillTreeNodeState_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_UpdateFromNodeState) == 0x000008, "Wrong alignment on DefaultSkillNode_C_UpdateFromNodeState");
static_assert(sizeof(DefaultSkillNode_C_UpdateFromNodeState) == 0x000018, "Wrong size on DefaultSkillNode_C_UpdateFromNodeState");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeState, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'DefaultSkillNode_C_UpdateFromNodeState::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeState, CallFunc_TryGetSkillTreeNodeState_OutNodeState) == 0x000008, "Member 'DefaultSkillNode_C_UpdateFromNodeState::CallFunc_TryGetSkillTreeNodeState_OutNodeState' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeState, CallFunc_TryGetSkillTreeNodeState_ReturnValue) == 0x000010, "Member 'DefaultSkillNode_C_UpdateFromNodeState::CallFunc_TryGetSkillTreeNodeState_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
// 0x0448 (0x0448 - 0x0000)
struct DefaultSkillNode_C_UpdateFromNodeData final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortSkillTreeNodeDisplayData          CallFunc_TryGetNodeDisplayData_OutDisplayData;     // 0x0008(0x0368)()
	bool                                          CallFunc_TryGetNodeDisplayData_ReturnValue;        // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseNode                          CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x0378(0x00C0)()
	bool                                          CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43A[0x2];                                      // 0x043A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSkillTreeNodeSizeByMagnitude_Size;     // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0440(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultSkillNode_C_UpdateFromNodeData) == 0x000008, "Wrong alignment on DefaultSkillNode_C_UpdateFromNodeData");
static_assert(sizeof(DefaultSkillNode_C_UpdateFromNodeData) == 0x000448, "Wrong size on DefaultSkillNode_C_UpdateFromNodeData");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_TryGetNodeDisplayData_OutDisplayData) == 0x000008, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_TryGetNodeDisplayData_OutDisplayData' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_TryGetNodeDisplayData_ReturnValue) == 0x000370, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_TryGetNodeDisplayData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData) == 0x000378, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue) == 0x000438, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_BooleanAND_ReturnValue) == 0x000439, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_GetSkillTreeNodeSizeByMagnitude_Size) == 0x00043C, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_GetSkillTreeNodeSizeByMagnitude_Size' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromNodeData, CallFunc_MakeVector2D_ReturnValue) == 0x000440, "Member 'DefaultSkillNode_C_UpdateFromNodeData::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
// 0x0020 (0x0020 - 0x0000)
struct DefaultSkillNode_C_StepHoverGlowInterpolation final
{
public:
	float                                         TargetGlowPercentage;                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_StepHoverGlowInterpolation) == 0x000004, "Wrong alignment on DefaultSkillNode_C_StepHoverGlowInterpolation");
static_assert(sizeof(DefaultSkillNode_C_StepHoverGlowInterpolation) == 0x000020, "Wrong size on DefaultSkillNode_C_StepHoverGlowInterpolation");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, TargetGlowPercentage) == 0x000000, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::TargetGlowPercentage' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_FMax_ReturnValue) == 0x00000C, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_FMin_ReturnValue) == 0x000010, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_Less_FloatFloat_ReturnValue) == 0x000014, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000015, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, Temp_bool_Variable) == 0x000016, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, K2Node_Select_Default) == 0x000018, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_IsHovered_ReturnValue) == 0x00001C, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepHoverGlowInterpolation, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00001D, "Member 'DefaultSkillNode_C_StepHoverGlowInterpolation::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
// 0x0024 (0x0024 - 0x0000)
struct DefaultSkillNode_C_StepSelectionGlowInterpolation final
{
public:
	float                                         TargetGlowPercentage;                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_StepSelectionGlowInterpolation) == 0x000004, "Wrong alignment on DefaultSkillNode_C_StepSelectionGlowInterpolation");
static_assert(sizeof(DefaultSkillNode_C_StepSelectionGlowInterpolation) == 0x000024, "Wrong size on DefaultSkillNode_C_StepSelectionGlowInterpolation");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, TargetGlowPercentage) == 0x000000, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::TargetGlowPercentage' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_GetSelected_ReturnValue) == 0x000004, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_FMax_ReturnValue) == 0x000010, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_FMin_ReturnValue) == 0x000014, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000019, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, Temp_bool_Variable) == 0x00001A, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, K2Node_Select_Default) == 0x00001C, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_StepSelectionGlowInterpolation, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'DefaultSkillNode_C_StepSelectionGlowInterpolation::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
// 0x0008 (0x0008 - 0x0000)
struct DefaultSkillNode_C_UpdateHoverGlow final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultSkillNode_C_UpdateHoverGlow) == 0x000008, "Wrong alignment on DefaultSkillNode_C_UpdateHoverGlow");
static_assert(sizeof(DefaultSkillNode_C_UpdateHoverGlow) == 0x000008, "Wrong size on DefaultSkillNode_C_UpdateHoverGlow");
static_assert(offsetof(DefaultSkillNode_C_UpdateHoverGlow, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'DefaultSkillNode_C_UpdateHoverGlow::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
// 0x0008 (0x0008 - 0x0000)
struct DefaultSkillNode_C_UpdateSelectionGlow final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultSkillNode_C_UpdateSelectionGlow) == 0x000008, "Wrong alignment on DefaultSkillNode_C_UpdateSelectionGlow");
static_assert(sizeof(DefaultSkillNode_C_UpdateSelectionGlow) == 0x000008, "Wrong size on DefaultSkillNode_C_UpdateSelectionGlow");
static_assert(offsetof(DefaultSkillNode_C_UpdateSelectionGlow, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'DefaultSkillNode_C_UpdateSelectionGlow::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
// 0x0002 (0x0002 - 0x0000)
struct DefaultSkillNode_C_UpdateFromButtonState final
{
public:
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DefaultSkillNode_C_UpdateFromButtonState) == 0x000001, "Wrong alignment on DefaultSkillNode_C_UpdateFromButtonState");
static_assert(sizeof(DefaultSkillNode_C_UpdateFromButtonState) == 0x000002, "Wrong size on DefaultSkillNode_C_UpdateFromButtonState");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromButtonState, CallFunc_GetSelected_ReturnValue) == 0x000000, "Member 'DefaultSkillNode_C_UpdateFromButtonState::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_UpdateFromButtonState, CallFunc_IsHovered_ReturnValue) == 0x000001, "Member 'DefaultSkillNode_C_UpdateFromButtonState::CallFunc_IsHovered_ReturnValue' has a wrong offset!");

// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
// 0x0050 (0x0050 - 0x0000)
struct DefaultSkillNode_C_SetBackgroundColor final
{
public:
	ESkillTreePages                               Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable2;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable3;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeGroups                              Temp_byte_Variable4;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select2_Default;                            // 0x0020(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select3_Default;                            // 0x0030(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select4_Default;                            // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultSkillNode_C_SetBackgroundColor) == 0x000008, "Wrong alignment on DefaultSkillNode_C_SetBackgroundColor");
static_assert(sizeof(DefaultSkillNode_C_SetBackgroundColor) == 0x000050, "Wrong size on DefaultSkillNode_C_SetBackgroundColor");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, Temp_byte_Variable) == 0x000000, "Member 'DefaultSkillNode_C_SetBackgroundColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, Temp_byte_Variable2) == 0x000001, "Member 'DefaultSkillNode_C_SetBackgroundColor::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, Temp_byte_Variable3) == 0x000002, "Member 'DefaultSkillNode_C_SetBackgroundColor::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, Temp_byte_Variable4) == 0x000003, "Member 'DefaultSkillNode_C_SetBackgroundColor::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000008, "Member 'DefaultSkillNode_C_SetBackgroundColor::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, K2Node_Select_Default) == 0x000010, "Member 'DefaultSkillNode_C_SetBackgroundColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, K2Node_Select2_Default) == 0x000020, "Member 'DefaultSkillNode_C_SetBackgroundColor::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, K2Node_Select3_Default) == 0x000030, "Member 'DefaultSkillNode_C_SetBackgroundColor::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(DefaultSkillNode_C_SetBackgroundColor, K2Node_Select4_Default) == 0x000040, "Member 'DefaultSkillNode_C_SetBackgroundColor::K2Node_Select4_Default' has a wrong offset!");

}

