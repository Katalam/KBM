// Sniper
class GVAR(USAM_SNI): GVAR(USAM_SQL) {
	displayName = "Recon Sniper";
	description = "Sniper";
	loadout = "USAM_SNI";
	loadoutBackpack[] = {};
	loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
						{"", {}},
						{"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
						{"ACE_Vector", {}}};
	loadoutGrenade[] = {{"rhs_mag_an_m8hc", 4}, {"HandGrenade", 2}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {"ACE_20Rnd_762x51_Mag_Tracer", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"adv_aceCPR_AED", 1}};
	loadoutBackpackInvNew[] = {};
	loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_sr25", {"rhsusf_acc_SR25S", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_harris_bipod", "optic_LRPS"}, {"ACE_20Rnd_762x51_Mag_Tracer"}}};
	loadoutVarMedic = 2;
	loadoutVarEOD = 1;
};
class GVAR(USAM_SPO): GVAR(USAM_SNI) {
	displayName = "Recon Spotter";
	description = "Spotter@Stalker 1-X";
	loadout = "USAM_SPO";
	loadoutBackpack[] = {"TFAR_rt1523g_big_rhs"};
	loadoutWeapon[] = { {"rhs_weap_m4a1_carryhandle", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG"}},
						{"", {}},
						{"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
						{"ACE_Vector", {}}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"ACE_20Rnd_762x51_M993_AP_Mag", 2}, {"ACE_20Rnd_762x51_Mag_Tracer", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutVestInvNew[] = {{"ACE_RangeCard", 1}, {"ACE_ATragMX", 1}, {"ACE_Kestrel4500", 1}, {"ACE_SpottingScope", 1}};
	loadoutBackpackInvNew[] = {{"ACE_Tripod", 1}, {"ACE_DefusalKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_Sandbag_empty", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_salineIV_500", 6}, {"ACE_surgicalKit", 1}};
	loadoutGunBackpack[] = {};
};
class GVAR(USAM_TL): GVAR(USAM_SPO) {
	displayName = "Recon Team Leader";
	description = "Team Leader";
	loadout = "USAM_TL";
	loadoutBackpack[] = {};
	loadoutWeapon[] = { {"rhs_weap_m4_m320", {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_acog", "hlc_muzzle_556NATO_rotexiiic_grey", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "1Rnd_HE_Grenade_shell"}},
						{"", {}},
						{"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}},
						{"ACE_Vector", {}}};
	loadoutUniformInvNew[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 2}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutVestInvNew[] = {{"ACE_salineIV_500", 6}, {"1Rnd_HE_Grenade_shell", 2}, {"1Rnd_SmokeBlue_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeRed_Grenade_shell", 2}};
	loadoutGunBackpack[] = {"ace_gunbag_tan", {"rhs_weap_M107_d", {"optic_LRPS"}, {"rhsusf_mag_10Rnd_STD_50BMG_M33", 10}}};
};

// Mortar
class GVAR(USAM_MOR_SQL): GVAR(USAM_SQL) {
	displayName = "Mortar Squad Leader";
	description = "Squad Leader@Black Sheep 1-1";
	loadout = "USAM_MOR_SQL";
	loadoutHeadgear[] = {"VSM_Multicam_Boonie"};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutVestInvNew[] = {{"VSM_OPS_2_multicam", 1}, {"ACE_RangeTable_82mm", 1}, {"ACE_Kestrel4500", 1}};
};
class GVAR(USAM_MOR_ASS): GVAR(USAM_RFM) {
	displayName = "Mortar Assistant Gunner";
	description = "Assistant Gunner";
	loadout = "USAM_MOR_ASS";
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
