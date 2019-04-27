#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates a cartridge when weapon is fired.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1:
 * 2:
 * 3:
 * 4: Ammunition used by the fired weapon <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, 0, 0, 0, "FxCartridge_65"] call kat_10thmods_catridge_fnc_createCatridge;
 *
 * Public: No
 */

params ["_unit", "", "", "", "_ammo"];

private _cartridgeType = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
private _pos = _unit getRelPos [1.5, 70]; // meter, direction
_pos params ["_xa", "_ya", "_za"];

private _cartridge = createVehicle [_cartridgeType, [_xa + random 0.2 - random 0.2, _ya + random 0.2 - random 0.2, _za], [], 0, "CAN_COLLIDE"];
_cartridge enableSimulation false;
_cartridge setDir random 360;
_cartridge setVectorUp [0, 0, 1];
