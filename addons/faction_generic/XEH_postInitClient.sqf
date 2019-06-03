#include "script_component.hpp"

if ((typeOf player find "kat_10thmods") >= 0) then {
    player addEventHandler ["Respawn", {
        params ["_unit"];
        private _loadout = _unit getVariable [QGVAR(loadout), "USAM_RFM"];
        private "_typeFormat";
        switch (true) do {
            case ((_loadout find "USAM") >= 0): {
                _typeFormat = QGVAR(%1);
            };
            case ((_loadout find "USMC") >= 0): {
                _typeFormat = QEGVAR(faction,%1);
            };
        };
        [objNull, _unit, [_loadout, _typeFormat]] call FUNC(applyPlayerLoadout);
    }];
};
