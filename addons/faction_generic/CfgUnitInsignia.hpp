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
    class GVAR(private): GVAR(medic) {
        displayName = "Private";
        texture = QPATHTOF(data\private.paa);
    };
    class GVAR(corporal): GVAR(medic) {
        displayName = "Corporal";
        texture = QPATHTOF(data\corporal.paa);
    };
    class GVAR(sergeant): GVAR(medic) {
        displayName = "Sergeant";
        texture = QPATHTOF(data\sergeant.paa);
    };
    class GVAR(lieutenant): GVAR(medic) {
        displayName = "Lieutenant";
        texture = QPATHTOF(data\lieutenant.paa);
    };
    class GVAR(captain): GVAR(medic) {
        displayName = "Captain";
        texture = QPATHTOF(data\captain.paa);
    };
};
