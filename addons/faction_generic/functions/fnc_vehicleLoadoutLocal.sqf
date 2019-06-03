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
 * [cursorTarget, "kat_10thMods_faction_generic_USAM_Veh_CAR"] call kat_10thMods_faction_generic_fnc_vehicleLoadoutLocal;
 *
 * Public: Yes
 */

params [
    ["_box", objNull, [objNull]],
    ["_loadout", "", [""]]
];

[_box, 0, _loadout] remoteExec [QFUNC(applyVehicleLoadout), 2];

true;
