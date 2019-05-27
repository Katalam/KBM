class CfgVehicles {
    class EGVAR(common,moduleBase3den);
    class GVAR(moduleAddLoadoutMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Add Loadout Menu USAM";
        category = QGVAR(Loadout);
        function = QFUNC(moduleAddLoadoutMenu3den);
        icon = QPATHTOF(data\icon_loadout_menu.paa);
    };
    class GVAR(moduleAddVehicleMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Add Vehicle Menu USAM";
        category = QGVAR(Loadout);
        function = QFUNC(moduleAddVehicleMenu3den);
        icon = QPATHTOF(data\icon_logistics.paa);
    };
    class GVAR(moduleAddPlaneMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Add Plane Menu USAM";
        category = QGVAR(Loadout);
        function = QFUNC(moduleAddPlaneMenu3den);
        icon = QPATHTOF(data\icon_logistics.paa);
    };
    class GVAR(moduleInitVehicleMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Spawn position vehicle spawner";
        category = QGVAR(Loadout);
        function = QFUNC(vehiclePos);
        icon = QPATHTOF(data\icon_logistics.paa);
    };
    class GVAR(moduleInitPlaneMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Spawn position plane spawner";
        category = QGVAR(Loadout);
        function = QFUNC(planePos);
        icon = QPATHTOF(data\icon_logistics.paa);
    };

    #include "Infantry.hpp"
    #include "Vehicles.hpp"
    #include "USAM_W.hpp"
};
