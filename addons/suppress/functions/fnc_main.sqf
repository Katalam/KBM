#include "script_component.hpp"
/*
 * Author: Katalam
 * Main function.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thmods_suppress_fnc_main;
 *
 * Public: No
 */

if (GVAR(Threshold) > 0) then {
    private _subtract = call {
        if (((time - GVAR(lastShotAt)) <= 1.75)) exitWith {0};
        if (GVAR(Suppressed)) exitWith {1.2};
        2
    };
    GVAR(Threshold) = (GVAR(Threshold) - _subtract) max 0;
};
