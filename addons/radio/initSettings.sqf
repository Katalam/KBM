#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(enable),
    "CHECKBOX", // type of setting
    localize LSTRING(setting_enable),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    true
] call CBA_Settings_fnc_init;
