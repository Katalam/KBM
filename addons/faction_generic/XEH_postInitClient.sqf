#include "script_component.hpp"

if ((typeOf player find "kat_10thmods") >= 0) then {
    [objNull, player] call FUNC(applyPlayerLoadout);

    player addEventHandler ["Respawn", {
        params ["_unit"];
        private _loadout = _unit getVariable [QEGVAR(faction_generic,loadout), "USAM_RFM"];
        [objNull, _unit, _loadout] call FUNC(applyPlayerLoadout);
    }];
};
