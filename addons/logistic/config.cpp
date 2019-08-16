#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            QGVAR(moduleAddLogisticMenu3den),
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
            QGVAR(USAM_Crate_FULL)
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

#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
