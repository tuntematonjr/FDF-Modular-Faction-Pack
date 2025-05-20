#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};