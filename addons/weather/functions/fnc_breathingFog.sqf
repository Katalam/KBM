#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds brerathing fog
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Intensity <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thmods_weather_fnc_breathingFog;
 *
 */

params ["_unit", "_int"];

if (GVAR(breathingFogForceDisable)) exitWith {};

[FUNC(breathingFog), [_unit, _int], (3 + random 2)] call CBA_fnc_waitAndExecute;

private _playerAltitude = (getPosASL _unit) select 2;
private _temperature = _playerAltitude call ace_weather_fnc_calculateTemperatureAtHeight;

if (GVAR(breathing) == 1 && {!(_temperature < 4)}) exitWith {};

private _source = "logic" createVehicleLocal (getpos _unit);
private _fog = "#particlesource" createVehicleLocal getpos _source;
_fog setParticleParams [
    ["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 13,0],
    "",
    "Billboard",
    0.5,
    0.5,
    [0,0,0],
    [0, 0.2, -0.2],
    1, 1.275,	1, 0.2,
    [0, 0.2,0],
    [[1,1,1, _int], [1,1,1, 0.01], [1,1,1, 0]],
    [1000],
    1,
    0.04,
    "",
    "",
    _source
];
_fog setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
_fog setDropInterval 0.001;

_source attachto [_unit, [0,0.15,0], "neck"]; // get fog to come out of player mouth
[{deletevehicle _this}, _source, 0.7] call CBA_fnc_waitAndExecute;
