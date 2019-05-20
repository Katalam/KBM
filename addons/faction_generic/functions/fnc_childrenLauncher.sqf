#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds launcher children for given loadout.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Actions <ARRAY>
 *
 * Example:
 * [cursorObject, player] call kat_10thMods_faction_generic_fnc_childrenLauncher;
 *
 * Public: No
 */

params [
    ["_target", objNull, [objNull]],
    ["_player", objNull, [objNull]],
    ["_typeFormat", "", [""]]
];

private _actions = [];
private _loadout = _player getVariable [QGVAR(loadout), "USAM_RFM"];
private _type = str formatText [_typeFormat, _loadout];

{
    private _action = [QGVAR(loadoutAction_L) + (str _forEachIndex), _x select 0, "", FUNC(launcher), {true}, {}, [_x select 1, _x select 2]] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutLauncher"));

_actions
