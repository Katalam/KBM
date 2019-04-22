// CBA Settings [ADDON: ace_artillerytables]:

private _categoryName = format ["KAT 10th Mods - ", localize "str_a3_cfgmarkers_nato_art"];

[
    QGVAR(advancedCorrections), "CHECKBOX",
    [LSTRING(advancedCorrections_displayName), LSTRING(advancedCorrections_description)],
    [_categoryName, QUOTE(COMPONENT_BEAUTIFIED)],
    false, // default value
    true, // isGlobal
    {[QGVAR(advancedCorrections), _this] call ace_common_fnc_cbaSettings_settingChanged},
    true // Needs mission restart
] call CBA_settings_fnc_init;

[
    QGVAR(disableArtilleryComputer), "CHECKBOX",
    [LSTRING(disableArtilleryComputer_displayName), LSTRING(disableArtilleryComputer_description)],
    [_categoryName, QUOTE(COMPONENT_BEAUTIFIED)],
    false, // default value
    true, // isGlobal
    {[QGVAR(disableArtilleryComputer), _this] call ace_common_fnc_cbaSettings_settingChanged},
    false // Needs mission restart
] call CBA_settings_fnc_init;
