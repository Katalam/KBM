#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kat_10thmods_main"};
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
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
