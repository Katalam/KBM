#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds or remove one time launcher
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Launcher <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_faction_generic_fnc_launcher;
 *
 * Public: No
 */

params [
    "",
    ["_player", objNull, [objNull]],
    ["_classNames", [], [[]]]
];

_classNames params [
    ["_weapon", "", [""]],
    ["_magazine", "", [""]]
];

if (_weapon isEqualTo "REMOVE") exitWith {
    _player removeWeaponGlobal (secondaryWeapon _player);
};
_player addWeapon _weapon;
_player addSecondaryWeaponItem _magazine;
