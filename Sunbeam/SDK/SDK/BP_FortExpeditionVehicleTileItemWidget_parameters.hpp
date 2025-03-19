#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionVehicleTileItemWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature final
{
public:
	class FName                                   SquadId_0;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature) == 0x000008, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature, SquadId_0) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature::SquadId_0' has a wrong offset!");

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
// 0x0028 (0x0028 - 0x0000)
struct BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        K2Node_Event_OwningList;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVehicleObject_C*                       K2Node_DynamicCast_AsVehicle_Object;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget) == 0x000028, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget, EntryPoint) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget, K2Node_Event_InData) == 0x000008, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget, K2Node_Event_OwningList) == 0x000010, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget::K2Node_Event_OwningList' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget, K2Node_DynamicCast_AsVehicle_Object) == 0x000018, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget::K2Node_DynamicCast_AsVehicle_Object' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionVehicleTileItemWidget_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        OwningList;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_SetData) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_SetData");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_SetData) == 0x000010, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_SetData");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_SetData, InData) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_SetData::InData' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_SetData, OwningList) == 0x000008, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_SetData::OwningList' has a wrong offset!");

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
// 0x0370 (0x0370 - 0x0000)
struct BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon final
{
public:
	class FName                                   SquadId_0;                                         // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    CallFunc_GetSquadIcon_ReturnValue;                 // 0x0010(0x0360)()
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon) == 0x000370, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon, SquadId_0) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon::SquadId_0' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon, CallFunc_GetSquadIcon_ReturnValue) == 0x000010, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Icon::CallFunc_GetSquadIcon_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
// 0x0028 (0x0028 - 0x0000)
struct BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating final
{
public:
	class FName                                   SquadId_0;                                         // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetExpeditionSquadPower_ReturnValue;      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating) == 0x000028, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, SquadId_0) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::SquadId_0' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000010, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, CallFunc_GetExpeditionSquadPower_ReturnValue) == 0x00001C, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::CallFunc_GetExpeditionSquadPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating, CallFunc_FTrunc_ReturnValue) == 0x000020, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Rating::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
// 0x00A0 (0x00A0 - 0x0000)
struct BP_FortExpeditionVehicleTileItemWidget_C_Set_Name final
{
public:
	class FName                                   SquadId_0;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseSquad                         CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x0010(0x0088)()
	bool                                          CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name) == 0x000008, "Wrong alignment on BP_FortExpeditionVehicleTileItemWidget_C_Set_Name");
static_assert(sizeof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name) == 0x0000A0, "Wrong size on BP_FortExpeditionVehicleTileItemWidget_C_Set_Name");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name, SquadId_0) == 0x000000, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Name::SquadId_0' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Name::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name, CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad) == 0x000010, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Name::CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionVehicleTileItemWidget_C_Set_Name, CallFunc_TryGetHomebaseSquadData_ReturnValue) == 0x000098, "Member 'BP_FortExpeditionVehicleTileItemWidget_C_Set_Name::CallFunc_TryGetHomebaseSquadData_ReturnValue' has a wrong offset!");

}

