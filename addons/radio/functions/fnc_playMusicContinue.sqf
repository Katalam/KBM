#include "script_component.hpp"
/*
 * Author: Katalam
 * Plays given music for passengers of given vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Music <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_radio_fnc_playMusicContinue;
 *
 * Public: No
 */

params ["_player"];

private _data = (vehicle _player) call FUNC(getMusic);
if (_data isEqualTo []) exitWith {};

[_data] remoteExec ["playMusic", _player];

true;
