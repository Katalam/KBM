#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[QGVAR(USMC_Veh_CAR), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_CAR_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_CAR_Mk19), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_CAR_TOW), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_M1237_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_M1237_Mk19), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_Cargo_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_EMPTY_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_REPAIR_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_AMMO_M2), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_FUEL), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_MEDICAL), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_IFV), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_M109A6), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_M142), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_UH60), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_AH64), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_CH47), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_A10), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
[QGVAR(USMC_Veh_FA18E), "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;

[QGVAR(USMC_RFM), "InitPost", {[objNull, _this select 0] call EFUNC(faction_generic,applyPlayerLoadout);}, true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
