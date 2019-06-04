#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds a inventory for a bin container
 *
 * Arguments:
 * 0: Bin <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thmods_common_fnc_addBin;
 *
 * Public: No
 */

params [["_object", objNull, [objNull]]];

[_object, 0, ["ACE_MainActions"],
    ["emptyBin", localize LSTRING(clearbin), "", EFUNC(faction_generic,clearVehicleLoadout), {alive _target}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
