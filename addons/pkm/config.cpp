#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={"KAR_PKM"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={"kar_fdf_main","rhs_c_weapons"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"