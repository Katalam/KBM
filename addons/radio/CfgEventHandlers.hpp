class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_InitPost_EventHandlers {
    class Car {
        GVAR(vehicleInit) = QUOTE(_this call FUNC(vehicleInit));
    };
    class Tank {
        GVAR(vehicleInit) = QUOTE(_this call FUNC(vehicleInit));
    };
    class Air {
        GVAR(vehicleInit) = QUOTE(_this call FUNC(vehicleInit));
    };
    class Ship {
        GVAR(vehicleInit) = QUOTE(_this call FUNC(vehicleInit));
    };
};
