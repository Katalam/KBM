#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(enable),
    "CHECKBOX",
    localize LSTRING(setting_enable),
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    nil,
    {
        params ["_value"];
        GVAR(enable) = _value;
    }
] call CBA_Settings_fnc_init;
