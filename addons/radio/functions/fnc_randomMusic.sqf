#include "script_component.hpp"
/*
 * Author: Katalam
 * Plays given music for passengers of given vehicle.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thMods_radio_fnc_randomMusic;
 *
 * Public: Yes
 */

private _allMusic = "true" configClasses (configFile >> "CfgMusic");
_allMusic append ("true" configClasses (missionConfigFile >> "CfgMusic"));
_allMusic = _allMusic select {getText (_x >> "musicClass") == "KAT"};
configName (selectRandom _allMusic);
