#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds the given vehicle loadout to the given loadout with global effect.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_faction_generic_fnc_applyVehicleLoadout;
 *
 * Public: Yes
 */

params [["_box", objNull, [objNull]]];

private _type = typeOf _box;
private _config = (configFile >> "CfgVehicles" >> _type);

[_box] call FUNC(clearVehicleLoadout);

if (isArray(_config >> "loadoutCargo")) then {
	private _loadoutCargo = getArray(_config >> "loadoutCargo");
	{
		_x params ["_item", "_amount"];
		[_item, _box, _amount] call ace_cargo_fnc_addCargoItem;
	} forEach _loadoutCargo;
};

if (isArray(_config >> "loadoutItems")) then {
	private _loadoutItems = getArray(_config >> "loadoutItems");
	{
		_x params ["_item", "_amount"];
		_box addItemCargoGlobal [_item, _amount];
	} forEach _loadoutItems;
};

if (isArray(_config >> "loadoutWeapon")) then {
	private _loadoutWeapon = getArray(_config >> "loadoutWeapon");
	{
		_x params ["_item", "_amount"];
		_box addWeaponCargoGlobal [_item, _amount];
	} forEach _loadoutWeapon;
};

if (isArray(_config >> "loadoutMagazine")) then {
	private _loadoutMagazine = getArray(_config >> "loadoutMagazine");
	{
		_x params ["_item", "_amount"];
		_box addMagazineCargoGlobal [_item, _amount];
	} forEach _loadoutMagazine;
};

if (isArray(_config >> "loadoutBackpack")) then {
	private _loadoutBackpack = getArray(_config >> "loadoutBackpack");
	{
		_x params ["_item", "_amount"];
		_box addBackpackCargoGlobal [_item, _amount];
	} forEach _loadoutBackpack;
};

if (isArray(_config >> "loadoutBackpackInv")) then {
	private _loadoutBackpackInv = getArray(_config >> "loadoutBackpackInv");
	{
		private _backpack = (everyBackpack _box) select _forEachIndex;
		{
			_x params ["_item", "_amount"];
			_backpack addItemCargoGlobal [_item, _amount];
		} forEach (_loadoutBackpackInv select _forEachIndex);
	} forEach _loadoutBackpackInv;
};

true;
