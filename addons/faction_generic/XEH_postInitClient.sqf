#include "script_component.hpp"

if ((typeOf player find "kat_10thmods") >= 0) then {
    player addEventHandler ["Respawn", {
        params ["_unit"];
        private _loadout = _unit getVariable [QGVAR(loadout), "USAM_RFM"];
        [objNull, _unit, _loadout] call FUNC(applyPlayerLoadout);
    }];
};

if !(hasInterface) exitWith {};

["CAManBase", "Take", FUNC(setInsignia)] call CBA_fnc_addClassEventHandler;
["CAManBase", "InventoryOpened", FUNC(getInsignia)] call CBA_fnc_addClassEventHandler;
