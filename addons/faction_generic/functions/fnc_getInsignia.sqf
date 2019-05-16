#include "script_component.hpp"
/*
 * Author: Katalam
 * Gets insignia from a player.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_faction_generic_fnc_getInsignia;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

if (!local _unit || {_unit != player}) exitWith {};

private _insignia = [_unit] call BIS_fnc_getUnitInsignia;
private _config = configFile >> "CfgVehicles" >> typeOf _unit;

if (_insignia == "") then {
    if (isText (_config >> "loadoutInsignia")) then {
        _insignia = getText (_config >> "loadoutInsignia");
    };
    _unit setVariable [QGVAR(activeInsignia), _insignia];
} else {
    _unit setVariable [QGVAR(activeInsignia), _insignia];
};
