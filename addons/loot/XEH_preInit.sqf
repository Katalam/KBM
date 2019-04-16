#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "KAT 10th Mods - Loot"

[
    QGVAR(loot),
    "LIST", // type of setting
    localize LSTRING(setting_loot),
    CBA_SETTINGS_CAT,
    [[0, 1], ["Disabled", "Enabled"], 1],
    1
] call CBA_Settings_fnc_init;

ADDON = true;
