class GVAR(USAM_LMG): GVAR(USAM_RFM) {
	displayName = "Autorifleman";
	description = "Autorifleman";
	loadout = "USAM_LMG";
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
