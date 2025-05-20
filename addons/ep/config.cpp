#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};