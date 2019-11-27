#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for spectating.
 * Local effect.
 *
 * Arguments:
 * 0: Interactionobject <OBJECT>
 * 1: Markername <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [tv, "marker_teleport_spectator"] call KBM_common_fnc_addSpectatorMenu;
 *
 * Public: Yes
 */

if (!hasInterface) exitWith {};

params [
    ["_object", objNull, [objNull]],
    ["_markerName", "", [""]]
];

if ((getMarkerPos _markerName) isEqualTo [0, 0, 0]) exitWith {};

private _specCode = {
    player setVariable [QGVAR(isSpectator), true, false];
    ["Initialize", [player, [], true, true, true, true, true, true, true, true]] call BIS_fnc_EGSpectator;
    [player, true] remoteExec ["hideObjectGlobal", 2, false];
    player setCaptive true;
    player setPosATL (getMarkerPos (_this select 2));
    hint "Verlassen durch Respawn";
};

private _pos = [_object] call FUNC(getPosition);

[_object, 0, [],
    [QGVAR(specActionParent), localize LSTRING(spectator), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

[_object, 0, [QGVAR(specActionParent)],
    [QGVAR(specAction0), localize LSTRING(beSpectator), "", _specCode, {true}, {}, _markerName] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

[_object, 0, [QGVAR(specActionParent)],
    [QGVAR(specAction1), "Easy cinematics", "", {
        hint "Verlassen durch Rechtsclick. Bedienung als Diary Eintrag";
        [player] call BIS_fnc_cameraOld;
    }, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
