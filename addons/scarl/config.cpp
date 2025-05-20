#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"KAR_FDF_SCAR_L","KAR_FDF_SCAR_L_S","KAR_FDF_SCAR_L_G"};
        weapons[] = {"KAR_FDF_SCAR_L","KAR_FDF_SCAR_L_S","KAR_FDF_SCAR_L_G"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","kar_fdf_core","rhsusf_c_weapons","A3_Weapons_F"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"