#include "script_component.hpp"
/*
 * Author: Katalam
 * Action to transfer loot to a vehicle.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_loot_fnc_transgerTovehicle;
 *
 * Public: Yes
 */

params ["_target", "_vehicle"];

[5, [_target, _vehicle], {
    params ["_args"];
    _args params ["_target", "_vehicle"];

    private _items = [];
    private _backpacks = [];

    _items = magazineCargo _target;
    _items append weaponCargo _target;
    _items append itemCargo _target;
    _backpacks = backpackCargo _target;

    clearWeaponCargoGlobal _target;
    clearMagazineCargoGlobal _target;
    clearBackpackCargoGlobal _target;
    clearItemCargoGlobal _target;

    {
        _vehicle addItemCargoGlobal [_x, 1];
    } forEach _items;

    {
        _vehicle addBackpackCargoGlobal [_x, 1];
    } forEach _backpacks;
}, {}, localize LSTRING(transfer)] call ace_common_fnc_progressBar;
