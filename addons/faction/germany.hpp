#undef UNIFORM_1
#undef VEST_RFM
#undef VEST_LMG
#undef VEST_UGL
#undef HELMET_1
#undef HELMET_CREW
#undef BACKPACK_CLS
#undef BACKPACK_LMG
#undef BACKPACK_ALG
#undef BACKPACK_77L
#undef BACKPACK_77
#undef BACKPACK_L
#undef WEAPON_1
#undef WEAPON_1_AMMO
#undef WEAPON_1_STUFF
#undef WEAPON_1_STUFF_SGT
#undef WEAPON_2
#undef WEAPON_2_AMMO
#undef WEAPON_2_STUFF
#undef WEAPON_3
#undef WEAPON_3_AMMO
#undef WEAPON_3_STUFF

#define UNIFORM_1 "PBW_Uniform3_fleck","PBW_Uniform3K_fleck","PBW_Uniform4_fleck","PBW_Uniform4K_fleck"
#define UNIFORM_CLASS "PBW_Uniform3_fleck"
#define VEST_RFM "pbw_splitter_schtz"
#define VEST_LMG "pbw_splitter_mg"
#define VEST_AMG "pbw_splitter_mg_h"
#define VEST_MED "pbw_splitter_sani"
#define VEST_SQL "pbw_splitter_grpfhr"
#define VEST_VIP "pbw_splitter_zivil"
#define HELMET_1 "PBW_Helm1_fleck","PBW_Helm2_fleck","PBW_Helm2_fleck_H","PBW_Helm1_fleck_HBOD","PBW_Helm1_fleck_HBO","PBW_Helm1_fleck_H"
#define HELMET_CREW "rhsusf_cvc_green_alt_helmet"
#define BACKPACK_COMPACT "BWA3_AssaultPack_Fleck"
#define BACKPACK_KITBAG "VSM_OGA_Backpack_Kitbag"
#define BACKPACK_CARRYALL "BWA3_PatrolPack_Fleck"
#define WEAPON_1 "hlc_rifle_G36KV"
#define WEAPON_1_AMMO "hlc_30rnd_556x45_EPR_G36"
#define WEAPON_1_STUFF "BWA3_acc_LLM01_irlaser","BWA3_optic_EOTech_sand_Mag_Off","BWA3_bipod_Atlas",WEAPON_1_AMMO
#define WEAPON_2 "hlc_rifle_G36VAG36"
#define WEAPON_2_AMMO "1Rnd_HE_Grenade_shell"
#define WEAPON_2_STUFF WEAPON_1_STUFF,WEAPON_2_AMMO
#define WEAPON_3 "BWA3_MG4"
#define WEAPON_3_AMMO "BWA3_200Rnd_556x45_Tracer"
#define WEAPON_3_STUFF "BWA3_optic_EOTech",WEAPON_3_AMMO
#define WEAPON_4 "BWA3_G28"
#define WEAPON_4_AMMO "BWA3_10Rnd_762x51_G28_Tracer"
#define WEAPON_4_STUFF "BWA3_acc_LLM01_irlaser","BWA3_optic_PMII_DMR_MicroT1_front",WEAPON_4_AMMO
#define LAUNCHER "BWA3_PzF3"
#define LAUNCHER_AMMO "BWA3_PzF3_Tandem"
#define HANDGUN_1 "BWA3_P8"
#define HANDGUN_1_AMMO "BWA3_15Rnd_9x19_P8"

