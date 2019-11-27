[
    QGVAR(enabled),
    "LIST", // type of setting
    [localize LSTRING(enable), localize LSTRING(enable_tooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT)],
    [[true, false], ["Enabled", "Disabled"], 0]
] call cba_settings_fnc_init;

[
    QGVAR(updateInterval),
    "SLIDER", // type of setting
    [localize LSTRING(updateInterval), localize LSTRING(updateInterval_tooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT)],
    [1, 10, 3, 0],
    1
] call cba_settings_fnc_init;

[
    QGVAR(showUI),
    "LIST",
    [localize LSTRING(showui), localize LSTRING(showui_tooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT)],
    [[true, false], ["Enabled", "Disabled"], 0],
    2,
    {
        call FUNC(initalizeUI)
    }
] call cba_settings_fnc_init;
