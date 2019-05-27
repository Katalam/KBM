class CfgVehicles {
    class EGVAR(common,moduleBase3den);
    class GVAR(moduleAddLogisticMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Add Logistic Menu";
        category = QEGVAR(faction_generic,Loadout);
        function = QFUNC(moduleAddLogisticMenu3den);
        icon = QPATHTOF(data\icon_crate.paa);
    };

    #include "Crates.hpp"
};
