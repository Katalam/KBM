#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            QUOTE(KAT_Mortar_M252)
        };
        weapons[] = {};
        magazines[] = {};
        requiredAddons[] = {
            "cba_settings",
            "ace_medical",
            "kat_10thmods_main"
        };
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
