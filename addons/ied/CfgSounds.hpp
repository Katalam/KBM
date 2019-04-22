class CfgSounds {
    sounds[] = {};
    class GVAR(wirecut) {
        name = "wirecut";
        sound[] = {QPATHTOF(sounds\wirecut.ogg), db + 2, 1, 15};
        titles[] = {};
    };
    class GVAR(powerdown) {
        name = "powerdown";
        sound[] = {QPATHTOF(sounds\powerdown.ogg), db + 2, 1, 15};
        titles[] = {};
    };
};
