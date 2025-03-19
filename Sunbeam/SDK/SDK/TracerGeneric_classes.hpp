#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracerGeneric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TracerGeneric.TracerGeneric_C
// 0x0068 (0x0478 - 0x0410)
class ATracerGeneric_C final : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	float                                         PreviousPlaneDotProd;                              // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasPlayedPassBySound;                             // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CachedDirectionVector;                             // 0x0420(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start;                                             // 0x042C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x0438(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByRadiusMin;                                   // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByRadiusMax;                                   // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C[0x4];                                      // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PassByFarSound;                                    // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PassByCloseSound;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByClosenessIntensity;                          // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PassByPawn;                                        // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedPassDistance;                                // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TracerGeneric(int32 EntryPoint);
	void OnInit(const struct FVector& Start_0, const struct FVector& End_0);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void TrackPassBy(bool* Changed, float* Pass_Distance);
	void PlayPassBySound();
	class AFortPlayerPawn* GetLocalPawnForPassBy();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TracerGeneric_C">();
	}
	static class ATracerGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATracerGeneric_C>();
	}
};
static_assert(alignof(ATracerGeneric_C) == 0x000008, "Wrong alignment on ATracerGeneric_C");
static_assert(sizeof(ATracerGeneric_C) == 0x000478, "Wrong size on ATracerGeneric_C");
static_assert(offsetof(ATracerGeneric_C, UberGraphFrame) == 0x000410, "Member 'ATracerGeneric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PreviousPlaneDotProd) == 0x000418, "Member 'ATracerGeneric_C::PreviousPlaneDotProd' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, bHasPlayedPassBySound) == 0x00041C, "Member 'ATracerGeneric_C::bHasPlayedPassBySound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, CachedDirectionVector) == 0x000420, "Member 'ATracerGeneric_C::CachedDirectionVector' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, Start) == 0x00042C, "Member 'ATracerGeneric_C::Start' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, End) == 0x000438, "Member 'ATracerGeneric_C::End' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByRadiusMin) == 0x000444, "Member 'ATracerGeneric_C::PassByRadiusMin' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByRadiusMax) == 0x000448, "Member 'ATracerGeneric_C::PassByRadiusMax' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByFarSound) == 0x000450, "Member 'ATracerGeneric_C::PassByFarSound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByCloseSound) == 0x000458, "Member 'ATracerGeneric_C::PassByCloseSound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByClosenessIntensity) == 0x000460, "Member 'ATracerGeneric_C::PassByClosenessIntensity' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, PassByPawn) == 0x000468, "Member 'ATracerGeneric_C::PassByPawn' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_C, CachedPassDistance) == 0x000470, "Member 'ATracerGeneric_C::CachedPassDistance' has a wrong offset!");

}

