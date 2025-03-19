#include "framework.h"

#include "GameMode.h"
#include "QuestPlayButton.h"
#include "Debugging.h"

void Initialize()
{
    AllocConsole();
    FILE* File;
    freopen_s(&File, "CONOUT$", "w+", stdout);
    SetConsoleTitleA("Sunbeam || inspired by nocturno || made by @nax1800");

    if (MH_Initialize() != MH_OK)
    {
        LogSunbeam("Minhook failed to initialize, exiting.");
        exit(1);
    }


    Debugging::Initialize();

   // QuestPlayButton::Initialize();
   // GameMode::Initialize();

    MH_EnableHook(MH_ALL_HOOKS);

    ULocalPlayer* LocalPlayer = UFortEngine::GetEngine()->GameInstance->LocalPlayers[0];
    auto NewConsole = reinterpret_cast<UConsole*>(UGameplayStatics::SpawnObject(UConsole::StaticClass(), LocalPlayer->ViewportClient));

    LocalPlayer->ViewportClient->ViewportConsole = NewConsole;

    FString Message = L"Welcome to Project Sunbeam (1.8)\nMade by @nax1800\n\nThis project is inspired by nocturno (discord.gg/nocturno). The aim is to get BR and STW both playable with most of their functionality, e.g. Husks (AI), Looting, Missions, etc.... I will try my best to make it a 1:1 experience so you could have fun and play about!\n\nIf there are any problems/bugs, please dm on discord or if you have added anything to the source please make a pull request :)";

    Globals::GetGameMode()->Say(Message);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved)
{
    switch (ulReason)
    {
    case DLL_PROCESS_ATTACH:
        Initialize();
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

