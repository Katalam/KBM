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
    ["_classNames", "", [""]]
];

if (_classNames isEqualTo "REMOVE") exitWith {
    _player removePrimaryWeaponItem ((primaryWeaponItems _player) select 0);
};
_player addPrimaryWeaponItem _classNames;
