// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX kat_10thmods

#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.88
#define REQUIRED_CBA_VERSION {3,8,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(KAT - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(KAT - COMPONENT)
#endif
