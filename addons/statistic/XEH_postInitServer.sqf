#include "script_component.hpp"

GVAR(fragsOut) = 0;
GVAR(shotsFired) = 0;
GVAR(aiKilled) = 0;
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(launcherFired) = 0;
GVAR(handGunFired) = 0;
GVAR(vehicleFired) = 0;

addMissionEventHandler ["EntityKilled", {
    params ["_unit"];

    if (_unit isKindOf "Man") then {
        if (!(isPlayer _unit)) then {
            GVAR(aiKilled) = GVAR(aiKilled) + 1;
        };
    };
}];

["CAManBase", "Fired", {
    params ["_unit", "_weapon", "_muzzle"];

    if (isPlayer _unit) then {
        if (_muzzle isEqualTo "HandGrenadeMuzzle" || _muzzle isEqualTo "MiniGrenadeMuzzle") then {
            GVAR(fragsOut) = GVAR(fragsOut) + 1;
        };

        if (_weapon isEqualTo primaryWeapon _unit) then {
            GVAR(shotsFired) = GVAR(shotsFired) + 1;
        };
        if (_weapon isEqualTo secondaryWeapon _unit) then {
            GVAR(launcherFired) = GVAR(launcherFired) + 1;
        };
        if (_weapon isEqualTo handgunWeapon _unit) then {
            GVAR(handGunFired) = GVAR(handGunFired) + 1;
        };
    };
}] call CBA_fnc_addClassEventHandler;

["Car", "Fired", {
    params ["_unit", "", "", "", "", "", "", "_vehicle"];

    if (isPlayer _unit && !(_vehicle isEqualTo objNull)) then {
        GVAR(vehicleFired) = GVAR(vehicleFired) + 1;
    };
}] call CBA_fnc_addClassEventHandler;
