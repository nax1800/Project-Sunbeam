#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheaterCamera_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
// 0x0210 (0x0AD0 - 0x08C0)
class ATheaterCamera_Blueprint_C final : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08C0(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   MeshScreenPlane;                                   // 0x08C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneInitializeFX;                                 // 0x08D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578; // 0x08D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578; // 0x08DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8DD[0x3];                                      // 0x08DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FocusTimeline;                                     // 0x08E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778; // 0x08E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778; // 0x08EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ED[0x3];                                      // 0x08ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DEBUGFOVA;                                         // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF; // 0x08F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF; // 0x08FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD[0x3];                                      // 0x08FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     InitializeFXMinusTL;                               // 0x0900(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x0908(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x090C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x0910(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x0914(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238; // 0x0918(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x091C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x0920(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238; // 0x0924(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238; // 0x0928(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238; // 0x092C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92D[0x3];                                      // 0x092D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DebugZoomTL;                                       // 0x0930(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorldLocSnapSize;                                  // 0x0938(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraZHeightLevelZero;                            // 0x093C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraXOffsetLevelZero;                            // 0x0940(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_944[0x4];                                      // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortTheaterMapTile*                    TargetTile;                                        // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentZoomPercentage;                             // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NumberOfZoomLevels;                                // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZoomDistanceUnitZ;                                 // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentZoomLevel;                                  // 0x095C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FocusedTileLocWithOffset;                          // 0x0960(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MouseDown;                                         // 0x096C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D[0x3];                                      // 0x096D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentOffsetAmountX;                              // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraXOffsetLevelMax;                             // 0x0974(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitialZoomLevels;                                 // 0x0978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForwardVector;                                     // 0x097C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraYRotationLevelZero;                          // 0x0988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetTileLoc;                                     // 0x098C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldOffsetAmountX;                                  // 0x0998(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentFOV;                                        // 0x099C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FOVLevelZero;                                      // 0x09A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FOVLevelMax;                                       // 0x09A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraZHeightLevelMax;                             // 0x09A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZoomDistanceUnitX;                                 // 0x09AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugCameraZoom;                                   // 0x09B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1[0x3];                                      // 0x09B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraYRotationLevelMax;                           // 0x09B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugCameraVariables;                              // 0x09B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SnapCameraToFocusedTile;                           // 0x09B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BA[0x6];                                      // 0x09BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDMeshScreenPlane;                                // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      CloudMaskLocations;                                // 0x09C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         CloudMaskScale;                                    // 0x09D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReadyForPings;                                     // 0x09DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD[0x3];                                      // 0x09DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATVPostProcessBP_C*                     TVPostProcess;                                     // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Hex_PARENT_C*>               AllHexesArray;                                     // 0x09E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<uint8>                                 HexesPinged;                                       // 0x09F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          AllHexesHavePingedOnce;                            // 0x0A08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WaitForForceFocus;                                 // 0x0A09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AQuestIsPinned;                                    // 0x0A0A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A0B[0x5];                                      // 0x0A0B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  PinnedQuestsArray;                                 // 0x0A10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          WaitForPinned;                                     // 0x0A20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A21[0x3];                                      // 0x0A21(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HexWorldLocFromBP_Hex_PARENT;                      // 0x0A24(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxCameraDistance;                                 // 0x0A30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CenterOfCameraBounds;                              // 0x0A34(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HighestXMinusValue;                                // 0x0A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HighestYMinusValue;                                // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalWidthOfHexPlane;                              // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HexPlaneBufferSize;                                // 0x0A4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CenterLocOfAllHexes;                               // 0x0A50(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AllHexesBoxExtent;                                 // 0x0A5C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      RoadMaskLocations;                                 // 0x0A68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          LightsBPSet;                                       // 0x0A78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A79[0x7];                                      // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHexmapLevelSettings_Temperate01_C*     LightsBP;                                          // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HexPlaneLayersBufferSize;                          // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalWidthOfHexPlaneLayer;                         // 0x0A8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      TileType0MinusLocs;                                // 0x0A90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      TileType1MinusLocs;                                // 0x0AA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      TileType2MinusLocs;                                // 0x0AB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         TileTypeMaskScale;                                 // 0x0AC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuspendInput;                                     // 0x0AC4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TheaterCamera_Blueprint(int32 EntryPoint);
	void PinnedPing();
	void MaskFinished();
	void RefreshCloudMask();
	void PingFromHex();
	void ForceTileFocus(const struct FVector& HexWorldLoc);
	void StopFocusTimeline();
	void OnDragEnd();
	void OnDragBegin();
	void ReceiveTick(float DeltaSeconds);
	void SetTileFocus(class AFortTheaterMapTile* TargetTile_0);
	void OnDeactivated();
	void OnActivated();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void DEBUGFOVA__UpdateFunc();
	void DEBUGFOVA__FinishedFunc();
	void InitializeFXMinusTL__UpdateFunc();
	void InitializeFXMinusTL__FinishedFunc();
	void DebugZoomTL__UpdateFunc();
	void DebugZoomTL__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void FocusTimeline__FinishedFunc();
	void UserConstructionScript();
	void ZoomCameraStep(bool Forward);
	void HandleTheaterSelected(const class FString& TheaterId);
	void PanCamera(float DeltaX, float DeltaY);
	struct FVector2D NewFunction_0(class AActor* Self2);
	bool IsInputSuspended();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TheaterCamera_Blueprint_C">();
	}
	static class ATheaterCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheaterCamera_Blueprint_C>();
	}
};
static_assert(alignof(ATheaterCamera_Blueprint_C) == 0x000010, "Wrong alignment on ATheaterCamera_Blueprint_C");
static_assert(sizeof(ATheaterCamera_Blueprint_C) == 0x000AD0, "Wrong size on ATheaterCamera_Blueprint_C");
static_assert(offsetof(ATheaterCamera_Blueprint_C, UberGraphFrame) == 0x0008C0, "Member 'ATheaterCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, MeshScreenPlane) == 0x0008C8, "Member 'ATheaterCamera_Blueprint_C::MeshScreenPlane' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, SceneInitializeFX) == 0x0008D0, "Member 'ATheaterCamera_Blueprint_C::SceneInitializeFX' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578) == 0x0008D8, "Member 'ATheaterCamera_Blueprint_C::FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578) == 0x0008DC, "Member 'ATheaterCamera_Blueprint_C::FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FocusTimeline) == 0x0008E0, "Member 'ATheaterCamera_Blueprint_C::FocusTimeline' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778) == 0x0008E8, "Member 'ATheaterCamera_Blueprint_C::DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778) == 0x0008EC, "Member 'ATheaterCamera_Blueprint_C::DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DEBUGFOVA) == 0x0008F0, "Member 'ATheaterCamera_Blueprint_C::DEBUGFOVA' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF) == 0x0008F8, "Member 'ATheaterCamera_Blueprint_C::InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF) == 0x0008FC, "Member 'ATheaterCamera_Blueprint_C::InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, InitializeFXMinusTL) == 0x000900, "Member 'ATheaterCamera_Blueprint_C::InitializeFXMinusTL' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238) == 0x000908, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238) == 0x00090C, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238) == 0x000910, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238) == 0x000914, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238) == 0x000918, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238) == 0x00091C, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238) == 0x000920, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238) == 0x000924, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238) == 0x000928, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238) == 0x00092C, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugZoomTL) == 0x000930, "Member 'ATheaterCamera_Blueprint_C::DebugZoomTL' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, WorldLocSnapSize) == 0x000938, "Member 'ATheaterCamera_Blueprint_C::WorldLocSnapSize' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraZHeightLevelZero) == 0x00093C, "Member 'ATheaterCamera_Blueprint_C::CameraZHeightLevelZero' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraXOffsetLevelZero) == 0x000940, "Member 'ATheaterCamera_Blueprint_C::CameraXOffsetLevelZero' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TargetTile) == 0x000948, "Member 'ATheaterCamera_Blueprint_C::TargetTile' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CurrentZoomPercentage) == 0x000950, "Member 'ATheaterCamera_Blueprint_C::CurrentZoomPercentage' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, NumberOfZoomLevels) == 0x000954, "Member 'ATheaterCamera_Blueprint_C::NumberOfZoomLevels' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, ZoomDistanceUnitZ) == 0x000958, "Member 'ATheaterCamera_Blueprint_C::ZoomDistanceUnitZ' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CurrentZoomLevel) == 0x00095C, "Member 'ATheaterCamera_Blueprint_C::CurrentZoomLevel' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FocusedTileLocWithOffset) == 0x000960, "Member 'ATheaterCamera_Blueprint_C::FocusedTileLocWithOffset' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, MouseDown) == 0x00096C, "Member 'ATheaterCamera_Blueprint_C::MouseDown' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CurrentOffsetAmountX) == 0x000970, "Member 'ATheaterCamera_Blueprint_C::CurrentOffsetAmountX' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraXOffsetLevelMax) == 0x000974, "Member 'ATheaterCamera_Blueprint_C::CameraXOffsetLevelMax' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, InitialZoomLevels) == 0x000978, "Member 'ATheaterCamera_Blueprint_C::InitialZoomLevels' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, ForwardVector) == 0x00097C, "Member 'ATheaterCamera_Blueprint_C::ForwardVector' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraYRotationLevelZero) == 0x000988, "Member 'ATheaterCamera_Blueprint_C::CameraYRotationLevelZero' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TargetTileLoc) == 0x00098C, "Member 'ATheaterCamera_Blueprint_C::TargetTileLoc' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, OldOffsetAmountX) == 0x000998, "Member 'ATheaterCamera_Blueprint_C::OldOffsetAmountX' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CurrentFOV) == 0x00099C, "Member 'ATheaterCamera_Blueprint_C::CurrentFOV' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FOVLevelZero) == 0x0009A0, "Member 'ATheaterCamera_Blueprint_C::FOVLevelZero' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, FOVLevelMax) == 0x0009A4, "Member 'ATheaterCamera_Blueprint_C::FOVLevelMax' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraZHeightLevelMax) == 0x0009A8, "Member 'ATheaterCamera_Blueprint_C::CameraZHeightLevelMax' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, ZoomDistanceUnitX) == 0x0009AC, "Member 'ATheaterCamera_Blueprint_C::ZoomDistanceUnitX' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugCameraZoom) == 0x0009B0, "Member 'ATheaterCamera_Blueprint_C::DebugCameraZoom' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CameraYRotationLevelMax) == 0x0009B4, "Member 'ATheaterCamera_Blueprint_C::CameraYRotationLevelMax' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, DebugCameraVariables) == 0x0009B8, "Member 'ATheaterCamera_Blueprint_C::DebugCameraVariables' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, SnapCameraToFocusedTile) == 0x0009B9, "Member 'ATheaterCamera_Blueprint_C::SnapCameraToFocusedTile' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, MIDMeshScreenPlane) == 0x0009C0, "Member 'ATheaterCamera_Blueprint_C::MIDMeshScreenPlane' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CloudMaskLocations) == 0x0009C8, "Member 'ATheaterCamera_Blueprint_C::CloudMaskLocations' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CloudMaskScale) == 0x0009D8, "Member 'ATheaterCamera_Blueprint_C::CloudMaskScale' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, ReadyForPings) == 0x0009DC, "Member 'ATheaterCamera_Blueprint_C::ReadyForPings' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TVPostProcess) == 0x0009E0, "Member 'ATheaterCamera_Blueprint_C::TVPostProcess' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, AllHexesArray) == 0x0009E8, "Member 'ATheaterCamera_Blueprint_C::AllHexesArray' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HexesPinged) == 0x0009F8, "Member 'ATheaterCamera_Blueprint_C::HexesPinged' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, AllHexesHavePingedOnce) == 0x000A08, "Member 'ATheaterCamera_Blueprint_C::AllHexesHavePingedOnce' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, WaitForForceFocus) == 0x000A09, "Member 'ATheaterCamera_Blueprint_C::WaitForForceFocus' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, AQuestIsPinned) == 0x000A0A, "Member 'ATheaterCamera_Blueprint_C::AQuestIsPinned' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, PinnedQuestsArray) == 0x000A10, "Member 'ATheaterCamera_Blueprint_C::PinnedQuestsArray' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, WaitForPinned) == 0x000A20, "Member 'ATheaterCamera_Blueprint_C::WaitForPinned' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HexWorldLocFromBP_Hex_PARENT) == 0x000A24, "Member 'ATheaterCamera_Blueprint_C::HexWorldLocFromBP_Hex_PARENT' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, MaxCameraDistance) == 0x000A30, "Member 'ATheaterCamera_Blueprint_C::MaxCameraDistance' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CenterOfCameraBounds) == 0x000A34, "Member 'ATheaterCamera_Blueprint_C::CenterOfCameraBounds' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HighestXMinusValue) == 0x000A40, "Member 'ATheaterCamera_Blueprint_C::HighestXMinusValue' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HighestYMinusValue) == 0x000A44, "Member 'ATheaterCamera_Blueprint_C::HighestYMinusValue' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TotalWidthOfHexPlane) == 0x000A48, "Member 'ATheaterCamera_Blueprint_C::TotalWidthOfHexPlane' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HexPlaneBufferSize) == 0x000A4C, "Member 'ATheaterCamera_Blueprint_C::HexPlaneBufferSize' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, CenterLocOfAllHexes) == 0x000A50, "Member 'ATheaterCamera_Blueprint_C::CenterLocOfAllHexes' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, AllHexesBoxExtent) == 0x000A5C, "Member 'ATheaterCamera_Blueprint_C::AllHexesBoxExtent' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, RoadMaskLocations) == 0x000A68, "Member 'ATheaterCamera_Blueprint_C::RoadMaskLocations' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, LightsBPSet) == 0x000A78, "Member 'ATheaterCamera_Blueprint_C::LightsBPSet' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, LightsBP) == 0x000A80, "Member 'ATheaterCamera_Blueprint_C::LightsBP' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, HexPlaneLayersBufferSize) == 0x000A88, "Member 'ATheaterCamera_Blueprint_C::HexPlaneLayersBufferSize' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TotalWidthOfHexPlaneLayer) == 0x000A8C, "Member 'ATheaterCamera_Blueprint_C::TotalWidthOfHexPlaneLayer' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TileType0MinusLocs) == 0x000A90, "Member 'ATheaterCamera_Blueprint_C::TileType0MinusLocs' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TileType1MinusLocs) == 0x000AA0, "Member 'ATheaterCamera_Blueprint_C::TileType1MinusLocs' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TileType2MinusLocs) == 0x000AB0, "Member 'ATheaterCamera_Blueprint_C::TileType2MinusLocs' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, TileTypeMaskScale) == 0x000AC0, "Member 'ATheaterCamera_Blueprint_C::TileTypeMaskScale' has a wrong offset!");
static_assert(offsetof(ATheaterCamera_Blueprint_C, bSuspendInput) == 0x000AC4, "Member 'ATheaterCamera_Blueprint_C::bSuspendInput' has a wrong offset!");

}

