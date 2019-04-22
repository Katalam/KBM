class NATO_Box_Base;
class Box_NATO_Ammo_F: NATO_Box_Base {
    class EventHandlers;
};
class GVAR(USAM_Crate_INF): Box_NATO_Ammo_F {
    author = "Katalam";
    displayName = "Fire Team Ammunition";
    loadout = GVAR(USAM_Crate_INF);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {  {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 32}, {"rhsusf_200Rnd_556x45_soft_pouch", 6}, {"rhsusf_mag_15Rnd_9x19_FMJ", 2}, {"1Rnd_HE_Grenade_shell", 15},
                        {"HandGrenade", 8}, {"rhs_mag_an_m8hc", 16}, {"rhs_mag_mk84", 8}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};
class GVAR(USAM_Crate_EMP): GVAR(USAM_Crate_INF) {
    displayName = "Empty";
    loadout = GVAR(USAM_Crate_EMP);
    loadoutGroup = "Other";
    loadoutItems[] = {};
};

class NATO_Box_Base;
class Box_NATO_Grenades_F: NATO_Box_Base {
    class EventHandlers;
};
class GVAR(USAM_Crate_FRAG): Box_NATO_Grenades_F {
    author = "Katalam";
    displayName = "Grenade Ammunition";
    loadout = GVAR(USAM_Crate_FRAG);
    loadoutCargo[] = {};
    loadoutItems[] = {  {"rhs_mag_an_m8hc", 8}, {"rhs_mag_m18_green", 4}, {"rhs_mag_m18_red", 4}, {"HandGrenade", 8},
                        {"rhs_mag_mk84", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {{"1Rnd_HE_Grenade_shell", 16}, {"1Rnd_SmokeRed_Grenade_shell", 2}, {"1Rnd_SmokePurple_Grenade_shell", 2}, {"1Rnd_SmokeBlue_Grenade_shell", 2}};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};

class ReammoBox_F;
class Box_IED_Exp_F: ReammoBox_F {
    class EventHandlers;
};
class GVAR(USAM_Crate_ESP): Box_IED_Exp_F {
    author = "Katalam";
    displayName = "Explosive Crate";
    loadout = GVAR(USAM_Crate_ESP);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {  {"ACE_M26_Clacker", 1}, {"ACE_DefusalKit", 1}, {"ACE_SpraypaintBlack", 1}, {"SatchelCharge_Remote_Mag", 2},
                        {"DemoCharge_Remote_Mag", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
    class TransportBackpacks {};
};

class Box_NATO_WpsLaunch_F: NATO_Box_Base {
    class EventHandlers;
};
class GVAR(USAM_Crate_LAT): Box_NATO_WpsLaunch_F {
    author = "Katalam";
    displayName = "Light AT";
    loadout = GVAR(USAM_Crate_LAT);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {{"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
    class TransportBackpacks {};
};
class GVAR(USAM_Crate_HAT): GVAR(USAM_Crate_LAT) {
    displayName = "Heavy AT Ammunition";
    loadout = GVAR(USAM_Crate_HAT);
    loadoutItems[] = {};
    loadoutMagazine[] = {{"rhs_fgm148_magazine_AT", 4}};
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};

class Box_NATO_Wps_F: NATO_Box_Base {
    class EventHandlers;
};
class GVAR(USAM_Crate_WPN): Box_NATO_Wps_F {
    author = "Katalam";
    displayName = "Weapon Crate";
    loadout = GVAR(USAM_Crate_WPN);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {  {"rhs_weap_m4a1_carryhandle", 2}, {"rhsusf_weap_m9", 2}, {"rhs_weap_sr25", 1}, {"rhs_weap_m240B", 2},
                        {"rhs_weap_fgm148", 2}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};

class Box_NATO_WpsSpecial_F: NATO_Box_Base {
    class EventHandlers;
};
class GVAR(USAM_Crate_MMG): Box_NATO_WpsSpecial_F {
    author = "Katalam";
    displayName = "MMG Crate";
    loadout = GVAR(USAM_Crate_MMG);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {{"ACE_SpareBarrel", 2}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {{"rhsusf_100Rnd_762x51_m62_tracer", 24}};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};

class ACE_medicalSupplyCrate;
class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
    class EventHandlers;
};
class GVAR(USAM_Crate_MED): ACE_medicalSupplyCrate_advanced {
    author = "Katalam";
    displayName = "Medic Crate";
    loadout = GVAR(USAM_Crate_MED);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {  {"ACE_packingBandage", 64}, {"ACE_elasticBandage", 56}, {"ACE_tourniquet", 6}, {"ACE_morphine", 12}, {"ACE_epinephrine", 36}, {"ACE_adenosine", 4}, {"ACE_atropine", 4},
                        {"ACE_salineIV_500", 14}, {"ACE_plasmaIV_500", 18}, {"ACE_bodyBag", 2}, {"adv_aceSplint_splint", 30}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
};

class Box_Syndicate_WpsLaunch_F: ReammoBox_F {
    class EventHandlers;
};
class GVAR(USAM_Crate_MOR_HE): Box_Syndicate_WpsLaunch_F {
    author = "Katalam";
    displayName = "Mortar HE";
    loadout = GVAR(USAM_Crate_MOR_HE);
    loadoutGroup = "Mortar";
    loadoutCargo[] = {};
    loadoutItems[] = {{"ACE_1Rnd_82mm_Mo_HE", 8}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
    class TransportBackpacks {};
};

class GVAR(USAM_Crate_MOR_SMK): GVAR(USAM_Crate_MOR_HE) {
    displayName = "Mortar Smoke";
    loadout = GVAR(USAM_Crate_MOR_SMK);
    loadoutItems[] = {{"ACE_1Rnd_82mm_Mo_Smoke", 8}};
};

class CargoNet_01_ammo_base_F;
class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {
    class EventHandlers;
};
class GVAR(USAM_Crate_FULL): B_CargoNet_01_ammo_F {
    author = "Katalam";
    displayName = "Full Crate";
    loadout = GVAR(USAM_Crate_FULL);
    loadoutGroup = "Infantry";
    loadoutCargo[] = {};
    loadoutItems[] = {{"rhs_mag_an_m8hc", 16}, {"rhs_mag_m18_green", 16}, {"rhs_mag_m18_red", 16}, {"HandGrenade", 16}, {"rhs_mag_mk84", 16}};
    loadoutWeapon[] = {{"rhs_weap_m240B", 2}, {"rhs_weap_fgm148", 1}, {"rhs_weap_M136", 4}};
    loadoutMagazine[] = {   {"rhs_mag_30Rnd_556x45_M855A1_PMAG", 40}, {"rhsusf_200Rnd_556x45_soft_pouch", 12}, {"rhsusf_20Rnd_762x51_SR25_m62_Mag", 5},
                            {"rhsusf_mag_15Rnd_9x19_FMJ", 2}, {"1Rnd_HE_Grenade_shell", 40}, {"1Rnd_SmokeRed_Grenade_shell", 8}, {"1Rnd_SmokePurple_Grenade_shell", 8},
                            {"1Rnd_SmokeBlue_Grenade_shell", 8}, {"rhsusf_100Rnd_762x51_m62_tracer", 36}, {"rhs_fgm148_magazine_AT", 4}, {"ACE_SpareBarrel", 2}};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    editorCategory = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = QUOTE(_this call EFUNC(faction_generic,applyVehicleLoadout));
    };
    class TransportBackpacks {};
};
