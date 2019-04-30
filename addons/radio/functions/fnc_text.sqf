#include "script_component.hpp"
/*
 * Author: Katalam
 * Info text given message
 *
 * Arguments:
 * 0: Text <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_10thMods_radio_fnc_text;
 *
 * Public: No
 */

params ["_text"];

private _textSplitted = _text splitString "|";
if (_textSplitted isEqualType "") then {
    _textSplitted = [_textSplitted];
};

_textSplitted spawn BIS_fnc_infoText;
