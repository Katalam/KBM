class B_Soldier_base_F;
class B_Soldier_F: B_Soldier_base_F {
    class EventHandlers;
    modelsides[] = {3,2,1,0};
};

class GVAR(USAM_RFM): B_Soldier_F {
    author = "Katalam";
    displayName = "Rifleman";
    description = "Rifleman";
    loadout = "USAM_RFM";
    loadoutGroup = "Squad"; // CASE SENSITIVE !
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
    loadoutNVG[] = {"ACE_NVG_Wide", {{"ACE_Flashlight_XL50", 1}, {"ACE_IR_Strobe_Item", 1}}, {{"Chemlight_red", 3}}};
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
    loadoutScope[] = {  {"RCO","optic_hamr"}, {"ACOG RMR","rhsusf_acc_ACOG_RMR"}, {"G33 + XPS3","rhsusf_acc_g33_xps3"},
                        {"EOTECH","rhsusf_acc_eotech_552"},    {"ELCAN SpectreDR","rhsusf_acc_su230a_mrds"},
                        {"ACOG","rhsusf_acc_acog"}};
    loadoutScopeDMR[] = {};
    loadoutGoggle[] = {     {"Black", "rhs_googles_black"}, {"Yellow", "rhs_googles_yellow"}, {"Orange", "rhs_googles_orange"},
                            {"Big Black", "rhs_ess_black"}, {"Clear", "rhs_googles_clear"}, {"Remove", "REMOVE"}};
    loadoutLauncher[] = {   {"M72A7", "rhs_weap_m72a7", "rhs_m72a7_mag"}, {"M136", "rhs_weap_M136", "rhs_m136_mag"}};
    loadoutSilencer[] = {{"Rotex III", "hlc_muzzle_556NATO_rotexiiic_grey"}};
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
        init = "[objNull, _this select 0] call kat_10thMods_faction_generic_fnc_applyPlayerLoadout";
        AttributesChanged3DEN = "_this call kat_10thmods_faction_generic_fnc_addRoleDescription";
        Respawn = "[objNull, _this select 0] call kat_10thMods_faction_generic_fnc_applyPlayerLoadout";
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
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_mk84", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 2}};
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
    loadoutGroup = "Platoon";
    loadoutRank = "LIEUTENANT";
    loadoutBackpack[] = {"TFAR_rt1523g_big_rhs"};
    loadoutBackpackInvNew[] = {{"ItemcTab", 1}};
};
class GVAR(USAM_CO): GVAR(USAM_PTL) {
    displayName = "Company Commander";
    description = "Company Commander@Warrior";
    loadout = "USAM_CO";
    loadoutGroup = "Company";
    loadoutRank = "CAPTAIN";
};
class GVAR(USAM_ADM): GVAR(USAM_PTL) {
    displayName = "Zeus";
    description = "Zeus@Zeus";
    loadout = "USAM_ADM";
    loadoutGroup = "Company";
    loadoutRank = "COLONEL";
    loadoutHeadgear[] = {"H_Beret_02"};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
    loadoutVarMedic = 2;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutVarEOD = 1;
    loadoutInsignia = "Curator";
};

// Medic
class GVAR(USAM_CLS): GVAR(USAM_RFM) {
    displayName = "Combat Life Saver";
    description = "Combat Life Saver";
    loadout = "USAM_CLS";
    loadoutBackpackInvNew[] = {{"ACE_elasticBandage", 12}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}, {"ACE_plasmaIV_500", 5}};
    loadoutVarMedic = 1;
};
class GVAR(USAM_MED): GVAR(USAM_FTL) {
    displayName = "Squad Medic";
    description = "Squad Medic";
    loadout = "USAM_MED";
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Kitbag"};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 4}};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}, {"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QGVAR(medic);
};
class GVAR(USAM_MED_LEAD): GVAR(USAM_MED) {
    displayName = "Platoon Medic";
    description = "Platoon Medic";
    loadout = "USAM_MED_LEAD";
    loadoutGroup = "Platoon";
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
};
class GVAR(USAM_MED_LEAD_C): GVAR(USAM_SQL) {
    displayName = "Company Medic";
    description = "Company Medic";
    loadout = "USAM_MED_LEAD_C";
    loadoutGroup = "Company";
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Kitbag"};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutInsignia = QGVAR(medic);
};

