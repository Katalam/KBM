#include "script_component.hpp"
/*
 * Author: Katalam
 * Adds the given player loadout to the given player with global effect.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "USAM_RFM"] call kat_10thMods_faction_generic_fnc_playerLoadoutLocal;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_loadout", "", [""]]
];

private "_typeFormat";

switch (true) do {
    case ((_loadout find "USAM") >= 0): {
        _typeFormat = QGVAR(%1);
    };
    case ((_loadout find "USMC") >= 0): {
        _typeFormat = QEGVAR(faction,%1);
    };
    case ((_loadout find "BUND") >= 0): {
        _typeFormat = QEGVAR(faction,%1);
    };
};

[0, _unit, [_loadout, _typeFormat]] remoteExec [QFUNC(applyPlayerLoadout), _unit];

true;
