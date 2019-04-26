#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(loot),
    "LIST", // type of setting
    localize LSTRING(setting_loot),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1], ["Disabled", "Enabled"], 1],
    1
] call CBA_Settings_fnc_init;
