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
 * [player, 0, 0, 0, "FxCartridge_65"] call KBM_cartridge_fnc_createCatridge;
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
        private _posUnit = (getPosWorld _unit) vectorAdd [0, 0, 1.3];
        private _return = lineIntersectsSurfaces [_posUnit, AGLToASL ((_unit getRelPos [3, 85]) vectorAdd [0, 0, -1]), _unit];
        _pos = _return select 0 select 0; // meter, direction
    };
    case "CROUCH": {
        private _posUnit = (getPosWorld _unit) vectorAdd [0, 0, 0.9];
        private _return = lineIntersectsSurfaces [_posUnit, AGLToASL ((_unit getRelPos [2.2, 75]) vectorAdd [0, 0, -1]), _unit];
        _pos = _return select 0 select 0; // meter, direction
    };
    default {
        private _posUnit = (getPosWorld _unit) vectorAdd [0, 0, 0.3];
        private _return = lineIntersectsSurfaces [_posUnit, AGLToASL ((_unit getRelPos [5, 20]) vectorAdd [0, 0, -1]), _unit];
        _pos = _return select 0 select 0; // meter, direction
    };
};

if (_pos isEqualTo []) exitWith {};
_pos params ["_xa", "_ya", "_za"];
// createVehicle ["Sign_Sphere10cm_Geometry_F", [_xa, _ya, _za], [], 0, "CAN_COLLIDE"];

//private _cartridge = createVehicle [_cartridgeType, [_xa + random 0.3 - random 0.3, _ya + random 0.3 - random 0.3, _za], [], 0, "CAN_COLLIDE"];
private _cartridge = createSimpleObject [_cartridgeType, [_xa + random 0.3 - random 0.3, _ya + random 0.3 - random 0.3, _za + 0.01], false];
_cartridge enableSimulation false;
_cartridge setDir random 360;
private _vector = surfaceNormal position _cartridge;
_vector params ["_xb", "_yb"];
_cartridge setVectorUp [_xb, _yb, 1];
