class CfgWeapons {
    class UniformItem;
    class Uniform_Base;
    class U_Tank_green_F: Uniform_Base {
        class ItemInfo;
    };
    class KAT_Uniform_Tank: U_Tank_green_F {
        author = "Katalam";
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
        author = "Katalam";
        scope = 2;
        displayName = "Army Combat Uniform (OCP)";
        class ItemInfo: UniformItem {
            uniformClass = GVAR(Uniform_OCP);
            containerClass = Supply40;
            mass = 40;
        };
    };
    class rhsusf_ach_helmet_ocp;
    class KAT_Headgear_OCP: rhsusf_ach_helmet_ocp {
        author = "Katalam";
        displayName = "ACH (OCP)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_helmet_co.paa)};
    };
    class rhsusf_patrolcap_ucp;
    class KAT_Headgear_Cap_OCP: rhsusf_patrolcap_ucp {
        author = "Katalam";
        displayName = "Fieldcap (OCP)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_fieldcap_co.paa)};
    };
    class rhsusf_mbav;
    class KAT_Vest_OCP: rhsusf_mbav {
        author = "Katalam";
        displayName = "Vest (OCP)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_vest_co.paa)};
    };
};
