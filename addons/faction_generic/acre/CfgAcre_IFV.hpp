class AcreIntercoms {
    class Intercom_1 {
        displayName = "Intercom";
        shortName = "Crew";
        allowedPositions[] = {"crew"};
        disabledPositions[] = {};
        limitedPositions[] = {{"cargo", "all"}};
        numLimitedPositions = 1;
        masterPositions[] = {"commander"};
        connectedByDefault = 1;
    };
    class Intercom_2: Intercom_1 {
        displayName = "Pax intercom";
        shortName = "Pax";
        allowedPositions[] = {"crew", {"cargo", "all"}};
        limitedPositions[] = {};
        numLimitedPositions = 0;
        connectedByDefault = 0;
    };
};
class AcreRacks {
    class Rack_1 {
        displayName = "Company";
        shortName = "Coy";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"crew"};
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
        allowedPositions[] = {"crew"};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 1;
        intercom[] = {"Intercom_1"};
    };
    class Rack_3 {
        displayName = "Backup";
        shortName = "Back";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"crew"};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 1;
        intercom[] = {"Intercom_1"};
    };
};
