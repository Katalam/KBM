#include "script_component.hpp"
/*
 * Author: Katalam
 * Let the bomb explode.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thmods_ied_fnc_explode;
 *
 * Public: No
 */

params [["_object", objNull, [objNull]]];

private _C4 = "DemoCharge_Remote_Ammo_Scripted" createVehicle (getPos _object);
_C4 setDamage 1;
