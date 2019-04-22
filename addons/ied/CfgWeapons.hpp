class CfgWeapons {
	class ItemCompass;
	class ItemWatch;
	class ItemMap;
	class ItemRadio;
	class ItemGPS;
	class InventoryItem_Base_F;
	class ItemCore;

	class GVAR(Snips) : ItemCore {
		displayName = "Diagonal Snips";
		descriptionShort = "Standard Diagonal Snips; Metal, 5in";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		simulation = "ItemMineDetector";
		class ItemInfo : InventoryItem_Base_F {
	    	mass = 1;
			allowedSlots[] = {701, 801, 901};
    	};
		picture = QPATHTOF(data\tools\diagonal_snips.paa);
		author = "Katalam";
	};

	class GVAR(ESD_DSnips) : GVAR(Snips) {
		displayName = "Diagonal Snips; ESD";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 5in";
        picture = QPATHTOF(data\tools\esd_diagonal_snips.paa);
	};

	class GVAR(NNPliers) : GVAR(Snips) {
		displayName = "Long-Nose Pliers";
		descriptionShort = "Standard Long-Nose Pliers; Metal, 7in";
        picture = QPATHTOF(data\tools\needlenose_pliers.paa);
	};

	class GVAR(ESD_NNPliers) : GVAR(Snips) {
		displayName = "Long-Nose Pliers; ESD";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 7in";
        picture = QPATHTOF(data\tools\esd_needlenose_pliers.paa);
	};

	class GVAR(ESD_Tweezers_R) : GVAR(Snips) {
		displayName = "Tweezers; Round";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 5in";
        picture = QPATHTOF(data\tools\esd_tweezers_round.paa);
	};

	class GVAR(ESD_Tweezers_F) : GVAR(Snips) {
		displayName = "Tweezers; Fine";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 5in";
        picture = QPATHTOF(data\tools\esd_tweezers_fine.paa);
	};

	class GVAR(ESD_Tweezers_C) : GVAR(Snips) {
		displayName = "Tweezers; Curved";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 5in";
        picture = QPATHTOF(data\tools\esd_tweezers_curved.paa);
	};

	class GVAR(Spudger_Set) : GVAR(Snips) {
		displayName = "Spudger Set; ESD";
		descriptionShort = "Electro-Static-Discharge Safe; Plastic, 5in";
        picture = QPATHTOF(data\tools\spudger_set.paa);
	};

	class GVAR(Mini_inspection_Mirror) : GVAR(Snips) {
		displayName = "Mini Inspection Mirror";
		descriptionShort = "Telescopic Mirror; 180* Head, ~24in";
        picture = QPATHTOF(data\tools\inspection_mirror.paa);
	};

	class GVAR(Screwdriver_Phillips) : GVAR(Snips) {
		displayName = "Screwdriver; Phillips";
		descriptionShort = "Standard Phillips Screwdriver; Metal, 7in";
        picture = QPATHTOF(data\tools\screwdriver_phillips.paa);
	};

	class GVAR(Screwdriver_Flathead) : GVAR(Snips) {
		displayName = "Screwdriver; Flathead";
		descriptionShort = "Standard Flathead Screwdriver; Metal, 7in";
        picture = QPATHTOF(data\tools\screwdriver_flathead.paa);
	};

	class GVAR(Ceramic_Knife) : GVAR(Snips) {
		displayName = "Ceramic Knife";
		descriptionShort = "High Grade Polymer, Non-Conductive; Black, 7in";
        picture = QPATHTOF(data\tools\ceramic_knife.paa);
	};

	class GVAR(Fuse_CrimperCutter) : GVAR(Snips) {
		displayName = "Fuse Crimper/Cutter";
		descriptionShort = "Non-Magnetic; Anodized Aluminium, 10in";
        picture = QPATHTOF(data\tools\fusecrimper.paa);
	};

	class GVAR(Hex_Keys) : GVAR(Snips) {
		displayName = "Hex Key Set";
		descriptionShort = "Standard Hex (Allen) Set, Hexagonal; Steel Oxide";
        picture = QPATHTOF(data\tools\hex_keys.paa);
	};

	class GVAR(Alligator_Clips) : GVAR(Snips) {
		displayName = "Wire: Alligator";
		descriptionShort = "Stainless, Insulated; Multi-Colored, 4-24in";
        picture = QPATHTOF(data\tools\alclips.paa);
	};

	class GVAR(Jumper_Wires) : GVAR(Snips) {
		displayName = "Wire: Jumpers";
		descriptionShort = "M/M, F/F, M/F; Multi-Packs, 4-12in";
        picture = QPATHTOF(data\tools\jumperwires.paa);
	};

	class GVAR(Multi_Tool) : GVAR(Snips) {
		displayName = "Multi-Tool, S.O.G";
		descriptionShort = "Multi-Purpose, Portable, Versatile; Black Satin, 8in";
        picture = QPATHTOF(data\tools\multi_tool.paa);
	};

	class GVAR(PryBar) : GVAR(Snips) {
		displayName = "Mini PryBar";
		descriptionShort = "Flat, Forked with Curve; Titanium, 8-15in";
        picture = QPATHTOF(data\tools\prybar.paa);
	};

	class GVAR(Reamer) : GVAR(Snips) {
		displayName = "Reamer";
		descriptionShort = "Non-Precision, Tapered; Carbide, 6in";
        picture = QPATHTOF(data\tools\reamer.paa);
	};

	class GVAR(MultiMeter) : GVAR(Snips) {
		displayName = "Multi-Meter";
		descriptionShort = "Volt-Ohm Meter, Fluke 80 Series; Waterproof, ~80V";
        picture = QPATHTOF(data\tools\multimeter.paa);
	};

	class GVAR(Shock_Initiator) : GVAR(Snips) {
		displayName = "Shock Initiator";
		descriptionShort = "Duel Shock Tube, Royal Arms; Zinc Coated, 6in";
        picture = QPATHTOF(data\tools\shockini.paa);
	};
};

/*
"kat_10thmods_ied_Snips",
"kat_10thmods_ied_ESD_DSnips",
"kat_10thmods_ied_NNPliers",
"kat_10thmods_ied_ESD_NNPliers",
"kat_10thmods_ied_ESD_Tweezers_R",
"kat_10thmods_ied_ESD_Tweezers_F",
"kat_10thmods_ied_ESD_Tweezers_C",
"kat_10thmods_ied_Spudger_Set",
"kat_10thmods_ied_Mini_inspection_Mirror",
"kat_10thmods_ied_Screwdriver_Phillips",
"kat_10thmods_ied_Screwdriver_Flathead",
"kat_10thmods_ied_Ceramic_Knife",
"kat_10thmods_ied_Fuse_CrimperCutter",
"kat_10thmods_ied_Hex_Keys",
"kat_10thmods_ied_Alligator_Clips",
"kat_10thmods_ied_Jumper_Wires",
"kat_10thmods_ied_Multi_Tool",
"kat_10thmods_ied_PryBar",
"kat_10thmods_ied_Reamer",
"kat_10thmods_ied_MultiMeter",
"kat_10thmods_ied_Shock_Initiator"
*/
