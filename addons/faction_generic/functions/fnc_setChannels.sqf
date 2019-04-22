#include "script_component.hpp"
/*
 * Author: Katalam
 * Set the channel for given player
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thMods_faction_generic_fnc_setChannels;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

[{call TFAR_fnc_haveSWRadio}, {
	params ["_unit"];

	switch (groupId (group _unit)) do {
        case "Warrior": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "110"] call TFAR_fnc_setSwFrequency;
        };
		case "Warrior 1": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "110"] call TFAR_fnc_setSwFrequency;
		};
		case "Warrior 1-1": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "111"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "111.1"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 2] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "111.2"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 3] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "115"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
		};
		case "Warrior 1-2": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "112"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "112.1"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 2] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "112.2"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 3] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "115"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
		};
		case "Warrior 1-3": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "113"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "113.1"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 2] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "113.2"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 3] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "115"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
		};
		case "Warrior 1-4": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "114"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "114.1"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 2] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "114.2"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 3] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "115"] call TFAR_fnc_setSwFrequency;
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
		};
        case "Super 1-1": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "161"] call TFAR_fnc_setSwFrequency;
        };
        case "Super 1-2": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "162"] call TFAR_fnc_setSwFrequency;
        };
        case "Super 1-3": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "163"] call TFAR_fnc_setSwFrequency;
        };
        case "Super 1-4": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "164"] call TFAR_fnc_setSwFrequency;
        };
        case "Falcon 1-1": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "171"] call TFAR_fnc_setSwFrequency;
        };
        case "Falcon 1-2": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "172"] call TFAR_fnc_setSwFrequency;
        };
        case "Falcon 1-3": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "173"] call TFAR_fnc_setSwFrequency;
        };
        case "Falcon 1-4": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "174"] call TFAR_fnc_setSwFrequency;
        };
        case "Outlaw 1-1": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "181"] call TFAR_fnc_setSwFrequency;
        };
        case "Outlaw 1-2": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "182"] call TFAR_fnc_setSwFrequency;
        };
        case "Outlaw 1-3": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "183"] call TFAR_fnc_setSwFrequency;
        };
        case "Outlaw 1-4": {
            [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "184"] call TFAR_fnc_setSwFrequency;
        };
		case "Zeus": {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
			[(call TFAR_fnc_activeSwRadio), "59"] call TFAR_fnc_setSwFrequency;
		};
		default {
			[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel;
            [(call TFAR_fnc_activeSwRadio), "110"] call TFAR_fnc_setSwFrequency;
		};
	};
}, [_unit], 30] call CBA_fnc_waitUntilAndExecute;


[{call TFAR_fnc_haveLRRadio}, {
	params ["_unit"];

	[(call TFAR_fnc_activeLRRadio), 1] call TFAR_fnc_setLRChannel;
    [(call TFAR_fnc_activeLrRadio), "31"] call TFAR_fnc_setLrFrequency;

	if (typeOf _unit in [QGVAR(USAM_LOG_LEAD)]) then {
		[(call TFAR_fnc_activeLRRadio), 7] call TFAR_fnc_setLRChannel;
        [(call TFAR_fnc_activeLrRadio), "37"] call TFAR_fnc_setLrFrequency;
	};

	if (typeOf _unit in [QGVAR(USAM_JTAC), QGVAR(USAM_FO)]) then {
		[(call TFAR_fnc_activeLRRadio), 6] call TFAR_fnc_setLRChannel;
        [(call TFAR_fnc_activeLrRadio), "36"] call TFAR_fnc_setLrFrequency;
	};
}, [_unit], 30] call CBA_fnc_waitUntilAndExecute;
