#pragma once
#include "framework.h"

#include "Abilities.h"
#include "Inventory.h"

namespace Debugging
{
	bool IsDebugClass(UObject* ClassToCheck)
	{
		if (ClassToCheck->IsA(AFortGameMode::StaticClass()) || ClassToCheck->IsA(AFortGameState::StaticClass()) || ClassToCheck->IsA(AFortPlayerPawn::StaticClass()) || ClassToCheck->IsA(AFortPlayerController::StaticClass()) ||
			ClassToCheck->IsA(AFortPlayerState::StaticClass()) || ClassToCheck->IsA(AFortGameSession::StaticClass()) || ClassToCheck->IsA(UQuestPlayButton_C::StaticClass()) || ClassToCheck->IsA(UFortMatchmaking::StaticClass()) ||
			ClassToCheck->IsA(UFortFrontEndContext::StaticClass()) || ClassToCheck->IsA(UFortAISystem::StaticClass()) || ClassToCheck->IsA(UFortAIFunctionLibrary::StaticClass()) || ClassToCheck->IsA(UFortAIHotSpotSlot::StaticClass()) ||
			ClassToCheck->IsA(UFortMissionLibrary::StaticClass()) || ClassToCheck->IsA(AFortMission::StaticClass()) || ClassToCheck->IsA(UFortMcpProfile::StaticClass()) || ClassToCheck->IsA(AFortTheaterMapTile::StaticClass()) ||
			ClassToCheck->IsA(UFortAthenaMatchmakingWidget::StaticClass()) || ClassToCheck->IsA(UAthenaMatchmakingWidget_C::StaticClass()) || ClassToCheck->IsA(ABP_Hex_PARENT_C::StaticClass()) || ClassToCheck->IsA(AFortMissionManager::StaticClass()) ||
			ClassToCheck->IsA(UFortMissionInfo::StaticClass()))
				return true;

		return false;
	}

	bool IsFunctionOK(UFunction* FunctionToCheck)
	{
		string FuncName = FunctionToCheck->GetName();

		if (FuncName == "ReceiveTick" || FuncName == "Tick" || FuncName == "ReadyToEndMatch" || FuncName == "ContrailCheck" || FuncName == "ServerUpdateLevelVisibility" ||
			FuncName == "ReceiveHit" || FuncName == "ServerFireAIDirectorEventBatch" || FuncName == "ServerTriggerCombatEvent" || FuncName == "ServerTriggerCombatEventBatch" ||
			FuncName == "ServerFireAIDirectorEvent" || FuncName == "CanJumpInternal" || FuncName.contains("Crouch") || FuncName.contains("ExecuteUbergraph"))
			return false;

		return true;
	}

