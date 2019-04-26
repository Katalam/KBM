#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(breathing),
    "LIST", // type of setting
    localize LSTRING(setting_breathing),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2], ["Disabled", "Temperature", "Force"], 1],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(breathing_intensity),
    "SLIDER", // type of setting
    localize LSTRING(setting_breathing_intensity),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 0.01, 2],
    true
] call CBA_Settings_fnc_init;
