class AC {
    id = 18;
    idType = 1;
    side = "west";
    size = "Corps";
    type = "Airborne";
    commander = "NATOMen";
    text = "%1 %2 %3";
    textShort = "%1 %2 %3";
    subordinates[] = {ID,MD,AD};
    description = "";
    insignia = QPATHTOF(data\18ac_picture.paa);
    texture = QPATHTOF(data\18ac_picture.paa);
    color[] = {100,100,100,1};
};
class MD {
    id = 10;
    idType = 0;
    side = "west";
    size = "Division";
    type = "Infantry";
    commander = "Oates";
    commanderRank = "General";
    text = "%1 Mountain %3";
    textShort = "%1 Mountain %3";
    subordinates[] = {MD_0, MD_1, MD_2, MD_3, MD_4, MD_5, MD_6, MD_7};
    description = "Die 10th Mountain Division ist eine leichte Infanteriedivision der United States Army";
    insignia = QPATHTOF(data\10md_picture.paa);
    texture = QPATHTOF(data\10md_picture.paa);
    color[] = {100,100,100,1};
    //assets[] = {{"Land_Carrier_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}};
};
    class MD_0 {
        id = 0;
        idType = 0;
        side = "west";
        size = "Battalion";
        type = "HQ";
        commander = "Oates";
        commanderRank = "General";
        text = "%3 %2 'Gauntlet'";
        textShort = "%3 %2 'Gauntlet'";
        subordinates[] = {MD_0_1,MD_0_2,MD_0_3,MD_0_4,MD_0_5};
        description = "";
    };
        class MD_0_1 {
            id = 0;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "Headquarters %2 %3";
            textShort = "HQ 'Gauntlet'";
            subordinates[] = {};
            description = "";
        };
        class MD_0_2 {
            id = 0;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "Operation %3";
            textShort = "OP %2";
            subordinates[] = {};
            description = "";
        };
        class MD_0_3 {
            id = 0;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "Intelligence, and Sustainment %3";
            textShort = "IS %2";
            subordinates[] = {};
            description = "";
        };
        class MD_0_4 {
            id = 0;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "Signal %3";
            textShort = "Sig %2";
            subordinates[] = {};
            description = "";
        };
        class MD_0_5 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Platoon";
            type = "HQ";
            commander = "NATOMen";
            text = "%1 Mountain Division Band";
            textShort = "%1 MDB";
            subordinates[] = {};
            description = "";
        };
    class MD_1 {
        id = 1;
        idType = 0;
        side = "west";
        size = "IBCT";
        type = "Infantry";
        commander = "NATOMen";
        text = "%1 %3";
        textShort = "'Warrior'";
        subordinates[] = {MD_1_0, MD_1_1, MD_1_2, MD_1_3, MD_1_4, MD_1_5, MD_1_6, MD_1_7};
        description = "";
    };
        class MD_1_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
        class MD_1_1 {
            id = 71;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Cavalry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_1_1};
            description = "";
        };
            class MD_1_1_1 {
                id = 3;
                idType = 0;
                side = "west";
                size = "Squadron";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_1_1_1_0,MD_1_1_1_1,MD_1_1_1_2,MD_1_1_1_3};
            };
                    class MD_1_1_1_0 {
                        id = 3;
                        idType = 0;
                        side = "west";
                        size = "Troop";
                        type = "HQ";
                        commander = "NATOMen";
                        text = "%3 %2";
                        textShort = "%3 %2";
                    };
                    class MD_1_1_1_1 {
                        id = 1;
                        idType = 2;
                        side = "west";
                        size = "Troop";
                        type = "Cavalry";
                        commander = "NATOMen";
                        text = "%1 %3";
                        textShort = "%1 %3";
                    };
                    class MD_1_1_1_2 {
                        id = 2;
                        idType = 2;
                        side = "west";
                        size = "Troop";
                        type = "Cavalry";
                        commander = "NATOMen";
                        text = "%1 %3";
                        textShort = "%1 %3";
                    };
                    class MD_1_1_1_3 {
                        id = 3;
                        idType = 2;
                        side = "west";
                        size = "Troop";
                        type = "Cavalry";
                        commander = "NATOMen";
                        text = "%1 %3";
                        textShort = "%1 %3";
                    };
        class MD_1_2 {
            id = 22;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_2_1};
            description = "";
        };
            class MD_1_2_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_1_2_1_1,MD_1_2_1_2,MD_1_2_1_3,MD_1_2_1_4,MD_1_2_1_5,MD_1_2_1_6,MD_1_2_1_7,MD_1_2_1_8,MD_1_2_1_9};
            };
                class MD_1_2_1_1 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'Hostile'";
                };
                class MD_1_2_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Anvil'";
                };
                class MD_1_2_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Bushmaster'";
                };
                class MD_1_2_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Chaos'";
                };
                class MD_1_2_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Destroyer'";
                };
                class MD_1_2_1_6 {
                    id = 7;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Gamblers'";
                };
                class MD_1_2_1_7 {
                    id = 7;
                    idType = 0;
                    side = "west";
                    size = "Platoon";
                    type = "Recon";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'Watchdog'";
                };
                class MD_1_2_1_8 {
                    id = 7;
                    idType = 0;
                    side = "west";
                    size = "Platoon";
                    type = "Mortar";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'WolfPack'";
                };
                class MD_1_2_1_9 {
                    id = 7;
                    idType = 0;
                    side = "west";
                    size = "Platoon";
                    type = "Medical";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'Blood-Hounds'";
                };
        class MD_1_3 {
            id = 32;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_3_1};
            description = "";
        };
            class MD_1_3_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_1_3_1_1,MD_1_3_1_2,MD_1_3_1_3,MD_1_3_1_4,MD_1_3_1_5,MD_1_3_1_6};
            };
                class MD_1_3_1_1 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_1_3_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_3_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_3_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_3_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_3_1_6 {
                    id = 5;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_1_4 {
            id = 87;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_4_1};
            description = "";
        };
            class MD_1_4_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_1_4_1_1,MD_1_4_1_2,MD_1_4_1_3,MD_1_4_1_4,MD_1_4_1_5,MD_1_4_1_6};
            };
                class MD_1_4_1_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_1_4_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_4_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_4_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_4_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_4_1_6 {
                    id = 6;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_1_5 {
            id = 6; // %1
            idType = 0;
            side = "west";
            size = "Regiment"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_5_1};
            description = "";
        };
            class MD_1_5_1 {
                id = 3;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_1_5_1_0,MD_1_5_1_1,MD_1_5_1_2,MD_1_5_1_3};
            };
                class MD_1_5_1_0 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_1_5_1_1 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_5_1_2 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_1_5_1_3 {
                    id = 7;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_1_6 {
            id = 7;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Maintenance";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_6_0,MD_1_6_1,MD_1_6_2,MD_1_6_3,MD_1_6_4};
            description = "";
        };
            class MD_1_6_0 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%3 %2";
                textShort = "%3 %2";
            };
            class MD_1_6_1 {
                id = 1;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_6_2 {
                id = 2;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_6_3 {
                id = 3;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_6_4 {
                id = 4;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_1_7 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Support";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_1_7_0,MD_1_7_1,MD_1_7_2,MD_1_7_3,MD_1_7_4,MD_1_7_5,MD_1_7_6,MD_1_7_7};
            description = "";
        };
            class MD_1_7_0 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%3 %2";
                textShort = "%3 %2";
            };
            class MD_1_7_1 {
                id = 1;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_2 {
                id = 2;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_3 {
                id = 3;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_4 {
                id = 4;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_5 {
                id = 5;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_6 {
                id = 6;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_1_7_7 {
                id = 7;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
    class MD_2 {
        id = 2;
        idType = 0;
        side = "west";
        size = "IBCT";
        type = "Infantry";
        commander = "NATOMen";
        text = "%1 %3";
        textShort = "%1 %3 'Commandos'";
        subordinates[] = {MD_2_0, MD_2_1, MD_2_2, MD_2_3, MD_2_4, MD_2_5, MD_2_6, MD_2_7};
        description = "";
    };
        class MD_2_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
        class MD_2_1 {
            id = 89;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Cavalry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_1_1};
            description = "";
        };
            class MD_2_1_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Squadron";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_2_1_1_0,MD_2_1_1_1,MD_2_1_1_2,MD_2_1_1_3,MD_2_1_1_4};
            };
                class MD_2_1_1_0 {
                    id = 3;
                    idType = 0;
                    side = "west";
                    size = "Troop";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_2_1_1_1 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Troop";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_1_1_2 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Troop";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_1_1_3 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Troop";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_1_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_2_2 {
            id = 14;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_2_1};
            description = "";
        };
            class MD_2_2_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_2_2_1_1,MD_2_2_1_2,MD_2_2_1_3,MD_2_2_1_4,MD_2_2_1_5,MD_2_2_1_6};
            };
                class MD_2_2_1_1 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_2_2_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_2_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_2_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_2_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_2_1_6 {
                    id = 5;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_2_3 {
            id = 31;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_3_1};
            description = "";
        };
            class MD_2_3_1 {
                id = 4;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_2_3_1_1,MD_2_3_1_2,MD_2_3_1_3,MD_2_3_1_4,MD_2_3_1_5,MD_2_3_1_6};
            };
                class MD_2_3_1_1 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_2_3_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_3_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_3_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_3_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_3_1_6 {
                    id = 6;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_2_4 {
            id = 87;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_4_1};
            description = "";
        };
            class MD_2_4_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_2_4_1_1,MD_2_4_1_2,MD_2_4_1_3,MD_2_4_1_4,MD_2_4_1_5,MD_2_4_1_6};
            };
                class MD_2_4_1_1 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_2_4_1_2 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_4_1_3 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_4_1_4 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_4_1_5 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_4_1_6 {
                    id = 6;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_2_5 {
            id = 15; // %1
            idType = 0;
            side = "west";
            size = "Regiment"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_5_1};
            description = "";
        };
            class MD_2_5_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_2_5_1_0,MD_2_5_1_1,MD_2_5_1_2,MD_2_5_1_3};
            };
                class MD_2_5_1_0 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Company";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "%3 %2";
                };
                class MD_2_5_1_1 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_5_1_2 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
                class MD_2_5_1_3 {
                    id = 7;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "Support";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class MD_2_6 {
            id = 210;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Support";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_2_6_0,MD_2_6_1,MD_2_6_2,MD_2_6_3,MD_2_6_4,MD_2_6_5,MD_2_6_6,MD_2_6_7};
            description = "";
        };
            class MD_2_6_0 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%3 %2";
                textShort = "%3 %2";
            };
            class MD_2_6_1 {
                id = 1;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_2 {
                id = 2;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_3 {
                id = 3;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_4 {
                id = 4;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_5 {
                id = 5;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_6 {
                id = 6;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
            class MD_2_6_7 {
                id = 7;
                idType = 2;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_2_7 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Unknown";
            commander = "NATOMen";
            text = "Special Troop %3";
            textShort = "ST %3";
            subordinates[] = {};
            description = "";
        };
    class MD_3 {
        id = 3;
        idType = 0;
        side = "west";
        size = "IBCT";
        type = "Infantry";
        commander = "NATOMen";
        text = "%1 %3";
        textShort = "%1 %3 'Spartans'";
        subordinates[] = {MD_3_0, MD_3_1, MD_3_2, MD_3_3, MD_3_4, MD_3_5, MD_3_6, MD_3_7};
        description = "";
    };
        class MD_3_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
        class MD_3_1 {
            id = 172;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Cavalry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_3_1_1};
            description = "";
        };
            class MD_3_1_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Squadron";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_3_2 {
            id = 102;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_3_2_1};
            description = "";
        };
            class MD_3_2_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_3_3 {
            id = 172;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_3_3_1};
            description = "";
        };
            class MD_3_3_1 {
                id = 3;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_3_4 {
            id = 157;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_3_4_1};
            description = "";
        };
            class MD_3_4_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_3_5 {
            id = 101; // %1
            idType = 0;
            side = "west";
            size = "Regiment"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_3_5_1};
            description = "";
        };
            class MD_3_5_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_3_6 {
            id = 572;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Maintenance";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {};
            description = "";
        };
        class MD_3_7 {
            id = 186;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Support";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {};
            description = "";
        };
    class MD_4 {
        id = 4;
        idType = 0;
        side = "west";
        size = "IBCT";
        type = "Infantry";
        commander = "NATOMen";
        text = "%1 %3";
        textShort = "%1 %3 'Patriots'";
        subordinates[] = {MD_4_0, MD_4_1, MD_4_2, MD_4_3, MD_4_4, MD_4_5, MD_4_6, MD_4_7};
        description = "";
    };
        class MD_4_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
        class MD_4_1 {
            id = 89;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Cavalry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_4_1_1};
            description = "";
        };
            class MD_4_1_1 {
                id = 3;
                idType = 0;
                side = "west";
                size = "Squadron";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_4_2 {
            id = 2;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_4_2_1};
            description = "";
        };
            class MD_4_2_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_4_3 {
            id = 4;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_4_3_1};
            description = "";
        };
            class MD_4_3_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_4_4 {
            id = 30;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Infantry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_4_4_1};
            description = "";
        };
            class MD_4_4_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_4_5 {
            id = 25; // %1
            idType = 0;
            side = "west";
            size = "Regiment"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_4_5_1};
            description = "";
        };
            class MD_4_5_1 {
                id = 5;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_4_6 {
            id = 317;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Maintenance";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "'Buffalo'";
            subordinates[] = {};
            description = "";
        };
        class MD_4_7 {
            id = 710;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Support";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "'Patriot Support'";
            subordinates[] = {};
            description = "";
        };
    class MD_5 {
        id = 10;
        idType = 0;
        side = "west";
        size = "Division";
        type = "Artillery";
        commander = "NATOMen";
        text = "%1 Mountain %2 %3";
        textShort = "%1 Mountain %2 %3";
        subordinates[] = {MD_5_0};
        description = "";
    };
        class MD_5_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
    class MD_6 {
        id = 6; // %1
        idType = 0;
        side = "west";
        size = "Brigade"; // %3
        type = "CombatAviation"; // %2
        commander = "NATOMen";
        text = "%2 %3";
        textShort = "%2 %3 'Falcons'";
        subordinates[] = {MD_6_0, MD_6_1, MD_6_2, MD_6_3, MD_6_4, MD_6_5};
        description = "";
    };
        class MD_6_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%3 %2";
            textShort = "%3 %2";
            subordinates[] = {};
            description = "";
        };
        class MD_6_1 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "AttackRecon";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_6_1_1};
            description = "";
        };
            class MD_6_1_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "AttackRecon";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "'TF Dragons'";
            };
        class MD_6_2 {
            id = 11;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "CombatAviation";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {MD_6_2_1};
            description = "";
        };
            class MD_6_2_1 {
                id = 2;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "CombatAviation";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
                subordinates[] = {MD_6_2_1_0,MD_6_2_1_1,MD_6_2_1_2,MD_6_2_1_3,MD_6_2_1_4,MD_6_2_1_5};
            };
                class MD_6_2_1_0 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Platoon";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'Nomads'";
                };
                class MD_6_2_1_1 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "CombatAviation";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Vodoo'";
                };
                class MD_6_2_1_2 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "CombatAviation";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Wolfpack'";
                };
                class MD_6_2_1_3 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "CombatAviation";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Warlords'";
                };
                class MD_6_2_1_4 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "CombatAviation";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Dragon Hawks'";
                };
                class MD_6_2_1_5 {
                    id = 5;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "CombatAviation";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Road Warriors'";
                };
        class MD_6_3 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "GeneralSupport";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "'Phoenix'";
            subordinates[] = {MD_6_3_1};
            description = "";
        };
            class MD_6_3_1 {
                id = 3;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "GeneralSupport";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "'TF Phoenix'";
                subordinates[] = {MD_6_3_1_1,MD_6_3_1_2,MD_6_3_1_3,MD_6_3_1_4,MD_6_3_1_5,MD_6_3_1_6};
            };
                class MD_6_3_1_0 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Platoon";
                    type = "HQ";
                    commander = "NATOMen";
                    text = "%3 %2";
                    textShort = "'Hooligans'";
                };
                class MD_6_3_1_1 {
                    id = 1;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Arch Angels'";
                };
                class MD_6_3_1_2 {
                    id = 2;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Mountain Movers'";
                };
                class MD_6_3_1_3 {
                    id = 3;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Blue Max'";
                };
                class MD_6_3_1_4 {
                    id = 4;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Dreadnaughts'";
                };
                class MD_6_3_1_5 {
                    id = 5;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Executioners'";
                };
                class MD_6_3_1_6 {
                    id = 6;
                    idType = 2;
                    side = "west";
                    size = "Company";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "'Fire Hawks'";
                };
        class MD_6_4 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Regiment";
            type = "Cavalry";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "'Six Shooters'";
            subordinates[] = {MD_6_4_1};
            description = "";
        };
            class MD_6_4_1 {
                id = 6;
                idType = 0;
                side = "west";
                size = "Squadron";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "%1 %3";
            };
        class MD_6_5 {
            id = 277;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "AviationSupport";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "'Mountain Eagle'";
            subordinates[] = {};
            description = "";
        };
    class MD_7 {
        id = 5;
        idType = 0;
        side = "west";
        size = "Brigade";
        type = "Service";
        commander = "NATOMen";
        text = "%1 Sustainment %2";
        textShort = "%1SB";
        subordinates[] = {MD_7_0, MD_7_1, MD_7_2};
        description = "";
    };
        class MD_7_0 {
            id = 1;
            idType = 0;
            side = "west";
            size = "Company";
            type = "HQ";
            commander = "NATOMen";
            text = "%2 %3";
            textShort = "%2 %3";
            subordinates[] = {};
            description = "";
        };
            class MD_7_0_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Platoon";
                type = "Medical";
                commander = "NATOMen";
                text = "%2 %3";
                textShort = "%2 %3";
                subordinates[] = {};
                description = "";
            };
            class MD_7_0_2 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Platoon";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%2 %3";
                textShort = "%2 %3";
                subordinates[] = {};
                description = "";
            };
            class MD_7_0_3 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Platoon";
                type = "Support";
                commander = "NATOMen";
                text = "%2 %3";
                textShort = "%2 %3";
                subordinates[] = {};
                description = "";
            };
        class MD_7_1 {
            id = 10;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Unknown";
            commander = "NATOMen";
            text = "%1 %2 %3 'Workhorse'";
            textShort = "'Workhorse'";
            subordinates[] = {};
            description = "";
        };
        class MD_7_2 {
            id = 548;
            idType = 0;
            side = "west";
            size = "Battalion";
            type = "Support";
            commander = "NATOMen";
            text = "%1 %2 %3";
            textShort = "%1 %2 %3";
            subordinates[] = {};
            description = "";
        };
