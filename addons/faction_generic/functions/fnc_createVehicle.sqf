#include "script_component.hpp"
/*
 * Author: Katalam
 * Add loadout menu for each synchronized object
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call kat_10thMods_faction_generic_fnc_createVehicle;
 *
 * Public: No
 */

params [
    "",
    "",
    ["_className", "", [""]]
];

private _missionNamespace = missionNamespace getVariable [QGVAR(vehicleSpawnPos), [[0,0,0], 0]];
_missionNamespace params ["_pos", "_dir"];

// remove old vehciles
{deleteVehicle _x} count (nearestObjects [_pos, ["Helicopter", "Plane", "Tank", "Car", "Ship", "ReammoBox_F"], 15, true]);

if (_className isEqualTo "REMOVE") exitWith {};

[{
    params ["_className", "_pos", "_dir"];
    private _vehicle = createVehicle [_className, _pos, [], 0, "CAN_COLLIDE"];
    _vehicle allowDamage false;
    _vehicle setDir _dir;
    [{
        _this allowDamage true;
    }, _vehicle, 1] call CBA_fnc_waitAndExecute;
}, [_className, _pos, _dir], 1] call CBA_fnc_waitAndExecute;
