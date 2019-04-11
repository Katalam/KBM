class GVAR(USAM_CRW_LEAD): GVAR(USAM_SQL) {
	displayName = "Tank Commander";
	description = "Tank Commander@Outlaw 1-X";
	loadout = "USAM_CRW_LEAD";
	loadoutBackpack[] = {"VSM_Multicam_Backpack_Compact"};
	loadoutHeadgear[] = {"rhsusf_cvc_alt_helmet"};
	loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 4}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutBackpackInvNew[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"SatchelCharge_Remote_Mag", 1}};
	loadoutVarEng = 1;
	loadoutVarEOD = 1;
};
class GVAR(USAM_CRW): GVAR(USAM_RFM) {
	displayName = "Tank Crew";
	description = "Tank Crew";
	loadout = "USAM_CRW";
	loadoutVest[] = {"VSM_FAPC_Operator_Multicam"};
	loadoutBackpack[] = {};
	loadoutHeadgear[] = {"rhsusf_cvc_alt_helmet"};
	loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 4}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutBackpackInvNew[] = {};
	loadoutVarEng = 1;
};
class GVAR(USAM_HELI_PIL): GVAR(USAM_SQL) {
	displayName = "Helicopter Pilot";
	description = "Helicopter Pilot@Super 1-X";
	loadout = "USAM_HELI_PIL";
	loadoutVest[] = {"V_TacVest_khk"};
	loadoutHeadgear[] = {"rhsusf_hgu56p"};
	loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
	loadoutUniformInvNew[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 1}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutVarMedic = 1;
	loadoutVarG = 0.3;
	loadoutVarEng = 2;
};
class GVAR(USAM_HELI_CRW): GVAR(USAM_RFM) {
	displayName = "Helicopter Crew";
	description = "Helicopter Crew";
	loadout = "USAM_HELI_CRW";
	loadoutVest[] = {"V_TacVest_khk"};
	loadoutBackpack[] = {};
	loadoutHeadgear[] = {"rhsusf_hgu56p_visor_mask_skull"};
	loadoutGrenade[] = {{"rhs_mag_an_m8hc", 2}, {"rhs_mag_m18_green", 1}, {"rhs_mag_m18_purple", 1}, {"HandGrenade", 1}};
	loadoutUniformInvNew[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 1}};
	loadoutVestInv[] = {{"rhs_mag_30Rnd_556x45_M855A1_PMAG", 2}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}};
	loadoutBackpackInvNew[] = {};
	loadoutVarG = 0.3;
	loadoutVarEng = 1;
};
class GVAR(USAM_JET): GVAR(USAM_SQL) {
	displayName = "Jet Pilot";
	description = "Jet Pilot";
	loadout = "USAM_JET";
	loadoutUniform[] = {"U_B_PilotCoveralls"};
	loadoutVest[] = {};
	loadoutBackpack[] = {"B_Parachute"};
	loadoutHeadgear[] = {"H_PilotHelmetFighter_B"};
	loadoutWeapon[] = { {"", {}},
						{"", {}}, // secondary
						{"rhsusf_weap_m9", {"rhsusf_mag_15Rnd_9x19_FMJ"}}, // handgun
						{"", {}}}; // binocular
	loadoutGrenade[] = {};
	loadoutUniformInv[] = {{"ACE_MapTools", 1}, {"ACE_microDAGR", 1}};
	loadoutUniformInvNew[] = {};
	loadoutVestInv[] = {};
	loadoutBackpackInvNew[] = {};
	loadoutVarMedic = 1;
	loadoutVarG = 0.3;
	loadoutVarEng = 1;
};