	void (*oProcessEvent)(UObject*, UFunction*, void*);
	void hkProcessEvent(UObject* InObject, UFunction* InFunction, void* InParameters)
	{
		if (!InObject || !InFunction)
			return oProcessEvent(InObject, InFunction, InParameters);

		string ObjectName = InObject->GetFullName();
		string FunctionName = InFunction->GetFullName();

		static bool bStartedMatch = false;

	/*	if (FunctionName == "Function FortniteGame.FortGameStateZone.ServerFireAIDirectorEvent")
		{
			auto Params = reinterpret_cast<Params::FortGameStateZone_ServerFireAIDirectorEvent*>(InParameters);
			LogSunbeam("Params->Event: {}", (int)Params->Event);
			LogSunbeam("Params->EventMultiplier: {}", Params->EventMultiplier);
			LogSunbeam("Params->EventSource: {}", Params->EventSource->GetFullName());
			LogSunbeam("Params->EventTarget: {}", Params->EventTarget->GetFullName());
		} */

		if (FunctionName == "Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted")
		{
			auto QuestPlayButton = reinterpret_cast<UQuestPlayButton_C*>(InObject);
			Globals::PlayerQuest = QuestPlayButton->QuestItem;

			LogSunbeam("Globals::PlayerQuest set to {}", Globals::PlayerQuest->GetFullName());
			LogSunbeam("Globals::PlayerQuest.QuestDefinitionBP: {}", Globals::PlayerQuest->GetQuestDefinitionBP()->GetFullName());	

			reinterpret_cast<UFortGameInstance*>(UWorld::GetWorld()->OwningGameInstance)->Matchmaking->Matchmaking->bMatchmakingInProgress = false;

			Globals::Zone::GetPlayerController()->SwitchLevel(L"Zone_Onboarding_FarmsteadFort?game=zone");
			Globals::SubGame = ESubGame::Campaign;
			bStartedMatch = true;
		}

		if (FunctionName == "Function FortniteGame.FortPlayerController.ServerExecuteInventoryItem")
		{
			auto Params = reinterpret_cast<Params::FortPlayerController_ServerExecuteInventoryItem*>(InParameters);
			FGuid ItemGuid = Params->ItemGuid;

			FFortItemEntry* ItemEntry = Inventory::FindItem(ItemGuid);
			if (ItemEntry)
				Globals::GetPawn()->EquipWeaponDefinition(reinterpret_cast<UFortWeaponItemDefinition*>(ItemEntry->ItemDefinition), ItemGuid);
		}
		
		if (FunctionName.contains("Function FortniteGame.FortTheaterMapTile"))
		{
			auto Hex = reinterpret_cast<ABP_Hex_PARENT_C*>(InObject);
			if (Hex->MissionSelected)
			{
				UClass* ZoneThemeClass = Hex->ZoneThemeClass.Get();
				FFortAvailableMissionData MissionData = Hex->MissionData;

				LogSunbeam("Mission is selected.");
				LogSunbeam("MissionGenerator: {}", MissionData.MissionGenerator.Get()->GetFullName());
				LogSunbeam("ZoneThemeClass: {}", ZoneThemeClass->GetFullName());

				auto ZoneThemeDO = reinterpret_cast<UFortZoneTheme*>(ZoneThemeClass->DefaultObject);
				LogSunbeam("ZoneTheme: {}", ZoneThemeDO->GetFullName());
				auto ZoneToUse = Globals::StaticLoadObject<UWorld>(ZoneThemeDO->ZoneToUse.ObjectID.AssetLongPathname.ToWString().c_str());

				string StrZoneGameMode = ZoneThemeDO->ZoneGameMode.ObjectID.AssetLongPathname.ToString();
				LogSunbeam("ZoneToUse: {}", StrZoneGameMode);

				string StrZoneToUse = ZoneToUse->GetName() + "?game=" + StrZoneGameMode;
				LogSunbeam("ZoneToUse: {}", StrZoneToUse);

				wstring WStrZoneToUse = wstring(StrZoneToUse.begin(), StrZoneToUse.end());

				Globals::GetPlayerController()->SwitchLevel(FString(WStrZoneToUse.c_str()));
				bStartedMatch = true;
				Globals::SubGame = ESubGame::Campaign;
			}
		}

		if (FunctionName == "Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature")
		{
			auto AthenaMatchmakingWidget = reinterpret_cast<UAthenaMatchmakingWidget_C*>(InObject);
			Globals::CurrentPlaylist = AthenaMatchmakingWidget->CurrentPlaylist;

			Globals::Athena::GetPlayerController()->SwitchLevel(L"Athena_Terrain");
			Globals::SubGame = ESubGame::Athena;
			bStartedMatch = true;
		}

		if (FunctionName == "Function Engine.GameModeBase.HandleStartingNewPlayer")
		{
			auto GameMode = reinterpret_cast<AFortGameMode*>(InObject);
			auto Params = reinterpret_cast<Params::GameModeBase_HandleStartingNewPlayer*>(InParameters);
			auto NewPlayer = reinterpret_cast<AFortPlayerController*>(Params->NewPlayer);

			if (Globals::SpawnLocation == FVector(0,0,0))
			{
				TArray<AActor*> OutActors;
				UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), APlayerStart::StaticClass(), &OutActors);
				if (OutActors.IsValid())
				{
					if (OutActors[0])
					{
						Globals::SpawnLocation = OutActors[0]->K2_GetActorLocation();
						LogSunbeam("PlayerStart: {}", OutActors[0]->GetFullName());
					}
				}
			}

