#pragma once

#include <windows.h>
#include <iostream>
#include <fstream>
#include <format>
#include <vector>

using namespace std;

#define LogSunbeam(...) { cout << "Sunbeam: " << format(__VA_ARGS__) << endl; }

#include "MinHook/include/MinHook.h"
#include "SDK/SDK.hpp"

#include "SDK/SDK/Engine_parameters.hpp"
#include "SDK/SDK/FortniteGame_parameters.hpp"
#include "SDK/SDK/GameplayAbilities_parameters.hpp"

using namespace SDK;

#include "Globals.h"
