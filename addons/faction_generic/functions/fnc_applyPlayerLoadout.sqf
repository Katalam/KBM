#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds the given player loadout to the given player with global effect.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_faction_generic_fnc_applyPlayerLoadout;
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]]];

private _type = typeOf _unit;
private _config = (configFile >> "CfgVehicles" >> _type);

[_unit] call FUNC(clearPlayerLoadout);

if (isNumber(_config >> "loadoutVarMedic")) then {
    private _loadoutVarMedic = getNumber(_config >> "loadoutVarMedic");
    _unit setVariable ["ACE_medical_medicClass", _loadoutVarMedic, true];
};

if (isNumber(_config >> "loadoutVarG")) then {
    private _loadoutVarG = getNumber(_config >> "loadoutVarG");
    _unit setVariable ["ACE_GForceCoef", _loadoutVarG, true];
};

if (isNumber(_config >> "loadoutVarEng")) then {
    private _loadoutVarEng = getNumber(_config >> "loadoutVarEng");
    _unit setVariable ["ACE_isEngineer", _loadoutVarEng, true];
};

if (isNumber(_config >> "loadoutVarEOD")) then {
    private _loadoutVarEOD = getNumber(_config >> "loadoutVarEOD");
    if (_loadoutVarEOD isEqualTo 1) then {
        _unit setVariable ["ACE_isEOD", true, true];
    } else {
        _unit setVariable ["ACE_isEOD", false, true];
    };
};

if (isText(_config >> "loadoutRank")) then {
    private _rank = getText(_config >> "loadoutRank");
    _unit setUnitRank _rank;
};

if (isArray(_config >> "loadoutUniform")) then {
    private _loadoutUniform = getArray(_config >> "loadoutUniform");
    _unit forceAddUniform selectRandom _loadoutUniform;
};

private _containerUniform = uniformContainer _unit;

if (isArray(_config >> "loadoutVest")) then {
    private _loadoutVest = getArray(_config >> "loadoutVest");
    _unit addVest selectRandom _loadoutVest;
};

private _containerVest = vestContainer _unit;

if (isArray(_config >> "loadoutBackpack")) then {
    private _loadoutBackpack = getArray(_config >> "loadoutBackpack");
    _unit addBackpackGlobal selectRandom _loadoutBackpack;
};

// Sniper
if (isArray(_config >> "loadoutGunBackpack")) then {
    private _loadoutGunBackpack = getArray(_config >> "loadoutGunBackpack");
    _loadoutGunBackpack params ["_gunbag", "_variable"];
    _unit addBackpackGlobal _gunbag;
    private _gunbagContainer = backpackContainer _unit;
    _gunbagContainer setVariable ["ace_gunbag_gunbagWeapon", _variable, true];
};

private _containerBackpack = backpackContainer _unit;

if (isArray(_config >> "loadoutHeadgear")) then {
    private _loadoutHeadgear = getArray(_config >> "loadoutHeadgear");
    _unit addHeadgear selectRandom _loadoutHeadgear;
};

if (isArray(_config >> "loadoutLinked")) then {
    private _loadoutLinked = getArray(_config >> "loadoutLinked");
    {_unit linkItem _x} forEach _loadoutLinked;
};

if (isArray(_config >> "loadoutWeapon")) then {
    private _loadoutWeapon = getArray(_config >> "loadoutWeapon");
    {
        _x params ["_weapon", "_weaponItems"];
        _unit addWeapon _weapon;
        {_unit addWeaponItem [_weapon, _x]} forEach _weaponItems;
    } forEach _loadoutWeapon;
};

if (isArray(_config >> "loadoutMedical")) then {
    private _loadoutMedical = getArray(_config >> "loadoutMedical");
    {
        _x params ["_item", "_amount"];
        _containerUniform addItemCargoGlobal [_item, _amount];
    } forEach _loadoutMedical;
};

if (isArray(_config >> "loadoutGrenade")) then {
    private _loadoutGrenade = getArray(_config >> "loadoutGrenade");
    {
        _x params ["_item", "_amount"];
        _containerVest addItemCargoGlobal [_item, _amount];
    } forEach _loadoutGrenade;
};

if (isArray(_config >> "loadoutUniformInv")) then {
    private _loadoutUniformInv = getArray(_config >> "loadoutUniformInv");
    {
        _x params ["_item", "_amount"];
        _containerUniform addItemCargoGlobal [_item, _amount];
    } forEach _loadoutUniformInv;
};

if (isArray(_config >> "loadoutUniformInvNew")) then {
    private _loadoutUniformInvNew = getArray(_config >> "loadoutUniformInvNew");
    {
        _x params ["_item", "_amount"];
        _containerUniform addItemCargoGlobal [_item, _amount];
    } forEach _loadoutUniformInvNew;
};

if (isArray(_config >> "loadoutVestInv")) then {
    private _loadoutVestInv = getArray(_config >> "loadoutVestInv");
    {
        _x params ["_item", "_amount"];
        _containerVest addItemCargoGlobal [_item, _amount];
    } forEach _loadoutVestInv;
};

if (isArray(_config >> "loadoutVestInvNew")) then {
    private _loadoutVestInvNew = getArray(_config >> "loadoutVestInvNew");
    {
        _x params ["_item", "_amount"];
        _containerVest addItemCargoGlobal [_item, _amount];
    } forEach _loadoutVestInvNew;
};

if (isArray(_config >> "loadoutBackpackInv")) then {
    private _loadoutBackpackInv = getArray(_config >> "loadoutBackpackInv");
    {
        _x params ["_item", "_amount"];
        _containerBackpack addItemCargoGlobal [_item, _amount];
    } forEach _loadoutBackpackInv;
};

if (isArray(_config >> "loadoutBackpackInvNew")) then {
    private _loadoutBackpackInvNew = getArray(_config >> "loadoutBackpackInvNew");
    {
        _x params ["_item", "_amount"];
        _containerBackpack addItemCargoGlobal [_item, _amount];
    } forEach _loadoutBackpackInvNew;
};

if (isText(_config >> "loadoutInsignia")) then {
    [_unit, (getText(_config >> "loadoutInsignia"))] call BIS_fnc_setUnitInsignia;
};

true;
