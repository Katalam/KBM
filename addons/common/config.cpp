#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = COMPONENT;
            units[] = {
                QGVAR(flag),
                QGVAR(banner),
                QGVAR(moduleBase),
                QGVAR(moduleBase3den),
                QGVAR(moduleAddSpectatorMenu3den)
            };
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "KBM_main",
                "A3_Modules_F"
            };
            author = ECSTRING(main,author);
            url = ECSTRING(main,url);
            VERSION_CONFIG;
        };
    };


#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgInteractionPositions.hpp"
