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
 * [logic] call kat_10thMods_faction_generic_fnc_vehiclePos;
 *
 * Public: No
 */

params ["_logic"];

missionNamespace setVariable [QGVAR(vehicleSpawnPos), [(getPos _logic), getDir _logic], true];
