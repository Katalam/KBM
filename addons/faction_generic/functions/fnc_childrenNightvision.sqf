#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds Nightvision children for given loadout.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Actions <ARRAY>
 *
 * Example:
 * [cursorObject, player] call kat_10thMods_faction_generic_fnc_childrenNightvision;
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
private _config = (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutNVG"));
private _nvg = (_config select 0) in (assignedItems _player);

if !(_nvg) then {
    private _action = [QGVAR(loadoutAction_N_Add), localize LSTRING(nightvision_add), "", FUNC(nightvision), {true}, {}, true] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} else {
    private _action = [QGVAR(loadoutAction_N_Remove), localize LSTRING(nightvision_remove), "", FUNC(nightvision), {true}, {}, false] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
};

_actions
