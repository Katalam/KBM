class GVAR(USAM_PSG): GVAR(USAM_SQL) {
    displayName = "Platoon Sergeant";
    description = "Platoon Sergeant";
    loadout = "USAM_PSG";
    loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
                        {"", {}},
                        {"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
                        {"ACE_Vector", {}}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutVestInvNew[] = {{"1Rnd_HE_Grenade_shell", 6}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
};
class GVAR(USAM_RTO): GVAR(USAM_RFM) {
    displayName = "RTO";
    description = "RTO - Warrior 1-R";
    loadout = "USAM_RTO";
    loadoutBackpack[] = {"TFAR_rt1523g_rhs"};
    loadoutBackpackInvNew[] = {};
};
class GVAR(USAM_FO): GVAR(USAM_SQL) {
    displayName = "JFO";
    description = "JFO - Warrior 1-F";
    loadout = "USAM_FO";
    loadoutInsignia = QGVAR(jfo);
};
class GVAR(USAM_JTAC): GVAR(USAM_SQL) {
    displayName = "JTAC";
    description = "JTAC - Warrior 1-J";
    loadout = "USAM_JTAC";
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
