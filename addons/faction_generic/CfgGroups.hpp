class CfgGroups {
    class west {
        class GVAR(USAM_D) {
            name = "KAT US Army Desert";
            class Infantry {
                name = "Infantry";
                class GVAR(USAM_D_FT) {
                    name = "Fire Team";
                    class Unit0 {
                        vehicle = QGVAR(USAM_FTL);
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_LMG);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_UGL);
                        rank = "PRIVATE";
                        position[] = {-2,0,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                };
                class GVAR(USAM_D_SQ_1) {
                    name = "Squad w/o M136";
                    class Unit0 {
                        vehicle = QGVAR(USAM_SQL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_MED);
                        rank = "CORPORAL";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_FTL);
                        rank = "CORPORAL";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_LMG);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_UGL);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USAM_FTL);
                        rank = "CORPORAL";
                        position[] = {-2,-2,0};
                    };
                    class Unit7 {
                        vehicle = QGVAR(USAM_LMG);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit8 {
                        vehicle = QGVAR(USAM_UGL);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                    class Unit9 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {-2,-8,0};
                    };
                };
                class GVAR(USAM_D_SQ_2) {
                    name = "Squad w/ M136";
                    class Unit0 {
                        vehicle = QGVAR(USAM_SQL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_MED);
                        rank = "PRIVATE";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_FTL);
                        rank = "CORPORAL";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_LMG);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_UGL);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_LAT);
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USAM_FTL);
                        rank = "CORPORAL";
                        position[] = {-2,-2,0};
                    };
                    class Unit7 {
                        vehicle = QGVAR(USAM_LMG);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit8 {
                        vehicle = QGVAR(USAM_UGL);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                    class Unit9 {
                        vehicle = QGVAR(USAM_LAT);
                        rank = "PRIVATE";
                        position[] = {-2,-8,0};
                    };
                };
                class GVAR(USAM_D_SQ_3) {
                    name = "Weapon Squad";
                    class Unit0 {
                        vehicle = QGVAR(USAM_WTL_MMG);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_MED);
                        rank = "CORPORAL";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_MMG);
                        rank = "CORPORAL";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_AMG);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_MMG);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_AMG);
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USAM_WTL_HAT);
                        rank = "CORPORAL";
                        position[] = {-2,-2,0};
                    };
                    class Unit7 {
                        vehicle = QGVAR(USAM_HAT);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit8 {
                        vehicle = QGVAR(USAM_AAT);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                    class Unit9 {
                        vehicle = QGVAR(USAM_HAT);
                        rank = "PRIVATE";
                        position[] = {-2,-8,0};
                    };
                };
                class GVAR(USAM_D_SQ_4) {
                    name = "Heavy Weapon Squad";
                    class Unit0 {
                        vehicle = QGVAR(USAM_HWTL_HMG);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_MED);
                        rank = "PRIVATE";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_HMG);
                        rank = "CORPORAL";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_AHG);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_HMG);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_AHG);
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USAM_HWTL_GMG);
                        rank = "CORPORAL";
                        position[] = {-2,-2,0};
                    };
                    class Unit7 {
                        vehicle = QGVAR(USAM_GMG);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit8 {
                        vehicle = QGVAR(USAM_AGG);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                    class Unit9 {
                        vehicle = QGVAR(USAM_GMG);
                        rank = "PRIVATE";
                        position[] = {-2,-8,0};
                    };
                    class Unit10 {
                        vehicle = QGVAR(USAM_ATW);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                    class Unit11 {
                        vehicle = QGVAR(USAM_TOW);
                        rank = "PRIVATE";
                        position[] = {-2,-8,0};
                    };
                };
                class GVAR(USAM_D_MOR) {
                    name = "Mortar Section";
                    class Unit0 {
                        vehicle = QGVAR(USAM_MOR_SQL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_MOR_GUN);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_MOR_ASS);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_MOR_AMB);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_MOR_GUN);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_MOR_ASS);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USAM_MOR_AMB);
                        rank = "PRIVATE";
                        position[] = {-2,-6,0};
                    };
                };
                class GVAR(USAM_D_LOG) {
                    name = "Logistic Team";
                    class Unit0 {
                        vehicle = QGVAR(USAM_LOG_LEAD);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_LOG);
                        rank = "PRIVATE";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_LOG);
                        rank = "PRIVATE";
                        position[] = {-4,0,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_LOG);
                        rank = "PRIVATE";
                        position[] = {-6,0,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_LOG_MED);
                        rank = "CORPORAL";
                        position[] = {-8,0,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_LOG_MED);
                        rank = "CORPORAL";
                        position[] = {-10,0,0};
                    };
                };
                class GVAR(USAM_D_CRW) {
                    name = "Tank Crew";
                    class Unit0 {
                        vehicle = QGVAR(USAM_CRW_LEAD);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USAM_D_HELI) {
                    name = "Helicopter Crew w/o Med";
                    class Unit0 {
                        vehicle = QGVAR(USAM_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_HELI_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_HELI_CRW);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                };
                class GVAR(USAM_D_HELI_MED) {
                    name = "Helicopter Crew w/ Med";
                    class Unit0 {
                        vehicle = QGVAR(USAM_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_HELI_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_HELI_MED);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                };
                class GVAR(USAM_D_RECON) {
                    name = "Recon Team";
                    class Unit0 {
                        vehicle = QGVAR(USAM_TL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_SNI);
                        rank = "SERGEANT";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_SPO);
                        rank = "SERGEANT";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USAM_D_PTL) {
                    name = "Platoon Lead";
                    class Unit0 {
                        vehicle = QGVAR(USAM_PTL);
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_PSG);
                        rank = "SERGEANT";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_RTO);
                        rank = "PRIVATE";
                        position[] = {-4,0,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_MED_LEAD);
                        rank = "CORPORAL";
                        position[] = {-6,0,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USAM_FO);
                        rank = "SERGEANT";
                        position[] = {-8,0,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USAM_JTAC);
                        rank = "SERGEANT";
                        position[] = {-10,0,0};
                    };
                };
                #include "PlatoonGroup.hpp"
            };
        };
    };
};
