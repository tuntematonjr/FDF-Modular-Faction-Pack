#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={"KAR_FDF_F35C","KAR_FDF_F35CS"};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","kar_fdf_core","KAR_FDF_Vehicles","F35C_cfg"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
