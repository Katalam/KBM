#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds technical briefing
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thmods_common_fnc_addBriefingEntries;
 *
 * Public: No
 */

if (!hasInterface) exitWith {};

private _advancedWounds = "müssen nicht";
if (missionnamespace getVariable ["ace_medical_enableAdvancedWounds", false]) then {
    _advancedWounds = "können";
};

private _brokenLegs = " keine ";
if (missionnamespace getVariable ["adv_aceSplint_enable", false]) then {
    _brokenLegs = " eine ";
};

private _maxReviveTime = missionnamespace getVariable ["ace_medical_maxReviveTime", 600];
private _reviveTimeString = format ["%1", _maxReviveTime / 60];

private _cprMaxTimeString = "die gesamte";
private _cprMaxTime = missionnamespace getVariable ["adv_aceCPR_maxTime", _maxReviveTime];
if (_cprMaxTime < _maxReviveTime) then {
    _cprMaxTimeString = format ["die ersten %1 Minuten der gesamten", _cprMaxTime / 60];
};

private "_wheel";
private "_requireWheelKit";
switch (missionnamespace getVariable ["ace_repair_engineerSetting_wheel", 0]) do {
    case 0: {
        _wheel = "können von allen Spielern";
    };
    case 1: {
        _wheel = "können von allen Logistikern";
    };
    case 2: {
        _wheel = "können von allen Ingenieuren";
    };
};
switch (missionnamespace getVariable ["ace_repair_wheelRepairRequiredItems", 0]) do {
    case 0: {
        _requireWheelKit = "ohne Toolkit";
    };
    case 1: {
        _requireWheelKit = "mit Toolkit";
    };
};
private _repair = str ((missionnamespace getVariable ["ace_repair_repairDamageThreshold", 0]) * 100);
private _repairEng = str ((missionnamespace getVariable ["ace_repair_repairDamageThreshold_engineer", 0]) * 100);
private _toolKitUse = missionnamespace getVariable ["ace_repair_consumeItem_toolKit", 0];
if (_toolKitUse > 0) then {
    _toolKitUse = "können";
} else {
    _toolKitUse = "können nicht";
};
private "_fullRepair";
switch (missionnamespace getVariable ["ace_repair_consumeItem_toolKit", 0]) do {
    case 0: {
        _fullRepair = "überall";
    };
    case 1: {
        _fullRepair = "überall, mit Reparaturfahrzeug";
    };
    case 2: {
        _fullRepair = "an Reparaturgebäuden";
    };
    case 3: {
        _fullRepair = "an Reparaturgebäuden oder an Reparaturfahrzeugen";
    };
    case 4: {
        _fullRepair = "gar nicht";
    };
};

player createDiaryRecord ["Diary", ["Technische Hinweise", format ["Loadout, Logistik über ACE-Interaction.
<br/><br/>Missionseinstellungen:<br/><br/>


 - Revive-Zeit: " + _reviveTimeString + " Minuten.<br/>
 - Es steht adv_aceCPR statt PAK zur Verfügung. Jeder Medic erhalten einen Defibrillator. CPR kann " + _cprMaxTimeString + " Revive-Zeit über erfolgreich sein.<br/>
 - Wunden " + _advancedWounds + " vernäht werden.<br/>
 - Es wird" + _brokenLegs + "gesonderte Behandlung von Brüchen benötigt.<br/><br/>

 - Waffenpylone können von allen Spielern mithilfe eines Munitionsfahrzeugs geändert werden.<br/>
 - Munition wird in Magazinen nachgeladen.<br/>
 - Reifen " + _wheel + ", auch " + _requireWheelKit + ", gewechselt werden.<br/>
 - Logistiker mit einem Toolkit können ohne Reparaturfahrzeug auf bis zu " + _repairEng + " Prozent reparieren, Crew-Mitglieder auf bis zu " + _repair + " Prozent.<br/>
 - Toolkits " + _toolKitUse + " wiederverwendet werden.<br/>
 - FullRepair ist für Logistiker mit Toolkit " + _fullRepair + " möglich.<br/><br/>

 Organisatorisches:<br/><br/>

 - Wenn ihr technische Schwierigkeiten habt, schreibt bitte ausschließlich den Spiel-Admin an.<br/>
 - Bitte haltet euch zurück mit out-of-character-Gesprächen. Die anderen Spielerinnen und Spieler werden es euch danken."]]];
