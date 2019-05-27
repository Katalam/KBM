#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(USAM_Veh_CAR),
    QGVAR(USAM_Veh_CAR_M2),
    QGVAR(USAM_Veh_CAR_Mk19),
    QGVAR(USAM_Veh_CAR_TOW),
    QGVAR(USAM_Veh_M1237_M2),
    QGVAR(USAM_Veh_M1237_Mk19),
    QGVAR(USAM_Veh_Cargo_M2),
    QGVAR(USAM_Veh_EMPTY_M2),
    QGVAR(USAM_Veh_REPAIR_M2),
    QGVAR(USAM_Veh_AMMO_M2),
    QGVAR(USAM_Veh_FUEL),
    QGVAR(USAM_Veh_MEDICAL),
    QGVAR(USAM_Veh_IFV),
    QGVAR(USAM_Veh_M109A6),
    QGVAR(USAM_Veh_M142),
    QGVAR(USAM_Veh_UH60),
    QGVAR(USAM_Veh_AH64),
    QGVAR(USAM_Veh_CH47),
    QGVAR(USAM_Veh_A10),
    QGVAR(USAM_Veh_FA18E)
] apply {
    [_x, "InitPost", FUNC(applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
};

[QGVAR(USAM_RFM), "InitPost", {[objNull, _this select 0] call FUNC(applyPlayerLoadout);}, true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
