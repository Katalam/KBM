#include "script_component.hpp"

player setVariable ["BIS_noCoreConversations", true];

//failsafe for missing curator interface:
if (typeOf player in [QEGVAR(faction_generic,USAM_ADM)]) then {
    [] spawn {
        waitUntil {time > 2};

        if (isNull (getAssignedCuratorLogic player)) then {
            player remoteExec [QFUNC(createZeus), 2];
        };
    };
};

player addEventHandler ["Respawn", {
    params ["_unit"];
    if (_unit getVariable [QGVAR(isSpectator), false]) then {
        ["Terminate"] call BIS_fnc_EGSpectator;

        [_unit, false] remoteExec ["hideObjectGlobal", 2, false];
        _unit setCaptive false;

        _unit setVariable [QGVAR(isSpectator), false, false];
    };
}];

call FUNC(addBriefingEntries);
