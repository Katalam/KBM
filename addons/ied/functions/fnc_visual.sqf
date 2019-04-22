#include "script_component.hpp"
/*
 * Author: Katalam
 * Show bomb function.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Target <OBJECT>
 *
 * Return Value:
 * 0: Bomb <DIALOG>
 *
 * Example:
 * [cursorTarget, player] call kat_10thmods_ied_fnc_visual;
 *
 * Public: No
 */

params [
    ["_object", objNull, [objNull]],
    ["_player", objNull, [objNull]]
];

_player setVariable [QGVAR(bomb_object), _object, true];
private _bombVarient = _object getVariable [QGVAR(bombVariant), 1];
private "_bomb";

if (_object getVariable [QGVAR(bombArmed), false]) then {
    switch (_bombVarient) do {
        case 1: {
            _bomb = createDialog QGVAR(L1_T1_a); // L10|5L2ll|2RT|GL (2 RED from TOP)
        };
        case 2: {
            _bomb = createDialog QGVAR(L1_T1_b); // L10|5L2ll|2RT|G7 (3 RED from TOP)
        };
        case 3: {
            _bomb = createDialog QGVAR(L1_T1_c); // L10|5l2Ll|1GB|GL (1 GREEN from BOTTOM)
        };
        case 4: {
            _bomb = createDialog QGVAR(L1_T1_d); // L11|5l2Ll|1GB|GL (1 GREEN from TOP)
        };
        case 5: {
            _bomb = createDialog QGVAR(L1_T1_d); // L11|ll2Ll|1RB|Ll (3 RED from TOP) // is broken
        };
        case 6: {
            _bomb = createDialog QGVAR(L1_T1_f); //L11|ll2Ll|3gB|Ll (5 GREY from TOP)
        };
        case 7: {
            _bomb = createDialog QGVAR(L1_T1_g); // L1B|ll2Ll|2GB|LL (BATTERY)
        };
        case 8: {
            _bomb = createDialog QGVAR(L1_T1_h); // L1L|ll2LL|3WB|l1 (3 WHITE from LEFT)
        };
        case 9: {
            _bomb = createDialog QGVAR(L1_T1_i); // L10|ll2LL|3RT|l1 (4 RED from TOP)
        };
        case 10: {
            _bomb = createDialog QGVAR(L1_T1_j); // L10|l217|2BT|lL (3 BLUE from TOP)
        };
    };
} else {
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
};

_bomb;
