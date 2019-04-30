#include "script_component.hpp"
/*
 * Author: Katalam
 * Plays given music for passengers of given vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Music <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle player] call kat_10thMods_radio_fnc_playMusic;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_music", true, [true]]
];

private _passengers = crew _vehicle;
private "_musicData";

if (_music) then {
    _musicData = call FUNC(getMusic);
    if (_musicData isEqualTo []) then {
        _musicData = call FUNC(randomMusic);
    };
    _vehicle setVariable [QGVAR(radioData), [_musicData, CBA_missionTime], true];
    _vehicle setVariable [QGVAR(radioIsOn), true, true];
};

if !(_music) exitWith {
    {
        "" remoteExec ["playMusic", _x];
    } forEach _passengers;

    _vehicle setVariable [QGVAR(radioData), [], true];
    _vehicle setVariable [QGVAR(radioIsOn), false, true];
};

private _text = getText (configFile >> "CfgMusic" >> _musicData >> "name");

{
    _musicData remoteExec ["playMusic", _x];
    _text remoteExec [QFUNC(text), _x];
} forEach _passengers;

if (_musicData isEqualType []) then {_musicData = _musicData select 0};
private _duration = getNumber (configFile >> "CfgMusic" >> _musicData >> "duration");

[{
    params ["_vehicle"];
    !(_vehicle getVariable [QGVAR(radioIsOn), false])
}, {}, _vehicle, _duration + 1, {
    params ["_vehicle"];
    [_vehicle, false] call FUNC(playMusic);
    [_vehicle] call FUNC(playMusic);
}] call CBA_fnc_waitUntilAndExecute;

true;