// Platoon
class GVAR(USAM_PSG): GVAR(USAM_SQL) {
    displayName = "Platoon Sergeant";
    description = "Platoon Sergeant";
    loadout = "USAM_PSG";
    loadoutGroup = "Platoon";
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"1Rnd_HE_Grenade_shell", 6}};
    loadoutBackpackInvNew[] = {{"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
};
class GVAR(USAM_RTO): GVAR(USAM_RFM) {
    displayName = "RTO";
    description = "RTO - Warrior 1-R";
    loadout = "USAM_RTO";
    loadoutGroup = "Platoon";
    loadoutBackpack[] = {"TFAR_rt1523g_rhs"};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_FO): GVAR(USAM_SQL) {
    displayName = "JFO";
    description = "JFO - Warrior 1-F";
    loadout = "USAM_FO";
    loadoutGroup = "Platoon";
    loadoutInsignia = QGVAR(jfo);
};
class GVAR(USAM_JTAC): GVAR(USAM_SQL) {
    displayName = "JTAC";
    description = "JTAC - Warrior 1-J";
    loadout = "USAM_JTAC";
    loadoutGroup = "Platoon";
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"Laserdesignator", {"Laserbatteries", 1}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 4}, {"rhs_mag_m18_purple", 2}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"1Rnd_HE_Grenade_shell", 3}};
    loadoutBackpackInvNew[] = {{"1Rnd_SmokeBlue_Grenade_shell", 3}, {"1Rnd_SmokePurple_Grenade_shell", 3}, {"1Rnd_SmokeRed_Grenade_shell", 3}};
    loadoutInsignia = QGVAR(jtac);
};

// Squad
class GVAR(USAM_LMG): GVAR(USAM_RFM) {
    displayName = "Autorifleman";
    description = "Autorifleman";
    loadout = "USAM_LMG";
    loadoutUniform[] = {"VSM_Multicam_Crye_Tee_Camo"};
    loadoutVest[] = {"VSM_LBT6094_MG_Multicam"};
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"hlc_m249_pip3", {"rhsusf_acc_ELCAN", "rhsusf_200Rnd_556x45_soft_pouch"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"", {}}};
    loadoutVestInv[] = {{"rhsusf_200Rnd_556x45_soft_pouch", 3}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_UGL): GVAR(USAM_RFM) {
    displayName = "Grenadier";
    description = "Grenadier";
    loadout = "USAM_UGL";
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {{"1Rnd_HE_Grenade_shell", 15}};
};
class GVAR(USAM_LAT): GVAR(USAM_RFM) {
    displayName = "Rifleman (AT)";
    description = "Rifleman (AT)";
    loadout = "USAM_LAT";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"rhs_weap_M136", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_MKM): GVAR(USAM_RFM) {
    displayName = "Marksman";
    description = "Marksman";
    loadout = "USAM_MKM";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_sr25", {"rhsusf_acc_anpeq15side_bk", "optic_DMS", "rhsusf_acc_harris_bipod", "ACE_20Rnd_762x51_Mag_Tracer"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 2}};
    loadoutVestInv[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 7}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"rhsusf_acc_acog", 1}};
    loadoutBackpackInvNew[] = {};
};

