#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds helmet children for given loadout.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Actions <ARRAY>
 *
 * Example:
 * [cursorObject, player] call kat_10thMods_faction_generic_fnc_childrenHelmet;
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
    private _displayName = (getText (configFile >> "CfgWeapons" >> _x >> "displayName"));
    private _action = [QGVAR(loadoutAction_H) + (str _forEachIndex), _displayName, "", FUNC(helmet), {true}, {}, _x] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutHelmet"));

_actions
