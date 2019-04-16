#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for loadout exchange.
 * Local effect. Positioning of the interaction point and texture is made for the "SignAd_Sponsor_F" object.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_logistic_fnc_addLoadoutMenu;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]]
];

if (isServer) then {
    _object allowDamage false;
    [_object, 0] call ace_cargo_fnc_setSpace;
};
private "_currentParent";

private _loadoutArray = "(getText (_x >> 'editorCategory') == 'kat_10thMods_logistic_USAM_D')" configClasses (configFile >> "CfgVehicles");

private _infantry = [localize LSTRING(infantry)];
private _vehicle = [localize LSTRING(vehicle), "WHEEL", "TRACK"];
private _mortar = [localize LSTRING(mortar)];
private _other = [localize ELSTRING(faction_generic,other)];

{
    private _displayName = getText (_x >> 'displayName');
    private _loadout = getText (_x >> 'loadout');
    switch (getText (_x >> 'loadoutGroup')) do {
        case "Infantry": {
            _infantry pushBack [_displayName, _loadout];
        };
        /*
        case "Vehicle": {
            _vehicle pushBack [_displayName, _loadout];
        };
        */
        case "Mortar": {
            _mortar pushBack [_displayName, _loadout];
        };
        default {
            _other pushBack [_displayName, _loadout];
        };
    };
} forEach _loadoutArray;

private _guiArray = _infantry + _vehicle + _mortar + _other;

// Loadout GUI
[_object, 0, [],
    [QGVAR(logisticActionParent), localize LSTRING(logistic), "", {}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(logisticActionParent)],
            [QGVAR(logisticAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(logisticAction) + (str _forEachIndex), _x select 0, "", FUNC(createCrate), {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;

/*
[_object, 0, [QGVAR(logisticActionParent)],
    [QGVAR(loadoutAction_S), localize LSTRING(scope), "", {}, {true}, FUNC(childrenScope)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
*/
