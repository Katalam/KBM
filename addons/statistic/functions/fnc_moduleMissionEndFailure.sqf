#include "script_component.hpp"
/*
 * Author: Sinus
 * Ends the mission with music, some text and a fade out. Execute global. Local effect.
 * Collects some values from clients and sends the sum back to the clients.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call KBM_statistic_fnc_moduleMissionEndFailure
 *
 */

if !(isServer) then {
    [GVAR(bandagesApplied), GVAR(pulseChecked), GVAR(cprPerformed)] remoteExec [QFUNC(addStatisticValues), 2, false];
} else {
    publicVariable QGVAR(shotsFired);
    publicVariable QGVAR(aiKilled);
    publicVariable QGVAR(fragsOut);
    publicVariable QGVAR(launcherFired);
    publicVariable QGVAR(handGunFired);
    publicVariable QGVAR(vehicleFired);
    [{
        publicVariable QGVAR(pulseChecked);
        publicVariable QGVAR(bandagesApplied);
        publicVariable QGVAR(cprPerformed);
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
    playMusic "BackgroundTrack03_F_EPC";
    sleep 3;
    ["<t color='#ff0000'>Mission fehlgeschlagen</t>", 1, 0.8] spawn bis_fnc_dynamicText;
    sleep 5;
    [
        [(format ["%1 Spieler", playersNumber playerSide]), 1, 2],
        [(format ["%1min im Kampf", floor (time / 60)]), 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 9;
    [
        [format ["%1 Kugeln abgegeben", GVAR(shotsFired)], 1, 2],
        [format ["%1 Granaten geworfen", GVAR(fragsOut)], 1, 2],
        [format ["%1 Feinde bekämpft", GVAR(aiKilled)], 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    [
        [format ["%1 Werfer benutzt", GVAR(launcherFired)], 1, 2],
        [format ["%1 Pistolenkugeln verschossen", GVAR(handGunFired)], 1, 2],
        [format ["%1 Fahrzeugkugeln abgegeben", GVAR(vehicleFired)], 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    [
        [format ["%1 mal Puls gemessen", GVAR(pulseChecked)], 1, 2],
        [format ["%1 Bandagen angelegt", GVAR(bandagesApplied)], 1, 2],
        [format ["%1 mal CPR durchgeführt", GVAR(cprPerformed)], 1, 3]
    ] spawn bis_fnc_EXP_camp_SITREP;
    sleep 12;
    5 fadeMusic 0;
    ["end2", true, 5] spawn bis_fnc_endMission;
};
