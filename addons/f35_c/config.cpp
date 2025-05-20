#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={"KAR_FDF_F35C","KAR_FDF_F35CS"};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","KAR_FDF_Vehicles","F35C_cfg"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
    };
};

class cfgVehicles {
	class F_35C_S;
	class F_35C;
	class KAR_FDF_F35C: F_35C
	{
		displayName = "F-35A Lightning II";
		crew = "KAR_FDF_F35_Pilot";
		scope = 2;
		side = 1;
		faction = "KAR_FIN_Faction";
		editorCategory = "KAR_FDF_TOP";
		vehicleClass = "KAR_FDF_Planes";
		editorSubcategory = "KAR_FDF_Planes";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_F35C.jpg";
	};
	class KAR_FDF_F35CS: F_35C_S
	{
		displayName = "F-35A Lightning II (Stealth)";
		crew = "KAR_FDF_F35_Pilot";
		scope = 2;
		side = 1;
		faction = "KAR_FIN_Faction";
		editorCategory = "KAR_FDF_TOP";
		vehicleClass = "KAR_FDF_Planes";
		editorSubcategory = "KAR_FDF_Planes";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_F35CS.jpg";
	};
};