			if (Globals::SubGame == ESubGame::Athena)
			{
				LogSunbeam("Mode: Athena");
				auto Pawn = Globals::SpawnActor<APlayerPawn_Athena_C>(Globals::SpawnLocation, FRotator(0,0,0), NewPlayer);
				Pawn->Controller = NewPlayer;
				NewPlayer->AcknowledgedPawn = Pawn;
				NewPlayer->Pawn = Pawn;
				NewPlayer->OnRep_Pawn();
				NewPlayer->Possess(Pawn);

				UFortHero* StrongMyHero = Globals::Athena::GetPlayerController()->StrongMyHero;
				if (StrongMyHero)
				{
					LogSunbeam("StrongMyHero: {}", StrongMyHero->GetDisplayName().ToString());
					for (int i = 0; i < StrongMyHero->CharacterParts.Num(); i++)
					{
						UCustomCharacterPart* CharacterPart = StrongMyHero->CharacterParts[i];
						if (!CharacterPart)
							continue;

						Globals::Athena::GetPlayerState()->CharacterParts[(int)CharacterPart->CharacterPartType] = CharacterPart;
					}
				}
			}
			else if (Globals::SubGame == ESubGame::Campaign)
			{
				LogSunbeam("Mode: STW");

				UFortHeroType* HeroType = Globals::Zone::GetPlayerState()->HeroType;
				LogSunbeam("HeroType: {}", HeroType->DisplayName.ToString());

				auto Pawn = Globals::SpawnActor<APlayerPawn_Generic_C>(HeroType->OverridePawnClass.Get(), Globals::SpawnLocation, FRotator(0, 0, 0), NewPlayer);
				Pawn->Controller = NewPlayer;
				
				NewPlayer->AcknowledgedPawn = Pawn;
				NewPlayer->Pawn = Pawn;
				NewPlayer->OnRep_Pawn();
				NewPlayer->Possess(Pawn);

				for (int i = 0; i < HeroType->HeroItems.Num(); i++)
				{
					FHeroItem HeroItem = HeroType->HeroItems[i];
					if (!HeroItem.Item.Get())
						continue;

					LogSunbeam("HeroItem {}: {} | Quantity: {}", i, HeroItem.Item.Get()->GetFullName(), HeroItem.Quantity);
				}
			}
			
			Globals::GetPlayerState()->OnRep_CharacterParts();

			static int Count = 0;
			Count++;

			NewPlayer->bInfiniteAmmo = true;
			NewPlayer->bBuildFree = true;
			reinterpret_cast<UFortCheatManager*>(NewPlayer->CheatManager)->bInfiniteStamina = true;
			reinterpret_cast<UFortCheatManager*>(NewPlayer->CheatManager)->God();

