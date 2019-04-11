class CfgVehicles {
    class Mortar_01_base_F;
    class B_Mortar_01_F: Mortar_01_base_F {
        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"KAT_Mortar_Gun_Bag", "KAT_Mortar_Bipod_Bag"};
            primary = 0;
        };
    };
    /*
    class KAT_Mortar_M252: B_Mortar_01_F {
        displayName = "M252";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M252_D.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_mortar_m251_CA.paa";
        model = "\rhsusf\addons\rhsusf_m252\rhs_mortar_m252.p3d";
        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"KAT_Mortar_Gun_Bag", "KAT_Mortar_Bipod_Bag"};
            primary = 0;
        };
    };
    */
    class B_Mortar_01_weapon_F;
    class KAT_Mortar_Gun_Bag: B_Mortar_01_weapon_F {
        displayName = "M252 Gun Bag";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
        model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticX.p3d";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticX_CA.paa";
        class assembleInfo {
            assembleTo = "B_Mortar_01_F";
            base[] = {"KAT_Mortar_Bipod_Bag"};
            displayName = "Mk6 Mortar";
            dissasembleTo[] = {};
            primary = 1;
        };
    };
    class B_Mortar_01_support_F;
    class KAT_Mortar_Bipod_Bag: B_Mortar_01_support_F {
        displayName = "M252 Bipod Bag";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
        model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticY.p3d";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticY_CA.paa";
    };
};
