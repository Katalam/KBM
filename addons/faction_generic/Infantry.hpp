#define UNIFORM_1 "VSM_Multicam_Crye_Camo","VSM_Multicam_Crye_SS_Camo"
#define UNIFORM_2 "VSM_Multicam_Crye_Tee_Camo"
#define VEST_1 "VSM_LBT6094_operator_Multicam"
#define VEST_2 "VSM_LBT6094_MG_Multicam"
#define VEST_CREW "VSM_FAPC_Operator_Multicam"
#define HELMET_1 "VSM_OPS_2_multicam","VSM_OPS_multicam"
#define HELMET_CREW "rhsusf_cvc_alt_helmet"
#define BACKPACK_COMPACT "VSM_Multicam_Backpack_Compact"
#define BACKPACK_KITBAG "VSM_Multicam_Backpack_Kitbag"
#define BACKPACK_CARRYALL "VSM_Multicam_carryall"
#define WEAPON_1 "rhs_weap_m4a1_carryhandle"
#define WEAPON_1_AMMO "rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define WEAPON_1_STUFF "rhsusf_acc_anpeq15side_bk","rhsusf_acc_acog",WEAPON_1_AMMO
#define WEAPON_2 "rhs_weap_m4_m320"
#define WEAPON_2_AMMO "1Rnd_HE_Grenade_shell"
#define WEAPON_2_STUFF "rhsusf_acc_anpeq15side_bk","rhsusf_acc_acog",WEAPON_1_AMMO,WEAPON_2_AMMO
#define HANDGUN_1 "rhsusf_weap_m9"
#define HANDGUN_1_AMMO "rhsusf_mag_15Rnd_9x19_FMJ"

class B_Soldier_base_F;
class B_Soldier_F: B_Soldier_base_F {
    class EventHandlers;
    modelsides[] = {3,2,1,0};
};
/*
class I_Story_Crew_F;
class GVAR(tank): I_Story_Crew_F {
    author = "Katalam";
    displayName = "Tank Uniform (American)";
    scope = 2;
    curatorScope = 1;
    uniformClass = "KAT_Tank";
    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\U_Tank_crew_F_CO.paa)};
};
*/

