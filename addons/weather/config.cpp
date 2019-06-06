#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            QGVAR(moduleSnowStorm),
            QGVAR(moduleDustStorm),
            QGVAR(moduleTornado),
            QGVAR(moduleDisableStorm)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main",
            "ace_zeus"
        };
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"
#include "ui\snow_defines.hpp"
#include "ui\snow.hpp"
//#include "ui\dust_defines.hpp"
#include "ui\dust.hpp"


#include "CfgSounds.hpp"
