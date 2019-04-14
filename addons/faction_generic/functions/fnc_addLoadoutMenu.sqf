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

private "_currentParent";
private _pos = [0,0,0];

if (typeOf _object isEqualTo "SignAd_Sponsor_F") then {
    _pos = [0, -0.6, 0.8];
};

private _loadoutArray = "(
    (getText (_x >> 'faction') == 'kat_10thMods_faction_generic_USAM_D') &&
    {getText (_x >> 'vehicleClass') isEqualTo 'Men'})" configClasses (configFile >> "CfgVehicles");

private _company = ["Company"];
private _platoon = ["Platoon"];
private _squad = ["Squad"];
private _weaponSquad = ["Weapon Squad"];
private _logistic = ["Logistic"];
private _crew = ["Crew"];
private _other = ["Other"];

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

private _guiArray = _company + _platoon + _squad + _weaponSquad + _logistic + _crew + _other;

// Loadout GUI
[_object, 0, [],
	[QGVAR(loadoutActionParent), "Loadout", "", {}, {true}, {}, [], _pos] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
	if (_x isEqualType "") then {
		_currentParent = [_object, 0, [QGVAR(loadoutActionParent)],
			[QGVAR(loadoutAction) + (str _forEachIndex), _x, "", {}, {true}] call ace_interact_menu_fnc_createAction
		] call ace_interact_menu_fnc_addActionToObject;
	} else {
		[_object, 0, _currentParent,
			[QGVAR(loadoutAction) + (str _forEachIndex), _x select 0, "", {[player, _this select 2] call kat_10thMods_faction_generic_fnc_applyPlayerLoadout;}, {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction
		] call ace_interact_menu_fnc_addActionToObject;
	};
} forEach _guiArray;

// Scope
	["KAT_loadoutAction_S", "Scope", "", {}, {true}, {_this call kat_10thMods_faction_generic_fnc_childrenScope;}] call ace_interact_menu_fnc_createAction
[_object, 0, [QGVAR(loadoutActionParent)],
] call ace_interact_menu_fnc_addActionToObject;

// Night Vision
	["KAT_loadoutAction_N", "Nightvision", "", {}, {true}, {_this call kat_10thMods_faction_generic_fnc_childrenNightvision;}] call ace_interact_menu_fnc_createAction
[_object, 0, [QGVAR(loadoutActionParent)],
] call ace_interact_menu_fnc_addActionToObject;

/*
// Helmet for Helicopter pilots and crew
[_object, 0, ["KAT_loadoutActionParent"],
	["KAT_loadoutAction_H", "Helmet", "", {}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
	[_object, 0, ["KAT_loadoutActionParent", "KAT_loadoutAction_H"],
		["KAT_loadoutAction_H1" + (str _forEachIndex), _x select 0, "", {
				player addHeadgear (_this select 2);
		}, {
			player getVariable ["KAT_loadout", "USAM_RFM"] isEqualTo "USAM_HELI_PIL";
		}, {}, _x select 1] call ace_interact_menu_fnc_createAction
	] call ace_interact_menu_fnc_addActionToObject;
} forEach KAT_gui_helmet_PIL_USAM;

{
	[_object, 0, ["KAT_loadoutActionParent", "KAT_loadoutAction_H"],
		["KAT_loadoutAction_H2" + (str _forEachIndex), _x select 0, "", {
				player addHeadgear (_this select 2);
		}, {
			player getVariable ["KAT_loadout", "USAM_RFM"] isEqualTo "USAM_HELI_CRW";
		}, {}, _x select 1] call ace_interact_menu_fnc_createAction
	] call ace_interact_menu_fnc_addActionToObject;
} forEach KAT_gui_helmet_CRW_USAM;

// Silencer
[_object, 0, ["KAT_loadoutActionParent"],
	["KAT_loadoutAction_Silence", "Schalldämpfer", "", {
		private _item = (primaryWeaponItems player) select 0;
		if (_item isEqualTo "") exitWith {
			player addPrimaryWeaponItem "hlc_muzzle_556NATO_rotexiiic_grey";
		};
		player removePrimaryWeaponItem _item;
	}, {true}, {}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

// Goggles
[_object, 0, ["KAT_loadoutActionParent"],
	["KAT_loadoutAction_G", "Goggles", "", {}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

{
	[_object, 0, ["KAT_loadoutActionParent", "KAT_loadoutAction_G"],
		["KAT_loadoutAction_G" + (str _forEachIndex), _x select 0, "", {[player, _this select 2] call FUNC(goggle);}, {true}, {}, _x select 1] call ace_interact_menu_fnc_createAction
	] call ace_interact_menu_fnc_addActionToObject;
} forEach KAT_gui_attachments_goggles_USAM;

// Launcher
[_object, 0, ["KAT_loadoutActionParent"],
	["KAT_loadoutAction_L", "Launcher", "", {}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

[_object, 0, ["KAT_loadoutActionParent", "KAT_loadoutAction_L"],
	["KAT_loadoutAction_L1", "Launcher hinzufügen", "", {[player, "rhs_weap_M136"] call FUNC(launcher);}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

[_object, 0, ["KAT_loadoutActionParent", "KAT_loadoutAction_L"],
	["KAT_loadoutAction_L2", "Launcher entfernen", "", {[player, "REMOVE"] call FUNC(launcher);}, {true}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;
*/
