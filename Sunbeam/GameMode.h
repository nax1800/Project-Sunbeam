#pragma once
#include "framework.h"

namespace GameMode
{
	bool (*oReadyToStartMatch)(AGameMode*);
	bool hkReadyToStartMatch(AGameMode* _this)
	{
		if (!_this)
			return false;

		auto GameMode = reinterpret_cast<AFortGameModeOutpost*>(_this);
		auto GameState = reinterpret_cast<AFortGameStateZone*>(GameMode->GameState);
		if (!GameState)
			return false;

		return oReadyToStartMatch(_this);
	}

	void Initialize()
	{
		LogSunbeam("Initialized GameMode Hooks.");
	}
}