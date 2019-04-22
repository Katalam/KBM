#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(moduleAddIED),
            QGVAR(canister)
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
#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "BOMB\L1\def_l1.hpp"
#include "BOMB\L1\inc_l1.hpp"
