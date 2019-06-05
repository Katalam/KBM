class AcreIntercoms {
    class Intercom_1 {
        displayName = "Intercom";
        shortName = "Crew";
        allowedPositions[] = {"crew",  {"cargo", "all"}, {"ffv", "all"}};
        disabledPositions[] = {};
        limitedPositions[] = {};
        numLimitedPositions = 0;
        masterPositions[] = {"crew", {"cargo", 0}, {"cargo", 1}};
        connectedByDefault = 1;
    };
};
class AcreRacks {
    class Rack_1 {
        displayName = "Company";
        shortName = "Coy";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"crew", {"cargo", 0}, {"cargo", 1}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {"Intercom_1"};
    };
    class Rack_2 {
        displayName = "Platoon";
        shortName = "Plt";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"crew", {"cargo", 0}, {"cargo", 1}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 1;
        intercom[] = {"Intercom_1"};
    };
};
