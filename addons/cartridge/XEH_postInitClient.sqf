#include "script_component.hpp"

player addEventHandler ["Fired", {
    params ["_unit", "", "", "", "_ammo"];

    private _cartridgeType = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
    private _pos = _unit getRelPos [1.5, 70];
    _pos params ["_xa", "_ya", "_za"];

    private _cartridge = createVehicle [_cartridgeType, [_xa + random 0.2 - random 0.2, _ya + random 0.2 - random 0.2, _za], [], 0, "CAN_COLLIDE"];
    _cartridge enableSimulation false;
    _cartridge setDir random 360;
    _cartridge setVectorUp [0, 0, 1];
}];