// Heavy Squad
class GVAR(USAM_WTL_MMG): GVAR(USAM_SQL) {
    displayName = "Weapon Squad Leader";
    description = "Weapon Squad Leader@Warrior 1-4";
    loadout = "USAM_WTL_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_SpareBarrel", 1}, {"ACE_EntrenchingTool", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 1}};
};
class GVAR(USAM_MMG): GVAR(USAM_RFM) {
    displayName = "Machine Gunner";
    description = "Machine Gunner";
    loadout = "USAM_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutWeapon[] = { {"rhs_weap_m240B", {"rhsusf_acc_ARDEC_M240", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN", "rhsusf_100Rnd_762x51_m62_tracer"}},
                        {"", {}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}};
};
class GVAR(USAM_AMG): GVAR(USAM_RFM) {
    displayName = "Assistant Machine Gunner";
    description = "Assistant Machine Gunner";
    loadout = "USAM_AMG";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"", {}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"ACE_Vector", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 1}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"ACE_SpareBarrel", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 5}};
};
class GVAR(USAM_WTL_HAT): GVAR(USAM_FTL) {
    displayName = "Weapon Team Leader";
    description = "Weapon Team Leader";
    loadout = "USAM_WTL_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};
class GVAR(USAM_HAT): GVAR(USAM_RFM) {
    displayName = "Antiarmor Gunner";
    description = "Antiarmor Gunner";
    loadout = "USAM_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"rhs_weap_fgm148", {"rhs_fgm148_magazine_AT"}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_AAT): GVAR(USAM_RFM) {
    displayName = "Assistant Antiarmor Gunner";
    description = "Assistant Antiarmor Gunner";
    loadout = "USAM_AAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};

// Crew
class GVAR(USAM_CRW_LEAD): GVAR(USAM_SQL) {
    displayName = "Tank Commander";
    description = "Tank Commander@Outlaw 1-X";
    loadout = "USAM_CRW_LEAD";
    loadoutGroup = "Crew";
    loadoutVest[] = {"VSM_FAPC_Operator_Multicam"};
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
    loadoutHeadgear[] = {"rhsusf_cvc_alt_helmet"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 4}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"SatchelCharge_Remote_Mag", 1}};
    loadoutVarEng = 1;
    loadoutVarEOD = 1;
};
class GVAR(USAM_CRW): GVAR(USAM_RFM) {
    displayName = "Tank Crew";
    description = "Tank Crew";
    loadout = "USAM_CRW";
    loadoutGroup = "Crew";
    loadoutVest[] = {"VSM_FAPC_Operator_Multicam"};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {"rhsusf_cvc_alt_helmet"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 4}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {};
    loadoutVarEng = 1;
};
class GVAR(USAM_HELI_PIL): GVAR(USAM_SQL) {
    displayName = "Helicopter Pilot";
    description = "Helicopter Pilot@Super 1-X";
    loadout = "USAM_HELI_PIL";
    loadoutGroup = "Crew";
    loadoutVest[] = {"V_TacVest_khk"};
    loadoutHeadgear[] = {"rhsusf_hgu56p"};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"", {}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutUniformInvNew[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVarMedic = 1;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutHelmet[] = { "rhsusf_hgu56p_black", "rhsusf_hgu56p_visor_black", "rhsusf_hgu56p_visor_mask_Empire_black",
                        "rhsusf_hgu56p_green", "rhsusf_hgu56p_visor_green", "rhsusf_hgu56p", "rhsusf_hgu56p_visor",
                        "rhsusf_hgu56p_pink", "rhsusf_hgu56p_visor_pink", "rhsusf_hgu56p_saf", "rhsusf_hgu56p_visor_saf",
                        "rhsusf_hgu56p_usa", "rhsusf_hgu56p_visor_usa", "rhsusf_hgu56p_white", "rhsusf_hgu56p_visor_white",
                        "rhsusf_ihadss"};
};
class GVAR(USAM_HELI_PIL_AH): GVAR(USAM_HELI_PIL) {
    displayName = "AH-64 Pilot";
    description = "Helicopter Pilot@Falcon 1-X";
    loadout = "USAM_HELI_PIL_AH";
    loadoutGroup = "Crew";
    loadoutHeadgear[] = {"rhsusf_ihadss"};
};
class GVAR(USAM_HELI_CRW): GVAR(USAM_RFM) {
    displayName = "Helicopter Crew";
    description = "Helicopter Crew";
    loadout = "USAM_HELI_CRW";
    loadoutGroup = "Crew";
    loadoutVest[] = {"V_TacVest_khk"};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {"rhsusf_hgu56p_visor_mask_skull"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutUniformInvNew[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {};
    loadoutVarG = 0.3;
    loadoutVarEng = 1;
    loadoutHelmet[] = { "rhsusf_hgu56p_mask_black", "rhsusf_hgu56p_mask_black_skull", "rhsusf_hgu56p_visor_mask_black",
                        "rhsusf_hgu56p_visor_mask_Empire_black", "rhsusf_hgu56p_visor_mask_black_skull", "rhsusf_hgu56p_mask_green",
                        "rhsusf_hgu56p_mask_green_mo", "rhsusf_hgu56p_visor_mask_green", "rhsusf_hgu56p_visor_mask_green_mo",
                        "rhsusf_hgu56p_mask_smiley", "rhsusf_hgu56p_visor_mask_smiley", "rhsusf_hgu56p_mask", "rhsusf_hgu56p_mask_mo",
                        "rhsusf_hgu56p_mask_skull", "rhsusf_hgu56p_visor_mask", "rhsusf_hgu56p_visor_mask_mo", "rhsusf_hgu56p_visor_mask_skull",
                        "rhsusf_hgu56p_mask_pink", "rhsusf_hgu56p_visor_mask_pink", "rhsusf_hgu56p_mask_saf", "rhsusf_hgu56p_visor_mask_saf"};
};
class GVAR(USAM_JET): GVAR(USAM_SQL) {
    displayName = "Jet Pilot";
    description = "Jet Pilot";
    loadout = "USAM_JET";
    loadoutGroup = "Crew";
    loadoutUniform[] = {"U_B_PilotCoveralls"};
    loadoutVest[] = {};
    loadoutBackpack[] = {"B_Parachute"};
    loadoutHeadgear[] = {"H_PilotHelmetFighter_B"};
    loadoutWeapon[] = { {"", {}},
                        {"", {}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarMedic = 1;
    loadoutVarG = 0.3;
    loadoutVarEng = 1;
};

// Sniper
class GVAR(USAM_SNI): GVAR(USAM_SQL) {
    displayName = "Recon Sniper";
    description = "Sniper";
    loadout = "USAM_SNI";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"ACE_20Rnd_762x51_Mag_Tracer", 4}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_salineIV_500", 6}, {"1Rnd_HE_Grenade_shell", 2}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_M107_d", {"optic_LRPS"}, {{"rhsusf_mag_10Rnd_STD_50BMG_M33", 10}}}};
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
    loadoutVarMedic = 1;
};
class GVAR(USAM_SPO): GVAR(USAM_SNI) {
    displayName = "Recon Spotter";
    description = "Spotter";
    loadout = "USAM_SPO";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"TFAR_rt1523g_big_rhs"};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"ACE_SpottingScope", 1}};
    loadoutBackpackInvNew[] = {{"ACE_Tripod", 1}, {"ACE_DefusalKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_Sandbag_empty", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_salineIV_500", 6}, {"ACE_surgicalKit", 1}};
    loadoutGunBackpack[] = {};
    loadoutVarMedic = 1;
};
class GVAR(USAM_TL): GVAR(USAM_SPO) {
    displayName = "Recon Team Leader";
    description = "Team Leader@Stalker 1-X";
    loadout = "USAM_TL";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {"ACE_20Rnd_762x51_Mag_Tracer", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"adv_aceCPR_AED", 1}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_sr25", {"rhsusf_acc_SR25S", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_harris_bipod", "optic_LRPS"}, {{"ACE_20Rnd_762x51_Mag_Tracer", 20}}}};
    loadoutVarMedic = 2;
    loadoutVarEOD = 1;
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
};

