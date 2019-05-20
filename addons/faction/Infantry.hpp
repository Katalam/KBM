#define UNIFORM_1 "rhs_uniform_FROG01_d"
#define VEST_1 "VSM_RAV_operator_OGA"
#define HELMET_1 "rhsusf_lwh_helmet_marpatd","rhsusf_lwh_helmet_marpatd_ess"
#define HELMET_2 "rhsusf_lwh_helmet_marpatd_headset"
#define HELMET_CREW "rhsusf_cvc_alt_helmet"
#define BACKPACK_COMPACT "VSM_OGA_Backpack_Compact"
#define BACKPACK_KITBAG "VSM_OGA_Backpack_Kitbag"
#define BACKPACK_CARRYALL "VSM_OGA_carryall"
#define WEAPON_1 "hlc_rifle_M27IAR"
#define WEAPON_1_AMMO "rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define WEAPON_1_STUFF "rhsusf_acc_anpeq15_bk_light","rhsusf_acc_acog","rhsusf_acc_harris_bipod",WEAPON_1_AMMO
#define HANDGUN_1 "hlc_pistol_P229R_357"
#define HANDGUN_1_AMMO "hlc_12Rnd_357SIG_B_P226"
#define HANDGUN_2 "rhs_weap_M320"
#define HANDGUN_2_AMMO "1Rnd_HE_Grenade_shell"

class EGVAR(faction_generic,B_empty);
class GVAR(USMC_RFM): EGVAR(faction_generic,B_empty) {
    author = "Katalam";
    displayName = "Rifleman";
    description = "Rifleman";
    loadout = "USMC_RFM";
    loadoutGroup = "Squad"; // CASE SENSITIVE !
    loadoutRank = "PRIVATE";
    loadoutUniform[] = {UNIFORM_1};
    loadoutVest[] = {VEST_1};
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutHeadgear[] = {HELMET_1};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR"};
    loadoutNVG[] = {"ACE_NVG_Wide", {{"ACE_Flashlight_XL50", 1}, {"ACE_IR_Strobe_Item", 1}}, {{"Chemlight_red", 3}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_mk84", 4}, {"HandGrenade", 2}};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ACRE_PRC152", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 10}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {{"rhs_mag_maaws_HEAT", 1}};
    loadoutInsignia = QEGVAR(faction_generic,private);
    loadoutScope[] = {  {"RCO","optic_hamr"}, {"ACOG RMR","rhsusf_acc_ACOG_RMR"}, {"G33 + XPS3","rhsusf_acc_g33_xps3"},
                        {"EOTECH","rhsusf_acc_eotech_552"}, {"ELCAN SpectreDR","rhsusf_acc_su230a_mrds"},
                        {"ACOG","rhsusf_acc_acog"}};
    loadoutScopeDMR[] = {};
    loadoutGoggle[] = {     {"Black", "rhs_googles_black"}, {"Yellow", "rhs_googles_yellow"}, {"Orange", "rhs_googles_orange"},
                            {"Big Black", "rhs_ess_black"}, {"Clear", "rhs_googles_clear"}, {"Remove", "REMOVE"}};
    loadoutLauncher[] = {   {"Remove", "REMOVE", ""}, {"M72A7", "rhs_weap_m72a7", "rhs_m72a7_mag"}, {"M136", "rhs_weap_M136", "rhs_m136_mag"}};
    loadoutSilencer[] = {{"Rotex III", "hlc_muzzle_556NATO_rotexiiic_grey"}};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USMC_D);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_FTL): GVAR(USMC_RFM) {
    displayName = "Fire Team Leader";
    description = "Fire Team Leader";
    loadout = "USMC_FTL";
    loadoutRank = "CORPORAL";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"Binocular", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ACRE_PRC152", 2}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_mk84", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 2}};
    loadoutInsignia = QEGVAR(faction_generic,corporal);
};
class GVAR(USMC_SQL): GVAR(USMC_FTL) {
    displayName = "Squad Leader";
    description = "Squad Leader@Warrior 1-X";
    loadout = "USMC_SQL";
    loadoutRank = "SERGEANT";
    loadoutHeadgear[] = {HELMET_2};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"ACE_Vector", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ItemcTabHCam", 1}, {"ACRE_PRC152", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"rhs_mag_m18_yellow", 1}, {"rhs_mag_m18_purple", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QEGVAR(faction_generic,sergeant);
};
class GVAR(USMC_PTL): GVAR(USMC_SQL) {
    displayName = "Platoon Leader";
    description = "Platoon Leader@Warrior 1";
    loadout = "USMC_PTL";
    loadoutGroup = "Platoon";
    loadoutRank = "LIEUTENANT";
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QEGVAR(faction_generic,lieutenant);
};
class GVAR(USMC_CO): GVAR(USMC_PTL) {
    displayName = "Company Commander";
    description = "Company Commander@Warrior";
    loadout = "USMC_CO";
    loadoutGroup = "Company";
    loadoutRank = "CAPTAIN";
    loadoutInsignia = QEGVAR(faction_generic,captain);
};
class GVAR(USMC_ADM): GVAR(USMC_PTL) {
    displayName = "Zeus";
    description = "Zeus@Zeus";
    loadout = "USMC_ADM";
    loadoutGroup = "Company";
    loadoutRank = "COLONEL";
    loadoutHeadgear[] = {"H_Beret_02"};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR"};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}};
    loadoutVarMedic = 2;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutVarEOD = 1;
    loadoutInsignia = "Curator";
};

