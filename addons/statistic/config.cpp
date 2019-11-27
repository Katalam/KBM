#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = COMPONENT;
            units[] = {
                QGVAR(moduleMissionEndSuccess),
                QGVAR(moduleMissionEndFailure)
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
#include "CfgDebriefing.hpp"
