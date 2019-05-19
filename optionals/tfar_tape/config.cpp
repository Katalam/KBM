#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main",
            "tfar_core",
            "tfar_handhelds"
        };
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class RscBackPicture;
class anprc152_radio_dialog {
    onLoad = "if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl 67676) ctrlSetText '\x\kat_10thmods\addons\tfar_tape\ui\152_n.paa';};";
    class background: RscBackPicture {
        text = QPATHTOF(ui\152.paa);
    };
};
