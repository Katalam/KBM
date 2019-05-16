#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds insignia to a player.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_faction_generic_fnc_setInsignia;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

if (!local _unit || {_unit != player}) exitWith {};

private _insignia = _unit getVariable [QGVAR(activeInsignia), ""];

[_unit, ""] call BIS_fnc_setUnitInsignia;
[_unit, _insignia] call BIS_fnc_setUnitInsignia;
