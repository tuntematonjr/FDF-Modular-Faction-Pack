#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"KAR_FDF_BMP2MD","KAR_FDF_KRH","KAR_FDF_KRKK","KAR_FDF_PSTOHJ","KAR_FDF_K9","KAR_FDF_PSH74","KAR_FDF_ITK96","KAR_FDF_ITK65",
		"KAR_FDF_122PSH","KAR_FDF_IPTSV","KAR_FDF_SISU_FUEL","KAR_FDF_SISU_AMMO","KAR_FDF_SISU_MEDICAL","KAR_FDF_SISU_REPAIR","KAR_FDF_SISU","KAR_FDF_SISU_COV",
		"KAR_FDF_RG32_M2","KAR_FDF_RG32_KRKK","KAR_FDF_BM21","KAR_FDF_BTR", "KAR_FDF_T72"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","rhs_c_bmp","rhsusf_c_statics","rhsusf_c_m109","rhs_c_heavyweapons","rhs_c_2s1","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"

class CfgVehicleClasses {
	class KAR_FDF_Trucks {
		displayName = "Trucks";
	};
	class KAR_FDF_Cars {
		displayName = "Cars";
	};
	class KAR_FDF_APCs {
		displayName = "APCs";
	};
	class KAR_FDF_AA {
		displayName = "Anti-Air";
	};
	class KAR_FDF_HELI {
		displayName = "Helicopters";
	};
	class KAR_FDF_Tanks {
		displayName = "Tanks";
	};
	class KAR_FDF_ART {
		displayName = "Artillery";
	};
	class KAR_FDF_TUR {
		displayName = "Turrets";
	};
	class KAR_FDF_Planes {
		displayName = "Planes";
	};
	class KAR_FDF_MRAPs {
		displayName = "MRAPs";
	};
	class KAR_FDF_BOAT {
		displayName = "Boats";
	};
	class KAR_FDF_Drones {
		displayName = "Drones";
	};
};
class CfgEditorSubcategories {	
	class KAR_FDF_AA {
		displayName = "Anti-Air";
	};
	class KAR_FDF_Trucks {
		displayName = "Trucks";
	};
	class KAR_FDF_Cars {
		displayName = "Cars";
	};
	class KAR_FDF_APCs {
		displayName = "APCs";
	};
	class KAR_FDF_Tanks {
		displayName = "Tanks";
	};
	class KAR_FDF_HELI {
		displayName = "Helicopters";
	};
	class KAR_FDF_ART {
		displayName = "Artillery";
	};
	class KAR_FDF_TUR {
		displayName = "Turrets";
	};
	class KAR_FDF_Planes {
		displayName = "Planes";
	};
	class KAR_FDF_MRAPs {
		displayName = "MRAPs";
	};
	class KAR_FDF_Drones {
		displayName = "Drones";
	};
	class KAR_FDF_BOAT {
		displayName = "Boats";
	};
	
};