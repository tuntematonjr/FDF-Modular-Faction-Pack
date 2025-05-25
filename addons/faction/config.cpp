#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={"KAR_FDF_RIF_C","KAR_FDF_RIF_C_AT","KAR_FDF_RIF_C_HAT","KAR_FDF_RIF_C_MK","KAR_FDF_RIF_C_SNI","KAR_FDF_RIF_C_MEDIC","KAR_FDF_RIF_C_MG","KAR_FDF_RIF_C_ENG","KAR_FDF_RIF_C_EOD","KAR_FDF_RIF_C_SL","KAR_FDF_RIF_C_TD","KAR_FDF_RIF_S","KAR_FDF_RIF_S_AT","KAR_FDF_RIF_S_HAT","KAR_FDF_RIF_S_MK","KAR_FDF_RIF_S_SNI","KAR_FDF_RIF_S_MEDIC","KAR_FDF_RIF_S_MG","KAR_FDF_RIF_S_ENG","KAR_FDF_RIF_S_EOD","KAR_FDF_RIF_S_AA","KAR_FDF_RIF_S_SL","KAR_FDF_RIF_S_TD","KAR_FDF_F35_Pilot","KAR_FDF_RIF_SOF","KAR_FDF_RIF_SOF_AT","KAR_FDF_RIF_SOF_HAT","KAR_FDF_RIF_SOF_MK","KAR_FDF_RIF_SOF_SNI","KAR_FDF_RIF_SOF_MEDIC","KAR_FDF_RIF_SOF_MG","KAR_FDF_RIF_SOF_ENG","KAR_FDF_RIF_SOF_EOD","KAR_FDF_RIF_SOF_AA","KAR_FDF_RIF_SOF_SL","KAR_FDF_SIS_RIF","KAR_FDF_SIS_TL","KAR_FDF_SIS_MK","KAR_FDF_SIS_AT","KAR_FDF_SIS_MED","KAR_FDF_SIS_EOD","KAR_FDF_Heli_Pilot"};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","kar_fdf_rk62m2","kar_fdf_rk","kar_fdf_PKM"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgWorlds.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

class cfgFactionClasses {
	class KAR_FIN_FACTION {
		displayName = "Finnish Defence Forces";
		priority = 3;
		side = 1;
		icon = QPATHTOF(UI\FDF_emblem_ca.paa);
	};
};

class CfgVehicleClasses {
	class KAR_FDF_INF_C {
		displayName = "Jaegers (Conscript)";
	};
	class KAR_FDF_INF_S {
		displayName = "Jaegers";
	};
	class KAR_FDF_SIS {
		displayName = "Sissi (Recon)";
	};
	class KAR_FDF_INF_SOF {
		displayName = "Special Jaegers";
	};
	class KAR_FDF_PILOT {
		displayName = "Pilots";
	};
};
class CfgEditorCategories {
	class KAR_FDF_TOP {
		displayName = "Finnish Defence Forces";
	};
};
class CfgEditorSubcategories {
	class KAR_FDF_INF_C {
		displayName = "Jaegers (Conscript)";
	};
	class KAR_FDF_INF_S {
		displayName = "Jaegers";
	};
	class KAR_FDF_INF_SOF {
		displayName = "Special Jaegers";
	};
	class KAR_FDF_SIS {
		displayName = "Sissi (Recon)";
	};
	class KAR_FDF_PILOT {
		displayName = "Pilots";
	};
};