class GVAR(B_empty): B_Soldier_F {
    author = "Katalam";
    displayName = "empty";
    description = "empty";
    loadout = "empty";
    loadoutGroup = ""; // CASE SENSITIVE !
    loadoutRank = "PRIVATE";
    loadoutUniform[] = {};
    loadoutVest[] = {};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {};
    loadoutWeapon[] = { {"", {}},
                        {"", {}}, // secondary
                        {"", {}}, // handgun
                        {"", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    loadoutMedical[] = {{"ACE_packingBandage", 10}, {"ACE_elasticBandage", 8}, {"ACE_tourniquet", 2}, {"adv_aceSplint_splint", 2}, {"ACE_morphine", 1}};
    loadoutNVG[] = {};
    loadoutGrenade[] = {};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {};
    loadoutVestInvNew[] = {};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutVarMedic = 0;
    loadoutVarG = 0.7;
    loadoutVarEng = 0;
    loadoutVarEOD = 0;
    loadoutInsignia = QGVAR(private);
    loadoutScope[] = {};
    loadoutScopeDMR[] = {};
    loadoutGoggle[] = {};
    loadoutLauncher[] = {};
    loadoutSilencer[] = {};
    scope = 1;
    curatorScope = 1;
    faction = "";
    uniformClass = "";
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
        AttributesChanged3DEN = QUOTE(_this call FUNC(addRoleDescription));
    };
};

class GVAR(USAM_RFM): B_Soldier_F {
    author = "Katalam";
    displayName = "Rifleman";
    description = "Rifleman";
    loadout = "USAM_RFM";
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
    loadoutMedical[] = {{"ACE_packingBandage", 10}, {"ACE_elasticBandage", 8}, {"ACE_tourniquet", 2}, {"adv_aceSplint_splint", 2}, {"ACE_morphine", 1}};
    loadoutNVG[] = {"ACE_NVG_Wide", {{"ACE_Flashlight_XL50", 1}, {"ACE_IR_Strobe_Item", 1}}, {{"Chemlight_red", 3}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_mk84", 4}, {"HandGrenade", 2}};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ACRE_PRC152", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 10}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {{"rhsusf_200Rnd_556x45_soft_pouch", 2}};
    loadoutVarMedic = 0;
    loadoutVarG = 0.7;
    loadoutVarEng = 0;
    loadoutVarEOD = 0;
    loadoutInsignia = QGVAR(private);
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
        AttributesChanged3DEN = QUOTE(_this call FUNC(addRoleDescription));
    };
};
class GVAR(USAM_FTL): GVAR(USAM_RFM) {
    displayName = "Fire Team Leader";
    description = "Fire Team Leader";
    loadout = "USAM_FTL";
    loadoutRank = "CORPORAL";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"Binocular", {}}};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ACRE_PRC152", 2}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_mk84", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 2}};
    loadoutInsignia = QGVAR(corporal);
};
class GVAR(USAM_SQL): GVAR(USAM_FTL) {
    displayName = "Squad Leader";
    description = "Squad Leader@Warrior 1-X";
    loadout = "USAM_SQL";
    loadoutRank = "SERGEANT";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ItemcTabHCam", 1}, {"ACRE_PRC152", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"rhs_mag_m18_yellow", 1}, {"rhs_mag_m18_purple", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QGVAR(sergeant);
};
class GVAR(USAM_PTL): GVAR(USAM_SQL) {
    displayName = "Platoon Leader";
    description = "Platoon Leader@Warrior 1";
    loadout = "USAM_PTL";
    loadoutGroup = "Platoon";
    loadoutRank = "LIEUTENANT";
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QGVAR(lieutenant);
};
class GVAR(USAM_CO): GVAR(USAM_PTL) {
    displayName = "Company Commander";
    description = "Company Commander@Warrior";
    loadout = "USAM_CO";
    loadoutGroup = "Company";
    loadoutRank = "CAPTAIN";
    loadoutInsignia = QGVAR(captain);
};
class GVAR(USAM_ADM): GVAR(USAM_PTL) {
    displayName = "Zeus";
    description = "Zeus@Zeus";
    loadout = "USAM_ADM";
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
class GVAR(USAM_CLS): GVAR(USAM_RFM) {
    displayName = "Combat Life Saver";
    description = "Combat Life Saver";
    loadout = "USAM_CLS";
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 20}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}, {"ACE_plasmaIV_500", 5}};
    loadoutVarMedic = 1;
};
class GVAR(USAM_MED): GVAR(USAM_FTL) {
    displayName = "Squad Medic";
    description = "Squad Medic";
    loadout = "USAM_MED";
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 4}};
    loadoutUniformInvNew[] = {{"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}};
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
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutInsignia = QGVAR(medic);
};

// Platoon
class GVAR(USAM_PSG): GVAR(USAM_SQL) {
    displayName = "Platoon Sergeant";
    description = "Platoon Sergeant";
    loadout = "USAM_PSG";
    loadoutGroup = "Platoon";
    loadoutWeapon[] = { {WEAPON_2, {WEAPON_2_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{WEAPON_2_AMMO, 6}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
};
class GVAR(USAM_RTO): GVAR(USAM_RFM) {
    displayName = "RTO";
    description = "RTO - Warrior 1-R";
    loadout = "USAM_RTO";
    loadoutGroup = "Platoon";
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}};
};
class GVAR(USAM_ATC): GVAR(USAM_PSG) {
    displayName = "Air Traffic Controller";
    description = "Air Traffic Controller@Castle";
    loadout = "USAM_ATC";
    loadoutGroup = "Platoon";
    loadoutHeadgear[] = {"VSM_Peltor_coyote"};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"B_UavTerminal", 1}};
    loadoutInsignia = QGVAR(atc);
};
class GVAR(USAM_FO): GVAR(USAM_SQL) {
    displayName = "Joint Fires Observer";
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
    loadoutWeapon[] = { {WEAPON_2, {WEAPON_2_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"Laserdesignator", {"Laserbatteries", 1}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 4}, {"rhs_mag_m18_purple", 2}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{WEAPON_2_AMMO, 3}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1},{"1Rnd_SmokeBlue_Grenade_shell", 3}, {"1Rnd_SmokePurple_Grenade_shell", 3}, {"1Rnd_SmokeRed_Grenade_shell", 3}};
    loadoutInsignia = QGVAR(jtac);
};

