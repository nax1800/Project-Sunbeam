#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_BluGloPylon_RunSpeed_Activate

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C
// 0x0008 (0x0470 - 0x0468)
class AGCN_BluGloPylon_RunSpeed_Activate_C final : public AFortGameplayCueNotify_Looping
{
public:
	class UTexture*                               IconTexture;                                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_BluGloPylon_RunSpeed_Activate_C">();
	}
	static class AGCN_BluGloPylon_RunSpeed_Activate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_BluGloPylon_RunSpeed_Activate_C>();
	}
};
static_assert(alignof(AGCN_BluGloPylon_RunSpeed_Activate_C) == 0x000008, "Wrong alignment on AGCN_BluGloPylon_RunSpeed_Activate_C");
static_assert(sizeof(AGCN_BluGloPylon_RunSpeed_Activate_C) == 0x000470, "Wrong size on AGCN_BluGloPylon_RunSpeed_Activate_C");
static_assert(offsetof(AGCN_BluGloPylon_RunSpeed_Activate_C, IconTexture) == 0x000468, "Member 'AGCN_BluGloPylon_RunSpeed_Activate_C::IconTexture' has a wrong offset!");

}

