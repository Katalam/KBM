#include "script_component.hpp"

player setVariable ["BIS_noCoreConversations", true];

//failsafe for missing curator interface:
if (typeOf player in [QEGVAR(faction_generic,USAM_ADM)]) then {
    [] spawn {
        waitUntil {time > 2};

        if (isNull (getAssignedCuratorLogic player)) then {
            player remoteExec [QFUNC(createZeus), 2];
        };
    };
};

call FUNC(addBriefingEntries);
