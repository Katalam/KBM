	class ID {
		id = 3;
		idType = 0;
		side = "west";
		size = "Division";
		type = "Infantry";
		commander = "Abrams";
		commanderRank = "General";
		text = "%1 %2 %3";
		textShort = "%1 %2 %3";
		subordinates[] = {ID_0,ID_1,ID_2,ID_3,ID_4,ID_5,ID_6};
		description = "";
		insignia = QPATHTOF(data\3id.paa);
		texture = QPATHTOF(data\3id.paa);
		color[] = {255,255,255,1};
		//assets[] = {{"Land_Carrier_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Land_Destroyer_01_base_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}, {"Submarine_01_F"}};
	};
		class ID_0 {
			id = 0; // %1
			idType = 0;
			side = "west";
			size = "Brigade"; // %3
			type = "HQ"; // %2
			commander = "Abrams";
			commanderRank = "General";
			text = "Division %2";
			textShort = "Div %2";
			subordinates[] = {};
			description = "";
		};
		class ID_1 {
			id = 1; // %1
			idType = 0;
			side = "west";
			size = "HBCT"; // %3
			type = "Armored"; // %2
			commander = "NATOMen";
			text = "%1 %3";
			textShort = "%1 %3";
			subordinates[] = {ID_1_1,ID_1_2,ID_1_3,ID_1_4,ID_1_5,ID_1_6,ID_1_7,ID_1_8};
			description = "";
		};
			class ID_1_1 {
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
			class ID_1_2 {
				id = 7;
				idType = 0;
				side = "west";
				size = "Regiment";
				type = "Cavalry";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Warpaint'";
				subordinates[] = {ID_1_2_1};
				description = "";
			};
				class ID_1_2_1 {
					id = 5;
					idType = 0;
					side = "west";
					size = "Squadron";
					type = "Cavalry";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
				};
			class ID_1_3 {
				id = 64;
				idType = 0;
				side = "west";
				size = "Regiment";
				type = "Armored";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Desert Roque'";
				subordinates[] = {ID_1_3_1};
				description = "";
			};
				class ID_1_3_1 {
					id = 1;
					idType = 0;
					side = "west";
					size = "Battalion";
					type = "Armored";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
				};
			class ID_1_4 {
				id = 69;
				idType = 0;
				side = "west";
				size = "Regiment";
				type = "Armored";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Speed & Power'";
				subordinates[] = {ID_1_4_1};
				description = "";
			};
				class ID_1_4_1 {
					id = 3;
					idType = 0;
					side = "west";
					size = "Battalion";
					type = "Armored";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
				};
			class ID_1_5 {
				id = 7;
				idType = 0;
				side = "west";
				size = "Regiment";
				type = "Infantry";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Cottonbalers'";
				subordinates[] = {ID_1_5_1};
				description = "";
			};
				class ID_1_5_1 {
					id = 2;
					idType = 0;
					side = "west";
					size = "Battalion";
					type = "Infantry";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
				};
			class ID_1_6 {
				id = 41;
				idType = 0;
				side = "west";
				size = "Regiment";
				type = "Artillery";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Glory's Guns'";
				subordinates[] = {ID_1_6_1};
				description = "";
			};
				class ID_1_6_1 {
					id = 1;
					idType = 0;
					side = "west";
					size = "Battalion";
					type = "Artillery";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
				};
			class ID_1_7 {
				id = 10;
				idType = 0;
				side = "west";
				size = "Battalion";
				type = "Maintenance";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Bridge the Sky'";
				subordinates[] = {};
				description = "";
			};
			class ID_1_8 {
				id = 3;
				idType = 0;
				side = "west";
				size = "Battalion";
				type = "Support";
				commander = "NATOMen";
				text = "%1 %2 %3";
				textShort = "'Ready to Roll'";
				subordinates[] = {};
				description = "";
			};
			class ID_2 {
				id = 2; // %1
				idType = 0;
				side = "west";
				size = "HBCT"; // %3
				type = "Armored"; // %2
				commander = "NATOMen";
				text = "%1 %3";
				textShort = "%1 %3";
				subordinates[] = {ID_2_1,ID_2_2,ID_2_3,ID_2_4,ID_2_5,ID_2_6,ID_2_7,ID_2_8};
				description = "";
			};
				class ID_2_1 {
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
				class ID_2_2 {
					id = 8;
					idType = 0;
					side = "west";
					size = "Regiment";
					type = "Cavalry";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'Mustang'";
					subordinates[] = {ID_2_2_1};
					description = "";
				};
					class ID_2_2_1 {
						id = 6;
						idType = 0;
						side = "west";
						size = "Squadron";
						type = "Cavalry";
						commander = "NATOMen";
						text = "%1 %3";
						textShort = "%1 %3";
					};
				class ID_2_3 {
					id = 67;
					idType = 0;
					side = "west";
					size = "Regiment";
					type = "Armored";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "%1 %2 %3";
					subordinates[] = {ID_2_3_1};
					description = "";
				};
					class ID_2_3_1 {
						id = 3;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Armored";
						commander = "NATOMen";
						text = "%1 %3";
						textShort = "%1 %3";
					};
				class ID_2_4 {
					id = 15;
					idType = 0;
					side = "west";
					size = "Regiment";
					type = "Armored";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'China'";
					subordinates[] = {ID_2_4_1};
					description = "";
				};
					class ID_2_4_1 {
						id = 3;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Infantry";
						commander = "NATOMen";
						text = "%1 %3";
						textShort = "%1 %3";
					};
				class ID_2_5 {
					id = 69;
					idType = 0;
					side = "west";
					size = "Regiment";
					type = "Infantry";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "%1 %2 %3";
					subordinates[] = {ID_2_5_1};
					description = "";
				};
					class ID_2_5_1 {
						id = 2;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Armored";
						commander = "NATOMen";
						text = "%1 %3";
						textShort = "%1 %3";
					};
				class ID_2_6 {
					id = 9;
					idType = 0;
					side = "west";
					size = "Regiment";
					type = "Artillery";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'Battlekings'";
					subordinates[] = {ID_2_6_1};
					description = "";
				};
					class ID_2_6_1 {
						id = 1;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Artillery";
						commander = "NATOMen";
						text = "%1 %3";
						textShort = "%1 %3";
					};
				class ID_2_7 {
					id = 9;
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
				class ID_2_8 {
					id = 703;
					idType = 0;
					side = "west";
					size = "Battalion";
					type = "Support";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'Maintain'";
					subordinates[] = {};
					description = "";
				};
				class ID_3 {
					id = 48;
					idType = 0;
					side = "west";
					size = "IBCT";
					type = "Infantry";
					commander = "NATOMen";
					text = "%1 %3";
					textShort = "%1 %3";
					subordinates[] = {ID_3_0, ID_3_1, ID_3_2, ID_3_3, ID_3_4, ID_3_5, ID_3_6, ID_3_7};
					description = "";
				};
					class ID_3_0 {
						id = 1;
						idType = 0;
						side = "west";
						size = "Company";
						type = "HQ";
						commander = "NATOMen";
						text = "Brigade %2";
						textShort = "Brigade %2";
						subordinates[] = {};
						description = "";
					};
					class ID_3_1 {
						id = 108;
						idType = 0;
						side = "west";
						size = "Squadron";
						type = "Cavalry";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Roughriders'";
						subordinates[] = {};
						description = "";
					};
					class ID_3_2 {
						id = 121;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "Infantry";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Spartans'";
						subordinates[] = {};
						description = "";
					};
					class ID_3_3 {
						id = 122;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "Infantry";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Warriors'";
						subordinates[] = {ID_3_3_0,ID_3_3_1,ID_3_3_2,ID_3_3_3,ID_3_3_4,ID_3_3_5};
						description = "";
					};
						class ID_3_3_0 {
							id = 1;
							idType = 2;
							side = "west";
							size = "Company";
							type = "HQ";
							commander = "NATOMen";
							text = "%3 %2";
							textShort = "'Huron'";
							subordinates[] = {};
							description = "";
						};
						class ID_3_3_1 {
							id = 1;
							idType = 2;
							side = "west";
							size = "Company";
							type = "Infantry";
							commander = "NATOMen";
							text = "%1 %2 %3";
							textShort = "'Apache'";
							subordinates[] = {};
							description = "";
						};
						class ID_3_3_2 {
							id = 2;
							idType = 2;
							side = "west";
							size = "Company";
							type = "Infantry";
							commander = "NATOMen";
							text = "%1 %2 %3";
							textShort = "'Blackhawk'";
							subordinates[] = {};
							description = "";
						};
						class ID_3_3_3 {
							id = 3;
							idType = 2;
							side = "west";
							size = "Company";
							type = "Infantry";
							commander = "NATOMen";
							text = "%1 %2 %3";
							textShort = "'Comanche'";
							subordinates[] = {};
							description = "";
						};
						class ID_3_3_4 {
							id = 4;
							idType = 2;
							side = "west";
							size = "Company";
							type = "Infantry";
							commander = "NATOMen";
							text = "%1 %2 %3";
							textShort = "'Dakota'";
							subordinates[] = {};
							description = "";
						};
						class ID_3_3_5 {
							id = 8;
							idType = 2;
							side = "west";
							size = "Company";
							type = "Infantry";
							commander = "NATOMen";
							text = "%1 %2 %3";
							textShort = "'Hotel'";
							subordinates[] = {};
							description = "";
						};
					class ID_3_4 {
						id = 123;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "Infantry";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Pathfinders'";
						subordinates[] = {};
						description = "";
					};
					class ID_3_5 {
						id = 118; // %1
						idType = 0;
						side = "west";
						size = "Regiment"; // %3
						type = "Artillery"; // %2
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Hockorys Howitzers";
						subordinates[] = {};
						description = "";
					};
					class ID_3_6 {
						id = 148;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Maintenance";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Wishmasters'";
						subordinates[] = {};
						description = "";
					};
					class ID_3_7 {
						id = 177;
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
				class ID_4 {
					id = 3;
					idType = 0;
					side = "west";
					size = "Division";
					type = "Artillery";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'Marine Thunder'";
					subordinates[] = {ID_4_0};
					description = "";
				};
					class ID_4_0 {
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
				class ID_5 {
					id = 3;
					idType = 0;
					side = "west";
					size = "Brigade";
					type = "CombatAviation";
					commander = "NATOMen";
					text = "%1 %2 %3";
					textShort = "'Falcon'";
					subordinates[] = {ID_5_0, ID_5_1, ID_5_2, ID_5_3, ID_5_4};
					description = "";
				};
					class ID_5_0 {
						id = 1;
						idType = 0;
						side = "west";
						size = "Company";
						type = "HQ";
						commander = "NATOMen";
						text = "%2 %3";
						textShort = "'Talons'";
						subordinates[] = {};
						description = "";
					};
					class ID_5_1 {
						id = 3;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "GeneralSupport";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Knighhawk'";
						subordinates[] = {ID_5_1_1};
						description = "";
						assets[] = {{"B_Heli_Transport_03_F"}, {"B_Heli_Transport_03_F"}, {"B_Heli_Transport_03_F"}, {"B_Heli_Transport_03_F"}};
					};
						class ID_5_1_1 {
							id = 2;
							idType = 0;
							side = "west";
							size = "Squadron";
							type = "GeneralSupport";
							commander = "NATOMen";
							text = "%1 %3";
							textShort = "%1 %3";
							subordinates[] = {ID_5_1_1_1,ID_5_1_1_2,ID_5_1_1_3,ID_5_1_1_4,ID_5_1_1_5};
						};
							class ID_5_1_1_1 {
								id = 1;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Barnstormers'";
							};
							class ID_5_1_1_2 {
								id = 2;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Hercules'";
							};
							class ID_5_1_1_3 {
								id = 3;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Dustoff'";
							};
							class ID_5_1_1_4 {
								id = 4;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "%1 %3";
							};
							class ID_5_1_1_5 {
								id = 6;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "%1 %3";
							};
					class ID_5_2 {
						id = 17;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "CombatAviation";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Lighthorse'";
						subordinates[] = {ID_5_2_1};
						description = "";
						assets[] = {{"B_Heli_Attack_01_dynamicLoadout_F"}, {"B_Heli_Attack_01_dynamicLoadout_F"}, {"B_Heli_Attack_01_dynamicLoadout_F"}, {"B_Heli_Attack_01_dynamicLoadout_F"}};
					};
						class ID_5_2_1 {
							id = 3;
							idType = 0;
							side = "west";
							size = "Squadron";
							type = "CombatAviation";
							commander = "NATOMen";
							text = "%1 %3";
							textShort = "%1 %3";
							subordinates[] = {ID_5_2_1_1};
						};
							class ID_5_2_1_1 {
								id = 3;
								idType = 0;
								side = "west";
								size = "Troop";
								type = "CombatAviation";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Lighthorse'";
							};
					class ID_5_3 {
						id = 3;
						idType = 0;
						side = "west";
						size = "Regiment";
						type = "Assault";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Brawler'";
						subordinates[] = {ID_5_3_1};
						description = "";
						assets[] = {{"B_Heli_Transport_01_F"}, {"B_Heli_Transport_01_F"}, {"B_Heli_Transport_01_F"}, {"B_Heli_Transport_01_F"}};
					};
						class ID_5_3_1 {
							id = 4;
							idType = 0;
							side = "west";
							size = "Battalion";
							type = "Assault";
							commander = "NATOMen";
							text = "%1 %3";
							textShort = "%1 %3";
							subordinates[] = {ID_5_3_1_1,ID_5_3_1_2,ID_5_3_1_3,ID_5_3_1_4,ID_5_3_1_5};
						};
							class ID_5_3_1_1 {
								id = 1;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Spiders'";
							};
							class ID_5_3_1_2 {
								id = 2;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "%1 %3";
							};
							class ID_5_3_1_3 {
								id = 3;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "%1 %3";
							};
							class ID_5_3_1_4 {
								id = 4;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "'Demons'";
							};
							class ID_5_3_1_5 {
								id = 6;
								idType = 2;
								side = "west";
								size = "Company";
								type = "GeneralSupport";
								commander = "NATOMen";
								text = "%1 %3";
								textShort = "%1 %3";
							};
					class ID_5_4 {
						id = 603;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "AviationSupport";
						commander = "NATOMen";
						text = "%1 %2 %3";
						textShort = "'Work Horse'";
						subordinates[] = {};
						description = "";
					};
				class ID_6 {
					id = 3;
					idType = 0;
					side = "west";
					size = "Brigade";
					type = "Service";
					commander = "NATOMen";
					text = "%1 Sustainment %2";
					textShort = "%1SB";
					subordinates[] = {ID_6_0, ID_6_1, ID_6_2};
					description = "";
				};
					class ID_6_0 {
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
					class ID_6_1 {
						id = 3;
						idType = 0;
						side = "west";
						size = "Battalion";
						type = "Unknown";
						commander = "NATOMen";
						text = "%1 Special Troops %3";
						textShort = "%1 STB";
						subordinates[] = {};
						description = "";
					};
					class ID_6_2 {
						id = 87;
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
