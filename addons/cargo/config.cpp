#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = COMPONENT;
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "ace_cargo",
                "KBM_main"
            };
            author = ECSTRING(main,author);
            url = ECSTRING(main,url);
            VERSION_CONFIG;
        };
    };


#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
