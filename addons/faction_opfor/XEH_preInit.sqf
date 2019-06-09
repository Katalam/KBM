#include "script_component.hpp"

ADDON = false;

[QGVAR(O_empty), "InitPost", {[objNull, _this select 0] call EFUNC(faction_generic,applyPlayerLoadout);}, true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
