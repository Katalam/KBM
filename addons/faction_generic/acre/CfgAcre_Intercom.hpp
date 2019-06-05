class AcreIntercoms {
    class Intercom_1 {
        displayName = "Intercom";
        shortName = "Crew";
        allowedPositions[] = {"crew",  {"cargo", "all"}, {"ffv", "all"}};
        disabledPositions[] = {};
        limitedPositions[] = {};
        numLimitedPositions = 0;
        masterPositions[] = {"crew", {"cargo", 0}};
        connectedByDefault = 1;
    };
};
