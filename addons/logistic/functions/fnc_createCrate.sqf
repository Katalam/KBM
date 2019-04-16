#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for spawning logistic crates with loadout specific content.
 * Local effect. Execute on server and all players.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_logistic_fnc_createCrate;
 *
 * Public: Yes
 */

params [
    "",
	["_player", objNull, [objNull]],
	["_className", "", [""]]
];

private _spawnPos = [getPos _player, 0, 3, 2.8] call BIS_fnc_findSafePos;

switch (_className) do {
	case "WHEEL": {
		private _box = "ACE_Wheel" createVehicle [0, 0, 0];
		_box setPos _spawnPos;
	};
	case "TRACK": {
		private _box = "ACE_Track" createVehicle [0, 0, 0];
		_box setPos _spawnPos;
	};
	case QGVAR(USAM_Crate_EMP): {
		private _box = _className createVehicle [0, 0, 0];
		_box allowDamage false;
		_box setPos _spawnPos;

        [_box] call FUNC(deleteCrate);
		[_box] call EFUNC(faction_generic,clearVehicleLoadout);
	};
	default {
		private _box = _className createVehicle [0, 0, 0];
		_box allowDamage false;
		_box setPos _spawnPos;

        [_box] call FUNC(deleteCrate);
		[_box] call EFUNC(faction_generic,applyVehicleLoadout);
	};
};
