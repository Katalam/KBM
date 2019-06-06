#include "script_component.hpp"

if (hasInterface && profileName == "RadioBot") then {
    player setVariable [QEGVAR(fireteams,processed), true];
    player setVariable [QEGVAR(radios,notReceived), false];
    player enableSimulationGlobal false;
    player hideObjectGlobal true;
    [{
        [] call acre_api_fnc_isInitialized
    }, {
        player setUnitLoadout [[],[],[],[],[],["B_AssaultPack_blk",[["ACRE_PRC117F",1]]],"","",[],["","","","","",""]];
        0 spawn {
            sleep 10;
            private _radio = ["ACRE_PRC117F"] call acre_api_fnc_getRadioByType;
            [_radio, 13] call acre_api_fnc_setRadioChannel;
            [0] call acre_sys_core_fnc_handleMultiPttKeyPress;
        }
    }, _this] call CBA_fnc_waitUntilAndExecute;
};
