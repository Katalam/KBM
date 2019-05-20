class CfgVehicles {
    class EGVAR(faction_generic,moduleBase3den);
    class GVAR(moduleAddLoadoutMenu3den): EGVAR(faction_generic,moduleBase3den) {
        displayName = "Add Loadout Menu USMC";
        category = QEGVAR(faction_generic,loadout);
        function = QFUNC(moduleAddLoadoutMenu3den);
        icon = QPATHTOEF(faction_generic,data\icon_loadout_menu.paa);
    };
    class GVAR(moduleAddVehicleMenu3den): EGVAR(faction_generic,moduleBase3den) {
        displayName = "Add Vehicle Menu USMC";
        category = QEGVAR(faction_generic,loadout);
        function = QFUNC(moduleAddVehicleMenu3den);
        icon = QPATHTOEF(faction_generic,data\icon_logistics.paa);
    };
    class GVAR(moduleAddPlaneMenu3den): EGVAR(faction_generic,moduleBase3den) {
        displayName = "Add Plane Menu USMC";
        category = QEGVAR(faction_generic,loadout);
        function = QFUNC(moduleAddPlaneMenu3den);
        icon = QPATHTOEF(faction_generic,data\icon_logistics.paa);
    };

    #include "Infantry.hpp"
    #include "Vehicles.hpp"
    #include "USMC_W.hpp"
};
