#include "script_component.hpp"

class CfgPatches {
    class ADDON {
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
            QGVAR(moduleInitVehicleMenu3den)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "kat_10thmods_main"
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
