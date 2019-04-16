class CfgVehicles {
    class FlagCarrier;
    class GVAR(flag): FlagCarrier {
        author = "Katalam";
        displayName = CSTRING(flag);
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(data\10th_flag.paa);
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture '\x\kat_10thmods\addons\common\data\10th_flag.paa');
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
};
