#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            QGVAR(BOKO_RFM),
            QGVAR(BOKO_LAT),
            QGVAR(BOKO_UGL)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main",
            "A3_Characters_F"
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
