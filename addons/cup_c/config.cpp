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

class EventHandlers;
class cfgVehicles {
	class CUP_B_F35B_BAF;
	class KAR_FDF_CUP_F35: CUP_B_F35B_BAF
	{
		
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Planes";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_CUP_F35.jpg";
		vehicleclass = "KAR_FDF_Planes";
		crew = "KAR_FDF_F35_Pilot";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class CUP_B_F35B_Stealth_BAF;
	class KAR_FDF_CUP_F35_S: CUP_B_F35B_Stealth_BAF
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Planes";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_CUP_F35_S.jpg";
		vehicleclass = "KAR_FDF_Planes";
		crew = "KAR_FDF_F35_Pilot";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class CUP_B_M270_HE_USMC;
	class KAR_FDF_CUP_RSRAKH: CUP_B_M270_HE_USMC 
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleclass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C_TD";
		displayname = "298 RSRAKH06";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_CUP_RSRAKH.jpg";
		texturelist[] =
		{
			"KAR_FDF_CUP_RSRAKH_M05",1,
			"KAR_FDF_CUP_RSRAKH_M05W",0
		};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class TextureSources
		{
			class KAR_FDF_CUP_RSRAKH_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] = 
				{
					"KAR_FDF_CUP_C\data\KAR_FDF_RSRAKH06_co.paa"
				};

			};
			class KAR_FDF_CUP_RSRAKH_M055W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] = 
				{
					"KAR_FDF_CUP_C\data\KAR_FDF_RSRAKH06_W_co.paa"
				};
			};
		};
	};
	class CUP_B_RM70_CZ;
	class KAR_FDF_CUP_RSRAKH89: CUP_B_RM70_CZ
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleclass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C_TD";
		displayname = "122 RAKH 89";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_CUP_RSRAKH89.jpg";
		hiddenSelectionsTextures[] = 
		{
			
			"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_01_co.paa",
			"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_02_co.paa",
			"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_03_co.paa",
			"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_04_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_RM70\data\RM70uc_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_RM70\data\csla.paa"
		};
		texturelist[] =
		{
			"KAR_FDF_CUP_RSRAKH_M05",1,
			"KAR_FDF_CUP_RSRAKH_M05W",0
		};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class TextureSources
		{
			class KAR_FDF_CUP_RSRAKH_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] = 
				{
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_01_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_02_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_03_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_04_co.paa"
				};

			};
			class KAR_FDF_CUP_RSRAKH_M055W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] = 
				{
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_01_W_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_02_W_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_03_co.paa",
					"KAR_FDF_CUP_C\data\KAR_FDF_CUP_RSRAKH89_04_co.paa"
				};
			};
		};
	};
};