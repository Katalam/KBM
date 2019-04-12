class CfgVehicles {
    class B_Soldier_base_F;
    class B_Soldier_F : B_Soldier_base_F {
        class EventHandlers;
        modelsides[] = {3,2,1,0};
    };

    class GVAR(USAM_RFM): B_Soldier_F {
        author = "Katalam";
        displayName = "Rifleman";
        description = "Rifleman";
        loadout = "USAM_RFM";
        loadoutRank = "PRIVATE";
        loadoutUniform[] = {"VSM_Multicam_Crye_Camo", "VSM_Multicam_Crye_SS_Camo"};
        loadoutVest[] = {"VSM_LBT6094_operator_Multicam"};
        loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
        loadoutHeadgear[] = {"VSM_OPS_2_multicam", "VSM_OPS_multicam"};
        loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                            {"", {}}, // secondary
                            {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                            {"", {}}}; // binocular
        loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
        loadoutMedical[] = {{"ACE_packingBandage", 8}, {"ACE_elasticBandage", 5}, {"ACE_tourniquet", 2}, {"adv_aceSplint_splint", 2}, {"ACE_morphine", 1}};
        loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_mk84", 4}, {"HandGrenade", 2}};
        loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}};
        loadoutUniformInvNew[] = {};
        loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 10}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
        loadoutVestInvNew[] = {};
        loadoutBackpackInv[] = {};
        loadoutBackpackInvNew[] = {{"rhsusf_200Rnd_556x45_soft_pouch", 2}};
        loadoutVarMedic = 0;
        loadoutVarG = 0.7;
        loadoutVarEng = 0;
        loadoutVarEOD = 0;
        loadoutInsignia = "";
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        uniformClass = "VSM_Multicam_Crye_Camo";
        backpack = "";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        items[] = {};
        respawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyPlayerLoadout";
            AttributesChanged3DEN = "_this call kat_10thmods_faction_generic_fnc_addRoleDescription";
        };
    };
    class GVAR(USAM_FTL): GVAR(USAM_RFM) {
        displayName = "Fire Team Leader";
        description = "Fire Team Leader";
        loadout = "USAM_FTL";
        loadoutRank = "CORPORAL";
        loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                            {"", {}},
                            {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                            {"Binocular", {}}};
        loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
        loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_mk84", 2}, {"rhs_mag_m18_green", 2}, {"rhs_mag_m18_purple", 2}, {"HandGrenade", 2}};
    };
    class GVAR(USAM_SQL): GVAR(USAM_FTL) {
        displayName = "Squad Leader";
        description = "Squad Leader@Warrior 1-X";
        loadout = "USAM_SQL";
        loadoutRank = "SERGEANT";
        loadoutBackpack[] = {"TFAR_rt1523g_rhs"};
        loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                            {"", {}},
                            {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                            {"ACE_Vector", {}}};
        loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ItemcTabHCam", 1}};
        loadoutBackpackInvNew[] = {};
    };
    class GVAR(USAM_PTL): GVAR(USAM_SQL) {
        displayName = "Platoon Leader";
        description = "Platoon Leader@Warrior 1";
        loadout = "USAM_PTL";
        loadoutRank = "LIEUTENANT";
        loadoutBackpack[] = {"TFAR_rt1523g_big_rhs"};
        loadoutBackpackInvNew[] = {{"ItemcTab", 1}};
    };
    class GVAR(USAM_CO): GVAR(USAM_PTL) {
        displayName = "Company Commander";
        description = "Company Commander@Warrior";
        loadout = "USAM_CO";
        loadoutRank = "CAPTAIN";
    };
    class GVAR(USAM_ADM): GVAR(USAM_PTL) {
        displayName = "Zeus";
        description = "Zeus@Zeus";
        loadout = "USAM_ADM";
        loadoutRank = "COLONEL";
        loadoutHeadgear[] = {"H_Beret_02"};
        loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
        loadoutVarMedic = 2;
        loadoutVarG = 0.3;
        loadoutVarEng = 2;
        loadoutVarEOD = 1;
        loadoutInsignia = "Curator";
    };

    #include "Squad.hpp"
    #include "HSquad.hpp"
    #include "Medic.hpp"
    #include "Platoon.hpp"
    #include "Crew.hpp"
    #include "Extra.hpp"

    class rhsusf_m1025_w;
    class rhsusf_m1025_d: rhsusf_m1025_w {
        class EventHandlers;
    };
    class GVAR(USAM_CAR): rhsusf_m1025_d {
        author = "Katalam";
        displayName = "Humvee (Unarmed)";
        loadoutCargo[] = {{"ACE_Wheel", 2}};
        loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
        loadoutWeapon[] = {};
        loadoutMagazine[] = {};
        loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
        loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
        crew = QGVAR(USAM_RFM);
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
        };
    };
    class rhsusf_m1025_w_m2;
    class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2 {
        class EventHandlers;
    };
    class GVAR(USAM_CAR_M2): rhsusf_m1025_d_m2 {
        author = "Katalam";
        displayName = "Humvee (M2)";
        loadoutCargo[] = {{"ACE_Wheel", 2}};
        loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
        loadoutWeapon[] = {};
        loadoutMagazine[] = {};
        loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
        loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
        crew = QGVAR(USAM_RFM);
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
        };
    };
    class rhsusf_m1025_w_mk19;
    class rhsusf_m1025_d_Mk19: rhsusf_m1025_w_mk19 {
        class EventHandlers;
    };
    class GVAR(USAM_CAR_Mk19): rhsusf_m1025_d_Mk19 {
        author = "Katalam";
        displayName = "Humvee (Mk19)";
        loadoutCargo[] = {{"ACE_Wheel", 2}};
        loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
        loadoutWeapon[] = {};
        loadoutMagazine[] = {};
        loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
        loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
        crew = QGVAR(USAM_RFM);
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
        };
    };
    class rhsusf_m966_w;
    class rhsusf_m966_d: rhsusf_m966_w {
        class EventHandlers;
    };
    class GVAR(USAM_CAR_TOW): rhsusf_m966_d {
        author = "Katalam";
        displayName = "Humvee (TOW)";
        loadoutCargo[] = {{"ACE_Wheel", 2}};
        loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
        loadoutWeapon[] = {};
        loadoutMagazine[] = {};
        loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
        loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
        crew = QGVAR(USAM_RFM);
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
        };
    };

    // M2
    class RHS_M2A3_BUSKI;
    class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI {
        class EventHandlers;
    };
    class GVAR(USAM_IFV): RHS_M2A3_BUSKIII {
        author = "Katalam";
        displayName = "Bradley";
        loadoutCargo[] = {{"ACE_Track", 2}};
        loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
        loadoutWeapon[] = {};
        loadoutMagazine[] = {};
        loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 2}, {"VSM_Multicam_Backpack_Kitbag", 1}};
        loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
        crew = QGVAR(USAM_CRW);
        scope = 2;
        curatorScope = 1;
        faction = QGVAR(USAM_D);
        class EventHandlers: EventHandlers {
            init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
        };
    };
};
