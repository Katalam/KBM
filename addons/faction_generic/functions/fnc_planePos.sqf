#include "script_component.hpp"
/*
 * Author: Katalam
 * Initialize the vehicle spawn position.
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [logic] call kat_10thMods_faction_generic_fnc_planePos;
 *
 * Public: No
 */

params ["_logic"];

missionNamespace setVariable [QGVAR(planeSpawnPos), [(getPos _logic), getDir _logic]];
