#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for delete crates
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_logistic_fnc_deleteCrate;
 *
 * Public: Yes
 */

params [["_target", objNull, [objNull]]];

[_target, 0, ["ACE_MainActions"], [
    QGVAR(DeleteCrate), localize LSTRING(deleteCrate), "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction
] remoteExec ["ace_interact_menu_fnc_addActionToObject", [0, -2] select isDedicated, _target];
