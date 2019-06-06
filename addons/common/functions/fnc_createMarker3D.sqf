#include "script_component.hpp"
/*
 * Author: Katalam
 * Creates 3d marker for map markers.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_10thmods_common_fnc_createMarker3d
 *
 * Public: No
 */

params [["_marker", "", [""]]];

if (isDedicated) exitWith {};

if (getMarkerColor _marker == "") exitWith {};
private _cfg = configFile >> "cfgMarkers";
private _path = getText (_cfg >> (markerType _marker) >> "icon");
private _pos = getMarkerPos _marker;

private _colour = getArray (configfile >> "cfgMarkerColors" >> getMarkerColor _marker >> "color");
if (count _colour == 0) then {_colour = [1,1,1,1]};

{
    if (typeName _x == typeName "") then {
        _colour set [_foreachindex, call compile _x];
    };
} forEach _colour;

private _text = markerText _marker;

private _logic = "logic" createVehicleLocal _pos;

private _data = [] call BH_fnc_mkr3D_VON;
_data params ["", "_grp", "_type"];

private _array = uiNamespace getVariable _grp;

private _index = count _array;
_array set [_index, _logic];

uiNamespace setVariable [_grp, _array];

private _name = format ["BH_mkr3D_log_%1_%2", _type, _index];

_logic setVehicleVarName _name;
uiNamespace setVariable [_name, _logic];

private _code = format ['uiNamespace getVariable %1', str _name];

_logic setVariable ["BH_UserMkr_EH",
    addMissionEventhandler [
        "draw3D", compile format [
            "if (count (toArray (getMarkerColor %5)) > 0) then {
                if (uiNamespace getVariable ['BH_fnc_mkr3D_show', true]) then {
                    drawIcon3D [
                        %1,
                        %2,
                        %3,
                        1,
                        1,
                        0,
                        %4,
                        0,
                        0.05
                    ];
                };
            } else {
                _obj = %6;

                if (isNull _obj) exitWith {};

                _type = _obj getVariable 'BH_UserMkr_Array';
                _array = uiNamespace getVariable _type;

                _index = _array find _obj;
                _array set [_index, objNull];

                uiNamespace setVariable [_type, _array];

                removeMissionEventhandler ['draw3D', _obj getVariable 'BH_UserMkr_EH'];
                deleteVehicle _obj;
            };",
            str _path,
            _colour,
            _pos,
            str _text,
            str _marker,
            _code
        ]
    ]
];

_logic setVariable ["BH_UserMkr_ID", _marker];

_logic setVariable ["BH_UserMkr_Array", _grp];