// Mortar
class GVAR(USAM_MOR_SQL): GVAR(USAM_SQL) {
    displayName = "Mortar Squad Leader";
    description = "Squad Leader@Black Sheep 1-1";
    loadout = "USAM_MOR_SQL";
    loadoutGroup = "Other";
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USAM_MOR_ASS): GVAR(USAM_RFM) {
    displayName = "Mortar Assistant Gunner";
    description = "Assistant Gunner";
    loadout = "USAM_MOR_ASS";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"KAT_Mortar_Gun_Bag"};
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_EntrenchingTool", 1}, {"VSM_OPS_2_multicam", 1}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_MOR_GUN): GVAR(USAM_MOR_ASS) {
    displayName = "Mortar Gunner";
    description = "Gunner";
    loadout = "USAM_MOR_GUN";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"KAT_Mortar_Bipod_Bag"};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USAM_MOR_AMB): GVAR(USAM_MOR_GUN) {
    displayName = "Mortar Ammunition Bearer";
    description = "Ammunition Bearer";
    loadout = "USAM_MOR_AMB";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}};
    loadoutBackpackInvNew[] = {{"ACE_1Rnd_82mm_Mo_HE", 5}, {"ACE_1Rnd_82mm_Mo_Smoke", 1}};
};

// Rifleman (Extra)
class GVAR(USAM_EOD): GVAR(USAM_RFM) {
    displayName = "EOD";
    description = "EOD";
    loadout = "USAM_EOD";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
                        {"", {}}, // secondary
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
                        {"ACE_VMM3", {}}}; // binocular
    loadoutUniformInvNew[] = {{"ACE_Clacker", 1}, {"ACE_DefusalKit", 1}, {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 8}};
    loadoutVestInvNew[] = {{"DemoCharge_Remote_Mag", 2}};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarEOD = 1;
};
class GVAR(USAM_ESP): GVAR(USAM_RFM) {
    displayName = "Rifleman (Explosives)";
    description = "Rifleman (Explosives)";
    loadout = "USAM_ESP";
    loadoutGroup = "Other";
    loadoutUniformInvNew[] = {{"ACE_Clacker", 1}, {"ACE_DefusalKit", 1}};
    loadoutBackpackInvNew[] = {{"SatchelCharge_Remote_Mag", 1}, {"DemoCharge_Remote_Mag", 1}};
    loadoutVarEOD = 1;
};

// Logistic
class GVAR(USAM_LOG_LEAD): GVAR(USAM_SQL) {
    displayName = "Logistic Leader";
    description = "Logistic Leader";
    loadout = "USAM_LOG_LEAD";
    loadoutGroup = "Logistic";
    loadoutBackpack[] = {"TFAR_rt1523g_big_rhs"};
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USAM_LOG): GVAR(USAM_RFM) {
    displayName = "Logistic Assistant";
    description = "Logistic Assistant";
    loadout = "USAM_LOG";
    loadoutGroup = "Logistic";
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USAM_LOG_MED): GVAR(USAM_FTL) {
    displayName = "Logistic Medic";
    description = "Logistic Medic";
    loadout = "USAM_LOG_MED";
    loadoutGroup = "Logistic";
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_morphine", 6}, {"ACE_epinephrine", 8}, {"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}, {"ACE_tourniquet", 4}, {"H_Cap_usblack", 1}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"ACE_packingBandage", 16}, {"ACE_elasticBandage", 16}, {"ACE_plasmaIV_500", 6}};
    loadoutVarMedic = 2;
    loadoutVarEng = 2;
    loadoutInsignia = QGVAR(medic);
};
