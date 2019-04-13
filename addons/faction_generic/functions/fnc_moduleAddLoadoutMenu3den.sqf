#include "script_component.hpp"
/*
 * Author: Katalam
 * Add loadout menu for each synchronized object
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic] call kat_10thMods_faction_generic_fnc_moduleAddLoadoutMenu3den;
 *
 * Public: No
 */

params ["_logic"];

if !(isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    [_x] remoteExec [QFUNC(addLoadoutMenu), 0, true];
} forEach _objects;

deleteVehicle _logic;
