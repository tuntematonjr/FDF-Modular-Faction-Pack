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

class cfgVehicles {
	class sfp_patgb203;
	class KAR_FDF_PGB203: sfp_patgb203
	{
		
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		vehicleclass = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_C";
		displayname = "Pasi";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sfp_patgb203\data\patgb203_main_co.paa","logo"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_PGB203.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class sfp_patgb360;
	class KAR_FDF_PGB360: sfp_patgb360
	{
		
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		vehicleclass = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_S";
		displayname = "Patria XA-203";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_PGB360.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_md500;
	class KAR_FDF_MD500: ffp_md500
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_HELI";
		vehicleclass = "KAR_FDF_HELI";
		crew = "KAR_FDF_Heli_Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_md500.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_nh90;
	class KAR_FDF_NH90: ffp_nh90
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_HELI";
		vehicleclass = "KAR_FDF_HELI";
		crew = "KAR_FDF_Heli_Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_NH90.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_nh90_armed;
	class KAR_FDF_NH90_A: ffp_nh90_armed
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_HELI";
		vehicleclass = "KAR_FDF_HELI";
		crew = "KAR_FDF_Heli_Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_NH90_A.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_rsrakh06;
	class KAR_FDF_FFP_RSRAKH06: ffp_rsrakh06
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleclass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C_TD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_RSRAKH06.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_122h63;
	class KAR_FDF_FFP_122H63: ffp_122h63
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleclass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_122H63.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_bmp2;
	class KAR_FDF_FFP_BMP2: ffp_bmp2
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		vehicleclass = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_C_TD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_BMP2.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_bmp2_atgm;
	class KAR_FDF_FFP_BMP2_ATGM: ffp_bmp2_atgm
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		vehicleclass = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_C_TD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_BMP2_ATGM.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_gruppbat;
	class KAR_FDF_FFP_GBOAT: ffp_gruppbat
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_BOAT";
		vehicleclass = "KAR_FDF_BOAT";
		crew = "KAR_FDF_RIF_C";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_GBOAT.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_bv206;
	class KAR_FDF_FFP_BV206: ffp_bv206
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Cars";
		vehicleclass = "KAR_FDF_Cars";
		crew = "KAR_FDF_RIF_C";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_BV206.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_van_ambulance;
	class KAR_FDF_FFP_AMB: ffp_van_ambulance
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Cars";
		vehicleclass = "KAR_FDF_Cars";
		crew = "KAR_FDF_RIF_C";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_AMB.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_rg32m_gmg;
	class KAR_FDF_FFP_RG32_GMG: ffp_rg32m_gmg
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_MRAPs";
		vehicleclass = "KAR_FDF_MRAPs";
		crew = "KAR_FDF_RIF_S";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_RG32_GMG.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_rg32m;
	class KAR_FDF_FFP_RG32: ffp_rg32m
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_MRAPs";
		vehicleclass = "KAR_FDF_MRAPs";
		crew = "KAR_FDF_RIF_S";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_RG32.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_orbiter;
	class KAR_FDF_FFP_Orbiter: ffp_orbiter
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Drones";
		vehicleclass = "KAR_FDF_Drones";
		crew = "B_UAV_AI";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_ORBITER.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_leopard2a4;
	class KAR_FDF_FFP_LEO2A4: ffp_leopard2a4
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Tanks";
		vehicleclass = "KAR_FDF_Tanks";
		crew = "KAR_FDF_RIF_C_TD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_LEO2A4.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_leopard2a6;
	class KAR_FDF_FFP_LEO2A6: ffp_leopard2a6
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Tanks";
		vehicleclass = "KAR_FDF_Tanks";
		crew = "KAR_FDF_RIF_C_TD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_LEO2A6.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class ffp_ito2005m;
	class KAR_FDF_FFP_ITO05: ffp_ito2005m
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		vehicleclass = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_C";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_FFP_ITO05.jpg";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
};