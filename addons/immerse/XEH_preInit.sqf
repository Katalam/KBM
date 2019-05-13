#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Config Save Namespace
GVAR(variableHandler) = call CBA_fnc_createNamespace;
GVAR(exShakeArray) = [];
GVAR(playerFiredEHID) = -1;

["unit", {
    params ["_newPlayer", "_oldPlayer"];
    if (GVAR(playerFiredEHID) != -1) then {
        _oldPlayer removeEventHandler ["Fired", GVAR(playerFiredEHID)];
    };
    GVAR(playerFiredEHID) = _newPlayer addEventHandler ["Fired", {_this call FUNC(firedPlayer)}];
    resetCamShake; // reset CamShake Effect
}] call CBA_fnc_addPlayerEventHandler;

// ExShake Effect Functions
FUNC(BigBomb) = compile preprocessFileLineNumbers QPATHTOF(effects\BigBomb.sqf);
FUNC(FuelExploSmall) = compile preprocessFileLineNumbers QPATHTOF(effects\FuelExploSmall.sqf);
FUNC(FuelExploBig) = compile preprocessFileLineNumbers QPATHTOF(effects\FuelExploBig.sqf);
FUNC(BigRocket) = compile preprocessFileLineNumbers QPATHTOF(effects\BigRocket.sqf);
FUNC(SmallRocket) = compile preprocessFileLineNumbers QPATHTOF(effects\SmallRocket.sqf);
FUNC(120mm) = compile preprocessFileLineNumbers QPATHTOF(effects\120mm.sqf);
FUNC(Arty) = compile preprocessFileLineNumbers QPATHTOF(effects\Arty.sqf);
FUNC(Mortar) = compile preprocessFileLineNumbers QPATHTOF(effects\Mortar.sqf);
FUNC(Satchel) = compile preprocessFileLineNumbers QPATHTOF(effects\IED.sqf);
FUNC(Grenade) = compile preprocessFileLineNumbers QPATHTOF(effects\Grenade.sqf);

GVAR(twitchEnabled) = true;
GVAR(exShakeEnabled) = true;
GVAR(recoilEnabled) = true;
GVAR(forceEnabled) = true;

#include "initSettings.sqf"

ADDON = true;
