class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_Take_EventHandlers {
    class CAManBase {
        class ADDON {
            take = QUOTE(_this call COMPILE_FILE(XEH_take));
        };
    };
};
class Extended_InventoryOpened_EventHandlers {
    class CAManBase {
        class ADDON {
            inventoryOpened = QUOTE(_this call COMPILE_FILE(XEH_inventoryOpened));
        };
    };
};
