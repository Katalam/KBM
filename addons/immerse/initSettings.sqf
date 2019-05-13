#define CBA_SETTINGS_CAT "KAT 10th Mods"

[
    QGVAR(twitch),
    "CHECKBOX",
    [localize LSTRING(enableTwitch), localize LSTRING(enableTwitchTooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    nil,
    {
        params ["_value"];
        GVAR(twitchEnabled) = _value;
    }
] call CBA_Settings_fnc_init;

[
    QGVAR(exShake),
    "CHECKBOX",
    [localize LSTRING(enableExShake), localize LSTRING(enableExShakeTooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    nil,
    {
        params ["_value"];
        GVAR(exShakeEnabled) = _value;
        if (GVAR(exShakeEnabled)) then {
            if (isNil QGVAR(exShakePFH)) then {
                GVAR(exShakePFH) = [{
                    call FUNC(exShakeHandler);
                }, 0.05] call CBA_fnc_addPerframeHandler;
            };
        } else {
            GVAR(exShakePFH) call CBA_fnc_removePerFrameHandler;
            GVAR(exShakePFH) = nil;
        };
    }
] call CBA_Settings_fnc_init;

[
    QGVAR(recoil),
    "CHECKBOX",
    [localize LSTRING(enableRecoil), localize LSTRING(enableRecoilTooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    nil,
    {
        params ["_value"];
        GVAR(recoilEnabled) = _value;
    }
] call CBA_Settings_fnc_init;

[
    QGVAR(force),
    "CHECKBOX",
    [localize LSTRING(enableForce), localize LSTRING(enableForceTooltip)],
    [CBA_SETTINGS_CAT, QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    nil,
    {
        params ["_value"];
        GVAR(forceEnabled) = _value;
    }
] call CBA_Settings_fnc_init;
