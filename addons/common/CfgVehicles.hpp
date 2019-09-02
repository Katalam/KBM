class CfgVehicles {
    class FlagCarrier;
    class GVAR(flag): FlagCarrier {
        author = "Katalam";
        displayName = CSTRING(flag);
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(data\10th_flag.paa);
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture '\z\kat_10thmods\addons\common\data\10th_flag.paa');
        };
    };
    class Banner_01_base_F;
    class GVAR(banner): Banner_01_base_F {
        author = "Katalam";
        displayName = CSTRING(banner);
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(data\10th_banner.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\10th_banner.paa)};
    };

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
        scope = 1;
        scopeCurator = 2;
        functionPriority = 1;
        isGlobal = 1;
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
    class GVAR(moduleAddSpectatorMenu3den): EGVAR(common,moduleBase3den) {
        displayName = "Add Spectator Menu";
        category = QGVAR(Template);
        function = QFUNC(moduleAddSpectatorMenu3den);
        icon = "";
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(breakWindow) {
                displayName = CSTRING(break);
                condition = QUOTE(_this call FUNC(canBreakWindow));
                exceptions[] = {};
                statement = QUOTE(_this call FUNC(breakWindow));
                showDisabled = 0;
                priority = 2.5;
            };
            class ACE_TeamManagement {
                class GVAR(changeGroupName) {
                    displayName = CSTRING(changeGroupName);
                    condition = QUOTE(leader group player == player);
                    exceptions[] = {};
                    statement = QUOTE(createDialog QQGVAR(changeGroupName));
                    showDisabled = 0;
                    priority = 2.5;
                };
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(unflipVehicle) {
                    displayName = CSTRING(unflipVehicle);
                    condition = QUOTE(true);
                    exceptions[] = {};
                    statement = QUOTE(_this spawn FUNC(unflipVehicle));
                    showDisabled = 0;
                    priority = 2.5;
                };
            };
        };
    };

    #define CONTAINERSPACE maximumLoad = 8000;\
    transportMaxWeapons = 25;\
    transportMaxMagazines = 320;\
    transportMaxBackpacks = 25;

    class ThingX;
    class Items_base_F: ThingX {
        class EventHandlers;
    };
    class Land_WheelieBin_01_F : Items_base_F {
        CONTAINERSPACE
        class EventHandlers: EventHandlers {
            init = QUOTE(_this call FUNC(addBin));
        };
    };
};