// Squad
class GVAR(USAM_LMG): GVAR(USAM_RFM) {
    displayName = "Autorifleman";
    description = "Autorifleman";
    loadout = "USAM_LMG";
    loadoutUniform[] = {UNIFORM_2};
    loadoutVest[] = {VEST_2};
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"hlc_m249_pip3", {"rhsusf_acc_ELCAN", "rhsusf_200Rnd_556x45_soft_pouch"}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutVestInv[] = {{"rhsusf_200Rnd_556x45_soft_pouch", 3}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_UGL): GVAR(USAM_RFM) {
    displayName = "Grenadier";
    description = "Grenadier";
    loadout = "USAM_UGL";
    loadoutWeapon[] = { {WEAPON_2, {WEAPON_2_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {{WEAPON_2_AMMO, 15}};
};
class GVAR(USAM_LAT): GVAR(USAM_RFM) {
    displayName = "Rifleman (AT)";
    description = "Rifleman (AT)";
    loadout = "USAM_LAT";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"rhs_weap_M136", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_MKM): GVAR(USAM_RFM) {
    displayName = "Marksman";
    description = "Marksman";
    loadout = "USAM_MKM";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {"rhs_weap_sr25", {"rhsusf_acc_anpeq15side_bk", "optic_AMS", "rhsusf_acc_harris_bipod", "ACE_20Rnd_762x51_Mag_Tracer"}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 2}};
    loadoutVestInv[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 7}, {HANDGUN_1_AMMO, 4}};
    loadoutVestInvNew[] = {{"rhsusf_acc_acog", 1}, {"ACE_RangeCard", 1}};
    loadoutBackpackInvNew[] = {};
};

// Weapon Squad
class GVAR(USAM_WTL_MMG): GVAR(USAM_SQL) {
    displayName = "Weapon Squad Leader";
    description = "Weapon Squad Leader@Warrior 1-4";
    loadout = "USAM_WTL_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}, {"ACE_EntrenchingTool", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 1}};
    loadoutBackpackInvNew[] = {{"ACE_SpareBarrel", 1}, {"ACRE_PRC117F", 1}};
};
class GVAR(USAM_MMG): GVAR(USAM_RFM) {
    displayName = "Machine Gunner";
    description = "Machine Gunner";
    loadout = "USAM_MMG";
    loadoutGroup = "WeaponSquad";
    loadoutUniform[] = {UNIFORM_2};
    loadoutVest[] = {VEST_2};
    loadoutWeapon[] = { {"rhs_weap_m240B", {"rhsusf_acc_ARDEC_M240", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN", "rhsusf_100Rnd_762x51_m62_tracer"}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 3}};
};
class GVAR(USAM_AMG): GVAR(USAM_RFM) {
    displayName = "Assistant Machine Gunner";
    description = "Assistant Machine Gunner";
    loadout = "USAM_AMG";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"ACE_Vector", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 1}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"ACE_SpareBarrel", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 5}};
};
class GVAR(USAM_WTL_HAT): GVAR(USAM_FTL) {
    displayName = "Weapon Team Leader";
    description = "Weapon Team Leader";
    loadout = "USAM_WTL_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};
class GVAR(USAM_HAT): GVAR(USAM_RFM) {
    displayName = "Antiarmor Gunner";
    description = "Antiarmor Gunner";
    loadout = "USAM_HAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"rhs_weap_fgm148", {"rhs_fgm148_magazine_AT"}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_AAT): GVAR(USAM_RFM) {
    displayName = "Assistant Antiarmor Gunner";
    description = "Assistant Antiarmor Gunner";
    loadout = "USAM_AAT";
    loadoutGroup = "WeaponSquad";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};

// Heavy Weapon Squad
class GVAR(USAM_HWTL_HMG): GVAR(USAM_SQL) {
    displayName = "Heavy Weapon Squad Leader";
    description = "Heavy Weapon Squad Leader@Warrior 1-5";
    loadout = "USAM_HWTL_HMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
};
class GVAR(USAM_HMG): GVAR(USAM_RFM) {
    displayName = "Heavy Machine Gunner";
    description = "Heavy Machine Gunner";
    loadout = "USAM_HMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutUniform[] = {UNIFORM_2};
    loadoutBackpack[] = {"RHS_M2_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_AHG): GVAR(USAM_RFM) {
    displayName = "Assistant Heavy Machine Gunner";
    description = "Assistant Heavy Machine Gunner";
    loadout = "USAM_AHG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_M2_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_HWTL_GMG): GVAR(USAM_FTL) {
    displayName = "Heavy Weapon Team Leader";
    description = "Heavy Weapon Team Leader";
    loadout = "USAM_HWTL_GMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_M2_MiniTripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_GMG): GVAR(USAM_RFM) {
    displayName = "Grenade Machine Gunnner";
    description = "Grenade Machine Gunnner";
    loadout = "USAM_GMG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutUniform[] = {UNIFORM_2};
    loadoutBackpack[] = {"RHS_Mk19_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_AGG): GVAR(USAM_RFM) {
    displayName = "Assistant Grenade Machine Gunnner";
    description = "Assistant Grenade Machine Gunnner";
    loadout = "USAM_AGG";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"RHS_Mk19_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_TOW): GVAR(USAM_RFM) {
    displayName = "TOW Gunner";
    description = "TOW Gunner";
    loadout = "USAM_TOW";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutUniform[] = {UNIFORM_2};
    loadoutBackpack[] = {"rhs_Tow_Gun_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_ATW): GVAR(USAM_RFM) {
    displayName = "Assistant TOW Gunner";
    description = "Assistant TOW Gunner";
    loadout = "USAM_ATW";
    loadoutGroup = "HeavyWeaponSquad";
    loadoutBackpack[] = {"rhs_TOW_Tripod_Bag"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutBackpackInvNew[] = {};
};

// Crew
class GVAR(USAM_CRW_LEAD): GVAR(USAM_SQL) {
    displayName = "Tank Commander";
    description = "Tank Commander@Outlaw 1-X";
    loadout = "USAM_CRW_LEAD";
    loadoutGroup = "Crew";
    loadoutVest[] = {VEST_CREW};
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"SatchelCharge_Remote_Mag", 1}};
    loadoutVarEng = 1;
    loadoutVarEOD = 1;
};
class GVAR(USAM_CRW): GVAR(USAM_RFM) {
    displayName = "Tank Crew";
    description = "Tank Crew";
    loadout = "USAM_CRW";
    loadoutGroup = "Crew";
    loadoutVest[] = {VEST_CREW};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_CREW};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 4}, {HANDGUN_1_AMMO, 2}};
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
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
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
class GVAR(USAM_HELI_PIL_AH): GVAR(USAM_HELI_PIL) {
    displayName = "AH-64 Pilot";
    description = "Helicopter Pilot@Falcon 1-X";
    loadout = "USAM_HELI_PIL_AH";
    loadoutGroup = "Crew";
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
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
class GVAR(USAM_HELI_MED): GVAR(USAM_HELI_CRW) {
    displayName = "Helicopter Medic";
    description = "Helicopter Medic";
    loadout = "USAM_HELI_MED";
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}, {"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QGVAR(medic);
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
class GVAR(USAM_SNI): GVAR(USAM_SQL) {
    displayName = "Recon Sniper";
    description = "Sniper";
    loadout = "USAM_SNI";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_2, {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO, WEAPON_2_AMMO}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"ACE_20Rnd_762x51_Mag_Tracer", 4}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_salineIV_500", 6}, {WEAPON_2_AMMO, 2}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
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
    loadoutBackpack[] = {BACKPACK_CARRYALL};
    loadoutWeapon[] = { {WEAPON_1, {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Yardage450", {}}};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"ACE_SpottingScope", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"ACE_Tripod", 1}, {"ACE_DefusalKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_Sandbag_empty", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_salineIV_500", 6}, {"ACE_surgicalKit", 1}};
    loadoutGunBackpack[] = {};
    loadoutVarMedic = 1;
};
class GVAR(USAM_TL): GVAR(USAM_SPO) {
    displayName = "Recon Team Leader";
    description = "Team Leader@Stalker 1-X";
    loadout = "USAM_TL";
    loadoutGroup = "Other";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", WEAPON_1_AMMO}},
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
class GVAR(USAM_MOR_SQL): GVAR(USAM_SQL) {
    displayName = "Mortar Squad Leader";
    description = "Squad Leader@Black Sheep 1-1";
    loadout = "USAM_MOR_SQL";
    loadoutGroup = "Other";
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"KAT_artilleryTable", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USAM_MOR_ASS): GVAR(USAM_RFM) {
    displayName = "Mortar Assistant Gunner";
    description = "Assistant Gunner";
    loadout = "USAM_MOR_ASS";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"rhs_M252_Gun_Bag"};
    loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_EntrenchingTool", 1}, {"VSM_OPS_2_multicam", 1}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_MOR_GUN): GVAR(USAM_MOR_ASS) {
    displayName = "Mortar Gunner";
    description = "Gunner";
    loadout = "USAM_MOR_GUN";
    loadoutGroup = "Other";
    loadoutBackpack[] = {"rhs_M252_Bipod_Bag"};
    loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"KAT_artilleryTable", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USAM_MOR_AMB): GVAR(USAM_MOR_GUN) {
    displayName = "Mortar Ammunition Bearer";
    description = "Ammunition Bearer";
    loadout = "USAM_MOR_AMB";
    loadoutBackpack[] = {BACKPACK_CARRYALL};
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
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
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
    description = "Logistic Leader@Workhorse 1-1";
    loadout = "USAM_LOG_LEAD";
    loadoutGroup = "Logistic";
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"ACRE_PRC117F", 1}, {"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USAM_LOG): GVAR(USAM_RFM) {
    displayName = "Logistic Assistant";
    description = "Logistic Assistant";
    loadout = "USAM_LOG";
    loadoutGroup = "Logistic";
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"H_Cap_usblack", 1}};
    loadoutVarEng = 2;
};
class GVAR(USAM_LOG_MED): GVAR(USAM_FTL) {
    displayName = "Logistic Medic";
    description = "Logistic Medic";
    loadout = "USAM_LOG_MED";
    loadoutGroup = "Logistic";
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutHeadgear[] = {"rhs_beanie"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 6}, {HANDGUN_1_AMMO, 2}};
    loadoutVestInvNew[] = {{"ACE_morphine", 6}, {"ACE_epinephrine", 8}, {"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}, {"ACE_tourniquet", 4}, {"H_Cap_usblack", 1}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"ACE_packingBandage", 16}, {"ACE_elasticBandage", 16}, {"ACE_plasmaIV_500", 6}};
    loadoutVarMedic = 2;
    loadoutVarEng = 2;
    loadoutInsignia = QGVAR(medic);
};
