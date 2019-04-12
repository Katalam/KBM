class GVAR(USAM_WTL_MMG): GVAR(USAM_SQL) {
    displayName = "Weapon Squad Leader";
    description = "Weapon Squad Leader@Warrior 1-4";
    loadout = "USAM_WTL_MMG";
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_SpareBarrel", 1}, {"ACE_EntrenchingTool", 1}, {"rhsusf_100Rnd_762x51_m62_tracer", 1}};
};
class GVAR(USAM_MMG): GVAR(USAM_RFM) {
    displayName = "Machine Gunner";
    description = "Machine Gunner";
    loadout = "USAM_MMG";
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
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};
class GVAR(USAM_HAT): GVAR(USAM_RFM) {
    displayName = "Antiarmor Gunner";
    description = "Antiarmor Gunner";
    loadout = "USAM_HAT";
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
    loadoutBackpack[] = {"VSM_Multicam_carryall"};
    loadoutGrenade[] = {{"rhs_mag_an_m8hc", 6}, {"HandGrenade", 2}};
    loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
    loadoutBackpackInvNew[] = {{"ACE_EntrenchingTool", 1}, {"rhs_fgm148_magazine_AT", 1}};
};
