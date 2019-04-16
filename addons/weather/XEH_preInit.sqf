#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "KAT 10th Mods - Breathing"

[
    QGVAR(breathing),
    "LIST", // type of setting
    localize LSTRING(setting_breathing),
    CBA_SETTINGS_CAT,
    [[0, 1, 2], ["Disabled", "Temperature", "Force"], 1],
    1
] call CBA_Settings_fnc_init;

ADDON = true;
