class CfgGroups {
    class west {
        class GVAR(USMC_D) {
            name = "KAT US Marines Desert";
            class Infantry {
                name = "Infantry";
                class GVAR(USMC_D_FT_1) {
                    name = "Fire Team Alpha";
                    class Unit0 {
                        vehicle = QGVAR(USMC_FTL);
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_RFM);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USMC_D_FT_2) {
                    name = "Fire Team Bravo";
                    class Unit0 {
                        vehicle = QGVAR(USMC_FTL);
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_LAT);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USMC_D_FT_3) {
                    name = "Fire Team Charlie";
                    class Unit0 {
                        vehicle = QGVAR(USMC_FTL);
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_MKM);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USMC_D_SQ_1) {
                    name = "Squad";
                    class Unit0 {
                        vehicle = QGVAR(USMC_SQL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_ASL);
                        rank = "CORPORAL";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_SSO);
                        rank = "CORPORAL";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USMC_FTL);
                        rank = "CORPORAL";
                        position[] = {-2,-2,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {-4,0,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USMC_RFM);
                        rank = "PRIVATE";
                        position[] = {-4,-2,0};
                    };
                    class Unit6 {
                        vehicle = QGVAR(USMC_FTL);
                        rank = "CORPORAL";
                        position[] = {-6,0,0};
                    };
                    class Unit7 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {-6,-2,0};
                    };
                    class Unit8 {
                        vehicle = QGVAR(USMC_RFM);
                        rank = "PRIVATE";
                        position[] = {-8,0,0};
                    };
                    class Unit9 {
                        vehicle = QGVAR(USMC_MKM);
                        rank = "CORPORAL";
                        position[] = {-8,-2,0};
                    };
                    class Unit10 {
                        vehicle = QGVAR(USMC_UGL);
                        rank = "PRIVATE";
                        position[] = {-10,0,0};
                    };
                    class Unit11 {
                        vehicle = QGVAR(USMC_LAT);
                        rank = "PRIVATE";
                        position[] = {-10,-2,0};
                    };
                };
                class GVAR(USMC_D_MOR) {
                    name = "Mortar Section";
                    class Unit0 {
                        vehicle = QGVAR(USMC_WSL_MOR);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_MOR_ASS);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_MOR_AMB);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USMC_WSL_MOR);
                        rank = "SERGEANT";
                        position[] = {0,-4,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USMC_MOR_ASS);
                        rank = "PRIVATE";
                        position[] = {-2,-4,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USMC_MOR_AMB);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                };
                class GVAR(USMC_D_LOG) {
                    name = "Logistic Team";
                    class Unit0 {
                        vehicle = QGVAR(USMC_LOG_LEAD);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_LOG);
                        rank = "PRIVATE";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_LOG);
                        rank = "PRIVATE";
                        position[] = {-4,0,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USMC_LOG);
                        rank = "PRIVATE";
                        position[] = {-6,0,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USMC_LOG_MED);
                        rank = "CORPORAL";
                        position[] = {-8,0,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USMC_LOG_MED);
                        rank = "CORPORAL";
                        position[] = {-10,0,0};
                    };
                };
                class GVAR(USMC_D_CRW) {
                    name = "Tank Crew";
                    class Unit0 {
                        vehicle = QGVAR(USMC_CRW_LEAD);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USMC_D_HELI) {
                    name = "Helicopter Crew";
                    class Unit0 {
                        vehicle = QGVAR(USMC_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_HELI_PIL);
                        rank = "SERGEANT";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_HELI_CRW);
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USMC_HELI_CRW);
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                };
                class GVAR(USMC_D_RECON) {
                    name = "Recon Team";
                    class Unit0 {
                        vehicle = QGVAR(USMC_TL);
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_SPO);
                        rank = "SERGEANT";
                        position[] = {0,-2,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_SNI);
                        rank = "SERGEANT";
                        position[] = {0,-4,0};
                    };
                };
                class GVAR(USMC_D_PTL) {
                    name = "Platoon Lead";
                    class Unit0 {
                        vehicle = QGVAR(USMC_PTL);
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USMC_PSG);
                        rank = "SERGEANT";
                        position[] = {-2,0,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USMC_RTO);
                        rank = "PRIVATE";
                        position[] = {-4,0,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USMC_MED_LEAD);
                        rank = "CORPORAL";
                        position[] = {-6,0,0};
                    };
                    class Unit4 {
                        vehicle = QGVAR(USMC_FO);
                        rank = "SERGEANT";
                        position[] = {-8,0,0};
                    };
                    class Unit5 {
                        vehicle = QGVAR(USMC_JTAC);
                        rank = "SERGEANT";
                        position[] = {-10,0,0};
                    };
                };
                #include "PlatoonGroup.hpp"
            };
        };
    };
};
