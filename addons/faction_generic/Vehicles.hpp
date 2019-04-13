class rhsusf_m1025_w;
class rhsusf_m1025_d: rhsusf_m1025_w {
    class EventHandlers;
};
class GVAR(USAM_CAR): rhsusf_m1025_d {
    author = "Katalam";
    displayName = "Humvee (Unarmed)";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
    loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
    crew = QGVAR(USAM_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};
class rhsusf_m1025_w_m2;
class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2 {
    class EventHandlers;
};
class GVAR(USAM_CAR_M2): rhsusf_m1025_d_m2 {
    author = "Katalam";
    displayName = "Humvee (M2)";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
    loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
    crew = QGVAR(USAM_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};
class rhsusf_m1025_w_mk19;
class rhsusf_m1025_d_Mk19: rhsusf_m1025_w_mk19 {
    class EventHandlers;
};
class GVAR(USAM_CAR_Mk19): rhsusf_m1025_d_Mk19 {
    author = "Katalam";
    displayName = "Humvee (Mk19)";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
    loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
    crew = QGVAR(USAM_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};
class rhsusf_m966_w;
class rhsusf_m966_d: rhsusf_m966_w {
    class EventHandlers;
};
class GVAR(USAM_CAR_TOW): rhsusf_m966_d {
    author = "Katalam";
    displayName = "Humvee (TOW)";
    loadoutCargo[] = {{"ACE_Wheel", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 1}, {"VSM_Multicam_Backpack_Kitbag", 1}};
    loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
    crew = QGVAR(USAM_RFM);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};

// M2
class RHS_M2A3_BUSKI;
class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI {
    class EventHandlers;
};
class GVAR(USAM_IFV): RHS_M2A3_BUSKIII {
    author = "Katalam";
    displayName = "Bradley";
    loadoutCargo[] = {{"ACE_Track", 2}};
    loadoutItems[] = {{"ACE_key_west", 1}, {"rhs_weap_M136", 4}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {{"VSM_Multicam_Backpack_Compact", 1}, {"VSM_Multicam_carryall", 2}, {"VSM_Multicam_Backpack_Kitbag", 1}};
    loadoutBackpackInv[] = {{{"ToolKit", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_packingBandage", 1}}, {{"ACE_elasticBandage", 1}}};
    crew = QGVAR(USAM_CRW);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};

// UH-60
class RHS_UH60M;
class RHS_UH60M_d: RHS_UH60M {
    class EventHandlers;
};
class GVAR(USAM_UH60): RHS_UH60M_d {
    author = "Katalam";
    displayName = "UH-60M";
    loadoutCargo[] = {};
    loadoutItems[] = {{"ACE_packingBandage", 32}, {"ACE_elasticBandage", 32}, {"ACE_morphine", 8}, {"ACE_epinephrine", 8}, {"ACE_tourniquet", 4}, {"ACE_plasmaIV_500", 12}, {"adv_aceSplint_splint", 12}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USAM_HELI_PIL);
    typicalCargo[] = {QGVAR(USAM_HELI_CRW)};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};

// AH-64D
class RHS_AH64_base;
class RHS_AH64D: RHS_AH64_base {
    class EventHandlers;
};
class GVAR(USAM_AH64): RHS_AH64D {
    author = "Katalam";
    displayName = "AH-64D";
    loadoutCargo[] = {};
    loadoutItems[] = {};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USAM_HELI_PIL_AH);
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};

// CH-47F
class RHS_CH_47F;
class RHS_CH_47F_10: RHS_CH_47F {
    class EventHandlers;
};
class GVAR(USAM_CH47): RHS_CH_47F_10 {
    author = "Katalam";
    displayName = "CH-47F";
    loadoutCargo[] = {};
    loadoutItems[] = {{"ACE_packingBandage", 32}, {"ACE_elasticBandage", 32}, {"ACE_morphine", 8}, {"ACE_epinephrine", 8}, {"ACE_tourniquet", 4}, {"ACE_plasmaIV_500", 12}, {"adv_aceSplint_splint", 12}};
    loadoutWeapon[] = {};
    loadoutMagazine[] = {};
    loadoutBackpack[] = {};
    loadoutBackpackInv[] = {};
    crew = QGVAR(USAM_HELI_PIL);
    typicalCargo[] = {QGVAR(USAM_HELI_CRW)};
    scope = 2;
    curatorScope = 2;
    faction = QGVAR(USAM_D);
    class EventHandlers: EventHandlers {
        init = "_this call kat_10thMods_faction_generic_fnc_applyVehicleLoadout";
    };
    class TransportBackpacks {};
};
