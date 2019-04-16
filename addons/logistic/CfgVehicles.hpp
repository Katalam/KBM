class CfgVehicles {
    class EGVAR(faction_generic,moduleBase3den);
    class GVAR(moduleAddLogisticMenu3den): EGVAR(faction_generic,moduleBase3den) {
        displayName = "Add Logistic Menu";
        category = EQGVAR(faction_generic,loadout);
        function = QFUNC(moduleAddlogisticMenu3den);
        icon = QPATHTOF(data\icon_logistics.paa);
    };

    #include "Crates.hpp"
};
