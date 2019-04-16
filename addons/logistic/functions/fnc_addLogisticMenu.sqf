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

params [["_object", objNull, [objNull]]];

if (isServer) then {
    _object allowDamage false;
};

private "_currentParent";
private _pos = [0,0,0];

private _loadoutArray = "(
    (getText (_x >> 'faction') == 'kat_10thMods_faction_generic_USAM_D') &&
    {getText (_x >> 'vehicleClass') isEqualTo 'Men'})" configClasses (configFile >> "CfgVehicles");

private _infantry = ["Infantry"];
private _vehicle = ["Vehicle"];
private _mortar = ["Mortar"];
private _other = ["Other"];

{
    private _displayName = getText (_x >> 'displayName');
    private _loadout = getText (_x >> 'loadout');
    switch (getText (_x >> 'loadoutGroup')) do {
        case "Infantry": {
            _infantry pushBack [_displayName, _loadout];
        };
        case "Vehicle": {
            _vehicle pushBack [_displayName, _loadout];
        };
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
    [QGVAR(loadoutActionParent), localize LSTRING(loadout), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(loadoutActionParent)],
            [QGVAR(loadoutAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(loadoutAction) + (str _forEachIndex), _x select 0, "", FUNC(applyPlayerLoadout), {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;

// Scope
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_S), localize LSTRING(scope), "", {}, {true}, FUNC(childrenScope)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Night Vision
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_N), localize LSTRING(nightvision), "", {}, {true}, FUNC(childrenNightvision)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Goggle
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_G), localize LSTRING(goggle), "", {}, {true}, FUNC(childrenGoggle)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Silencer
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_silencer), localize LSTRING(silencer), "", {}, {true}, FUNC(childrenSilencer)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// launcher
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_L), localize LSTRING(launcher), "", {}, {true}, FUNC(childrenLauncher)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Helmet
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_H), localize LSTRING(helmet), "", {}, {true}, FUNC(childrenHelmet)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
