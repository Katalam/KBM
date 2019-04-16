class CfgVehicles {
    class EGVAR(faction_generic,moduleBase3den);
    class GVAR(moduleAddLogisticMenu3den): EGVAR(faction_generic,moduleBase3den) {
        displayName = "Add Logistic Menu";
        category = QEGVAR(faction_generic,Loadout);
        function = QFUNC(moduleAddLogisticMenu3den);
        icon = QPATHTOF(data\icon_logistics.paa);
    };

    #include "Crates.hpp"
};
