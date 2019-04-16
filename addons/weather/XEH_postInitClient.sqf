#include "script_component.hpp"

if (GVAR(breathing) >= 1) then {
    [player, GVAR(breathing_intensity)] call FUNC(breathingFog);
};
