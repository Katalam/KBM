#include "script_component.hpp"

if (GVAR(breathing) >= 1) then {
    [player, 1] call FUNC(breathingFog);
};
