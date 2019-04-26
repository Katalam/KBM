#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(enabled),
    "LIST", // type of setting
    ["Zeus FPS Monitor", "Enable/Disable Zeus FPS Monitor"],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [[true, false], ["Enabled", "Disabled"], 0]
] call cba_settings_fnc_init;

[
    QGVAR(updateInterval),
    "SLIDER", // type of setting
    ["Update interval", "Set the FPS update interval in seconds"],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [1, 10, 3, 0],
    1
] call cba_settings_fnc_init;

[
    QGVAR(showUI),
    "LIST",
    ["Show Zeus UI", "Show or hide frame display for Zeus."],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    [[true, false], ["Enabled", "Disabled"], 0],
    2,
    {call FUNC(initalizeUI)}
] call cba_settings_fnc_init;
