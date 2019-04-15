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
    private _action = [QGVAR(loadoutAction_S) + (str _forEachIndex), _x select 0, "", FUNC(scope), {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutScope"));

{
    private _action = [QGVAR(loadoutAction_S2) + (str _forEachIndex), _x select 0, "", {
        private _scope = _this select 2;
        private _gunbag = backpackContainer player;
        private _array = _gunbag getVariable ["ace_gunbag_gunbagWeapon", []];
        _array params ["_weapon", "_items", "_magazines"];
        _items = _items select [0, 3];
        _items pushBack _scope;
        _gunbag setVariable ["ace_gunbag_gunbagWeapon", [_weapon, _items, _magazines]];
    }, {
        !isNil {(backpackContainer player) getVariable "ace_gunbag_gunbagWeapon"};
    }, {}, _x select 1] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutScopeDMR"));

_actions
