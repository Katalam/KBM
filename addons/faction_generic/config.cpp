#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(USAM_RFM),
            QGVAR(USAM_FTL),
            QGVAR(USAM_SQL),
            QGVAR(USAM_PTL),
            QGVAR(USAM_CO),
            QGVAR(USAM_LMG),
            QGVAR(USAM_UGL),
            QGVAR(USAM_LAT),
            QGVAR(USAM_MKM),
            QGVAR(USAM_WTL_MMG),
            QGVAR(USAM_MMG),
            QGVAR(USAM_WTL_HAT),
            QGVAR(USAM_HAT),
            QGVAR(USAM_AAT),
            QGVAR(USAM_CLS),
            QGVAR(USAM_MED),
            QGVAR(USAM_MED_LEAD),
            QGVAR(USAM_MED_LEAD_C)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main"
        };
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
