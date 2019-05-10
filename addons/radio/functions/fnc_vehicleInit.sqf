#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for radio.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_radio_fnc_vehicleInit;
 *
 * Public: No
 */

params ["_vehicle"];

if !(GVAR(enable)) exitWith {};

private _simType = toLower getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "simulation");
if (_simType in ["parachute", "paraglide"]) exitWith {};

if (isServer) then {
    if (_vehicle getVariable [QGVAR(actionAdded), false]) exitWith {};
    _vehicle setVariable [QGVAR(actionAdded), true, true];
    _vehicle setVariable [QGVAR(radioIsOn), false, true];
    _vehicle setVariable [QGVAR(loudRadioIsOn), false, true];

    _vehicle addMPEventHandler ["MPKilled", {
        params ["_vehicle"];

        [_vehicle, false] call FUNC(playMusic);
    }];

    _vehicle addEventHandler ["GetIn", {
        params ["_vehicle", "", "_playerEntered"];

        if (_vehicle getVariable [QGVAR(radioIsOn), false]) then {
            [_playerEntered] call FUNC(playMusicContinue);
        };
    }];

    _vehicle addEventHandler ["GetOut", {
        params ["", "", "_playerExited"];

        [_playerExited, false] call FUNC(playMusic);
    }];
};

if (hasInterface) then {
    // Parent
    [_vehicle, 1, ["ACE_SelfActions"],
        [QGVAR(radioActions), "Music Radio", "", {}, {true}] call ace_interact_menu_fnc_createAction
    ] call ace_interact_menu_fnc_addActionToObject;

    // Music off
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(radioActions)],
        [QGVAR(turnRadioOff), "Turn Radio Off", QPATHTOF(data\music_off.paa), {
            params ["_vehicle"];

            [_vehicle, false] call FUNC(playMusic);
        }, {
            params ["_vehicle", "_player"];

            private _isPlaying = _vehicle getVariable [QGVAR(radioIsOn), false];

            _isPlaying && {driver _vehicle == _player} && {!visibleMap}
        }] call ace_interact_menu_fnc_createAction
    ] call ace_interact_menu_fnc_addActionToObject;

    // Music on
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(radioActions)],
        [QGVAR(turnRadioOn), "Turn Radio On", QPATHTOF(data\music_on.paa), {
            params ["_vehicle"];

            [_vehicle] call FUNC(playMusic);
        }, {
            params ["_vehicle", "_player"];

            private _isPlaying = _vehicle getVariable [QGVAR(radioIsOn), false];

            !_isPlaying && {driver _vehicle == _player} && {!visibleMap}
        }] call ace_interact_menu_fnc_createAction
    ] call ace_interact_menu_fnc_addActionToObject;
    /*
    // Loud off
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(radioActions)],
        [QGVAR(turnLoudRadioOff), "Turn Loudspeaker Off", QPATHTOF(data\loud_off.paa), {
            params ["_vehicle"];

            true;
        }, {
            params ["_vehicle", "_player"];

            private _isPlaying = _vehicle getVariable [QGVAR(loudRadioIsOn), false];

            _isPlaying && {driver _vehicle == _player} && {!visibleMap}
        }] call ace_interact_menu_fnc_createAction
    ] call ace_interact_menu_fnc_addActionToObject;

    // Loud on
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(radioActions)],
        [QGVAR(turnLoudRadioOn), "Turn Loudspeaker On", QPATHTOF(data\loud_on.paa), {
            params ["_vehicle"];

            true;
        }, {
            params ["_vehicle", "_player"];

            private _isPlaying = _vehicle getVariable [QGVAR(loudRadioIsOn), false];

            !_isPlaying && {driver _vehicle == _player} && {!visibleMap}
        }] call ace_interact_menu_fnc_createAction
    ] call ace_interact_menu_fnc_addActionToObject;
    */
};
