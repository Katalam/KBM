#include "script_component.hpp"
/*
 * Author: Katalam
 * Add spectator menu for each synchronized object
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic] call kat_10thMods_common_fnc_moduleAddSpectatorMenu3den;
 *
 * Public: No
 */

params ["_logic"];

if !(isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    [_x, "marker_spectator"] remoteExec [QFUNC(addSpectatorMenu), 0, true];
} forEach _objects;

deleteVehicle _logic;
