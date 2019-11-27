#include "script_component.hpp"

player setVariable ["BIS_noCoreConversations", true];

player addEventHandler ["Respawn", {
    params ["_unit"];
    if (_unit getVariable [QGVAR(isSpectator), false]) then {
        ["Terminate"] call BIS_fnc_EGSpectator;

        [_unit, false] remoteExec ["hideObjectGlobal", 2, false];
        _unit setCaptive false;

        _unit setVariable [QGVAR(isSpectator), false, false];
    };
}];
