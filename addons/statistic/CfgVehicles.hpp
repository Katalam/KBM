class CfgVehicles {
    class EGVAR(faction_generic,moduleBase);
    class GVAR(moduleMissionEndSuccess): EGVAR(faction_generic,moduleBase) {
        displayName = "End Mission (Success)";
        category = QGVAR(ScenarioFlow);
        function = QFUNC(moduleMissionEndSuccess);
        icon = QPATHTOF(data\icon_success.paa);
    };
};
