#undef UNIFORM_1
#undef VEST_1
#undef HELMET_1
#undef HELMET_2
#undef HELMET_CREW
#undef BACKPACK_COMPACT
#undef BACKPACK_KITBAG
#undef BACKPACK_CARRYALL
#undef WEAPON_1
#undef WEAPON_1_AMMO
#undef WEAPON_1_STUFF
#undef HANDGUN_1
#undef HANDGUN_1_AMMO
#undef HANDGUN_2
#undef HANDGUN_2_AMMO

#define UNIFORM_1 "usm_bdu_dcu_m"
#define VEST_RFM "usm_vest_pasgt_lbv_rm_m"
#define VEST_LMG "usm_vest_pasgt_lbv_mg_m"
#define VEST_UGL "usm_vest_pasgt_lbv_gr_m"
#define HELMET_1 "usm_helmet_pasgt_g_dcu_m","usm_helmet_pasgt_dcu_m"
#define HELMET_CREW "usm_helmet_cvc"
#define BACKPACK_CLS "usm_pack_m5_medic"
#define BACKPACK_LMG "usm_pack_762x51_ammobelts"
#define BACKPACK_ALG "usm_pack_762x51_bandoliers"
#define BACKPACK_77L "usm_pack_alice_prc77"
#define BACKPACK_77 "usm_pack_st138_prc77"
#define BACKPACK_L "usm_pack_alice"
#define WEAPON_1 "hlc_wp_m16a2"
#define WEAPON_1_AMMO "rhs_mag_30Rnd_556x45_M855_Stanag"
#define WEAPON_1_STUFF WEAPON_1_AMMO
#define WEAPON_1_STUFF_SGT WEAPON_1_AMMO,"rhsusf_acc_T1_low"
#define WEAPON_2 "hlc_rifle_m203"
#define WEAPON_2_AMMO "1Rnd_HE_Grenade_shell"
#define WEAPON_2_STUFF WEAPON_1_AMMO,WEAPON_2_AMMO
#define WEAPON_3 "hlc_lmg_M249E2"
#define WEAPON_3_AMMO "rhsusf_100Rnd_556x45_soft_pouch"
#define WEAPON_3_STUFF WEAPON_3_AMMO

