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
 * call KBM_acre_fnc_frequencies;
 *
 * Public: Yes
 */

// Create Custom Presets for ACRE2 Radios
["ACRE_PRC117F", "default", "master1"] call acre_api_fnc_copyPreset;
["ACRE_PRC152", "default", "master1"] call acre_api_fnc_copyPreset;

// PRC 117F Presets
["ACRE_PRC117F", "master1", 1, "name", "Warrior"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 2, "name", "Warrior 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 7, "name", "Super 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 8, "name", "Super 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 9, "name", "Super 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 10, "name", "Super 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 11, "name", "Falcon 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 12, "name", "Falcon 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 13, "name", "Falcon 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 14, "name", "Falcon 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 15, "name", "Outlaw 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 16, "name", "Outlaw 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 17, "name", "Outlaw 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 18, "name", "Outlaw 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 19, "name", "Workhorse 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 20, "name", "Workhorse 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 21, "name", "Workhorse 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 22, "name", "Stalker 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 23, "name", "Stalker 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 24, "name", "Black Sheep 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 25, "name", "CAS 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 26, "name", "CAS 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 27, "name", "CAS 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 28, "name", "CAS 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 29, "name", "ATC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 30, "name", "FO 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 31, "name", "FO 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 32, "name", "FO 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 33, "name", "FO 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 34, "name", "Optional 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 35, "name", "Optional 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 36, "name", "Optional 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 37, "name", "Optional 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "master1", 99, "name", "EMERGENCY"] call acre_api_fnc_setPresetChannelField;

// PRC 152 Presets
["ACRE_PRC152", "master1", 1, "description", "Warrior"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 2, "description", "Warrior 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 3, "description", "Warrior 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 4, "description", "Warrior 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 5, "description", "Warrior 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 6, "description", "Warrior 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 7, "description", "Super 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 8, "description", "Super 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 9, "description", "Super 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 10, "description", "Super 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 11, "description", "Falcon 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 12, "description", "Falcon 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 13, "description", "Falcon 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 14, "description", "Falcon 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 15, "description", "Outlaw 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 16, "description", "Outlaw 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 17, "description", "Outlaw 1-3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 18, "description", "Outlaw 1-4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 19, "description", "Workhorse 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 20, "description", "Workhorse 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 21, "description", "Workhorse 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 22, "description", "Stalker 1-1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 23, "description", "Stalker 1-2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 24, "description", "Black Sheep 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 25, "description", "CAS 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 26, "description", "CAS 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 27, "description", "CAS 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 28, "description", "CAS 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 29, "description", "ATC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 30, "description", "FO 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 31, "description", "FO 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 32, "description", "FO 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 33, "description", "FO 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 34, "description", "Optional 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 35, "description", "Optional 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 36, "description", "Optional 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 37, "description", "Optional 4"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "master1", 99, "description", "EMERGENCY"] call acre_api_fnc_setPresetChannelField;

// Set Preset on Radio
["ACRE_PRC117F", "master1"] call acre_api_fnc_setPreset;
["ACRE_PRC152", "master1"] call acre_api_fnc_setPreset;
