class CfgVehicles {
    class Car_F;
    class Wheeled_APC_F: Car_F {
        class EventHandlers;
    };

    class rhsusf_stryker_base: Wheeled_APC_F {
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "";
            };
            class GVAR(EventHandlers) {
                init = QUOTE(_this call FUNC(init));
            };
        };
    };
};
