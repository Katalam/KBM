#include "script_component.hpp"
/*
 * Author: Katalam
 * Add or remove nightvision
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Goggle <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, true] call kat_10thMods_faction_generic_fnc_nightvision;
 *
 * Public: No
 */

params [
    ["_player", objNull, [objNull]],
    ["_add", false, [false]]
];

private _loadout = _player getVariable [QGVAR(loadout), "USAM_RFM"];
private _type = str formatText ["kat_10thMods_faction_generic_%1", _loadout];
private _loadoutNVG = (getArray (configFile >> "CfgVehicles" >> _type >> "loadoutNVG"));
_loadoutNVG params ["_goggle", "_items", "_magazines"];
private _uniformContainer = uniformContainer _player;
private _vestContainer = vestContainer _player;

if (_add) then {
    _player linkItem _goggle;
    {_uniformContainer addItemCargoGlobal [_x select 0, _x select 1];} forEach _items;
    {_vestContainer addMagazineCargoGlobal [_x select 0, _x select 1];} forEach _magazines;
} else {
    _player unlinkItem _goggle;
    {_player removeItems (_x select 0);} forEach _items;
    {_player removeMagazines (_x select 0);} forEach _magazines;
};
