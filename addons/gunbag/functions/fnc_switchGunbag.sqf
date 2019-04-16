#include "script_component.hpp"
/*
 * Author: Katalam
 * Check if client able to interact with gunbag to switch weapons.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_gunbag_fnc_switchGunbag;
 *
 * Public: Yes
 */

params ["_unit"];

_unit call ace_common_fnc_goKneeling;
private _gunbag = backpackContainer _unit;

// play sound
if (["ace_backpacks"] call ace_common_fnc_isModLoaded) then {
    [_unit, _gunbag] call ace_backpacks_fnc_backpackOpened;
};

[5, _unit, {
    params ["_unit"];
    private _gunbag = backpackContainer _unit;
    private _state = _gunbag getVariable ["ace_gunbag_gunbagWeapon", []];
    [_unit, _unit] call ace_gunbag_fnc_toGunbagCallback;

    _state params ["_weapon", "_items", "_magazines"];

    _unit addWeapon _weapon;

    // Game will auto add magazines from player's inventory, put these back in player inventory as they will be overwritten
    ([_unit, _weapon] call ace_common_fnc_getWeaponState) params ["", "", "_addedMags", "_addedAmmo"];
    {
        if (((_x select 0) != "") && {(_addedMags select _forEachIndex) != ""}) then {
            _unit addMagazine [_addedMags select _forEachIndex, _addedAmmo select _forEachIndex];
        };
    } forEach _magazines;

    removeAllPrimaryWeaponItems _unit;

    {
        _unit addWeaponItem [_weapon, _x];
    } forEach (_items + _magazines);
    _unit selectWeapon _weapon;
}, {}, localize "STR_ACE_Gunbag_OffGunbag", {
    _this call FUNC(canSwitch)
}] call ace_common_fnc_progressBar;
