#include "script_component.hpp"
/*
 * Author: Katalam
 * Zeus module callback for ending a mission with a sucess. Displays statistics
 * and stuff. Also notifies server to write into database.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call KBM_statistic_fnc_moduleMissionEndSuccess
 *
 */

if !(isServer) then {
    [GVAR(end_bandagesApplied), GVAR(end_pulseChecked), GVAR(end_cprPerformed)] remoteExec [QFUNC(addStatisticValues), 2, false];
} else {
    publicVariable QGVAR(end_shotsFired);
    publicVariable QGVAR(end_aiKilled);
    publicVariable QGVAR(end_fragsOut);
    publicVariable QGVAR(end_launcherFired);
    publicVariable QGVAR(end_handGunFired);
    publicVariable QGVAR(end_vehicleFired);
    [{
        publicVariable QGVAR(end_pulseChecked);
        publicVariable QGVAR(end_bandagesApplied);
        publicVariable QGVAR(end_cprPerformed);
    }, [], 8] call CBA_fnc_waitAndExecute;

    ["CAManBase", "Fired", {
        params ["_unit", "", "", "", "", "", "_projectile"];
        deleteVehicle _projectile;
        private _oldPos = getPos _unit;
        _unit setPos [0,0,0];
        [{
            params ["_unit", "_oldPos"];
            ["ACE_G_M84" createVehicle (GetPos _unit)] call ace_grenades_fnc_flashbangThrownFuze;
            [{
                params ["_unit", "_oldPos"];
                _unit setPos _oldPos;
            }, [_unit, _oldPos], 1] call CBA_fnc_waitAndExecute;
        }, [_unit, _oldPos], 1] call CBA_fnc_waitAndExecute;
        _unit action ["SWITCHWEAPON", player, player, -1];
    }] call CBA_fnc_addClassEventHandler;
};

[] spawn {
    playMusic "LeadTrack01_F_Tank";
    sleep 3;
    ["<t color='#00ff00'>Mission erfolgreich</t>", 1, 0.8] spawn bis_fnc_dynamicText;
    sleep 5;
    [
        [(format ["%1 Spieler", playersNumber playerSide]), 1, 2],
        [(format ["%1min im Kampf", floor (time / 60)]), 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 9;
    [
        [format ["%1 Kugeln abgegeben", GVAR(end_shotsFired)], 1, 2],
        [format ["%1 Granaten geworfen", GVAR(end_fragsOut)], 1, 2],
        [format ["%1 Feinde bekämpft", GVAR(end_aiKilled)], 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    [
        [format ["%1 Werfer benutzt", GVAR(end_launcherFired)], 1, 2],
        [format ["%1 Pistolenkugeln verschossen", GVAR(end_handGunFired)], 1, 2],
        [format ["%1 Fahrzeugkugeln abgegeben", GVAR(end_vehicleFired)], 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    [
        [format ["%1 mal Puls gemessen", GVAR(end_pulseChecked)], 1, 2],
        [format ["%1 Bandagen angelegt", GVAR(end_bandagesApplied)], 1, 2],
        [format ["%1 mal CPR durchgeführt", GVAR(end_cprPerformed)], 1, 3]
        ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    5 fadeMusic 0;
    ["end1", true, 5] spawn bis_fnc_endMission;
};
