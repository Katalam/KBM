#include "script_component.hpp"
/*
 * Author: Katalam
 * Show disarmed bomb function.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thmods_ied_fnc_disarmed;
 *
 * Public: No
 */

params [["_player", objNull, [objNull]]];

private "_bomb";
private _object = _player getVariable [QGVAR(bomb_object), objNull];
_player setVariable [QGVAR(bomb_object), objNull, true];
if (_object isEqualTo objNull) exitWith {false};
private _bombVarient = _object getVariable [QGVAR(bombVariant), 1];

closeDialog 0;
switch (_bombVarient) do {
    case 1: {_bomb = createDialog QGVAR(L1_T1_a_Disarmed);};
    case 2: {_bomb = createDialog QGVAR(L1_T1_b_Disarmed);};
    case 3: {_bomb = createDialog QGVAR(L1_T1_c_Disarmed);};
    case 4: {_bomb = createDialog QGVAR(L1_T1_d_Disarmed);};
    case 5: {_bomb = createDialog QGVAR(L1_T1_d_Disarmed);};
    case 6: {_bomb = createDialog QGVAR(L1_T1_f_Disarmed);};
    case 7: {_bomb = createDialog QGVAR(L1_T1_g_Disarmed);};
    case 8: {_bomb = createDialog QGVAR(L1_T1_h_Disarmed);};
    case 9: {_bomb = createDialog QGVAR(L1_T1_i_Disarmed);};
    case 10: {_bomb = createDialog QGVAR(L1_T1_j_Disarmed);};
};
playSound QGVAR(wirecut);
[{playSound QGVAR(powerdown);}, [], 1] call CBA_fnc_waitAndExecute;
_object setVariable [QGVAR(bombArmed), false, true];
_bomb;
