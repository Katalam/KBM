class CfgAmmo {
    class Default;
    class BulletCore;
    class BulletBase: Bulletcore{};
    class ShellCore {
        GVAR(func) = QFUNC(120mm);
    };
    class FlareCore;
    class ShotDeployCore;
    class SubmunitionCore;
    class SubmunitionBase: SubmunitionCore{};
    class MissileCore {
        GVAR(func) = QFUNC(BigRocket);
    };
    class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class GrenadeCore {
        GVAR(func) = QFUNC(Grenade);
    };
    class BombCore {
        GVAR(func) = QFUNC(BigRocket);
    };
    class LaserBombCore {
        GVAR(func) = QFUNC(BigBomb);
    };
    class RocketCore {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class MineCore;
    class BoundingMineCore;
    class DirectionalBombCore;
    class PipeBombCore;
    class ShellBase: ShellCore{};
    class MissileBase: MissileCore {
        GVAR(func) = QFUNC(BigRocket);
    };
    class RocketBase: RocketCore {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class Grenade: Default {
        GVAR(func) = QFUNC(Grenade);
    };
    class GrenadeHand: Grenade{};
    class SmokeShell: GrenadeHand {
        GVAR(func) = "";
    };
    class GrenadeBase: GrenadeCore {
        GVAR(func) = QFUNC(Grenade);
    };
    class FuelExplosion: Default {
        GVAR(func) = QFUNC(FuelExploSmall);
    };
    class FuelExplosionBig: FuelExplosion {
        GVAR(func) = QFUNC(FuelExploBig);
    };
    class HelicopterExploSmall: ShellBase {
        GVAR(func) = QFUNC(FuelExploSmall);
    };
    class HelicopterExploBig: HelicopterExploSmall {
        GVAR(func) = QFUNC(FuelExploBig);
    };
    class SmallSecondary: HelicopterExploSmall {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_19mm_HE: BulletBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_HE: B_19mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_HE_Tracer_Red: B_30mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_HE_Tracer_Green: B_30mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_HE_Tracer_Yellow: B_30mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_MP: B_30mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_MP_Tracer_Red: B_30mm_MP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_MP_Tracer_Green: B_30mm_MP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_MP_Tracer_Yellow: B_30mm_MP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_40mm_GPR: B_30mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_40mm_GPR_Tracer_Red: B_40mm_GPR {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_40mm_GPR_Tracer_Green: B_40mm_GPR {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_20mm: BulletBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_20mm_Tracer_Red: B_20mm {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_25mm: BulletBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_AP: BulletBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_AP_Tracer_Red: B_30mm_AP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_AP_Tracer_Green: B_30mm_AP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_AP_Tracer_Yellow: B_30mm_AP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_APFSDS: B_30mm_AP {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS {
        GVAR(func) = QFUNC(Grenade);
    };
    class B_40mm_APFSDS: B_30mm_APFSDS {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class B_35mm_AA: BulletBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class M_PG_AT: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_AT: M_PG_AT {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Mo_82mm_AT: MissileBase {
        GVAR(func) = QFUNC(Mortar);
    };
    class M_Mo_82mm_AT_LG: M_Mo_82mm_AT {
        GVAR(func) = QFUNC(Mortar);
    };
    class M_Mo_120mm_AT: MissileBase {
        GVAR(func) = QFUNC(120mm);
    };
    class M_Mo_120mm_AT_LG: M_Mo_120mm_AT {
        GVAR(func) = QFUNC(120mm);
    };
    class M_RPG32_F: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_RPG32_AA_F: M_RPG32_F {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_NLAW_AT_F: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Scalpel_AT: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Scalpel_AT_hidden: M_Scalpel_AT {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Titan_AA: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Zephyr: M_Titan_AA {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Zephyr_Mi06: M_Zephyr {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Air_AA: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Air_AA_MI02: M_Air_AA {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Titan_AT: MissileBase {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Titan_AP: M_Titan_AT {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class M_Air_AT: M_Titan_AT {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class R_80mm_HE: RocketBase {
        GVAR(func) = QFUNC(Mortar);
    };
    class R_60mm_HE: R_80mm_HE {
        GVAR(func) = QFUNC(SmallRocket);
    };
    class R_230mm_HE: SubmunitionBase {
        GVAR(func) = QFUNC(BigRocket);
    };
    class R_230mm_fly: ShellBase {
        GVAR(func) = QFUNC(BigRocket);
    };
    class Sh_120mm_HE: ShellBase {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_APFSDS: ShellBase {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS {
        GVAR(func) = QFUNC(120mm);
    };
    class Sh_155mm_AMOS: ShellBase {
        GVAR(func) = QFUNC(Arty);
    };
    class Sh_82mm_AMOS: Sh_155mm_AMOS {
        GVAR(func) = QFUNC(Mortar);
    };
    class Sh_82mm_AMOS_guided: SubmunitionBase {
        GVAR(func) = QFUNC(Mortar);
    };
    class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided {
        GVAR(func) = QFUNC(Mortar);
    };
    class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided {
        GVAR(func) = QFUNC(Arty);
    };
    class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG {
        GVAR(func) = QFUNC(Arty);
    };
    class G_40mm_HE: GrenadeBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class G_20mm_HE: G_40mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class G_40mm_HEDP: G_40mm_HE {
        GVAR(func) = QFUNC(Grenade);
    };
    class MineBase: MineCore {
        GVAR(func) = QFUNC(Grenade);
    };
    class BoundingMineBase: BoundingMineCore {
        GVAR(func) = QFUNC(Grenade);
    };
    class DirectionalBombBase: DirectionalBombCore {
        GVAR(func) = QFUNC(Grenade);
    };
    class PipeBombBase: PipeBombCore {
        GVAR(func) = QFUNC(Satchel);
    };
    class ATMine_Range_Ammo: MineBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class UnderwaterMine_Range_Ammo: MineBase{};
    class UnderwaterMineAB_Range_Ammo: UnderwaterMine_Range_Ammo{};
    class UnderwaterMinePDM_Range_Ammo: UnderwaterMine_Range_Ammo{};
    class APERSMine_Range_Ammo: MineBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class APERSBoundingMine_Range_Ammo: BoundingMineBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class APERSTripMine_Wire_Ammo: DirectionalBombBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase {
        GVAR(func) = QFUNC(Grenade);
    };
    class SatchelCharge_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(Satchel);
    };
    class DemoCharge_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(Satchel);
    };
    class IEDUrbanBig_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(Satchel);
    };
    class IEDLandBig_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(Satchel);
    };
    class IEDUrbanSmall_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(IED);
    };
    class IEDLandSmall_Remote_Ammo: PipeBombBase {
        GVAR(func) = QFUNC(IED);
    };
    class Bo_Mk82: BombCore {
        GVAR(func) = QFUNC(BigBomb);
    };
};
