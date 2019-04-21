#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates ace interactions for plane exchange.
 * Local effect.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_10thMods_faction_generic_fnc_addPlaneMenu;
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
    (getText (_x >> 'faction') == 'kat_10thMods_faction_generic_USAM_D') &&
    {!(getText (_x >> 'vehicleClass') isEqualTo 'Men')})" configClasses (configFile >> "CfgVehicles");


private _config = configFile >> "CfgEditorSubcategories";
private _drones = [getText (_config >> "EdSubcat_Drones" >> "displayName")];
private _helicopters = [getText (_config >> "EdSubcat_Helicopters" >> "displayName")];
private _planes = [getText (_config >> "EdSubcat_Planes" >> "displayName")];
{
    private _displayName = getText (_x >> 'displayName');
    private _vehicle = configName _x;
    private _category = getText (_x >> 'editorSubcategory');
    switch (_category) do {
        case "EdSubcat_Drones": {
            _drones pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Helicopters": {
            _helicopters pushBack [_displayName, _vehicle];
        };
        case "EdSubcat_Planes": {
            _planes pushBack [_displayName, _vehicle];
        };
        default {};
    };
} forEach _vehicleArray;

private _guiArray = _drones + _helicopters + _planes + [localize LSTRING(other), [localize LSTRING(remove), "REMOVE"]];

// vehicle GUI
[_object, 0, [],
    [QGVAR(planeActionParent), localize LSTRING(vehicle), "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
    if (_x isEqualType "") then {
        _currentParent = [_object, 0, [QGVAR(planeActionParent)],
            [QGVAR(planeAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    } else {
        [_object, 0, _currentParent,
            [QGVAR(planeAction) + (str _forEachIndex), _x select 0, "", FUNC(createVehicle), {true}, {}, [_x select 1, true]] call ace_interact_menu_fnc_createAction
        ] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach _guiArray;
