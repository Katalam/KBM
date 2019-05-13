#include "script_component.hpp"
/*
 * Author: Katalam
 * Called funtion by fired eventhandler.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: N/A
 * 3: N/A
 * 4: Ammunition <STRING>
 * 5: N/A
 * 6: Projectile <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, currentWeapon player, 0, 0, "ammo", 0, object] call kat_10thmods_suppress_fnc_fired;
 *
 * Public: No
 */

if !(GVAR(enable)) exitWith {};

params [
    "_unit",        // Unit that shot the projectile
    "_weapon",        // Weapon fired
    "",
    "",
    "_ammo",        // Ammo shot
    "",
    "_projectile"    // The projectile (duh!)
];

if ((toLower _weapon) isEqualTo "put") exitWith {};

if (isNull _projectile) then { // Fixes a locality issue with slow projectiles. Thanks to killzone kid!
     _projectile = nearestObject [_unit, _ammo];
};

if ((player distance _unit) >= 2500) exitWith {};

if ((side effectiveCommander (vehicle _unit)) != (side player)) then {
    if ((_weapon in ["throw","put"])) exitWith {};

    private _hit = [(configFile >> "CfgAmmo" >> _ammo >> "hit"), format [QGVAR(cached_hit_%1), _ammo]] call FUNC(readCacheValues);
    if (_hit == 0) exitWith {};

    private _dDist = (7 + (_hit / 2)) min 28;                // Calculate the detectionDistance (dDist)

    GVAR(mainArray) pushBack [_projectile, _dDist, _hit];
};
