class CfgVehicles {
    class EGVAR(common,moduleBase);
    class GVAR(moduleMissionEndSuccess): EGVAR(common,moduleBase) {
        displayName = "End Mission (Success)";
        category = QGVAR(ScenarioFlow);
        function = QFUNC(moduleMissionEndSuccess);
        icon = QPATHTOF(data\icon_success.paa);
    };
    class GVAR(moduleMissionEndFailure): EGVAR(common,moduleBase) {
        displayName = "End Mission (Failure)";
        category = QGVAR(ScenarioFlow);
        function = QFUNC(moduleMissionEndFailure);
        //icon = QPATHTOF(data\icon_success.paa);
    };
};
