#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(amount),
    "SLIDER", // type of setting
    localize LSTRING(setting_amount),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1000, 500, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(stop),
    "CHECKBOX", // type of setting
    localize LSTRING(setting_stop),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    false,
    true
] call CBA_Settings_fnc_init;
