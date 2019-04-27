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
 * [player, 0, 0, 0, "FxCartridge_65"] call kat_10thmods_cartridge_fnc_createCatridge;
 *
 * Public: No
 */

params ["_unit", "", "", "", "_ammo"];

if (GVAR(stop)) exitWith {};

private _cartridgeType = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
if (_cartridgeType find "caseless" != -1) exitWith {};

private _oldCartridge = missionNamespace getVariable [QGVAR(cartridges), []];
if !(_cartridgeType in _oldCartridge) then {
    _oldCartridge pushBack _cartridgeType;
    missionNamespace setVariable [QGVAR(cartridges), _oldCartridge, true];
};

private "_pos";
switch (stance _unit) do {
    case "STAND": {
        _pos = _unit getRelPos [3, 85]; // meter, direction
    };
    case "CROUCH": {
        _pos = _unit getRelPos [2.2, 75]; // meter, direction
    };
    default {
        _pos = _unit getRelPos [1.5, 55]; // meter, direction
    };
};

// createVehicle ["Sign_Sphere10cm_Geometry_F", (player getRelPos [1.5, 55]), [], 0, "CAN_COLLIDE"];

_pos params ["_xa", "_ya", "_za"];

private _cartridge = createVehicle [_cartridgeType, [_xa + random 0.2 - random 0.2, _ya + random 0.2 - random 0.2, _za], [], 0, "CAN_COLLIDE"];
_cartridge enableSimulation false;
_cartridge setDir random 360;
private _vector = surfaceNormal position _cartridge;
_vector params ["_xb", "_yb"];
_cartridge setVectorUp [_xb, _yb, 1];
