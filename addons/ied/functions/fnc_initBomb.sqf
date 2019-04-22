#include "script_component.hpp"
/*
 * Author: Katalam
 * Init function for bomb object.
 *
 * Arguments:
 * 0: Bomb <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this] call kat_10thmods_ied_fnc_initBomb;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];

// bomb type
_object setVariable [QGVAR(bombType), 1, true];

// bomb level
_object setVariable [QGVAR(bombLevel), 1, true];

// ace interaction
[_object, 0, ["ACE_MainActions"],
    [QGVAR(bomb), "Visual Inspection", "", FUNC(visual), {alive _target}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// bomb variant
_object setVariable [QGVAR(bombVariant), round random (10), true];

// bomb armed
_object setVariable [QGVAR(bombArmed), true, true];
