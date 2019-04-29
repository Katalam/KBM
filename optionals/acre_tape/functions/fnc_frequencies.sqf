#include "script_component.hpp"
/*
 * Author: Katalam
 * Create Presents for acre handheld
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thMods_acre_tape_fnc_frequencies;
 *
 * Public: Yes
 */

//Create Custom Presets for ACRE2 Radios
["ACRE_PRC117F", "default", "master1"] call acre_api_fnc_copyPreset;
["ACRE_PRC152", "default", "master1"] call acre_api_fnc_copyPreset;

//PRC 117F Presets
["ACRE_PRC117F", "master1", 1, "name", "Warrior"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 2, "name", "Warrior 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 3, "name", "Warrior 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 4, "name", "Warrior 1-1A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 5, "name", "Warrior 1-1B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 6, "name", "Warrior 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 7, "name", "Warrior 1-2A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 8, "name", "Warrior 1-2B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 9, "name", "Warrior 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 10, "name", "Warrior 1-3A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 11, "name", "Warrior 1-3B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 12, "name", "Warrior 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 13, "name", "Warrior 1-4A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 14, "name", "Warrior 1-4B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 15, "name", "Super 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 16, "name", "Super 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 17, "name", "Super 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 18, "name", "Super 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 19, "name", "Falcon 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 20, "name", "Falcon 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 21, "name", "Falcon 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 22, "name", "Falcon 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 23, "name", "Outlaw 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 24, "name", "Outlaw 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 25, "name", "Outlaw 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 26, "name", "Outlaw 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 27, "name", "Workhorse 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 28, "name", "Workhorse 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 29, "name", "Workhorse 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 30, "name", "Stalker 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 31, "name", "Stalker 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 32, "name", "Black Sheep 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 33, "name", "CAS 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 34, "name", "CAS 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 35, "name", "CAS 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 36, "name", "CAS 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 37, "name", "ATC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 38, "name", "FO 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 39, "name", "FO 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 40, "name", "FO 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 41, "name", "FO 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 42, "name", "Optional 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 43, "name", "Optional 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 44, "name", "Optional 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 45, "name", "Optional 4"] call acre_api_fnc_setPresetChannelField;

//PRC 152 Presets
["ACRE_PRC152", "master1", 1, "description", "Warrior"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 2, "description", "Warrior 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 3, "description", "Warrior 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 4, "description", "Warrior 1-1A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 5, "description", "Warrior 1-1B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 6, "description", "Warrior 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 7, "description", "Warrior 1-2A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 8, "description", "Warrior 1-2B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 9, "description", "Warrior 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 10, "description", "Warrior 1-3A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 11, "description", "Warrior 1-3B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 12, "description", "Warrior 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 13, "description", "Warrior 1-4A"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 14, "description", "Warrior 1-4B"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 15, "description", "Super 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 16, "description", "Super 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 17, "description", "Super 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 18, "description", "Super 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 19, "description", "Falcon 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 20, "description", "Falcon 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 21, "description", "Falcon 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 22, "description", "Falcon 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 23, "description", "Outlaw 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 24, "description", "Outlaw 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 25, "description", "Outlaw 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 26, "description", "Outlaw 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 27, "description", "Workhorse 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 28, "description", "Workhorse 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 29, "description", "Workhorse 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 30, "description", "Stalker 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 31, "description", "Stalker 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 32, "description", "Black Sheep 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 33, "description", "CAS 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 34, "description", "CAS 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 35, "description", "CAS 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 36, "description", "CAS 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 37, "description", "ATC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 38, "description", "FO 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 39, "description", "FO 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 40, "description", "FO 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 41, "description", "FO 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 42, "description", "Optional 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 43, "description", "Optional 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 44, "description", "Optional 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 45, "description", "Optional 4"] call acre_api_fnc_setPresetChannelField;

//Set Preset on Radio
["ACRE_PRC117F", "master1"] call acre_api_fnc_setPreset;
["ACRE_PRC152", "master1"] call acre_api_fnc_setPreset;
