class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class KAT_artilleryTable: ACE_ItemCore {
        author = "Katalam";
        scope = 2;
        displayName = CSTRING(rangetable_displayName);
        descriptionShort = CSTRING(rangetable_description);
        picture = QPATHTOF(UI\icon_rangeTable.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
};
