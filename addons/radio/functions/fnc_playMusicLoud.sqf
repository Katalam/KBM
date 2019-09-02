#include "script_component.hpp"
/*
 * Author: Katalam
 * Plays given music loud.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Music <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle player] call kat_10thMods_radio_fnc_playMusicLoud;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_music", true, [true]]
];

private "_musicData";

if (_music) then {
    // getting music data
    _musicData = call FUNC(getMusic);
    if (_musicData isEqualTo []) then {
        _musicData = call FUNC(randomMusic);
    };
    _vehicle setVariable [QGVAR(radioData), [_musicData, CBA_missionTime], true];

    // create hidden Radio particle source object
    private _hiddenRadio = "#particleSource" createVehicle [0, 0, 0];
    _hiddenRadio remoteExec ["hideObjectGlobal", -2];
    _hiddenRadio allowDamage false;
    _hiddenRadio attachTo [_vehicle, [0, 0, 0]];

    _vehicle setVariable [QGVAR(hiddenRadio), _hiddenRadio, true];

    // start radio on track 1
    if (_musicData isEqualType []) then {_musicData = _musicData select 0};
    [_hiddenRadio, _musicData] remoteExec ["say3D", 0];
    _vehicle setVariable [QGVAR(radioIsOnLoud), true, true];

    // starts the next track
    private _duration = getNumber (configFile >> "CfgMusic" >> _musicData >> "duration");
    [{
        params ["_vehicle"];
        !(_vehicle getVariable [QGVAR(radioIsOnLoud), false])
    }, {}, _vehicle, _duration + 1, {
        params ["_vehicle"];
        [_vehicle, false] call FUNC(playMusicLoud);
        [_vehicle] call FUNC(playMusicLoud);
    }] call CBA_fnc_waitUntilAndExecute;
} else {
    private _hiddenRadio = _vehicle getVariable [QGVAR(hiddenRadio), objNull];
    if (_hiddenRadio isEqualTo objNull) exitWith {};
    deleteVehicle _hiddenRadio;
    _vehicle setVariable [QGVAR(radioData), [], true];
    _vehicle setVariable [QGVAR(radioIsOnLoud), false, true];
};

true;
