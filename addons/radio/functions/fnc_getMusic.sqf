#include "script_component.hpp"
/*
 * Author: Katalam
 * Get music dat for given vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle player] call kat_10thMods_radio_fnc_getMusic;
 *
 * Public: No
 */

params ["_vehicle"];

private _radioData = _vehicle getVariable [QGVAR(radioData), []];
if (_radioData isEqualTo []) exitWith {[]};
_radioData params ["_name", "_time"];
_time = CBA_missionTime - _time;
[_name, _time];
