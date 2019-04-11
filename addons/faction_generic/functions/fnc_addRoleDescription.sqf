#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds role description and playbale status to placed units
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_faction_generic_fnc_loadout;
 *
 * Public: No
 */

params ["_unit"];

if !(((_unit get3DENAttribute "description") select 0) isEqualTo "") exitWith {};

_unit set3DENAttribute ["ControlMP", true];

private _description = (_unit get3DENAttribute "description") select 0;

if (_description isEqualTo "") then {
    private _type = typeOf _unit;
    if (isText(configFile >> "CfgVehicles" >> _type >> "description")) then {
        _description = getText(configFile >> "CfgVehicles" >> _type >> "description");
        _unit set3DENAttribute ["description", _description];
    };
};
