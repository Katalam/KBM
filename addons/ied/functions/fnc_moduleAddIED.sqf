#include "script_component.hpp"
/*
 * Author: Katalam
 * Curator module function for bomb init.
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thmods_ied_fnc_moduleADDIED;
 *
 * Public: No
 */

params ["_logic"];

private _target = attachedTo _logic;

switch (true) do {
    case (isNull _target): {
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _target): {
        [objNull, "target is destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        _target call FUNC(initBomb);
    };
};

deleteVehicle _logic;
