#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(USMC_RFM),
            QGVAR(USMC_FTL),
            QGVAR(USMC_SQL),
            QGVAR(USMC_PTL),
            QGVAR(USMC_CO),
            QGVAR(USMC_UGL),
            QGVAR(USMC_LAT),
            QGVAR(USMC_MKM),
            QGVAR(USMC_WTL_MMG),
            QGVAR(USMC_MMG),
            QGVAR(USMC_WTL_HAT),
            QGVAR(USMC_HAT),
            QGVAR(USMC_AAT),
            QGVAR(USMC_CLS),
            QGVAR(USMC_MED),
            QGVAR(USMC_LOG_MED),
            QGVAR(USMC_MED_LEAD),
            QGVAR(USMC_MED_LEAD_C),
            QGVAR(USMC_PSG),
            QGVAR(USMC_RTO),
            QGVAR(USMC_ATC),
            QGVAR(USMC_FO),
            QGVAR(USMC_JTAC),
            QGVAR(USMC_CRW_LEAD),
            QGVAR(USMC_CRW),
            QGVAR(USMC_HELI_PIL),
            QGVAR(USMC_HELI_CRW),
            QGVAR(USMC_JET),
            QGVAR(USMC_RTO),
            QGVAR(USMC_SNI),
            QGVAR(USMC_SPO),
            QGVAR(USMC_TL),
            QGVAR(USMC_WSL_MOR),
            QGVAR(USMC_MOR_ASS),
            QGVAR(USMC_MOR_AMB),
            QGVAR(USMC_EOD),
            QGVAR(USMC_ESP),
            QGVAR(USMC_LOG_LEAD),
            QGVAR(USMC_LOG),
            QGVAR(moduleAddLoadoutMenu3den),
            QGVAR(moduleAddLoadoutMenuMarines20033den),
            QGVAR(moduleAddPlaneMenu3den),
            QGVAR(moduleAddVehicleMenu3den),
            QGVAR(moduleInitVehicleMenu3den),
            QGVAR(USMC_Veh_CAR),
            QGVAR(USMC_Veh_CAR_M2),
            QGVAR(USMC_Veh_CAR_Mk19),
            QGVAR(USMC_Veh_CAR_TOW),
            QGVAR(USMC_Veh_COUGAR),
            QGVAR(USMC_Veh_COUGAR_M2),
            QGVAR(USMC_Veh_COUGAR_MOR),
            QGVAR(USMC_Veh_COUGAR_Mk19),
            QGVAR(USMC_Veh_M1237_M2),
            QGVAR(USMC_Veh_M1237_Mk19),
            QGVAR(USMC_Veh_Cargo_M2),
            QGVAR(USMC_Veh_EMPTY_M2),
            QGVAR(USMC_Veh_REPAIR_M2),
            QGVAR(USMC_Veh_AMMO_M2),
            QGVAR(USMC_Veh_FUEL),
            QGVAR(USMC_Veh_MEDICAL),
            QGVAR(USMC_Veh_IFV),
            QGVAR(USMC_Veh_M109A6),
            QGVAR(USMC_Veh_M142),
            QGVAR(USMC_Veh_UH60),
            QGVAR(USMC_Veh_AH64),
            QGVAR(USMC_Veh_CH47),
            QGVAR(USMC_Veh_A10),
            QGVAR(USMC_Veh_FA18E)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main",
            "kat_10thmods_faction_generic",
            "A3_Characters_F"
        };
        author = "Katalam";
        authors[] = {"Katalam"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgUnitInsignia.hpp"
