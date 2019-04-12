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
class GVAR(USAM_LOG_MED): GVAR(USAM_FTL) {
    displayName = "Logistic Medic";
    description = "Logistic Medic";
    loadout = "USAM_LOG_MED";
    loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
    loadoutHeadgear[] = {"H_Cap_usblack"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"ACE_morphine", 6}, {"ACE_epinephrine", 8}, {"ACE_surgicalKit", 1}, {"adv_aceCPR_AED", 1}, {"ACE_tourniquet", 4}, {"H_Cap_usblack", 1}};
    loadoutBackpackInvNew[] = {{"Toolkit", 1}, {"VSM_OPS_2_multicam", 1}, {"ACE_packingBandage", 16}, {"ACE_elasticBandage", 16}, {"ACE_plasmaIV_500", 6}};
    loadoutVarMedic = 2;
    loadoutVarEng = 2;
    loadoutInsignia = QGVAR(medic);
};
class GVAR(USAM_MED_LEAD): GVAR(USAM_MED) {
    displayName = "Platoon Medic";
    description = "Platoon Medic";
    loadout = "USAM_MED_LEAD";
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
    loadoutMedical[] = {};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"rhs_mag_m18_green", 2}};
    loadoutUniformInvNew[] = {{"ACE_epinephrine", 16}};
    loadoutVestInvNew[] = {{"adv_aceCPR_AED", 1}, {"ACE_surgicalKit", 1}};
    loadoutBackpackInvNew[] = {{"ACE_packingBandage", 48}, {"ACE_elasticBandage", 48}, {"ACE_morphine", 10}, {"ACE_plasmaIV_500", 12}, {"ACE_tourniquet", 4}, {"adv_aceSplint_splint", 15}};
    loadoutInsignia = QGVAR(medic);
};
