// Cougar
class rhsusf_CGRCAT1A2_usmc_d;
class GVAR(USMC_Veh_COUGAR): rhsusf_CGRCAT1A2_usmc_d {
    author = "Katalam";
    displayName = "Cougar (Unarmed)";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 16},
            {"1Rnd_HE_Grenade_shell", 12}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};
class rhsusf_CGRCAT1A2_M2_usmc_d;
class GVAR(USMC_Veh_COUGAR_M2): rhsusf_CGRCAT1A2_M2_usmc_d {
    author = "Katalam";
    displayName = "Cougar M2";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 16},
            {"1Rnd_HE_Grenade_shell", 12}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

class GVAR(USMC_Veh_COUGAR_MOR): rhsusf_CGRCAT1A2_M2_usmc_d {
    author = "Katalam";
    displayName = "Cougar w/ Mortar M2";
    loadoutCargo[] = {{"ACE_Wheel", 2}, {QEGVAR(logistic,USAM_Crate_MOR_HE), 1}, {QEGVAR(logistic,USAM_Crate_MOR_SMK), 1}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}, {"ACE_1Rnd_82mm_Mo_Smoke", 10}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 2}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"ACE_1Rnd_82mm_Mo_HE", 5},
            {"ACE_1Rnd_82mm_Mo_Smoke", 1}
        }, {
            {"ACE_1Rnd_82mm_Mo_HE", 5},
            {"ACE_1Rnd_82mm_Mo_Smoke", 1}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

class rhsusf_CGRCAT1A2_Mk19_usmc_d;
class GVAR(USMC_Veh_COUGAR_Mk19): rhsusf_CGRCAT1A2_Mk19_usmc_d {
    author = "Katalam";
    displayName = "Cougar Mk19";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 16},
            {"1Rnd_HE_Grenade_shell", 12}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// M1237 M2
class rhsusf_M1232_MC_M2_usmc_d;
class GVAR(USMC_Veh_M1237_M2): rhsusf_M1232_MC_M2_usmc_d {
    author = "Katalam";
    displayName = "M1237 M2";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}, {"VSM_Multicam_carryall", 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 12},
            {"1Rnd_HE_Grenade_shell", 12},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 5}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// M1237 Mk19
class rhsusf_M1232_MC_MK19_usmc_d;
class GVAR(USMC_Veh_M1237_Mk19): rhsusf_M1232_MC_MK19_usmc_d {
    author = "Katalam";
    displayName = "M1237 Mk19";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 12},
            {"1Rnd_HE_Grenade_shell", 12},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 5}
        }};
    crew = QGVAR(USMC_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// M109A6
class rhsusf_m109d_usarmy;
class GVAR(USMC_Veh_M109A6): rhsusf_m109d_usarmy {
    author = "Katalam";
    displayName = "M109A6";
    loadoutCargo[] = {{"ACE_Track", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 12},
            {"1Rnd_HE_Grenade_shell", 12},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 5}
        }};
    crew = QGVAR(USMC_CRW);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// M142
class rhsusf_M142_usmc_WD;
class GVAR(USMC_Veh_M142): rhsusf_M142_usmc_WD {
    author = "Katalam";
    displayName = "M142";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{BACKPACK_COMPACT, 1}, {BACKPACK_KITBAG, 1}, {BACKPACK_CARRYALL, 1}};
    loadoutBackpackInv[] = {{
            {"ToolKit", 1}
        }, {
            {"ACE_packingBandage", 32},
            {"ACE_elasticBandage", 32},
            {"ACE_morphine", 8},
            {"ACE_epinephrine", 8},
            {"ACE_tourniquet", 4},
            {"ACE_plasmaIV_500", 12},
            {"adv_aceSplint_splint", 12}
        }, {
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 12},
            {"1Rnd_HE_Grenade_shell", 12},
            {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 5}
        }};
    crew = QGVAR(USMC_CRW);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// UH-1Y
class RHS_UH1Y_d;
class GVAR(USMC_Veh_UH1Y): RHS_UH1Y_d {
    author = "Katalam";
    displayName = "UH-1Y";
    loadoutCargo[] = {};
    loadoutItems[] = {
        {"ACE_packingBandage", 32},
        {"ACE_elasticBandage", 32},
        {"ACE_morphine", 8},
        {"ACE_epinephrine", 8},
        {"ACE_tourniquet", 4},
        {"ACE_plasmaIV_500", 12},
        {"adv_aceSplint_splint", 12}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USMC_HELI_PIL);
    typicalCargo[] = {QGVAR(USMC_HELI_CRW)};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// AH-64D
class RHS_AH1Z;
class GVAR(USMC_Veh_AH1Z): RHS_AH1Z {
    author = "Katalam";
    displayName = "AH-1Z";
    loadoutCargo[] = {};
    loadoutItems[] = {};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USMC_HELI_PIL_AH);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};

// CH-53E
class rhsusf_CH53E_USMC_D;
class GVAR(USMC_Veh_CH53E): rhsusf_CH53E_USMC_D {
    author = "Katalam";
    displayName = "CH-53E";
    loadoutCargo[] = {};
    loadoutItems[] = {
        {"ACE_packingBandage", 32},
        {"ACE_elasticBandage", 32},
        {"ACE_morphine", 8},
        {"ACE_epinephrine", 8},
        {"ACE_tourniquet", 4},
        {"ACE_plasmaIV_500", 12},
        {"adv_aceSplint_splint", 12}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USMC_HELI_PIL);
    typicalCargo[] = {QGVAR(USMC_HELI_CRW)};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    class TransportBackpacks {};
};
