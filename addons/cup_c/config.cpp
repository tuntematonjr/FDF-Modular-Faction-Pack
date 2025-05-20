#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={"KAR_FDF_CUP_F35","KAR_FDF_CUP_F35_S","KAR_FDF_CUP_RSRAKH","KAR_FDF_CUP_RSRAKH","KAR_FDF_CUP_RSRAKH89"};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","KAR_FDF_Vehicles","CUP_Vehicles_Core","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
    };
};

#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"