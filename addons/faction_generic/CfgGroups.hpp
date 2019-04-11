class CfgGroups {
    class west {
        class GVAR(USAM_D) {
            name = "KAT US Army Desert";
            class Infantry {
                name = "Infantry";
                class GVAR(USAM_D_FT) {
                    name = "Fire Team";
                    class Unit0 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {0,-3,0};
                    };
                    class Unit2 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit3 {
                        vehicle = QGVAR(USAM_RFM);
                        rank = "PRIVATE";
                        position[] = {0,-9,0};
                    };
                };
                class GVAR(USAM_D_SQ_1) {
                    name = "Squad";
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
                    name = "Squad with M136";
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
                #include "PlatoonGroup.hpp"
            };
        };
    };
};
