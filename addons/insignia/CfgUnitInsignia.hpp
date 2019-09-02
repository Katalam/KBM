class CfgUnitInsignia {
    class GVAR(medic) {
        displayName = "Medic";
        texture = QPATHTOF(data\multicam\medic.paa);
        author = "Katalam";
        textureVehicle = "";
    };
    class GVAR(jfo): GVAR(medic) {
        displayName = "JFO";
        texture = QPATHTOF(data\multicam\jfo.paa);
    };
    class GVAR(jtac): GVAR(medic) {
        displayName = "JTAC";
        texture = QPATHTOF(data\multicam\jtac.paa);
    };
    class GVAR(private): GVAR(medic) {
        displayName = "Private";
        texture = QPATHTOF(data\multicam\private.paa);
    };
    class GVAR(corporal): GVAR(medic) {
        displayName = "Corporal";
        texture = QPATHTOF(data\multicam\corporal.paa);
    };
    class GVAR(sergeant): GVAR(medic) {
        displayName = "Sergeant";
        texture = QPATHTOF(data\multicam\sergeant.paa);
    };
    class GVAR(lieutenant): GVAR(medic) {
        displayName = "Lieutenant";
        texture = QPATHTOF(data\multicam\lieutenant.paa);
    };
    class GVAR(captain): GVAR(medic) {
        displayName = "Captain";
        texture = QPATHTOF(data\multicam\captain.paa);
    };
    class GVAR(atc): GVAR(medic) {
        displayName = "ATC";
        texture = QPATHTOF(data\multicam\atc.paa);
    };

    class GVAR(medic_grey): GVAR(medic) {
        displayName = "Medic (Grey)";
        texture = QPATHTOF(data\grey\medic.paa);
    };
    class GVAR(private_grey): GVAR(medic) {
        displayName = "Private (Grey)";
        texture = QPATHTOF(data\grey\private.paa);
    };
    class GVAR(corporal_grey): GVAR(medic) {
        displayName = "Corporal (Grey)";
        texture = QPATHTOF(data\grey\corporal.paa);
    };
    class GVAR(sergeant_grey): GVAR(medic) {
        displayName = "Sergeant (Grey)";
        texture = QPATHTOF(data\grey\sergeant.paa);
    };
    class GVAR(lieutenant_grey): GVAR(medic) {
        displayName = "Lieutenant (Grey)";
        texture = QPATHTOF(data\grey\lieutenant.paa);
    };
    class GVAR(jtac_grey): GVAR(medic) {
        displayName = "JTAC (Grey)";
        texture = QPATHTOF(data\grey\jtac.paa);
    };
    class GVAR(fo_grey): GVAR(medic) {
        displayName = "FO (Grey)";
        texture = QPATHTOF(data\grey\fo.paa);
    };
    class GVAR(tacp_grey): GVAR(medic) {
        displayName = "TACP (Grey)";
        texture = QPATHTOF(data\grey\tacp.paa);
    };
    class GVAR(pj_grey): GVAR(medic) {
        displayName = "PJ (Grey)";
        texture = QPATHTOF(data\grey\pj.paa);
    };
};
