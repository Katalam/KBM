class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};
class Extended_InitPost_EventHandlers {
    class Car {
        init = QUOTE(_this call FUNC(vehicleInit));
    };
    class Tank {
        init = QUOTE(_this call FUNC(vehicleInit));
    };
    class Air {
        init = QUOTE(_this call FUNC(vehicleInit));
    };
    class Ship {
        init = QUOTE(_this call FUNC(vehicleInit));
    };
};
