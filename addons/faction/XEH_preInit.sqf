#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(USMC_Veh_CAR),
    QGVAR(USMC_Veh_CAR_M2),
    QGVAR(USMC_Veh_CAR_Mk19),
    QGVAR(USMC_Veh_CAR_TOW),
    QGVAR(USMC_Veh_M1237_M2),
    QGVAR(USMC_Veh_M1237_Mk19),
    QGVAR(USMC_Veh_Cargo_M2),
    QGVAR(USMC_Veh_EMPTY_M2),
    QGVAR(USMC_Veh_REPAIR_M2),
    QGVAR(USMC_Veh_AMMO_M2),
    QGVAR(USMC_Veh_FUEL),
    QGVAR(USMC_Veh_MEDICAL),
    QGVAR(USMC_Veh_IFV),
    QGVAR(USMC_Veh_M109A6),
    QGVAR(USMC_Veh_M142),
    QGVAR(USMC_Veh_UH60),
    QGVAR(USMC_Veh_AH64),
    QGVAR(USMC_Veh_CH47),
    QGVAR(USMC_Veh_A10),
    QGVAR(USMC_Veh_FA18E)
] apply {
    [_x, "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
};

[QGVAR(USMC_RFM), "InitPost", {[objNull, _this select 0] call EFUNC(faction_generic,applyPlayerLoadout);}, true, [], true] call CBA_fnc_addClassEventHandler;

[QGVAR(USMC03_RFM), "InitPost", {[objNull, _this select 0] call EFUNC(faction_generic,applyPlayerLoadout);}, true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
