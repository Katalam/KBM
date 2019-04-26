#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(advancedCorrections), "CHECKBOX",
    [LSTRING(advancedCorrections_displayName), LSTRING(advancedCorrections_description)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    false, // default value
    true, // isGlobal
    {[QGVAR(advancedCorrections), _this] call ace_common_fnc_cbaSettings_settingChanged},
    true // Needs mission restart
] call CBA_settings_fnc_init;

[
    QGVAR(disableArtilleryComputer), "CHECKBOX",
    [LSTRING(disableArtilleryComputer_displayName), LSTRING(disableArtilleryComputer_description)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    false, // default value
    true, // isGlobal
    {[QGVAR(disableArtilleryComputer), _this] call ace_common_fnc_cbaSettings_settingChanged},
    false // Needs mission restart
] call CBA_settings_fnc_init;
