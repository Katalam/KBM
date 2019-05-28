class CfgWeapons {
    class UniformItem;
    class Uniform_Base;
    class U_Tank_green_F: Uniform_Base {
        class ItemInfo;
    };
    class KAT_Uniform_Tank: U_Tank_green_F {
        scope = 2;
        displayName = "Tanker Coveralls [American]";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\U_Tank_crew_F_CO.paa)};
        class ItemInfo: UniformItem {
            uniformClass = GVAR(Uniform_Tank);
            containerClass = Supply40;
            mass = 40;
        };
    };

    class rhs_uniform_acu_ucp: Uniform_Base {
        class ItemInfo;
    };
    class KAT_Uniform_OCP: rhs_uniform_acu_ucp {
        scope = 2;
        displayName = "Army Combat Uniform (OCP)";
        class ItemInfo: UniformItem {
            uniformClass = GVAR(Uniform_OCP);
            containerClass = Supply40;
            mass = 40;
        };
    };
};
