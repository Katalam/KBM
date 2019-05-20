#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for vehicle exchange.
 * Local effect.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_faction_fnc_addvehicleMenu;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];

if (isServer) then {
    _object allowDamage false;
};

private "_currentParent";
private _pos = [0,0,0];

private _vehicleArray = "(
    (getText (_x >> 'faction') == 'kat_10thMods_faction_USMC_D') &&
    {!(getText (_x >> 'vehicleClass') isEqualTo 'Men')})" configClasses (configFile >> "CfgVehicles");


private _config = configFile >> "CfgEditorSubcategories";
private _aas = [getText (_config >> "EdSubcat_AAs" >> "displayName")];
private _apcs = [getText (_config >> "EdSubcat_APCs" >> "displayName")];
private _artillery = [getText (_config >> "EdSubcat_Artillery" >> "displayName")];
private _cars = [getText (_config >> "EdSubcat_Cars" >> "displayName")];
private _ifv = [getText (_config >> "rhs_EdSubcat_ifv" >> "displayName")];
private _mrap = [getText (_config >> "rhs_EdSubcat_mrap" >> "displayName")];
private _tanks = [getText (_config >> "EdSubcat_Tanks" >> "displayName")];
private _other = [localize ELSTRING(faction_generic,other), [localize ELSTRING(faction_generic,remove), "REMOVE"]];
{
    private _displayName = getText (_x >> 'displayName');
    private _vehicle = configName _x;
    private _category = getText (_x >> 'editorSubcategory');
    switch (_category) do {
        case "EdSubcat_AAs": {
            _aas pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_APCs": {
            _apcs pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Artillery": {
            _artillery pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Cars": {
            _cars pushBack [_displayName, _vehicle];
        };
        case "rhs_EdSubcat_ifv": {
            _ifv pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Drones": {};
        case "EdSubcat_Helicopters": {};
        case "EdSubcat_Planes": {};
        case "rhs_EdSubcat_mrap": {
            _mrap pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Tanks": {
            _tanks pushBack [_displayName, _vehicle];
        };
        default {
            _other pushBack [_displayName, _vehicle];
        };
    };
} forEach _vehicleArray;

private _guiArray = _aas + _apcs + _artillery + _cars + _ifv + _mrap + _tanks + _other;

// vehicle GUI
[_object, 0, [],
    [QGVAR(vehicleActionParent), localize ELSTRING(faction_generic,vehicle), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(vehicleActionParent)],
            [QGVAR(vehicleAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(vehicleAction) + (str _forEachIndex), _x select 0, "", EFUNC(faction_generic,createVehicle), {true}, {}, [_x select 1, false]] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;
