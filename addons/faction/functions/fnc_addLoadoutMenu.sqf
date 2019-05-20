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
 * [cursorTarget] call kat_10thMods_faction_fnc_addLoadoutMenu;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];

if (isServer) then {
    _object allowDamage false;
};

private "_currentParent";
private _pos = [0,0,0];

if (typeOf _object isEqualTo "SignAd_Sponsor_F") then {
    _pos = [0, -0.6, 0.8];
};

private _loadoutArray = "(
    (getText (_x >> 'faction') == 'kat_10thMods_faction_USMC_D') &&
    {getText (_x >> 'vehicleClass') isEqualTo 'Men'})" configClasses (configFile >> "CfgVehicles");

private _company = [localize ELSTRING(faction_generic,company)];
private _platoon = [localize ELSTRING(faction_generic,platoon)];
private _squad = [localize ELSTRING(faction_generic,squad)];
private _weaponSquad = [localize ELSTRING(faction_generic,weaponSquad)];
private _heavyWeaponSquad = [localize ELSTRING(faction_generic,heavyWeaponSquad)];
private _logistic = [localize ELSTRING(faction_generic,logistic)];
private _crew = [localize ELSTRING(faction_generic,crew)];
private _other = [localize ELSTRING(faction_generic,other)];

{
    private _displayName = getText (_x >> 'displayName');
    private _loadout = getText (_x >> 'loadout');
    switch (getText (_x >> 'loadoutGroup')) do {
        case "Company": {
            _company pushBack [_displayName, _loadout];
        };
        case "Platoon": {
            _platoon pushBack [_displayName, _loadout];
        };
        case "Squad": {
            _squad pushBack [_displayName, _loadout];
        };
        case "WeaponSquad": {
            _weaponSquad pushBack [_displayName, _loadout];
        };
        case "HeavyWeaponSquad": {
            _heavyWeaponSquad pushBack [_displayName, _loadout];
        };
        case "Logistic": {
            _logistic pushBack [_displayName, _loadout];
        };
        case "Crew": {
            _crew pushBack [_displayName, _loadout];
        };
        default {
            _other pushBack [_displayName, _loadout];
        };
    };
} forEach _loadoutArray;

private _guiArray = _company + _platoon + _squad + _weaponSquad + _heavyWeaponSquad + _logistic + _crew + _other;

// Loadout GUI
[_object, 0, [],
    [QGVAR(loadoutActionParent), localize ELSTRING(faction_generic,loadout), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(loadoutActionParent)],
            [QGVAR(loadoutAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(loadoutAction) + (str _forEachIndex), _x select 0, "", EFUNC(faction_generic,applyPlayerLoadout), {true}, {}, [_x select 1, QGVAR(%1)]] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;

// Scope
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_S), localize ELSTRING(faction_generic,scope), "", {}, {true}, EFUNC(faction_generic,childrenScope), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Night Vision
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_N), localize ELSTRING(faction_generic,nightvision), "", {}, {true}, EFUNC(faction_generic,childrenNightvision), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Goggle
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_G), localize ELSTRING(faction_generic,goggle), "", {}, {true}, EFUNC(faction_generic,childrenGoggle), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Silencer
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_silencer), localize ELSTRING(faction_generic,silencer), "", {}, {true}, EFUNC(faction_generic,childrenSilencer), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// launcher
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_L), localize ELSTRING(faction_generic,launcher), "", {}, {true}, EFUNC(faction_generic,childrenLauncher), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Helmet
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_H), localize ELSTRING(faction_generic,helmet), "", {}, {true}, EFUNC(faction_generic,childrenHelmet), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
