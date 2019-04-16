#include "script_component.hpp"
/*
 * Author: Katalam
 * Will be execute on event onEntityKilled. Removes loadout from dead person.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_logistic_fnc_addLoadoutMenu;
 *
 * Public: Yes
 */

params ["_unit"];

if (isNull _unit) exitWith {};
if !(local _unit) exitWith {
    _this remoteExecCall [QFUNC(onEntityKilled), _unit];
};

{
    _unit removeMagazineGlobal _x;
    true;
} count magazines _unit; // Magazines, Frags, Chemlights, ...

{
    _unit removeItem _x;
    true;
} count items _unit; // Medical Items, ...

{
    _unit unlinkItem _x;
    true;
} count assignedItems _unit; // Map, Clock, Googles, NVG, Radio, GPS, Compass

_unit removeWeaponGlobal (binocular _unit);
[_unit] remoteExec ["removeAllPrimaryWeaponItems", _unit, false]; // Scope, ...

/** MEDICAL */
private _container = (uniformContainer _unit);
_container addItemCargoGlobal ["ACE_packingBandage", 5];
_container addItemCargoGlobal ["ACE_elasticBandage", 3];
_container addItemCargoGlobal ["adv_aceSplint_splint", 2];
_container addItemCargoGlobal ["ACE_morphine", 1];

private _weaponHolders = nearestObjects [_unit, ["WeaponHolderSimulated"], 5];
{
    _x setDamage 1;
} forEach _weaponHolders;