			if (Count == 1)
			{
				Globals::StaticLoadObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
				Globals::StaticLoadObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Player/Constructor/Perks/Default/GE_Constructor_IsConstructor.GE_Constructor_IsConstructor_C");

				Abilities::GrantAllAbilities(Globals::SubGame);

				Globals::GetPlayerState()->bIsGameSessionOwner = true;
				Globals::GetPlayerState()->OnRep_SessionOwner();

				NewPlayer->ServerReadyToStartMatch();
			}
		}

		if (FunctionName == "Function FortniteGame.FortPlayerController.ServerReadyToStartMatch" && bStartedMatch)
		{
			Inventory::Setup();
		}

		if (FunctionName == "Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility")
		{
			auto Parms = reinterpret_cast<Params::AbilitySystemComponent_ServerTryActivateAbility*>(InParameters);
			auto AbilitySystemComp = reinterpret_cast<UAbilitySystemComponent*>(InObject);

			auto AbilityToActivate = Parms->AbilityToActivate;
			auto PredictionKey = Parms->PredictionKey;

			SDK::UGameplayAbility* InstancedAbility = nullptr;

			Abilities::InternalTryActivateAbilityLong(AbilitySystemComp, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, nullptr);
		}

		if (FunctionName == "Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch")
		{
			auto AbilityComp = reinterpret_cast<UAbilitySystemComponent*>(InObject);
			auto CurrentParams = reinterpret_cast<Params::AbilitySystemComponent_ServerAbilityRPCBatch*>(InParameters);

			SDK::FGameplayAbilitySpec* FoundSpec = Abilities::FindAbilitySpecFromHandle(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle);

			if (FoundSpec && FoundSpec->Ability)
			{
				SDK::UGameplayAbility* InstancedAbility = nullptr;
				char bFailed = Abilities::InternalTryActivateAbilityLong(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle, CurrentParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, &FoundSpec->Ability->CurrentEventData);
				if (bFailed)
					AbilityComp->ClientActivateAbilityFailed(CurrentParams->BatchInfo.AbilitySpecHandle, CurrentParams->BatchInfo.PredictionKey.Base);
			}
		}

		if (FunctionName == "Function FortniteGame.FortPlayerController.ServerModifyStat")
		{
			auto Params = reinterpret_cast<Params::FortPlayerController_ServerModifyStat*>(InParameters);
			
		}

		if (FunctionName == "Function FortniteGame.FortPlayerController.ServerAttemptInteract")
		{
			auto Params = reinterpret_cast<Params::FortPlayerController_ServerAttemptInteract*>(InParameters);
			AActor* ReceivingActor = Params->ReceivingActor;
			ETInteractionType InteractType = Params->InteractType;

		}

		if (FunctionName == "Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump")
		{
			auto Params = reinterpret_cast<Params::FortPlayerControllerAthena_ServerAttemptAircraftJump*>(InParameters);
			AFortAthenaAircraft* Aircraft = Globals::Athena::GetGameState()->Aircraft;
			if (Aircraft)
				Globals::SpawnLocation = Aircraft->K2_GetActorLocation();

			Globals::GetGameMode()->HandleStartingNewPlayer(reinterpret_cast<APlayerController*>(InObject));
		}

		if (FunctionName == "Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped" && bStartedMatch)
		{
			auto Player = reinterpret_cast<AFortPlayerController*>(InObject);
			Player->bHasClientFinishedLoading = true;
			Player->ServerSetClientHasFinishedLoading(true);
			Player->bHasServerFinishedLoading = true;
			Player->OnRep_bHasServerFinishedLoading();

			Player->bClientPawnIsLoaded = true;

			if (Globals::SubGame == ESubGame::Athena)
			{
				auto PlayerState = Globals::Athena::GetPlayerState();
				PlayerState->TeamIndex = EFortTeam::HumanPvP_Team1;
				PlayerState->OnRep_TeamIndex();
			}
		}

		if (FunctionName == "Function Engine.GameMode.ReadyToStartMatch" && bStartedMatch)
		{
			auto GameMode = reinterpret_cast<AFortGameMode*>(InObject);

			if (Globals::SubGame == ESubGame::Athena)
				GameMode->CurrentPlaylistId = (int)Globals::CurrentPlaylist;

			GameMode->StartMatch();
			GameMode->StartPlay();
		}

		if (IsDebugClass(InObject) && IsFunctionOK(InFunction)) { LogSunbeam("ProcessEvent: {} called {}", ObjectName, FunctionName); }

		return oProcessEvent(InObject, InFunction, InParameters);
	}

	void Initialize()
	{
		MH_CreateHook((void*)(uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent), hkProcessEvent, (void**)&oProcessEvent);

		LogSunbeam("Initialized Debugging Hooks.");
	}
}