// Medic
class GVAR(USMC_CLS): GVAR(USMC_RFM) {
    displayName = "Combat Life Saver";
    description = "Combat Life Saver";
    loadout = "USMC_CLS";
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 20}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}, {"ACE_plasmaIV_500", 5}};
    loadoutVarMedic = 1;
};
class GVAR(USMC_MED): GVAR(USMC_FTL) {
    displayName = "Squad Medic";
    description = "Squad Medic";
    loadout = "USMC_MED";
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 4}};
    loadoutUniformInvNew[] = {{"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QEGVAR(faction_generic,medic);
};
class GVAR(USMC_MED_LEAD): GVAR(USMC_MED) {
    displayName = "Platoon Medic";
    description = "Platoon Medic";
    loadout = "USMC_MED_LEAD";
    loadoutGroup = "Platoon";
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
};
class GVAR(USMC_MED_LEAD_C): GVAR(USMC_SQL) {
    displayName = "Company Medic";
    description = "Company Medic";
    loadout = "USMC_MED_LEAD_C";
    loadoutGroup = "Company";
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutInsignia = QEGVAR(faction_generic,medic);
};

// Platoon
class GVAR(USMC_PSG): GVAR(USMC_SQL) {
    displayName = "Platoon Sergeant";
    description = "Platoon Sergeant";
    loadout = "USMC_PSG";
    loadoutGroup = "Platoon";
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}};
};
class GVAR(USMC_RTO): GVAR(USMC_RFM) {
    displayName = "RTO";
    description = "RTO - Warrior 1-R";
    loadout = "USMC_RTO";
    loadoutGroup = "Platoon";
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}};
};
class GVAR(USMC_ATC): GVAR(USMC_PSG) {
    displayName = "ATC";
    description = "ATC@Castle";
    loadout = "USMC_ATC";
    loadoutGroup = "Platoon";
    loadoutHeadgear[] = {"VSM_Peltor_coyote"};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"B_UavTerminal", 1}};
    loadoutInsignia = QEGVAR(faction_generic,atc);
};
class GVAR(USMC_FO): GVAR(USMC_SQL) {
    displayName = "JFO";
    description = "JFO - Warrior 1-F";
    loadout = "USMC_FO";
    loadoutGroup = "Platoon";
    loadoutInsignia = QGVAR(jfo);
};
class GVAR(USMC_JTAC): GVAR(USMC_SQL) {
    displayName = "JTAC";
    description = "JTAC - Warrior 1-J";
    loadout = "USMC_JTAC";
    loadoutGroup = "Platoon";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_2, {HANDGUN_2_AMMO}}, // handgun
                        {"Laserdesignator", {"Laserbatteries"}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 4}, {"rhs_mag_m18_purple", 2}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{HANDGUN_2_AMMO, 3}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1},{"1Rnd_SmokeBlue_Grenade_shell", 3}, {"1Rnd_SmokePurple_Grenade_shell", 3}, {"1Rnd_SmokeRed_Grenade_shell", 3}};
    loadoutInsignia = QEGVAR(faction_generic,jtac);
};

