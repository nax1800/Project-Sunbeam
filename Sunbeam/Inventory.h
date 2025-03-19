#pragma once
#include "framework.h"

namespace Inventory
{
	AFortInventory* Inventory = nullptr;
	AFortQuickBars* Quickbars = nullptr;

	EFortQuickBars GetQuickBar(UFortItemDefinition* ItemDefinition)
	{
		if (!ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortEditToolItemDefinition::StaticClass()) &&
			!ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) &&
			!ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
			return EFortQuickBars::Primary;

		return EFortQuickBars::Secondary;
	}

	int GetOpenSlot()
	{
		int Count = 0;
		for (int i = 0; i < Inventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			FFortItemEntry ReplicatedEntry = Inventory->Inventory.ReplicatedEntries[i];
			if (!ReplicatedEntry.ItemDefinition)
				continue;

			if (GetQuickBar(ReplicatedEntry.ItemDefinition) == EFortQuickBars::Primary)
			{
				Count++;

				if (Count == 6)
					return -1;
			}
		}

		return Count;
	}

	void Update()
	{
		Inventory->HandleInventoryLocalUpdate();
		Globals::GetPlayerController()->HandleWorldInventoryLocalUpdate();
		Globals::GetPlayerController()->OnRep_QuickBar();
		Quickbars->OnRep_PrimaryQuickBar();
		Quickbars->OnRep_SecondaryQuickBar();
	}

	void GiveItem(UFortItemDefinition* ItemDefinition, int Count = 1, EFortQuickBars Quickbar = EFortQuickBars::Max_None, int Slot = -1)
	{
		if (Quickbar == EFortQuickBars::Max_None)
			Quickbar = GetQuickBar(ItemDefinition);

		if (Slot == -1)
			Slot = GetOpenSlot();

		if (Slot == -1 && Quickbar == EFortQuickBars::Secondary)
			Slot = 0;

		auto WorldItem = reinterpret_cast<UFortWorldItem*>(ItemDefinition->CreateTemporaryItemInstanceBP(1, 0));
		WorldItem->ItemEntry.Count = Count;

		Inventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
		Inventory->Inventory.ItemInstances.Add(WorldItem);

		Quickbars->ServerAddItemInternal(WorldItem->ItemEntry.ItemGuid, Quickbar, Slot);

		Update();
	}

	FFortItemEntry* FindItem(FGuid ItemGuid)
	{
		for (int i = 0; i < Inventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			FFortItemEntry ReplicatedEntry = Inventory->Inventory.ReplicatedEntries[i];
			if (!ReplicatedEntry.ItemDefinition)
				continue;

			if (UKismetGuidLibrary::EqualEqual_GuidGuid(ReplicatedEntry.ItemGuid, ItemGuid))
				return &ReplicatedEntry;
		}

		return nullptr;
	}

	void GiveStartingItems()
	{
		TArray<FItemAndCount> StartingItems = Globals::Zone::GetGameMode()->StartingItems; // not a thing in stw??
		for (int i = 0; i < StartingItems.Num(); i++)
		{
			if (!StartingItems[i].Item)
				continue;

			LogSunbeam("Item: {} | Count: {}", StartingItems[i].Item->GetFullName(), StartingItems[i].Count);
			GiveItem(StartingItems[i].Item, StartingItems[i].Count, GetQuickBar(StartingItems[i].Item), i);
		}

		if (Globals::SubGame == ESubGame::Athena)
		{
			static auto AthenaPick = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
			GiveItem(AthenaPick, 1, EFortQuickBars::Primary, 0);
		}
		else if (Globals::SubGame == ESubGame::Campaign)
		{
			static auto STWPick = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_C_T01.WID_Harvest_Pickaxe_C_T01");
			GiveItem(STWPick, 1, EFortQuickBars::Primary, 0);
		}
	}

	void Setup()
	{
		struct QuickBarsPointer
		{
			unsigned char pad[0x1A88];
			SDK::AFortQuickBars* QuickBars;
		};

		struct InventoryPointer
		{
			unsigned char pad[0x1D28];
			SDK::AFortInventory* WorldInventory;
		};

		if (!Inventory)
			Inventory = reinterpret_cast<InventoryPointer*>(Globals::GetPlayerController())->WorldInventory;

		if (!Quickbars)
		{
			Quickbars = Globals::SpawnActor<AFortQuickBars>(FVector(1,1,1));
			Quickbars->SetOwner(Globals::GetPlayerController());

			reinterpret_cast<QuickBarsPointer*>(Globals::GetPlayerController())->QuickBars = Quickbars;

			Quickbars->EnableSlot(EFortQuickBars::Primary, 0);

			Update();
		}

		if (Globals::SubGame == ESubGame::Athena)
		{
			reinterpret_cast<UFortCheatManager*>(Globals::GetPlayerController()->CheatManager)->BackpackSetSize(5);
			Globals::GetPlayerController()->OverriddenBackpackSize = 5;
		}
		else if (Globals::SubGame == ESubGame::Campaign)
		{
			reinterpret_cast<UFortCheatManager*>(Globals::GetPlayerController()->CheatManager)->BackpackSetSize(11240);
			Globals::GetPlayerController()->OverriddenBackpackSize = 11240;
		}

		GiveStartingItems();
	}
}