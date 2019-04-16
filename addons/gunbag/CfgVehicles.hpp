class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ace_gunbag_actions {
                    class GVAR(weaponSwitch) {
                        displayName = "Switch Gunbag";
                        condition = QUOTE([_player] call FUNC(canSwitch));
                        statement = QUOTE([_player] call FUNC(switchGunbag));
                        showDisabled = 0;
                        icon = QUOTE(\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa);
                    };
                };
            };
        };
    };
};
