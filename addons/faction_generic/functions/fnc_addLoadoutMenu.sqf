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
 * [cursorTarget] call kat_10thMods_faction_generic_fnc_addLoadoutMenu;
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
    (getText (_x >> 'faction') == 'kat_10thMods_faction_generic_USAM_D') &&
    {getText (_x >> 'vehicleClass') isEqualTo 'Men'})" configClasses (configFile >> "CfgVehicles");

private _company = [localize LSTRING(company)];
private _platoon = [localize LSTRING(platoon)];
private _squad = [localize LSTRING(squad)];
private _weaponSquad = [localize LSTRING(weaponSquad)];
private _heavyWeaponSquad = [localize LSTRING(heavyWeaponSquad)];
private _logistic = [localize LSTRING(logistic)];
private _crew = [localize LSTRING(crew)];
private _other = [localize LSTRING(other)];

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
    [QGVAR(loadoutActionParent), localize LSTRING(loadout), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(loadoutActionParent)],
            [QGVAR(loadoutAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(loadoutAction) + (str _forEachIndex), _x select 0, "", FUNC(applyPlayerLoadout), {true}, {}, [_x select 1, QGVAR(%1)]] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;

// Scope
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_S), localize LSTRING(scope), "", {}, {true}, FUNC(childrenScope), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Night Vision
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_N), localize LSTRING(nightvision), "", {}, {true}, FUNC(childrenNightvision), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Goggle
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_G), localize LSTRING(goggle), "", {}, {true}, FUNC(childrenGoggle), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Silencer
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_silencer), localize LSTRING(silencer), "", {}, {true}, FUNC(childrenSilencer), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// launcher
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_L), localize LSTRING(launcher), "", {}, {true}, FUNC(childrenLauncher), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Helmet
[_object, 0, [QGVAR(loadoutActionParent)],
    [QGVAR(loadoutAction_H), localize LSTRING(helmet), "", {}, {true}, FUNC(childrenHelmet), QGVAR(%1)] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
