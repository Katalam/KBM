class GVAR(L1_T1_h) {
    idd = -1;
    movingEnable = false;
    onLoad = "";
    onUnload = "1 cutText ['', 'PLAIN']";
    class Controls {
        class backround: GVAR(L1_T1_Picture) {
            idc = 1200;
            style = 2096;
            text = QPATHTOF(bomb\L1\T1\h\armed.paa);
            x = safeZoneX;
            y = safeZoneY;
            w = safeZoneW;
            h = safeZoneH;
        };
        class wire: GVAR(L1_T1_CutWire) {
            idc = 1600;
            text = "";
            x = safeZoneX + 0.610 * safeZoneW;
            y = safeZoneY + 0.552 * safeZoneH;
            w = safeZoneW * 0.017;
            h = safeZoneH * 0.017;
        };
        class anywhere: GVAR(L1_T1_ClickAnywhere) {
            idc = 1601;
            text = "";
            x = safeZoneX + 0.30 * safeZoneW;
            y = safeZoneY + 0.26 * safeZoneH;
            w = safeZoneW * 0.4;
            h = safeZoneH * 0.4;
        };
    };
};

// Disarmed
class GVAR(L1_T1_h_Disarmed) {
    idd = -1;
    movingEnable = false;
    onLoad = "";
    onUnload = "1 cutText ['', 'PLAIN']";
    class Controls {
        class backround: GVAR(L1_T1_Picture) {
            idc = 1200;
            style = 2096;
            text = QPATHTOF(bomb\L1\T1\h\disarmed.paa);
            x = safeZoneX;
            y = safeZoneY;
            w = safeZoneW;
            h = safeZoneH;
        };
    };
};