class GVAR(BUND_RFM): EGVAR(faction_generic,B_empty) {
    author = "Katalam";
    displayName = "Gewehrschütze";
    description = "Gewehrschütze";
    loadout = "BUND_RFM";
    loadoutGroup = "Squad"; // CASE SENSITIVE !
    loadoutRank = "PRIVATE";
    loadoutUniform[] = {UNIFORM_1};
    loadoutVest[] = {VEST_RFM};
    loadoutBackpack[] = {};
    loadoutHeadgear[] = {HELMET_1};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"", {}}}; // binocular
    loadoutNVG[] = {"", {}};
    loadoutGrenade[] = {{"BWA3_DM25", 2}, {"BWA3_DM51A1", 2}};
    loadoutUniformInv[] = {{"ACRE_PRC343", 1}};
    loadoutUniformInvNew[] = {};
    loadoutVestInv[] = {{WEAPON_1_AMMO, 10}};
    loadoutVestInvNew[] = {};
    loadoutBackpackInv[] = {};
    loadoutBackpackInvNew[] = {};
    loadoutInsignia = QEGVAR(faction_generic,private);
    loadoutScope[] = {};
    loadoutScopeDMR[] = {};
    loadoutGoggle[] = {};
    loadoutLauncher[] = {{"Remove", "REMOVE", ""}, {"PzF3", "BWA3_PzF3", "BWA3_PzF3_Tandem"}, {"Bunkerfaust", "BWA3_Bunkerfaust", "BWA3_PzF3_DM32"}, {"RGW90", "BWA3_RGW90", "BWA3_RGW90_HH"}};
    loadoutSilencer[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(BUND_W);
    uniformClass = UNIFORM_CLASS;
};
class GVAR(BUND_FTL): GVAR(BUND_RFM) {
    displayName = "Stellvertretender Gruppenführer";
    description = "Stellvertretender Gruppenführer";
    loadout = "BUND_FTL";
    loadoutRank = "CORPORAL";
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"Binocular", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ACRE_PRC343", 2}};
    loadoutGrenade[] = {{"BWA3_DM25", 2}, {"ACE_M84", 2}, {"BWA3_DM32_Green", 1}, {"BWA3_DM32_Purple", 1}, {"BWA3_DM51A1", 2}};
    loadoutInsignia = QEGVAR(faction_generic,corporal);
};
class GVAR(BUND_SQL): GVAR(BUND_FTL) {
    displayName = "Gruppenführer";
    description = "Gruppenführer@Warrior 1-X";
    loadout = "BUND_SQL";
    loadoutRank = "SERGEANT";
    loadoutVest[] = {VEST_SQL};
    loadoutHeadgear[] = {HELMET_1};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {"", {}}, // secondary
                        {HANDGUN_1, {HANDGUN_1_AMMO}}, // handgun
                        {"ACE_Vector", {}}}; // binocular
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab"};
    loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}, {"ACE_CableTie", 2}, {"ItemcTabHCam", 1}, {"ACRE_SEM52SL", 1}};
    loadoutBackpackInvNew[] = {{"ACRE_SEM70", 1}, {"rhs_mag_m18_yellow", 1}, {"rhs_mag_m18_purple", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QEGVAR(faction_generic,sergeant);
};
class GVAR(BUND_PTL): GVAR(BUND_SQL) {
    displayName = "Zugführer";
    description = "Zugführerr@Warrior 1";
    loadout = "BUND_PTL";
    loadoutGroup = "Platoon";
    loadoutRank = "LIEUTENANT";
    loadoutBackpackInvNew[] = {{"ACRE_SEM70", 1}, {"ItemAndroid", 1}};
    loadoutInsignia = QEGVAR(faction_generic,lieutenant);
};
class GVAR(BUND_ADM): GVAR(BUND_PTL) {
    displayName = "Zeus";
    description = "Zeus@Zeus";
    loadout = "BUND_ADM";
    loadoutGroup = "Company";
    loadoutRank = "COLONEL";
    loadoutHeadgear[] = {"PBW_barett_ksk"};
    loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR"};
    loadoutBackpackInvNew[] = {{"ACRE_SEM70", 1}};
    loadoutVarMedic = 2;
    loadoutVarG = 0.3;
    loadoutVarEng = 2;
    loadoutVarEOD = 1;
    loadoutInsignia = "Curator";
};

// Medic
class GVAR(BUND_CLS): GVAR(BUND_RFM) {
    displayName = "Sanitäter";
    description = "Sanitäter";
    loadout = "BUND_CLS";
    loadoutVest[] = {VEST_MED};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 20}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}, {"ACE_plasmaIV_500", 5}};
    loadoutVarMedic = 1;
};
class GVAR(BUND_MED): GVAR(BUND_FTL) {
    displayName = "Sanitäter Bravo";
    description = "Sanitäter Bravo";
    loadout = "BUND_MED";
    loadoutVest[] = {VEST_MED};
    loadoutBackpack[] = {BACKPACK_KITBAG};
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"BWA3_DM25", 4}, {"BWA3_DM32_Green", 4}};
    loadoutUniformInvNew[] = {{"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}};
    loadoutVestInvNew[] = {{"ACE_epinephrine", 8}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutVarMedic = 2;
    loadoutInsignia = QEGVAR(faction_generic,medic);
};

// Platoon
class GVAR(BUND_RTO): GVAR(BUND_RFM) {
    displayName = "Funker";
    description = "Funker - Warrior 1-R";
    loadout = "BUND_RTO";
    loadoutGroup = "Platoon";
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutBackpackInvNew[] = {{"ACRE_SEM70", 1}};
};

// Squad
class GVAR(BUND_LMG): GVAR(BUND_RFM) {
    displayName = "M.G.-Schütze";
    description = "M.G.-Schütze";
    loadout = "BUND_LMG";
    loadoutUniform[] = {UNIFORM_1};
    loadoutVest[] = {VEST_LMG};
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_3, {WEAPON_3_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutVestInv[] = {{WEAPON_3_AMMO, 3}, {HANDGUN_1_AMMO, 2}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(BUND_UGL): GVAR(BUND_RFM) {
    displayName = "Grenadier";
    description = "Grenadier";
    loadout = "BUND_UGL";
    loadoutBackpack[] = {BACKPACK_COMPACT};
    loadoutWeapon[] = { {WEAPON_2, {WEAPON_2_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {{WEAPON_2_AMMO, 15}};
};
class GVAR(BUND_LAT): GVAR(BUND_RFM) {
    displayName = "Panzerfaustschütze";
    description = "Panzerfaustschütze";
    loadout = "BUND_LAT";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                        {LAUNCHER, {LAUNCHER_AMMO}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"", {}}};
    loadoutBackpackInvNew[] = {};
};
class GVAR(BUND_MKM): GVAR(BUND_RFM) {
    displayName = "Scharfschütze";
    description = "Scharfschütze";
    loadout = "BUND_MKM";
    loadoutBackpack[] = {};
    loadoutWeapon[] = { {WEAPON_4, {WEAPON_4_STUFF}},
                        {"", {}},
                        {HANDGUN_1, {HANDGUN_1_AMMO}},
                        {"ACE_Vector", {}}};
    loadoutUniformInvNew[] = {{WEAPON_4_AMMO, 2}};
    loadoutVestInv[] = {{WEAPON_4_AMMO, 7}, {HANDGUN_1_AMMO, 4}};
    loadoutVestInvNew[] = {{"BWA3_optic_PMII_ShortdotCC", 1}, {"ACE_RangeCard", 1}};
    loadoutBackpackInvNew[] = {};
};
