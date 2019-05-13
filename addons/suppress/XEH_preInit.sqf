#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(mainArray) = [];
GVAR(suppressed) = false;
GVAR(Threshold) = 0; // Changing value
GVAR(lastShotAt) = 0; // The time the player got shot at last time (Just creates the variable)
GVAR(variableHandler) = call CBA_fnc_createNamespace;
GVAR(enable) = true;

#include "initSettings.sqf"

ADDON = true;
