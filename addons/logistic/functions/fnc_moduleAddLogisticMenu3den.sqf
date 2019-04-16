#include "script_component.hpp"
/*
 * Author: Katalam
 * Add logistic menu for each synchronized object
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic] call kat_10thMods_logistic_fnc_moduleAddLogisticMenu3den;
 *
 * Public: No
 */

params ["_logic"];

if !(isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    [_x] remoteExec [QFUNC(addLogisticMenu), 0, true];
} forEach _objects;

deleteVehicle _logic;
