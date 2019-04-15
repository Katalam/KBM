#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds silencer children for given loadout.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Actions <ARRAY>
 *
 * Example:
 * [cursorObject, player] call kat_10thMods_faction_generic_fnc_childrenSilencer;
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
private _silencer = ((primaryWeaponItems _player) select 0) isEqualTo "";

if (_silencer) then {
    {
        private _action = [QGVAR(loadoutAction_silencer) + (str _forEachIndex), _x select 0, "", FUNC(silencer), {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction;
        _actions pushBack [_action, [], _target];
    } forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutSilencer"));
} else {
    private _action = [QGVAR(loadoutAction_silencer_r), localize LSTRING(silencer_r), "", FUNC(silencer), {true}, {}, "REMOVE"] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
};

_actions
