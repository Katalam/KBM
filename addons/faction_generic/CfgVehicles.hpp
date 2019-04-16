class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits;
        class ModuleDescription;

        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;

            expression = "_this setVariable ['%s',_value];";
        };
    };
    class GVAR(moduleBase): Module_F {
        author = "Katalam";
        category = "KAT";
        function = QEFUNC(main,dummy);
        scope              = 1;
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
    class GVAR(moduleBase3den): Module_F {
        author = "Katalam";
        category = "KAT";
        function = QEFUNC(common,dummy);
        scope = 2;
        scopeCurator = 1;
        functionPriority = 2;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable = 0;
    };
    class GVAR(moduleAddLoadoutMenu3den): GVAR(moduleBase3den) {
        displayName = "Add Loadout Menu";
        category = QGVAR(Loadout);
        function = QFUNC(moduleAddLoadoutMenu3den);
        icon = QPATHTOF(data\icon_loadout_menu.paa);
    };

    #include "Infantry.hpp"
    #include "Vehicles.hpp"
    #include "USAM_W.hpp"
};
