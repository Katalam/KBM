#define UNIFORM_1 "LOP_U_BH_Fatigue_CHOCO","LOP_U_BH_Fatigue_CHOCO_TRI","LOP_U_BH_Fatigue_CHOCO_ACU","LOP_U_BH_Fatigue_CHOCO_LIZ","LOP_U_BH_Fatigue_CHOCO_M81","LOP_U_BH_Fatigue_ACU_TRI","LOP_U_BH_Fatigue_ACU_FWDL","LOP_U_BH_Fatigue_ACU_LIZ","LOP_U_BH_Fatigue_M81_TRI"
#define VEST_1 "V_Pocketed_coyote_F",""
#define BACKPACK_COMPACT "VSM_Multicam_Backpack_Compact"
#define WEAPON_1 "hlc_rifle_ak74"
#define WEAPON_1_AMMO "hlc_30Rnd_545x39_B_AK"
#define WEAPON_1_STUFF WEAPON_1_AMMO
#define WEAPON_2 "rhs_weap_rpg7"
#define WEAPON_2_AMMO "rhs_rpg7_OG7V_mag"
#define WEAPON_3 "hlc_rifle_akmgl"
#define WEAPON_3_AMMO "1Rnd_HE_Grenade_shell"
#define WEAPON_3_STUFF WEAPON_1_AMMO,WEAPON_3_AMMO

class CfgVehicles {
    class O_Soldier_F;
    class GVAR(O_empty): O_Soldier_F {
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
        loadoutInsignia = "";
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
    };
    class GVAR(BOKO_RFM): GVAR(O_empty) {
        author = "Katalam";
        displayName = "Rifleman";
        description = "Rifleman";
        loadout = "BOKO_RFM";
        loadoutGroup = "Squad"; // CASE SENSITIVE !
        loadoutUniform[] = {UNIFORM_1};
        loadoutVest[] = {VEST_1};
        loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                            {"", {}}, // secondary
                            {"", {}}, // handgun
                            {"", {}}}; // binocular
        loadoutLinked[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        loadoutGrenade[] = {{"HandGrenade", 2}};
        loadoutUniformInv[] = {{"ACRE_PRC152", 1}};
        loadoutVestInv[] = {{WEAPON_1_AMMO, 5}};
        scope = 2;
        curatorScope = 2;
        faction = QGVAR(BOKO);
        uniformClass = "LOP_U_BH_Fatigue_CHOCO";
    };
    class GVAR(BOKO_LAT): GVAR(BOKO_RFM) {
        displayName = "Rifleman (AT)";
        description = "Rifleman (AT)";
        loadout = "BOKO_LAT";
        loadoutWeapon[] = { {WEAPON_1, {WEAPON_1_STUFF}},
                            {WEAPON_2, {WEAPON_2_AMMO}}, // secondary
                            {"", {}}, // handgun
                            {"", {}}}; // binocular
    };
    class GVAR(BOKO_UGL): GVAR(BOKO_RFM) {
        displayName = "Grenadier";
        description = "Grenadier";
        loadout = "BOKO_UGL";
        loadoutWeapon[] = { {WEAPON_3, {WEAPON_3_STUFF}},
                            {"", {}}, // secondary
                            {"", {}}, // handgun
                            {"", {}}}; // binocular
    };
};