// Squad
class GVAR(USMC_UGL): GVAR(USMC_RFM) {
    displayName = "Grenadier";
    description = "Grenadier";
    loadout = "USMC_UGL";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_2, {HANDGUN_2_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutBackpackInvNew[] = {{HANDGUN_2_AMMO, 15}};
};
class GVAR(USMC_LAT): GVAR(USMC_RFM) {
    displayName = "Rifleman (AT)";
    description = "Rifleman (AT)";
    loadout = "USMC_LAT";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"rhs_weap_maaws", {"rhs_mag_maaws_HEAT"}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_MKM): GVAR(USMC_RFM) {
    displayName = "Marksman";
    description = "Marksman";
    loadout = "USMC_MKM";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m14ebrri", {"rhsusf_acc_anpeq15side_bk", "optic_AMS", "rhsusf_acc_harris_bipod", "ACE_20Rnd_762x51_Mag_Tracer"}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 2}};
    loadoutVestInv[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 7}, {HANDGUN_1_AMMO, 4}};
    loadoutVestInvNew[] = {{"rhsusf_acc_acog", 1}, {"ACE_RangeCard", 1}};
    loadoutBackpackInvNew[] = {};
};

// Weapon Squad
class GVAR(USMC_WTL_MMG): GVAR(USMC_SQL) {
    displayName = "Weapon Squad Leader";
    description = "Weapon Squad Leader@Warrior 1-4";
    loadout = "USMC_WTL_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}, {"ACE_EntrenchingTool", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 1}};
    loadoutBackpackInvNew[] = {{"ACE_SpareBarrel", 1}, {"ACRE_PRC117F", 1}};
};
class GVAR(USMC_MMG): GVAR(USMC_RFM) {
    displayName = "Machine Gunner";
    description = "Machine Gunner";
    loadout = "USMC_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutUniform[] = {UNIFORM_1};
    loadoutVest[] = {VEST_1};
    loadoutWeapon[] = { {"rhs_weap_m240B", {"rhsusf_acc_ARDEC_M240", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN", "rhsusf_100Rnd_762x51_m62_tracer"}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}};
};
class GVAR(USMC_AMG): GVAR(USMC_RFM) {
    displayName = "Assistant Machine Gunner";
    description = "Assistant Machine Gunner";
    loadout = "USMC_AMG";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", WEAPON_1_AMMO}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"ACE_Vector", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 1}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"ACE_SpareBarrel", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 5}};
};
class GVAR(USMC_WTL_HAT): GVAR(USMC_FTL) {
    displayName = "Weapon Team Leader";
    description = "Weapon Team Leader";
    loadout = "USMC_WTL_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};
class GVAR(USMC_HAT): GVAR(USMC_RFM) {
    displayName = "Antiarmor Gunner";
    description = "Antiarmor Gunner";
    loadout = "USMC_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", WEAPON_1_AMMO}},
                        {"rhs_weap_fgm148", {"rhs_fgm148_magazine_AT"}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_AAT): GVAR(USMC_RFM) {
    displayName = "Assistant Antiarmor Gunner";
    description = "Assistant Antiarmor Gunner";
    loadout = "USMC_AAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};

// Heavy Weapon Squad
class GVAR(USMC_HWTL_HMG): GVAR(USMC_SQL) {
    displayName = "Heavy Weapon Squad Leader";
    description = "Heavy Weapon Squad Leader@Warrior 1-5";
    loadout = "USMC_HWTL_HMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
};
class GVAR(USMC_HMG): GVAR(USMC_RFM) {
    displayName = "Heavy Machine Gunner";
    description = "Heavy Machine Gunner";
    loadout = "USMC_HMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_M2_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_AHG): GVAR(USMC_RFM) {
    displayName = "Assistant Heavy Machine Gunner";
    description = "Assistant Heavy Machine Gunner";
    loadout = "USMC_AHG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_M2_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_HWTL_GMG): GVAR(USMC_FTL) {
    displayName = "Heavy Weapon Team Leader";
    description = "Heavy Weapon Team Leader";
    loadout = "USMC_HWTL_GMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_M2_MiniTripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_GMG): GVAR(USMC_RFM) {
    displayName = "Grenade Machine Gunnner";
    description = "Grenade Machine Gunnner";
    loadout = "USMC_GMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_Mk19_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_AGG): GVAR(USMC_RFM) {
    displayName = "Assistant Grenade Machine Gunnner";
    description = "Assistant Grenade Machine Gunnner";
    loadout = "USMC_AGG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_Mk19_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_TOW): GVAR(USMC_RFM) {
    displayName = "TOW Gunner";
    description = "TOW Gunner";
    loadout = "USMC_TOW";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"rhs_Tow_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_ATW): GVAR(USMC_RFM) {
    displayName = "Assistant TOW Gunner";
    description = "Assistant TOW Gunner";
    loadout = "USMC_ATW";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"rhs_TOW_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};

// Crew
class GVAR(USMC_CRW_LEAD): GVAR(USMC_SQL) {
    displayName = "Tank Commander";
    description = "Tank Commander@Outlaw 1-X";
    loadout = "USMC_CRW_LEAD";
    loadoutGroup = "Crew";
    loadoutVest[] = {"VSM_FAPC_Operator_Multicam"};
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"SatchelCharge_Remote_Mag", 1}};
    loadoutVarEng = 1;
    loadoutVarEOD = 1;
};
class GVAR(USMC_CRW): GVAR(USMC_RFM) {
    displayName = "Tank Crew";
    description = "Tank Crew";
    loadout = "USMC_CRW";
    loadoutGroup = "Crew";
    loadoutVest[] = {"VSM_FAPC_Operator_Multicam"};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {};
    loadoutVarEng = 1;
};
class GVAR(USMC_HELI_PIL): GVAR(USMC_SQL) {
    displayName = "Helicopter Pilot";
    description = "Helicopter Pilot@Super 1-X";
    loadout = "USMC_HELI_PIL";
    loadoutGroup = "Crew";
    loadoutVest[] = {"V_TacVest_khk"};
    loadoutHeadgear[] = {"rhsusf_hgu56p"};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", WEAPON_1_AMMO}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutUniformInvNew[] = {{WEAPON_1_AMMO, 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 2}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}};
    loadoutVarMedic = 1;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutHelmet[] = { "rhsusf_hgu56p_black", "rhsusf_hgu56p_visor_black", "rhsusf_hgu56p_visor_mask_Empire_black",
                        "rhsusf_hgu56p_green", "rhsusf_hgu56p_visor_green", "rhsusf_hgu56p", "rhsusf_hgu56p_visor",
                        "rhsusf_hgu56p_pink", "rhsusf_hgu56p_visor_pink", "rhsusf_hgu56p_saf", "rhsusf_hgu56p_visor_saf",
                        "rhsusf_hgu56p_usa", "rhsusf_hgu56p_visor_usa", "rhsusf_hgu56p_white", "rhsusf_hgu56p_visor_white",
                        "rhsusf_ihadss"};
};
class GVAR(USMC_HELI_PIL_AH): GVAR(USMC_HELI_PIL) {
    displayName = "AH-64 Pilot";
    description = "Helicopter Pilot@Falcon 1-X";
    loadout = "USMC_HELI_PIL_AH";
    loadoutGroup = "Crew";
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutHeadgear[] = {"rhsusf_ihadss"};
};
class GVAR(USMC_HELI_CRW): GVAR(USMC_RFM) {
    displayName = "Helicopter Crew";
    description = "Helicopter Crew";
    loadout = "USMC_HELI_CRW";
    loadoutGroup = "Crew";
    loadoutVest[] = {"V_TacVest_khk"};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {"rhsusf_hgu56p_visor_mask_skull"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutUniformInvNew[] = {{WEAPON_1_AMMO, 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 2}, {HANDGUN_1_AMMO, 2}};
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
class GVAR(USMC_HELI_MED): GVAR(USMC_HELI_CRW) {
    displayName = "Helicopter Medic";
    description = "Helicopter Medic";
    loadout = "USMC_HELI_MED";
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}, {"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QGVAR(medic);
};
class GVAR(USMC_JET): GVAR(USMC_SQL) {
    displayName = "Jet Pilot";
    description = "Jet Pilot";
    loadout = "USMC_JET";
    loadoutGroup = "Crew";
    loadoutUniform[] = {"U_B_PilotCoveralls"};
    loadoutVest[] = {};
    loadoutBackpack[] = {"B_Parachute"};
    loadoutHeadgear[] = {"H_PilotHelmetFighter_B"};
    loadoutWeapon[] = { {"", {}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACRE_PRC152", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarMedic = 1;
    loadoutVarG = 0.3;
    loadoutVarEng = 1;
    uniformClass = "U_B_PilotCoveralls";
};

// Sniper
class GVAR(USMC_SNI): GVAR(USMC_SQL) {
    displayName = "Recon Sniper";
    description = "Sniper";
    loadout = "USMC_SNI";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO, HANDGUN_2_AMMO}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"ACE_20Rnd_762x51_Mag_Tracer", 4}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_salineIV_500", 6}, {HANDGUN_2_AMMO, 2}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_M107_d", {"optic_LRPS"}, {{"rhsusf_mag_10Rnd_STD_50BMG_M33", 10}}}};
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
    loadoutVarMedic = 1;
};
class GVAR(USMC_SPO): GVAR(USMC_SNI) {
    displayName = "Recon Spotter";
    description = "Spotter";
    loadout = "USMC_SPO";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"ACE_SpottingScope", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"ACE_Tripod", 1}, {"ACE_DefusalKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_Sandbag_empty", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_salineIV_500", 6}, {"ACE_surgicalKit", 1}};
    loadoutGunBackpack[] = {};
    loadoutVarMedic = 1;
};
class GVAR(USMC_TL): GVAR(USMC_SPO) {
    displayName = "Recon Team Leader";
    description = "Team Leader@Stalker 1-X";
    loadout = "USMC_TL";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 2}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {"ACE_20Rnd_762x51_Mag_Tracer", 2}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"adv_aceCPR_AED", 1}};
    loadoutBackpackInvNew[] = {};
    loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_sr25", {"rhsusf_acc_SR25S", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_harris_bipod", "optic_LRPS"}, {{"ACE_20Rnd_762x51_Mag_Tracer", 20}}}};
    loadoutVarMedic = 2;
    loadoutVarEOD = 1;
    loadoutScopeDMR[] = {{"LRPS", "optic_LRPS"}, {"DMS", "optic_DMS"}, {"Khalia", "optic_KHS_blk"}, {"AMS", "optic_AMS"}};
};

