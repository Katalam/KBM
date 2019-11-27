#include "script_component.hpp"
/*
 * Author: Katalam
 * Search the CfgInteractionPositions for the given object for the best interaction position
 *
 * Arguments:
 * 0: Object
 *
 * Return Value:
 * None
 *
 * Example:
 * [flagTP] call KBM_common_fnc_getPosition;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]]
];

private _pos = [];

if (isClass (configFile >> "CfgInteractionPositions" >> typeOf _object)) exitWith {
    _pos = getArray (configFile >> "CfgInteractionPositions" >> typeOf _object >> "position");
};
if (_object isKindOf "FlagCarrier") exitWith {
    _pos = getArray (configFile >> "CfgInteractionPositions" >> "FlagCarrier" >> "position");
};

private _sub = (configFile >> "CfgInteractionPositions") call BIS_fnc_getCfgSubClasses;
{
    if (_object isKindOf _x) then {
        _pos = getArray (configFile >> "CfgInteractionPositions" >> _x >> "position");
    };
} forEach _sub;

if (_pos isEqualTo []) then {
    _pos = [0, 0, 0];
};

_pos
