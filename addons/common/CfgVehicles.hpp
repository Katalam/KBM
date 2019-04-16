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
        hiddenSelectionsTextures[] = {QPATHTOF(data\10th_banner.paa);};
    };
};
