#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(USAM_Crate_INF),
    QGVAR(USAM_Crate_EMP),
    QGVAR(USAM_Crate_FRAG),
    QGVAR(USAM_Crate_ESP),
    QGVAR(USAM_Crate_LAT),
    QGVAR(USAM_Crate_HAT),
    QGVAR(USAM_Crate_WPN),
    QGVAR(USAM_Crate_MMG),
    QGVAR(USAM_Crate_MED),
    QGVAR(USAM_Crate_MOR_HE),
    QGVAR(USAM_Crate_MOR_SMK),
    QGVAR(USAM_Crate_FULL),
] apply {
    [_x, "InitPost", EFUNC(faction_generic,applyVehicleLoadout), true, [], true] call CBA_fnc_addClassEventHandler;
};

ADDON = true;
