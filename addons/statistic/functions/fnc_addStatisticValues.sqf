#include "script_component.hpp"
/*
 * Author: Sinus, Schwaggot
 * Used to sum up all statistic values on server.
 *
 * Arguments:
 * 0: Applied bandages count <NUMBER>
 * 1: Times pulse was measured <NUMBER>
 * 2: Times CPR was administered <NUMBER>
 * 3: Number of frags thrown <NUMBER>
 * 4: Number of shots fired <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_bandagesApplied, _pulseChecked, _cprPerformed] remoteExec ["KBM_statistic_fnc_addStatisticValues", 2, false]
 *
 */

params [
    ["_bandages", 0, [0]],
    ["_pulse", 0, [0]],
    ["_cpr", 0, [0]]
];

GVAR(bandagesApplied) = GVAR(bandagesApplied) + _bandages;
GVAR(pulseChecked) = GVAR(pulseChecked) + _pulse;
GVAR(cprPerformed) = GVAR(cprPerformed) + _cpr;
