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
};
