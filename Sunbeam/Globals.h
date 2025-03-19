#pragma once
#include "framework.h"

namespace Globals
{
	UFortQuestItem* PlayerQuest = nullptr;
	FVector SpawnLocation = FVector(0, 0, 0);
	EFortAthenaPlaylist CurrentPlaylist = EFortAthenaPlaylist::AthenaSolo;
	ESubGame SubGame = ESubGame::ESubGame_MAX;

	template<typename T = AActor>
	T* SpawnActor(UClass* ActorClass, FVector Location = FVector(0, 0, 0), FRotator Rotation = FRotator(0,0,0), AActor* Owner = nullptr)
	{
		FTransform Transform;
		FQuat Quat;
		Quat.W = 0;
		Quat.X = Rotation.Pitch;
		Quat.Y = Rotation.Roll;
		Quat.Z = Rotation.Yaw;

		Transform.Rotation = Quat;
		Transform.Scale3D = FVector(1, 1, 1);
		Transform.Translation = Location;

		AActor* SpawnedActor = UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), ActorClass, Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner);
		return reinterpret_cast<T*>(UGameplayStatics::FinishSpawningActor(SpawnedActor, Transform));
	}

	template<typename T = AActor>
	T* SpawnActor(FVector Location = FVector(0, 0, 0), FRotator Rotation = FRotator(0,0,0), AActor* Owner = nullptr)
	{
		return SpawnActor<T>(T::StaticClass(), Location, Rotation, Owner);
	}

	template <typename T>
	static T* StaticLoadObject(const TCHAR* InPath)
	{
		static auto StaticLoadObjectInternal = reinterpret_cast<SDK::UObject * (*)(SDK::UClass * InClass, SDK::UObject * InOuter, const TCHAR * Name, const TCHAR * FileName, uint32_t LoadFlags, SDK::UPackageMap * Sandbox, bool bAllowObjectReconciliation)>(uintptr_t(GetModuleHandle(0)) + 0x0142EE30);
		return (T*)StaticLoadObjectInternal(T::StaticClass(), nullptr, InPath, nullptr, 0, nullptr, false);
	}

	template <typename T>
	static T* StaticFindObject(std::wstring ObjectName, SDK::UClass* ObjectClass = nullptr)
	{
		static auto StaticFindObject = (T * (*)(SDK::UClass*, SDK::UObject * Package, const wchar_t* OrigInName, bool ExactClass))((uintptr_t)GetModuleHandle(0) + 0x0142D2E0);
		return StaticFindObject(ObjectClass, nullptr, ObjectName.c_str(), false);
	}

	AFortPlayerController* GetPlayerController()
	{
		return reinterpret_cast<AFortPlayerController*>(UFortEngine::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
	}
	
	AFortPlayerState* GetPlayerState()
	{
		return reinterpret_cast<AFortPlayerState*>(GetPlayerController()->PlayerState);
	}

	AFortGameMode* GetGameMode()
	{
		return reinterpret_cast<AFortGameMode*>(UWorld::GetWorld()->AuthorityGameMode);
	}

	AFortGameState* GetGameState()
	{
		return reinterpret_cast<AFortGameState*>(UWorld::GetWorld()->GameState);
	}

	AFortPawn* GetPawn()
	{
		return reinterpret_cast<AFortPawn*>(GetPlayerController()->Pawn);
	}

	bool IsValidLowLevel(UObject* Object)
	{
		if (!Object || IsBadReadPtr(Object, 8))
			return false;

		if (!Object->Class || IsBadReadPtr(Object->Class, 8))
			return false;

		if (UObject::GObjects->GetByIndex(Object->Index) != Object)
			return false;

		return true;
	}

	template<typename T>
	T GetProperty(UObject* InObject, string PropertyToFind)
	{
		for (auto InClass = InObject->Class; InClass; InClass = (UClass*)InClass->Super)
		{
			for (UField* Field = InClass->Children; Field; Field = Field->Next)
			{
				if (Field->GetName() == PropertyToFind)
				{
					auto Property = reinterpret_cast<UProperty*>(Field);
					LogSunbeam("Found {}", Field->GetFullName());
					return *reinterpret_cast<T*>(uintptr_t(InObject) + Property->Offset);
				}
			}
		}

		return 0;
	}

	template<typename T>
	T GetProperty(UClass* InClass, string PropertyToFind)
	{
		for (InClass = InClass; InClass; InClass = (UClass*)InClass->Super)
		{
			for (UField* Field = InClass->Children; Field; Field = Field->Next)
			{
				if (!Field)
					continue;

				LogSunbeam("Found {}", Field->GetFullName());
				if (Field->GetName() == PropertyToFind)
				{
					auto Property = reinterpret_cast<UProperty*>(Field);
					return *reinterpret_cast<T*>(uintptr_t(InClass) + Property->Offset);
				}
			}
		}

		return *reinterpret_cast<T*>(0);
	}

	namespace Athena
	{
		AAthena_PlayerController_C* GetPlayerController()
		{
			return reinterpret_cast<AAthena_PlayerController_C*>(UFortEngine::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		}

		APlayerPawn_Athena_C* GetPawn()
		{
			return reinterpret_cast<APlayerPawn_Athena_C*>(GetPlayerController()->Pawn);
		}

		AFortPlayerStateAthena* GetPlayerState()
		{
			return reinterpret_cast<AFortPlayerStateAthena*>(GetPlayerController()->PlayerState);
		}

		AAthena_GameState_C* GetGameState()
		{
			return reinterpret_cast<AAthena_GameState_C*>(UWorld::GetWorld()->GameState);
		}

		AFortGameModeAthena* GetGameMode()
		{
			return reinterpret_cast<AFortGameModeAthena*>(UWorld::GetWorld()->AuthorityGameMode);
		}
	}

	namespace Zone
	{
		AFortPlayerControllerZone* GetPlayerController()
		{
			return reinterpret_cast<AFortPlayerControllerZone*>(UFortEngine::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		}

		APlayerPawn_Generic_C* GetPawn()
		{
			return reinterpret_cast<APlayerPawn_Generic_C*>(GetPlayerController()->Pawn);
		}

		AFortPlayerStateZone* GetPlayerState()
		{
			return reinterpret_cast<AFortPlayerStateZone*>(GetPlayerController()->PlayerState);
		}

		AFortGameStateZone* GetGameState()
		{
			return reinterpret_cast<AFortGameStateZone*>(UWorld::GetWorld()->GameState);
		}

		AFortGameModeZone* GetGameMode()
		{
			return reinterpret_cast<AFortGameModeZone*>(UWorld::GetWorld()->AuthorityGameMode);
		}
	}
}