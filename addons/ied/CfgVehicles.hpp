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
    class EGVAR(faction_generic,moduleBase);
    class GVAR(moduleAddIED): EGVAR(faction_generic,moduleBase) {
        displayName = "Add IED";
        category = QGVAR(Bomb);
        function = QFUNC(moduleAddIED);
        //icon = QPATHTOF(data\icon_loadout_menu.paa);
    };

    class Items_base_F;
    class Land_CanisterPlastic_F: Items_base_F {
        class EventHandlers;
    };
    class GVAR(canister): Land_CanisterPlastic_F {
        author = "Katalam";
        editorCategory = QGVAR(Bomb);
        class EventHandlers: EventHandlers {
            init = QUOTE(_this call FUNC(initBomb));
        };
    };
};
