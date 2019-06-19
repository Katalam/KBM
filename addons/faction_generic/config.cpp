#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            QGVAR(USAM_RFM),
            QGVAR(USAM_FTL),
            QGVAR(USAM_SQL),
            QGVAR(USAM_PTL),
            QGVAR(USAM_CO),
            QGVAR(USAM_LMG),
            QGVAR(USAM_UGL),
            QGVAR(USAM_LAT),
            QGVAR(USAM_MKM),
            QGVAR(USAM_WTL_MMG),
            QGVAR(USAM_MMG),
            QGVAR(USAM_WTL_HAT),
            QGVAR(USAM_HAT),
            QGVAR(USAM_AAT),
            QGVAR(USAM_CLS),
            QGVAR(USAM_MED),
            QGVAR(USAM_LOG_MED),
            QGVAR(USAM_MED_LEAD),
            QGVAR(USAM_MED_LEAD_C),
            QGVAR(USAM_PSG),
            QGVAR(USAM_RTO),
            QGVAR(USAM_ATC),
            QGVAR(USAM_FO),
            QGVAR(USAM_JTAC),
            QGVAR(USAM_CRW_LEAD),
            QGVAR(USAM_CRW),
            QGVAR(USAM_HELI_PIL),
            QGVAR(USAM_HELI_CRW),
            QGVAR(USAM_JET),
            QGVAR(USAM_RTO),
            QGVAR(USAM_SNI),
            QGVAR(USAM_SPO),
            QGVAR(USAM_TL),
            QGVAR(USAM_MOR_SQL),
            QGVAR(USAM_MOR_ASS),
            QGVAR(USAM_MOR_GUN),
            QGVAR(USAM_MOR_AMB),
            QGVAR(USAM_EOD),
            QGVAR(USAM_ESP),
            QGVAR(USAM_LOG_LEAD),
            QGVAR(USAM_LOG),
            QGVAR(moduleAddLoadoutMenu3den),
            QGVAR(moduleAddPlaneMenu3den),
            QGVAR(moduleAddVehicleMenu3den),
            QGVAR(moduleInitVehicleMenu3den),
            QGVAR(USAM_Veh_CAR),
            QGVAR(USAM_Veh_CAR_M2),
            QGVAR(USAM_Veh_CAR_Mk19),
            QGVAR(USAM_Veh_CAR_TOW),
            QGVAR(USAM_Veh_M1237_M2),
            QGVAR(USAM_Veh_M1237_Mk19),
            QGVAR(USAM_Veh_Cargo_M2),
            QGVAR(USAM_Veh_EMPTY_M2),
            QGVAR(USAM_Veh_REPAIR_M2),
            QGVAR(USAM_Veh_AMMO_M2),
            QGVAR(USAM_Veh_FUEL),
            QGVAR(USAM_Veh_MEDICAL),
            QGVAR(USAM_Veh_IFV),
            QGVAR(USAM_Veh_M109A6),
            QGVAR(USAM_Veh_M142),
            QGVAR(USAM_Veh_UH60),
            QGVAR(USAM_Veh_AH64),
            QGVAR(USAM_Veh_CH47),
            QGVAR(USAM_Veh_A10),
            QGVAR(USAM_Veh_FA18E)
        };
        weapons[] = {
            QUOTE(KAT_Uniform_Tank),
            QUOTE(KAT_Uniform_OCP),
            QUOTE(KAT_Headgear_OCP),
            QUOTE(KAT_Vest_OCP),
            QUOTE(KAT_Headgear_CAP_OCP)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main",
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
