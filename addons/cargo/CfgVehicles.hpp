class CfgVehicles {
    class ThingX;
    class ReammoBox_F: ThingX {
        ace_cargo_size = 1;
    };
    class ACE_RepairItem_Base;
    class ACE_Track: ACE_RepairItem_Base {
        ace_cargo_size = 1;
    };

    class Bag_Base;
    class usm_pack_st138_prc77: Bag_Base { // 80
        maximumLoad = 120;
    };
    class usm_pack_m5_medic: Bag_Base { // 120
        maximumLoad = 200;
    };
};
