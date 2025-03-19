#pragma once
#include "framework.h"

namespace QuestPlayButton
{
	void (*oSetQuest)(UQuestPlayButton_C* _this, UFortQuestItem* Quest);
	void hkSetQuest(UQuestPlayButton_C* _this, UFortQuestItem* Quest) // 0x312BC20
	{
		if (_this && Quest)
		{
			Globals::PlayerQuest = Quest;
			LogSunbeam("SetQuest: Quest has been set to {}", Quest->GetFullName());
		}

		return oSetQuest(_this, Quest);
	}

	__int64 __fastcall hkOnMatchmakingStartedInternal(__int64 a1) // 0x71A3E
	{
		LogSunbeam("OnMatchmakingStartedInternal called.");
		return 0;
	}

	//Matchmaking state change %s -> %s
	void __fastcall sub_78BB20(__int64 a1, __int64 a2, __int64 a3)
	{
		LogSunbeam("Matchmaking state change %s -> %s func, ig swap levels?");
		//UFortEngine::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"");
	}

	void Initialize()
	{
		MH_CreateHook((void*)(uintptr_t(GetModuleHandle(0)) + 0x312BC20), hkSetQuest, (void**)&oSetQuest);
		MH_CreateHook((void*)(uintptr_t(GetModuleHandle(0)) + 0x71A3E), hkOnMatchmakingStartedInternal, nullptr);
		MH_CreateHook((void*)(uintptr_t(GetModuleHandle(0)) + 0x78BB20), sub_78BB20, nullptr);

		LogSunbeam("Initialized QuestPlayButton Hooks.");
	}
}