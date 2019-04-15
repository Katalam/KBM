#include "script_component.hpp"
/*
 * Author: Katalam
 * Switches the helmet
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Goggle <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [objNull, player, ""] call kat_10thMods_faction_generic_fnc_helmet;
 *
 * Public: No
 */

params [
    "",
    ["_player", objNull, [objNull]],
    ["_helmet", "", [""]]
];

removeHeadgear _player;
if (_helmet isEqualTo "REMOVE") exitWith {};
_player addHeadgear _helmet;
