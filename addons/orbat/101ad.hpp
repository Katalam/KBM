    class AD {
        id = 101;
        idType = 0;
        side = "west";
        size = "Division";
        type = "Airborne";
        commander = "McConville";
        commanderRank = "General";
        text = "%1 %2 %3";
        textShort = "%1 %2 %3";
        subordinates[] = {AD_0,AD_1,AD_3,AD_3,AD_4,AD_5,AD_6};
        description = "";
        insignia = QPATHTOF(data\101ad.paa);
        texture = QPATHTOF(data\101ad.paa);
        color[] = {255,255,255,1};
        //assets[] = {{"Land_Carrier_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}};
    };
        class AD_0 {
            id = 0; // %1
            idType = 0;
            side = "west";
            size = "Battalion"; // %3
            type = "HQ"; // %2
            commander = "NATOMen";
            commanderRank = "General";
            text = "Division %2";
            textShort = "Div %2";
            subordinates[] = {AD_0_1,AD_0_2,AD_0_3,AD_0_4,AD_0_5};
            description = "";
        };
            class AD_0_1 {
                id = 1;
                idType = 2;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "'Slayers'";
                subordinates[] = {};
                description = "";
            };
            class AD_0_2 {
                id = 2;
                idType = 2;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "'Black Dragons'";
                subordinates[] = {};
                description = "";
            };
            class AD_0_3 {
                id = 3;
                idType = 2;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%1 %3";
                textShort = "'Spartans'";
                subordinates[] = {};
                description = "";
            };
            class AD_0_4 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%2 %3";
                textShort = "'Sentries'";
                subordinates[] = {};
                description = "";
            };
            class AD_0_5 {
                id = 101;
                idType = 0;
                side = "west";
                size = "Company";
                type = "Airborne";
                commander = "NATOMen";
                text = "%1 %2 Division Band";
                textShort = "'Pride of the Eagle'";
                subordinates[] = {};
                description = "";
            };
        class AD_1 {
            id = 1; // %1
            idType = 0;
            side = "west";
            size = "IBCT"; // %3
            type = "Infantry"; // %2
            commander = "NATOMen";
            text = "%1 %3";
            textShort = "'Bastogne'";
            subordinates[] = {AD_1_1,AD_1_2,AD_1_3,AD_1_4,AD_1_5,AD_1_6,AD_1_7};
            description = "";
        };
            class AD_1_1 {
                id = 0;
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
            class AD_1_2 {
                id = 327;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Bulldogs'";
                subordinates[] = {AD_1_2_1};
                description = "";
            };
                class AD_1_2_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_1_3 {
                id = 327;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'No Slack'";
                subordinates[] = {AD_1_3_1};
                description = "";
            };
                class AD_1_3_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_1_4 {
                id = 506;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Red Currahee'";
                subordinates[] = {AD_1_4_1};
                description = "";
            };
                class AD_1_4_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_1_5 {
                id = 32;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Bandits'";
                subordinates[] = {AD_1_5_1};
                description = "";
            };
                class AD_1_5_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Squadron";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_1_6 {
                id = 326;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Sapper Eagles'";
                subordinates[] = {};
                description = "";
            };
            class AD_1_7 {
                id = 426;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Tankmasters'";
                subordinates[] = {};
                description = "";
            };
        class AD_2 {
            id = 2; // %1
            idType = 0;
            side = "west";
            size = "IBCT"; // %3
            type = "Infantry"; // %2
            commander = "NATOMen";
            text = "%1 %3";
            textShort = "'Strike'";
            subordinates[] = {AD_2_1,AD_2_2,AD_2_3,AD_2_4,AD_2_5,AD_2_6,AD_2_7};
            description = "";
        };
            class AD_2_1 {
                id = 0;
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
            class AD_2_2 {
                id = 502;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'First Strike'";
                subordinates[] = {AD_2_2_1};
                description = "";
            };
                class AD_2_2_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_2_3 {
                id = 502;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Strike Force'";
                subordinates[] = {AD_2_3_1};
                description = "";
            };
                class AD_2_3_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_2_4 {
                id = 26;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Blue Spaders'";
                subordinates[] = {AD_2_4_1};
                description = "";
            };
                class AD_2_4_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_2_5 {
                id = 75;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Widowmakers'";
                subordinates[] = {AD_2_5_1};
                description = "";
            };
                class AD_2_5_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Squadron";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_2_6 {
                id = 39;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Raptor'";
                subordinates[] = {};
                description = "";
            };
            class AD_2_7 {
                id = 526;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Best by Performance'";
                subordinates[] = {};
                description = "";
            };
        class AD_3 {
            id = 2; // %1
            idType = 0;
            side = "west";
            size = "IBCT"; // %3
            type = "Infantry"; // %2
            commander = "NATOMen";
            text = "%1 %3";
            textShort = "'Rakkasan'";
            subordinates[] = {AD_3_1,AD_3_2,AD_3_3,AD_3_4,AD_3_5,AD_3_6,AD_3_7};
            description = "";
        };
            class AD_3_1 {
                id = 0;
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
            class AD_3_2 {
                id = 187;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Leader Rakkasans'";
                subordinates[] = {AD_3_2_1};
                description = "";
            };
                class AD_3_2_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_3_3 {
                id = 187;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Iron Rakkasans'";
                subordinates[] = {AD_3_3_1};
                description = "";
            };
                class AD_3_3_1 {
                    id = 3;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_3_4 {
                id = 506;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Infantry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'White Currahee'";
                subordinates[] = {AD_3_4_1};
                description = "";
            };
                class AD_3_4_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Infantry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_3_5 {
                id = 33;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'War Rakkasans'";
                subordinates[] = {AD_3_5_1};
                description = "";
            };
                class AD_3_5_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Squadron";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_3_6 {
                id = 21;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Maintenance";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Rak Solid'";
                subordinates[] = {};
                description = "";
            };
            class AD_3_7 {
                id = 626;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Support";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Assurgam'";
                subordinates[] = {};
                description = "";
            };
        class AD_4 {
            id = 2; // %1
            idType = 0;
            side = "west";
            size = "Division"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %3";
            textShort = "'Guns of Glory'";
            subordinates[] = {AD_4_1,AD_4_2,AD_4_3,AD_4_4};
            description = "";
        };
            class AD_4_1 {
                id = 0;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%3 %2";
                textShort = "'Headhunters'";
                subordinates[] = {};
                description = "";
            };
            class AD_4_2 {
                id = 32;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Proud Americans'";
                subordinates[] = {AD_4_2_1};
                description = "";
            };
                class AD_4_2_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_4_3 {
                id = 320;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Top Guns'";
                subordinates[] = {AD_4_3_1};
                description = "";
            };
                class AD_4_3_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_4_4 {
                id = 320;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Red Knights'";
                subordinates[] = {AD_4_4_1};
                description = "";
            };
                class AD_4_4_1 {
                    id = 3;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
        class AD_5 {
            id = 2; // %1
            idType = 0;
            side = "west";
            size = "Division"; // %3
            type = "Artillery"; // %2
            commander = "NATOMen";
            text = "%1 %3";
            textShort = "'Wings of Destiny'";
            subordinates[] = {AD_5_1,AD_5_2,AD_5_3,AD_5_4};
            description = "";
        };
            class AD_5_1 {
                id = 0;
                idType = 0;
                side = "west";
                size = "Company";
                type = "HQ";
                commander = "NATOMen";
                text = "%3 %2";
                textShort = "'Hell Cats'";
                subordinates[] = {};
                description = "";
            };
            class AD_5_2 {
                id = 17;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Cavalry";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Out Front'";
                subordinates[] = {AD_5_2_1};
                description = "";
            };
                class AD_5_2_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Squadron";
                    type = "Cavalry";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_5_3 {
                id = 101;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "AviationSupport";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Expect No Mercy'";
                subordinates[] = {AD_5_3_1};
                description = "";
            };
                class AD_5_3_1 {
                    id = 1;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "AviationSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                    subordinates[] = {AD_5_3_1_1,AD_5_3_1_2};
                };
                    class AD_5_3_1_1 {
                        id = 1;
                        idType = 0;
                        side = "west";
                        size = "Company";
                        type = "HQ";
                        commander = "NATOMen";
                        text = "%3 %2";
                        textShort = "%3 %2";
                    };
                    class AD_5_3_1_2 {
                        id = 2;
                        idType = 2;
                        side = "west";
                        size = "Company";
                        type = "AviationSupport";
                        commander = "NATOMen";
                        text = "%1 %3";
                        textShort = "%1 %3";
                    };
            class AD_5_4 {
                id = 101;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "Assault";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Eagle Assault'";
                subordinates[] = {AD_5_4_1};
                description = "";
            };
                class AD_5_4_1 {
                    id = 5;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Assault";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_5_5 {
                id = 101;
                idType = 0;
                side = "west";
                size = "Regiment";
                type = "GeneralSupport";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Shadow of the Eagle'";
                subordinates[] = {AD_5_5_1};
                description = "";
            };
                class AD_5_5_1 {
                    id = 6;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "GeneralSupport";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_5_6 {
                id = 96;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "AviationSupport";
                commander = "NATOMen";
                text = "%1 %2 %3";
                textShort = "'Troubleshooters'";
                subordinates[] = {AD_5_6_1};
                description = "";
            };
        class AD_6 {
            id = 101;
            idType = 0;
            side = "west";
            size = "Brigade";
            type = "Service";
            commander = "NATOMen";
            text = "%1 Sustainment %2";
            textShort = "'Life Liners'";
            subordinates[] = {AD_6_1, AD_6_2, AD_6_3, AD_6_4, AD_6_5, AD_6_6};
            description = "";
        };
            class AD_6_1 {
                id = 1;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Unknown";
                commander = "NATOMen";
                text = "Special Troops %3";
                textShort = "'Sustainers'";
                subordinates[] = {};
                description = "";
            };
            class AD_6_2 {
                id = 129;
                idType = 0;
                side = "west";
                size = "Battalion";
                type = "Unknown";
                commander = "NATOMen";
                text = "%1 Combat Sustainment %3";
                textShort = "'Drive the Wedge'";
                subordinates[] = {};
                description = "";
            };
            class AD_6_3 {
                id = 16;
                idType = 0;
                side = "west";
                size = "Brigade";
                type = "Unknown";
                commander = "NATOMen";
                text = "%1 Military Police %3";
                textShort = "'Peacekeepers'";
                subordinates[] = {AD_6_3_1};
                description = "";
            };
                class AD_6_3_1 {
                    id = 716;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Unknown";
                    commander = "NATOMen";
                    text = "%1 Military Police %3";
                    textShort = "%1 MP %3";
                };
            class AD_6_4 {
                id = 44;
                idType = 0;
                side = "west";
                size = "Brigade";
                type = "Artillery";
                commander = "NATOMen";
                text = "%1 Air Defense Artillery %3";
                textShort = "'Peacekeepers'";
                subordinates[] = {AD_6_4_1};
                description = "";
            };
                class AD_6_4_1 {
                    id = 2;
                    idType = 0;
                    side = "west";
                    size = "Battalion";
                    type = "Artillery";
                    commander = "NATOMen";
                    text = "%1 %3";
                    textShort = "%1 %3";
                };
            class AD_6_5 {
                id = 1176;
                idType = 0;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 Transportation %3";
                textShort = "%1 Trans %3";
                subordinates[] = {};
                description = "";
            };
            class AD_6_6 {
                id = 2123;
                idType = 0;
                side = "west";
                size = "Company";
                type = "Support";
                commander = "NATOMen";
                text = "%1 Transportation %3";
                textShort = "%1 Trans %3";
                subordinates[] = {};
                description = "";
            };
