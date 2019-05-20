#undef UNIFORM_1
#define UNIFORM_1 "rhs_uniform_FROG01_wd"
#undef HELMET_1
#define HELMET_1 "rhsusf_lwh_helmet_marpatwd","rhsusf_lwh_helmet_marpatwd_blk_ess"
#undef HELMET_2
#define HELMET_2 "rhsusf_lwh_helmet_marpatwd_headset_blk2","rhsusf_lwh_helmet_marpatwd_headset_blk"

class GVAR(USMC_W_RFM): GVAR(USMC_RFM) {
    loadout = "USMC_W_RFM";
    loadoutUniform[] = {UNIFORM_1};
    loadoutHeadgear[] = {HELMET_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_FTL): GVAR(USMC_FTL) {
    loadout = "USMC_W_FTL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_SQL): GVAR(USMC_SQL) {
    loadout = "USMC_W_SQL";
    loadoutUniform[] = {UNIFORM_1};
    loadoutHeadgear[] = {HELMET_2};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_PTL): GVAR(USMC_PTL) {
    loadout = "USMC_W_PTL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_CO): GVAR(USMC_CO) {
    loadout = "USMC_W_CO";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_ADM): GVAR(USMC_ADM) {
    loadout = "USMC_W_ADM";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Medic
class GVAR(USMC_W_CLS): GVAR(USMC_CLS) {
    loadout = "USMC_W_CLS";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MED): GVAR(USMC_MED) {
    loadout = "USMC_W_MED";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_LOG_MED): GVAR(USMC_LOG_MED) {
    loadout = "USMC_W_LOG_MED";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MED_LEAD): GVAR(USMC_MED_LEAD) {
    loadout = "USMC_W_MED_LEAD";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MED_LEAD_C): GVAR(USMC_MED_LEAD_C) {
    loadout = "USMC_W_MED_LEAD_C";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Platoon
class GVAR(USMC_W_PSG): GVAR(USMC_PSG) {
    loadout = "USMC_W_PSG";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_RTO): GVAR(USMC_RTO) {
    loadout = "USMC_W_RTO";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_FO): GVAR(USMC_FO) {
    loadout = "USMC_W_FO";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_JTAC): GVAR(USMC_JTAC) {
    loadout = "USMC_W_JTAC";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Squad
class GVAR(USMC_W_UGL): GVAR(USMC_UGL) {
    loadout = "USMC_W_UGL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_LAT): GVAR(USMC_LAT) {
    loadout = "USMC_W_LAT";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MKM): GVAR(USMC_MKM) {
    loadout = "USMC_W_MKM";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Heavy Squad
class GVAR(USMC_W_WTL_MMG): GVAR(USMC_WTL_MMG) {
    loadout = "USMC_W_WTL_MMG";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MMG): GVAR(USMC_MMG) {
    loadout = "USMC_W_MMG";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_AMG): GVAR(USMC_AMG) {
    loadout = "USMC_W_AMG";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_WTL_HAT): GVAR(USMC_WTL_HAT) {
    loadout = "USMC_W_WTL_HAT";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_HAT): GVAR(USMC_HAT) {
    loadout = "USMC_W_HAT";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_AAT): GVAR(USMC_AAT) {
    loadout = "USMC_W_AAT";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Crew
class GVAR(USMC_W_CRW_LEAD): GVAR(USMC_CRW_LEAD) {
    loadout = "USMC_W_CRW_LEAD";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_CRW): GVAR(USMC_CRW) {
    loadout = "USMC_W_CRW";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_HELI_PIL): GVAR(USMC_HELI_PIL) {
    loadout = "USMC_W_HELI_PIL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_HELI_PIL_AH): GVAR(USMC_HELI_PIL_AH) {
    loadout = "USMC_W_HELI_PIL_AH";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_HELI_CRW): GVAR(USMC_HELI_CRW) {
    loadout = "USMC_W_HELI_CRW";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_JET): GVAR(USMC_JET) {
    loadout = "USMC_W_JET";
    faction = QGVAR(USMC_W);
};

// Sniper
class GVAR(USMC_W_SNI): GVAR(USMC_SNI) {
    loadout = "USMC_W_SNI";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_SPO): GVAR(USMC_SPO) {
    loadout = "USMC_W_SPO";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_TL): GVAR(USMC_TL) {
    loadout = "USMC_W_TL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Mortar
class GVAR(USMC_W_MOR_SQL): GVAR(USMC_MOR_SQL) {
    loadout = "USMC_W_MOR_SQL";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MOR_ASS): GVAR(USMC_MOR_ASS) {
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MOR_GUN): GVAR(USMC_MOR_GUN) {
    loadout = "USMC_W_MOR_GUN";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_MOR_AMB): GVAR(USMC_MOR_AMB) {
    loadout = "USMC_W_MOR_AMB";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Rifleman (Extra)
class GVAR(USMC_W_EOD): GVAR(USMC_EOD) {
    loadout = "USMC_W_EOD";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_ESP): GVAR(USMC_ESP) {
    loadout = "USMC_W_ESP";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};

// Logistic
class GVAR(USMC_W_LOG_LEAD): GVAR(USMC_LOG_LEAD) {
    loadout = "USMC_W_LOG_LEAD";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
class GVAR(USMC_W_LOG): GVAR(USMC_LOG) {
    loadout = "USMC_W_LOG";
    loadoutUniform[] = {UNIFORM_1};
    faction = QGVAR(USMC_W);
    uniformClass = UNIFORM_1;
};
