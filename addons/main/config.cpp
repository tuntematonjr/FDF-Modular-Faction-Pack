#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main","cba_xeh","rhs_infantry","A3_Weapons_F_Exp","A3_Sounds_F_Exp","rhsusf_infantry","rhsgref_infantry","rhssaf_main","rhsusf_c_troops"};
		author = "Kartsa";
		// authorUrl = GITHUBLINK;
		VERSION_CONFIG;
	};
};

//information on the whole mod (only needed once)
class CfgMods {
	class PREFIX {
		dir = "@fdf_modular_faction_pack";
		name = "FDF Modular Faction Pack";
		
		author = "Kartsa";					// probably shown somewhere in the mods menu, but probably ignored by CBA/HEMTT

		picture		 = "data\FDF_LOGO.paa";	   // Picture displayed from the expansions menu. Optimal size is 2048x1024
		hideName		= "false";			  // Hide the extension name in main menu and extension menu
		hidePicture	 = "false";			  // Hide the extension picture in the extension menu

		//action		  = GITHUBLINK; // Website URL, that can accessed from the expansions menu 
		//actionName	  = "Github";			  // label of button/tooltip in extension menu
		//description	 = "It's unclear where this will show"; // Probably in context with action

		// Color used for DLC stripes and backgrounds (RGBA)
		dlcColor[] =
		{
			1,
			0.0,
			0.86,
			1
		};
	};
};