class CfgUnitInsignia {
	class GVAR(medic) {
		displayName = "Medic";
		texture = QPATHTOF(data\medic.paa);
		author = "Katalam";
		textureVehicle = "";
	};
	class GVAR(jfo): GVAR(medic) {
		displayName = "JFO";
		texture = QPATHTOF(data\jfo.paa);
	};
	class GVAR(jtac): GVAR(medic) {
		displayName = "JTAC";
		texture = QPATHTOF(data\jtac.paa);
	};
};