// Mortar
class GVAR(USMC_MOR_SQL): GVAR(USMC_SQL) {
    displayName = "Mortar Squad Leader";
    description = "Squad Leader@Black Sheep 1-1";
    loadout = "USMC_MOR_SQL";
    loadoutGroup = "Other";
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"KAT_artilleryTable", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USMC_MOR_ASS): GVAR(USMC_RFM) {
    displayName = "Mortar Assistant Gunner";
    description = "Assistant Gunner";
    loadout = "USMC_MOR_ASS";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"rhs_M252_Gun_Bag"};
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_EntrenchingTool", 1}, {"VSM_OPS_2_multicam", 1}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USMC_MOR_GUN): GVAR(USMC_MOR_ASS) {
    displayName = "Mortar Gunner";
    description = "Gunner";
    loadout = "USMC_MOR_GUN";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"rhs_M252_Bipod_Bag"};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"KAT_artilleryTable", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USMC_MOR_AMB): GVAR(USMC_MOR_GUN) {
    displayName = "Mortar Ammunition Bearer";
    description = "Ammunition Bearer";
    loadout = "USMC_MOR_AMB";
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}};
    loadoutBackpackInvNew[] = {{"ACE_1Rnd_82mm_Mo_HE", 5}, {"ACE_1Rnd_82mm_Mo_Smoke", 1}};
};

