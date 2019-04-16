#include "script_component.hpp"

// event handlers for the statistics at mission end
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(fragsOut) = 0;
GVAR(shotsFired) = 0;

["ace_treatmentSucceded", {
    params ["", "", "", "_className"];

    if (_className in ["FieldDressing", "PackingBandage", "ElasticBandage", "QuikClot"]) exitWith {
        GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
    };

    if (_className isEqualTo "CheckPulse") exitWith {
        GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
    };

    if (_className isEqualTo "CPR") exitWith {
        GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
    };
}] call CBA_fnc_addEventHandler;

["ace_throwableThrown", {
    params ["_unit"];

    if (isPlayer _unit) then {
        GVAR(fragsOut) = GVAR(fragsOut) + 1;
    };
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Fired", {
    params ["_unit", "_weapon"];

    if (_weapon == "Throw") then {
        GVAR(fragsOut) = GVAR(fragsOut) + 1;
    };

    if (_weapon isEqualTo primaryWeapon _unit) then {
        GVAR(shotsFired) = GVAR(shotsFired) + 1;
    };
}];