class GVAR(USMC03_RFM): EGVAR(faction_generic,B_empty) {
    author = "Katalam";
    displayName = "Rifleman";
    description = "Rifleman";
    loadout = "USMC03_RFM";
    loadoutGroup = "Squad"; // CASE SENSITIVE !
    loadoutRank = "PRIVATE";
    loadoutUniform[] = {UNIFORM_1};
    loadoutVest[] = {VEST_RFM};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_1};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutNVG[] = {"", {}};
    loadoutGrenade[] = {{"SmokeShell", 2}, {"HandGrenade", 2}};
    loadoutUniformInv[] = {{"ACRE_PRC343", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 10}};
    loadoutVestInvNew[] = {{WEAPON_1_AMMO, 5}};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutInsignia = QEGVAR(faction_generic,private);
    loadoutScope[] = {};
    loadoutScopeDMR[] = {};
    loadoutGoggle[] = {};
    loadoutLauncher[] = {{"Remove", "REMOVE", ""}, {"M136", "rhs_weap_M136", "rhs_m136_mag"}};
    loadoutSilencer[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_2003);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC03_FTL): GVAR(USMC03_RFM) {
    displayName = "Fire Team Leader";
    description = "Fire Team Leader";
    loadout = "USMC03_FTL";
    loadoutRank = "CORPORAL";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"Binocular", {}}}; // binocular
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACRE_PRC343", 2}};
    loadoutVestInvNew[] = {{WEAPON_1_AMMO, 5}};
    loadoutGrenade[] = {{"SmokeShell", 2}, {"SmokeShellGreen", 1}, {"HandGrenade", 1}};
    loadoutInsignia = QEGVAR(faction_generic,corporal);
};
class GVAR(USMC03_SQL): GVAR(USMC03_FTL) {
    displayName = "Squad Leader";
    description = "Squad Leader@Warrior 1-X";
    loadout = "USMC03_SQL";
    loadoutRank = "SERGEANT";
    loadoutHeadgear[] = {HELMET_1};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF_SGT}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"Binocular", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACRE_PRC343", 1}};
    loadoutBackpack[] = {BACKPACK_77};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {{"ACRE_PRC77", 1}};
    loadoutInsignia = QEGVAR(faction_generic,sergeant);
};
class GVAR(USMC03_PTL): GVAR(USMC03_SQL) {
    displayName = "Platoon Leader";
    description = "Platoon Leader@Warrior 1";
    loadout = "USMC03_PTL";
    loadoutGroup = "Platoon";
    loadoutRank = "LIEUTENANT";
    loadoutInsignia = QEGVAR(faction_generic,lieutenant);
};
class GVAR(USMC03_ADM): GVAR(USMC03_PTL) {
    displayName = "Zeus";
    description = "Zeus@Zeus";
    loadout = "USMC03_ADM";
    loadoutGroup = "Company";
    loadoutRank = "COLONEL";
    loadoutHeadgear[] = {"usm_bdu_8point_dcu_m"};
    loadoutBackpackInv[] = {};
    loadoutVarMedic = 2;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutVarEOD = 1;
    loadoutInsignia = "Curator";
};
class GVAR(USMC03_MED): GVAR(USMC03_FTL) {
    displayName = "Squad Medic";
    description = "Squad Medic";
    loadout = "USMC03_MED";
    loadoutBackpack[] = {BACKPACK_CLS};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"SmokeShell", 2}, {"SmokeShellGreen", 2}};
    loadoutUniformInvNew[] = {{"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QEGVAR(faction_generic,medic);
};
class GVAR(USMC03_PSG): GVAR(USMC03_SQL) {
    displayName = "Platoon Sergeant";
    description = "Platoon Sergeant";
    loadout = "USMC03_PSG";
    loadoutGroup = "Platoon";
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}};
};
class GVAR(USMC03_RTO): GVAR(USMC03_RFM) {
    displayName = "RTO";
    description = "RTO - Warrior 1-R";
    loadout = "USMC03_RTO";
    loadoutGroup = "Platoon";
    loadoutBackpack[] = {BACKPACK_77};
    loadoutBackpackInvNew[] = {{"ACRE_PRC77", 1}};
};
class GVAR(USMC03_LMG): GVAR(USMC03_RFM) {
    displayName = "Automatic Rifleman";
    description = "Automatic Rifleman";
    loadout = "USMC03_LMG";
    loadoutWeapon[] = { {WEAPON_3, {WEAPON_3_STUFF}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutVest[] = {VEST_LMG};
    loadoutVestInv[] = {{WEAPON_3_AMMO, 6}};
    loadoutBackpack[] = {BACKPACK_LMG};
    loadoutBackpackInvNew[] = {{WEAPON_3_AMMO, 4}};
};
class GVAR(USMC03_ALG): GVAR(USMC03_RFM) {
    displayName = "Ass. Automatic Rifleman";
    description = "Ass. Automatic Rifleman";
    loadout = "USMC03_ALG";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutVestInvNew[] = {{WEAPON_3_AMMO, 2}};
    loadoutBackpack[] = {BACKPACK_ALG};
    loadoutBackpackInvNew[] = {{WEAPON_3_AMMO, 9}};
};
class GVAR(USMC03_UGL): GVAR(USMC03_RFM) {
    displayName = "Grenadier";
    description = "Grenadier";
    loadout = "USMC03_UGL";
    loadoutWeapon[] = { {WEAPON_2, {WEAPON_2_STUFF}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutVest[] = {VEST_UGL};
    loadoutVestInvNew[] = {{WEAPON_1_AMMO, 5}};
    loadoutBackpack[] = {BACKPACK_L};
    loadoutBackpackInvNew[] = {{WEAPON_2_AMMO, 30}};
};
class GVAR(USMC03_LAT): GVAR(USMC03_RFM) {
    displayName = "Rifleman (AT)";
    description = "Rifleman (AT)";
    loadout = "USMC03_LAT";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"rhs_weap_M136", {"rhs_m136_mag"}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutVestInvNew[] = {{WEAPON_1_AMMO, 5}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC03_CRW_LEAD): GVAR(USMC03_SQL) {
    displayName = "Tank Commander";
    description = "Tank Commander@Outlaw 1-X";
    loadout = "USMC03_CRW_LEAD";
    loadoutGroup = "Crew";
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}};
    loadoutBackpackInvNew[] = {};
    loadoutVarEng = 1;
};
class GVAR(USMC03_CRW): GVAR(USMC03_RFM) {
    displayName = "Tank Crew";
    description = "Tank Crew";
    loadout = "USMC03_CRW";
    loadoutGroup = "Crew";
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}};
    loadoutBackpackInvNew[] = {};
    loadoutVarEng = 1;
};
class GVAR(USMC03_HELI_PIL): GVAR(USMC03_SQL) {
    displayName = "Helicopter Pilot";
    description = "Helicopter Pilot@Super 1-X";
    loadout = "USMC03_HELI_PIL";
    loadoutGroup = "Crew";
    loadoutHeadgear[] = {"rhsusf_hgu56p"};
    loadoutVarMedic = 1;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutHelmet[] = { "rhsusf_hgu56p_black", "rhsusf_hgu56p_visor_black", "rhsusf_hgu56p_visor_mask_Empire_black",
                        "rhsusf_hgu56p_green", "rhsusf_hgu56p_visor_green", "rhsusf_hgu56p", "rhsusf_hgu56p_visor",
                        "rhsusf_hgu56p_pink", "rhsusf_hgu56p_visor_pink", "rhsusf_hgu56p_saf", "rhsusf_hgu56p_visor_saf",
                        "rhsusf_hgu56p_usa", "rhsusf_hgu56p_visor_usa", "rhsusf_hgu56p_white", "rhsusf_hgu56p_visor_white",
                        "rhsusf_ihadss"};
};
class GVAR(USMC03_HELI_CRW): GVAR(USMC03_RFM) {
    displayName = "Helicopter Crew";
    description = "Helicopter Crew";
    loadout = "USMC03_HELI_CRW";
    loadoutGroup = "Crew";
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {"rhsusf_hgu56p_visor_mask_skull"};
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
class GVAR(USMC03_SNI): GVAR(USMC03_SQL) {
    displayName = "Recon Sniper";
    description = "Sniper";
    loadout = "USMC03_SNI";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF_SGT}},
                        {"", {}},
                        {"", {}},
                        {"ACE_Yardage450", {}}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"rhsusf_5Rnd_762x51_m118_special_Mag", 4}};
    loadoutVestInvNew[] = {{"ACE_salineIV_500", 6}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_m24sws_d", {"optic_LRPS", "rhsusf_acc_harris_swivel"}, {{"rhsusf_5Rnd_762x51_m62_Mag", 10}}}};
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
    loadoutVarMedic = 1;
};
class GVAR(USMC03_SPO): GVAR(USMC03_SNI) {
    displayName = "Recon Spotter";
    description = "Spotter";
    loadout = "USMC03_SPO";
    loadoutGroup = "Other";
    loadoutBackpack[] = {BACKPACK_77L};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"rhsusf_5Rnd_762x51_m118_special_Mag", 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"ACE_SpottingScope", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC77", 1}, {"ACE_Tripod", 1}, {"ACE_DefusalKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_Sandbag_empty", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_salineIV_500", 6}, {"ACE_surgicalKit", 1}};
    loadoutGunBackpack[] = {};
    loadoutVarMedic = 1;
};
class GVAR(USMC03_TL): GVAR(USMC03_SPO) {
    displayName = "Recon Team Leader";
    description = "Team Leader@Stalker 1-X";
    loadout = "USMC03_TL";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}, {"rhsusf_5Rnd_762x51_m62_Mag", 4}, {"rhsusf_mag_10Rnd_STD_50BMG_M33", 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"adv_aceCPR_AED", 1}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_M107", {"rhsusf_acc_harris_bipod", "optic_LRPS"}, {{"rhsusf_mag_10Rnd_STD_50BMG_M33", 5}}}};
    loadoutVarMedic = 2;
    loadoutVarEOD = 1;
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
};
class GVAR(USMC03_EOD): GVAR(USMC03_RFM) {
    displayName = "EOD";
    description = "EOD";
    loadout = "USMC03_EOD";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"ACE_VMM3", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutUniformInvNew[] = {{"ACE_Clacker", 1}, {"ACE_DefusalKit", 1}};
    loadoutVestInvNew[] = {{"DemoCharge_Remote_Mag", 2}};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarEOD = 1;
};