// Rifleman (Extra)
class GVAR(USMC_EOD): GVAR(USMC_RFM) {
    displayName = "EOD";
    description = "EOD";
    loadout = "USMC_EOD";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", WEAPON_1_AMMO}},
                        {"ACE_VMM3", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutUniformInvNew[] = {{"ACE_Clacker", 1}, {"ACE_DefusalKit", 1}, {WEAPON_1_AMMO, 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 8}};
    loadoutVestInvNew[] = {{"DemoCharge_Remote_Mag", 2}};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarEOD = 1;
};
class GVAR(USMC_ESP): GVAR(USMC_RFM) {
    displayName = "Rifleman (Explosives)";
    description = "Rifleman (Explosives)";
    loadout = "USMC_ESP";
    loadoutGroup = "Other";
    loadoutUniformInvNew[] = {{"ACE_Clacker", 1}, {"ACE_DefusalKit", 1}};
    loadoutBackpackInvNew[] = {{"SatchelCharge_Remote_Mag", 1}, {"DemoCharge_Remote_Mag", 1}};
    loadoutVarEOD = 1;
};

// Logistic
class GVAR(USMC_LOG_LEAD): GVAR(USMC_SQL) {
    displayName = "Logistic Leader";
    description = "Logistic Leader@Workhorse 1-1";
    loadout = "USMC_LOG_LEAD";
    loadoutGroup = "Logistic";
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USMC_LOG): GVAR(USMC_RFM) {
    displayName = "Logistic Assistant";
    description = "Logistic Assistant";
    loadout = "USMC_LOG";
    loadoutGroup = "Logistic";
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USMC_LOG_MED): GVAR(USMC_FTL) {
    displayName = "Logistic Medic";
    description = "Logistic Medic";
    loadout = "USMC_LOG_MED";
    loadoutGroup = "Logistic";
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_morphine", 6}, {"ACE_epinephrine", 8}, {"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}, {"ACE_tourniquet", 4}, {"H_Cap_usblack", 1}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"ACE_packingBandage", 16}, {"ACE_elasticBandage", 16}, {"ACE_plasmaIV_500", 6}};
    loadoutVarMedic = 2;
    loadoutVarEng = 2;
    loadoutInsignia = QGVAR(medic);
};
