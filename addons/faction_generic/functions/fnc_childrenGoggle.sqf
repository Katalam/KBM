#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds scope children for given loadout.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Actions <ARRAY>
 *
 * Example:
 * [cursorObject, player] call kat_10thMods_faction_generic_fnc_childrenScope;
 *
 * Public: No
 */

params [
    ["_target", objNull, [objNull]],
    ["_player", objNull, [objNull]]
];

private _actions = [];
private _loadout = _player getVariable [QGVAR(loadout), "USAM_RFM"];
private _type = str formatText ["kat_10thMods_faction_generic_%1", _loadout];

{
    private _action = [QGVAR(loadoutAction_G) + (str _forEachIndex), _x select 0, "", FUNC(goggle), {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutGoggle"));

_actions
