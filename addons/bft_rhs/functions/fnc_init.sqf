#include "script_component.hpp"
/*
 * Author: Katalam, veteran29
 * Fix the bft of the rhs stryker
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [objNull] call kat_10thmods_bft_rhs_fnc_init
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]]
];

private _sections = getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "hiddenSelections");
_vehicle setObjectTexture [_sections find "BFT_screen", getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];

[{
    params ["_args", "_handle"];
    _args params ["_vehicle"];

    if (!alive _vehicle) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    private _scale = _vehicle animationSourcePhase "BFT_Map_Scale";
    _vehicle setUserMFDValue [0, worldSize * _scale];

    if (local _vehicle) then {

        private _vehiclePos = getPos _vehicle;
        _vehiclePos resize 2;

        _vehiclePos = _vehiclePos apply {(round _x / worldSize) / _scale};

        _vehicle animateSource ["BFT_Map_Move_X", _vehiclePos select 0, true];
        _vehicle animateSource ["BFT_Map_Move_Y", _vehiclePos select 1, true];
    };
}, 0.5, _vehicle] call CBA_fnc_addPerFrameHandler;
