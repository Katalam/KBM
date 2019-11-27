#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = COMPONENT;
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "KBM_main",
                "ctab"
            };
            author = ECSTRING(main,author);
            url = ECSTRING(main,url);
            VERSION_CONFIG;
        };
    };


class cTab_RscPicture;
class cTab_Tablet_dlg {
    class controlsBackground {
        class windowsBG: cTab_RscPicture {
            text = QPATHTOF(data\wallpaper.paa);
        };
    };
};
