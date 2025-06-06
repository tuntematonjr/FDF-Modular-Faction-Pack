#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={"KAR_PKP"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={"kar_fdf_main","rhs_c_weapons","kar_fdf_rk62m2"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"