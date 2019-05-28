class CfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class rhs_uniform_cu_ocp: Uniform_Base {
        class ItemInfo;
    };
    class rhs_uniform_FROG01_d: rhs_uniform_cu_ocp {
        class ItemInfo: UniformItem {
            containerClass = Supply60;
        };
    };

    class usm_bdu_w: Uniform_Base {
        class ItemInfo;
    };
    class usm_bdu_dcu_m: usm_bdu_w {
        class ItemInfo: UniformItem {
            containerClass = Supply60;
        };
    };
};
