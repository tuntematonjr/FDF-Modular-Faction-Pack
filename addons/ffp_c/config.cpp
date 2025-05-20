#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={"KAR_FDF_PGB203","KAR_FDF_PGB360","KAR_FDF_MD500","KAR_FDF_NH90","KAR_FDF_NH90_A","KAR_FDF_FFP_RSRAKH06",
			"KAR_FDF_FFP_122H63","KAR_FDF_FFP_BMP2","KAR_FDF_FFP_BMP2_ATGM","KAR_FDF_FFP_GBOAT","KAR_FDF_FFP_BV206",
			"KAR_FDF_FFP_AMB","KAR_FDF_FFP_RG32","KAR_FDF_FFP_RG32_GMG","KAR_FDF_FFP_Orbiter","KAR_FDF_FFP_LEO2A4",
			"KAR_FDF_FFP_LEO2A6","KAR_FDF_FFP_ITO05"};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","KAR_FDF_Vehicles","Finnish_Forces_Pack", "Swedish_Forces_Pack","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
    };
};

#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"