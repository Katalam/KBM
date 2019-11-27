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
 * [_logic] call KBM_common_fnc_moduleAddSpectatorMenu3den;
 *
 * Public: No
 */

params ["_logic"];

if !(isServer) exitWith {};

private _objects = synchronizedObjects _logic;
// No fallback for marker n/a, [0,0,0] will be used
private _marker = "marker_spectator";
{
    [_x, _marker] remoteExec [QFUNC(addSpectatorMenu), 0, true];
} forEach _objects;

deleteVehicle _logic;
