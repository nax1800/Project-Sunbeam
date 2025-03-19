#pragma once
#include "framework.h"

namespace Abilities
{
	char (*InternalTryActivateAbilityLong)(SDK::UAbilitySystemComponent* AbilitySystemComp, SDK::FGameplayAbilitySpecHandle AbilityToActivate, SDK::FPredictionKey InPredictionKey, SDK::UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const SDK::FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbilityLong)((uintptr_t(GetModuleHandle(0)) + 0x3E3D720));

	SDK::FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle Handle)
	{
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			auto Spec = AbilitySystem->ActivatableAbilities.Items[i];

			if (Spec.Handle.Handle == Handle.Handle)
			{
				return &Spec;
			}
		}

		return nullptr;
	}

	bool GrantAbility(UClass* GameplayAbilityClass)
	{
		if (!GameplayAbilityClass)
			return false;

		auto AbilitySystemComponent = Globals::GetPawn()->AbilitySystemComponent;

		static auto DefaultGameplayEffect = UObject::FindObject<UGameplayEffect>("GE_Constructor_ContainmentUnit_Applied_C GE_Constructor_ContainmentUnit_Applied.Default__GE_Constructor_ContainmentUnit_Applied_C");

		if (!DefaultGameplayEffect)
			return false;

		TArray<FGameplayAbilitySpecDef> GrantedAbilities = DefaultGameplayEffect->GrantedAbilities;

		GrantedAbilities[0].Ability = GameplayAbilityClass;

		DefaultGameplayEffect->DurationPolicy = EGameplayEffectDurationType::Infinite;

		static auto GameplayEffectClass = UObject::FindClass("BlueprintGeneratedClass GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
		if (!GameplayEffectClass)
			return false;

		auto handle = FGameplayEffectContextHandle();

		AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GameplayEffectClass, AbilitySystemComponent, 1, handle);

		return true;
	}

	void GrantAllAbilities(ESubGame SubGame)
	{
		static auto AbilityKit = Globals::StaticFindObject<UFortAbilityKit>(L"/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

		for (int i = 0; i < AbilityKit->GameplayAbilities.Num(); i++)
		{
			if (!GrantAbility(AbilityKit->GameplayAbilities[i].Get()))
				LogSunbeam("Abilities: Failed to grant {}.", AbilityKit->GameplayAbilities[i].Get()->GetFullName());
		}

		if (SubGame == ESubGame::Campaign)
		{
			TArray<FHeroAbilityKit> AbilityKits = Globals::Zone::GetPlayerState()->HeroType->AbilityKits;
			for (int i = 0; i < AbilityKits.Num(); i++)
			{
				FHeroAbilityKit AbilityKit = AbilityKits[i];
				UFortAbilityKit* InherentAbilityKit = AbilityKit.InherentAbilityKit.Get();
				if (!InherentAbilityKit)
					continue;

				for (int i = 0; i < InherentAbilityKit->GameplayAbilities.Num(); i++)
				{
					if (!GrantAbility(InherentAbilityKit->GameplayAbilities[i].Get()))
						LogSunbeam("Abilities: Failed to grant {}.", InherentAbilityKit->GameplayAbilities[i].Get()->GetFullName());
				}
			}
		}
	}
}