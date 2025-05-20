#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={"KAR_RIFLE_RK62"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={"kar_fdf_main","kar_fdf_rk62m2"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"