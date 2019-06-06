#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author = "PabstMirror";
        authors[] = {"PabstMirror"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class KAT_Extensions {
    extensions[] += {"kat_artillerytables"};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"


// Common UI Stuff:
class RscText;
class RscListbox;
class RscListNBox;
class RscPicture;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class ScrollBar;
class RscActiveText;
class RscStructuredText;
class ctrlButton;

#include "RscTitles.hpp"
#include "RscRangeTable.hpp"
