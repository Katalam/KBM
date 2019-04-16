#include "script_component.hpp"
/*
 * Author: Katalam
 * Check if client able to interact with gunbag to switch weapons.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Can interact <BOOLEAN>
 *
 * Example:
 * [player] call kat_10thMods_gunbag_fnc_canSwitch;
 *
 * Public: Yes
 */

params ["_unit"];

private _gunbag = backpackContainer _unit;
private _weapon = primaryWeapon _unit;

!((_gunbag getVariable ["ace_gunbag_gunbagWeapon", []]) isEqualTo []) && {!(_weapon call ace_gunbag_fnc_isMachineGun)} && {!(primaryWeapon _unit isEqualTo "")};
