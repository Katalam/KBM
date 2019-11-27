#include "script_component.hpp"

GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;

["ace_treatmentSucceded", {
    params ["", "", "", "_className"];

    if (toLower _className in ["fielddressing", "packingbandage", "elasticbandage", "quikclot"]) exitWith {
        GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
    };

    if (toLower _className isEqualTo "checkpulse") exitWith {
        GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
    };

    if (toUpper _className isEqualTo "CPR") exitWith {
        GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
    };
}] call CBA_fnc_addEventHandler;
