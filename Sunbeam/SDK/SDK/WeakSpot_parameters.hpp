#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeakSpot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
// 0x0170 (0x0170 - 0x0000)
struct WeakSpot_C_ExecuteUbergraph_WeakSpot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue2;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue2;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0038(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue2;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x006C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0088(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_94[0xC];                                       // 0x0094(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue3;        // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue2;     // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue3;                  // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable2;                              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue3;           // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue4;           // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0120(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_Array_Get_Item;                           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue3;        // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0148(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0158(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeakSpot_C_ExecuteUbergraph_WeakSpot) == 0x000010, "Wrong alignment on WeakSpot_C_ExecuteUbergraph_WeakSpot");
static_assert(sizeof(WeakSpot_C_ExecuteUbergraph_WeakSpot) == 0x000170, "Wrong size on WeakSpot_C_ExecuteUbergraph_WeakSpot");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, EntryPoint) == 0x000000, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_IsDedicatedServer_ReturnValue2) == 0x000018, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_IsDedicatedServer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Greater_IntInt_ReturnValue) == 0x000019, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x00001C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, Temp_float_Variable) == 0x000020, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetGameTimeInSeconds_ReturnValue2) == 0x000028, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetGameTimeInSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000038, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakColor_R) == 0x000054, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakColor_G) == 0x000058, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakColor_B) == 0x00005C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakColor_A) == 0x000060, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000064, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_LessEqual_FloatFloat_ReturnValue2) == 0x000068, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_LessEqual_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeVector_ReturnValue2) == 0x00006C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000084, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000088, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_VSize_ReturnValue) == 0x0000D0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_AddComponent_ReturnValue) == 0x0000D8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FFloor_ReturnValue) == 0x0000E4, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x0000E8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000EC, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FClamp_ReturnValue) == 0x0000F0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000F4, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_LessEqual_FloatFloat_ReturnValue3) == 0x0000F5, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_LessEqual_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GreaterEqual_FloatFloat_ReturnValue2) == 0x0000F6, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GreaterEqual_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BooleanAND_ReturnValue) == 0x0000F7, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BooleanAND_ReturnValue2) == 0x000104, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BooleanAND_ReturnValue3) == 0x000105, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BooleanAND_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, Temp_float_Variable2) == 0x000108, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_IsDedicatedServer_ReturnValue3) == 0x00010C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_IsDedicatedServer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetTimelineLength_ReturnValue) == 0x000110, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_IsDedicatedServer_ReturnValue4) == 0x000114, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_IsDedicatedServer_ReturnValue4' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, Temp_bool_Variable) == 0x000115, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, K2Node_Select_Default) == 0x000118, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_LastIndex_ReturnValue) == 0x00011C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000120, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Clamp_ReturnValue) == 0x00012C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_Get_Item) == 0x000130, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetGameTimeInSeconds_ReturnValue3) == 0x000138, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetGameTimeInSeconds_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_X) == 0x00013C, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_Y) == 0x000140, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_Z) == 0x000144, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeColor_ReturnValue) == 0x000148, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000158, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000168, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WeakSpot.WeakSpot_C.UserConstructionScript
// 0x00C0 (0x00C0 - 0x0000)
struct WeakSpot_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                     K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x002C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0038(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WeakSpot_C_UserConstructionScript) == 0x000008, "Wrong alignment on WeakSpot_C_UserConstructionScript");
static_assert(sizeof(WeakSpot_C_UserConstructionScript) == 0x0000C0, "Wrong size on WeakSpot_C_UserConstructionScript");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000010, "Member 'WeakSpot_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_Conv_FloatToVector_ReturnValue) == 0x00002C, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000038, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

