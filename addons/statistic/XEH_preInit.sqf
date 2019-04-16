#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    GVAR(aiKilled) = 0;
    GVAR(fragsOut) = 0;
    GVAR(shotsFired) = 0;
    GVAR(bandagesApplied) = 0;
    GVAR(pulseChecked) = 0;
    GVAR(cprPerformed) = 0;

    GVAR(civsKilled) = 0;

    addMissionEventHandler ["EntityKilled", {
        params ["_unit"];

        if (_unit isKindOf "Man") then {
            if (!(isPlayer _unit)) then {
                GVAR(aiKilled) = GVAR(aiKilled) + 1;
            };
            private _faction = faction _unit;
            if (_faction in ["CIV_F","CIV_IDAP_F","LOP_AFR_Civ","LOP_CHR_Civ","LOP_TAK_Civ","ISC_Civs","rds_rus_civ"]) then {
                GVAR(civsKilled) = GVAR(civsKilled) + 1;
            };
        };
    }];
};

ADDON = true;
