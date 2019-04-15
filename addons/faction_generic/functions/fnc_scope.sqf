#include "script_component.hpp"
/*
 * Author: Katalam
 * Switches the scope
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Unit <OBJECT>
 * 2: Scope <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget, player, ""] call kat_10thMods_faction_generic_fnc_scope;
 *
 * Public: No
 */

params [
    "",
    ["_player", objNull, [objNull]],
    ["_scope", "", [""]]
];

_player removePrimaryWeaponItem (primaryWeaponItems _player select 2);
_player addPrimaryWeaponItem _scope;
