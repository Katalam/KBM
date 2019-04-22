#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds all eod items.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thmods_ied_fnc_addEodItems;
 *
 * Public: Yes
 */

params [["_player", objNull, [objNull]]];

{
    _player addItem _x
} forEach [
    QGVAR(Snips),
    QGVAR(ESD_DSnips),
    QGVAR(NNPliers),
    QGVAR(ESD_NNPliers),
    QGVAR(ESD_Tweezers_R),
    QGVAR(ESD_Tweezers_F),
    QGVAR(ESD_Tweezers_C),
    QGVAR(Spudger_Set),
    QGVAR(Mini_inspection_Mirror),
    QGVAR(Screwdriver_Phillips),
    QGVAR(Screwdriver_Flathead),
    QGVAR(Ceramic_Knife),
    QGVAR(Fuse_CrimperCutter),
    QGVAR(Hex_Keys),
    QGVAR(Alligator_Clips),
    QGVAR(Jumper_Wires),
    QGVAR(Multi_Tool),
    QGVAR(PryBar),
    QGVAR(Reamer),
    QGVAR(MultiMeter),
    QGVAR(Shock_Initiator)
];
