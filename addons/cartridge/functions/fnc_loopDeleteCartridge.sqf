#include "script_component.hpp"
/*
 * Author: Katalam
 * Deletes cartridge when there are too much of them.
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
 * call kat_10thmods_cartridge_fnc_loopDeleteCatridge;
 *
 * Public: No
 */

private _allPlayer = allPlayers select {isNull (getAssignedCuratorLogic _x)};
if (_allPlayer isEqualTo []) then {_allPlayer = allPlayers};
private _player = selectRandom _allPlayer;

private _types = missionNamespace getVariable [QGVAR(cartridges), []];

private _cartridges = [];
{
    private _list = _player nearObjects [_x, 1000];
    _cartridges append _list;
} forEach _types;

if (GVAR(stop)) exitWith {
    private _cartridges = [];
    {
        private _list = _player nearObjects [_x, 2000];
        _cartridges append _list;
    } forEach _types;
    {deleteVehicle _x} forEach _cartridges;
};

private _tooMuch = count _cartridges - GVAR(amount);
if (_tooMuch > 0) then {
    for "_i" from 0 to _tooMuch do {
        deleteVehicle (_cartridges select _i);
    };
};

[FUNC(loopDeleteCatridge), [], 60] call CBA_fnc_waitAndExecute;
