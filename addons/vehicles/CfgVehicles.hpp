class Eventhandlers;
class CfgVehicles {
	
	class rhs_bmp2e_vdv;
	class KAR_FDF_BMP2MD : rhs_bmp2e_vdv 
    {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_C_TD";
		vehicleclass = "KAR_FDF_APCs";
		typicalCargo[] = {"KAR_FDF_RIF_C_TD"};
		displayname = "BMP-2";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_BMP2MD.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
        texturelist[] = 
        {
            "KAR_FDF_BMP_M05",1,
            "KAR_FDF_BMP_M05W",0
        };
		rhs_decalParameters[] = {};		
        class TextureSources {
			class KAR_FDF_BMP_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				textures[] = {QPATHTOF(data\BMP_1_co.paa),QPATHTOF(data\BMP_2_co.paa),QPATHTOF(data\BMP_3_co.paa),QPATHTOF(data\BMP_4_co.paa),QPATHTOF(data\BMP_5_co.paa),QPATHTOF(data\BMP_6_co.paa)};
			};
            class KAR_FDF_BMP_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				textures[] = {QPATHTOF(data\BMP_1_W_co.paa),QPATHTOF(data\BMP_2_W_co.paa),QPATHTOF(data\BMP_3_W_co.paa),QPATHTOF(data\BMP_4_W_co.paa),QPATHTOF(data\BMP_5_W_co.paa),QPATHTOF(data\BMP_6_W_co.paa)};
			};
		};
    };
	class RHS_M252_D;
	class KAR_FDF_KRH: RHS_M252_D {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleClass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C";
		typicalCargo[] = {"KAR_FDF_RIF_C"};
		displayname = "81 KRH 96";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_KRH.jpg";
	};
	class RHS_MK19_TriPod_WD;
	class KAR_FDF_KRKK: RHS_MK19_TriPod_WD {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_S";
		typicalCargo[] = {"KAR_FDF_RIF_S"};
		displayname = "40 KRKK 2005";
		vehicleclass = "KAR_FDF_TUR";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_KRKK.jpg";
	};
	class RHS_TOW_TriPod_USMC_WD;
	class KAR_FDF_PSTOHJ: RHS_TOW_TriPod_USMC_WD {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_S";
		vehicleclass = "KAR_FDF_TUR";
		typicalCargo[] = {"KAR_FDF_RIF_S"};
		displayname = "PSTOHJ 83";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_PSTOHJ.jpg";
	};
	class rhsusf_m109_usarmy;
	class KAR_FDF_K9: rhsusf_m109_usarmy {
		scope = 2;
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_S_TD";
		typicalCargo[] = {"KAR_FDF_RIF_S_TD"};
		vehicleclass = "KAR_FDF_ART";
		displayName = "155 PSH K9";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_K9.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		texturelist[] = { 
			"KAR_FDF_K9_M05",1
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};	
		class TextureSources {
			class KAR_FDF_K9_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				Textures[] = {QPATHTOF(data\k9_01_co.paa),QPATHTOF(data\k9_02_co.paa),QPATHTOF(data\k9_03_co.paa),"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"};
			};
		};
	};
	class RHS_ZU23_base;
    class KAR_FDF_ITK_A: RHS_ZU23_base
    {
		scope = 0;
        class Turrets;
    };
   	class KAR_FDF_ITK_B :KAR_FDF_ITK_A
    {
		scope = 0;
        class Turrets:Turrets
        {
            class MainTurret;
        };
    };
    class KAR_FDF_ITK_C: KAR_FDF_ITK_B
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
            };
			class CargoTurret_01;
        };
    };
	class KAR_FDF_ITK65 : KAR_FDF_ITK_C  {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_S";
		vehicleclass = "KAR_FDF_TUR";
		typicalCargo[] = {"KAR_FDF_RIF_C"};
		displayname = "23 ITK 65";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_ITK65.jpg";
        class Turrets : Turrets 
        {
            class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01 {
				gunnerType = "KAR_FDF_RIF_C";
			};
        };
    };
	class rhs_KORD_high_MSV;
	class KAR_FDF_ITK96: rhs_KORD_high_MSV {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_S";
		vehicleclass = "KAR_FDF_TUR";
		typicalCargo[] = {"KAR_FDF_RIF_S"};
		displayname = "12.7 ITKK 96";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_ITK96.jpg";
	};
	class rhs_D30_vmf;
	class KAR_FDF_PSH74: rhs_D30_vmf {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_TUR";
		crew = "KAR_FDF_RIF_C";
		vehicleclass = "KAR_FDF_TUR";
		typicalCargo[] = {"KAR_FDF_RIF_C"};
		displayname = "122 H 63";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_PSH74.jpg";
	};
	class rhs_2s1tank_base;
    class KAR_FDF_122PSH_A:rhs_2s1tank_base
    {
		scope = 0;
        class Turrets;
    };
   	class KAR_FDF_122PSH_B:KAR_FDF_122PSH_A
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class KAR_FDF_122PSH_C: KAR_FDF_122PSH_B
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
		
    };
    class KAR_FDF_122PSH_D:KAR_FDF_122PSH_C
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class LoaderOptics;
                };
            };
        };
		
    };
	class KAR_FDF_122PSH : KAR_FDF_122PSH_D  {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C_TD";
		vehicleclass = "KAR_FDF_ART";
		typicalCargo[] = {"KAR_FDF_RIF_C_TD"};
		displayname = "122 PSH 74";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_122PSH.jpg";
		rhs_decalParameters[] = {};	
		hiddenSelections[] = {"camo1","camo2","camo_sprocket","camo_idler","camo_wheel1","camo_wheel2","camo_wheel3","camo_wheel4","camo_wheel5","camo_wheel6","camo_wheel7","n1","n2","n3","n4","n5","n6","n7","n8","n9","n10","n11","n12","n13","n14","n15","n16","n17","n18","n19","n20","i1","i2","i3","i4","i5","i6","i7"};
		texturelist[] = {
			"KAR_FDF_122PSH_M05",1,
			"KAR_FDF_122PSH_M05W",0
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};	
        class Turrets : Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics { GunnerType = "KAR_FDF_RIF_C_TD"; };
                    class LoaderOptics: LoaderOptics { GunnerType = "KAR_FDF_RIF_C_TD"; };
                };			
			};
        };
		class texturesources  {
			class KAR_FDF_122PSH_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION"
				};
				Textures[] = {
					QPATHTOF(data\psh74_hull_co.paa),
					QPATHTOF(data\psh74_turretl_co.paa),
				};
			};
			class KAR_FDF_122PSH_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\psh74_hull_w_co.paa),
					QPATHTOF(data\psh74_turretl_w_co.paa),
				};			
			};
		};
    };
	class B_APC_Tracked_01_AA_F;
	class KAR_FDF_ITPSV_BASE: B_APC_Tracked_01_AA_F  {
		scope = 0;
		class turrets;
	};
	class KAR_FDF_ITPSV_BASE_01: KAR_FDF_ITPSV_BASE  {
		class Turrets: Turrets {
			scope = 0;
			class MainTurret;
		};
	};
	class KAR_FDF_IPTSV: KAR_FDF_ITPSV_BASE_01 {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_AA";
		crew = "KAR_FDF_RIF_C_TD";
		vehicleclass = "KAR_FDF_AA";
		typicalCargo[] = {"KAR_FDF_RIF_C_TD"};
		hiddenSelections[] = {"camo1","camo2","camo3","CamoNet"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_IPTSV.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		texturelist[] = { 
			"KAR_FDF_ITPSV_M05",1,
			"KAR_FDF_ITPSV_M05W",0
		};
		displayname = "ITPSV 90 Marksman";
		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[]= {
					"autocannon_35mm",
				};
				magazines[]= {
					"680Rnd_35mm_AA_shells_Tracer_Red",
				};
			};
		};
		class texturesources  {
			class KAR_FDF_ITPSV_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] =  {
					QPATHTOF(data\iptsv_aa_vartalo_co.paa),
					QPATHTOF(data\iptsv_vart_co.paa),
					QPATHTOF(data\itpsv_torni_co.paa)
				};
			};
			class KAR_FDF_ITPSV_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] =  {
					QPATHTOF(data\iptsv_W_vartalo.paa),
					QPATHTOF(data\vaunu_W_vartalo.paa),
					QPATHTOF(data\iptsv_W_torni.paa)
				};
			};
		};
	};	
	class O_Truck_02_covered_F;
	class KAR_FDF_SISU_COV: O_Truck_02_covered_F {
		
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C";
		displayname = "Sisu (COVERED)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU_COV.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};

		textureList[] =  {
			"KAR_FDF_SISU_COV_M05",1,
			"KAR_FDF_SISU_COV_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		class TextureSources {
			class KAR_FDF_SISU_COV_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class KAR_FDF_SISU_COV_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_transport_F;
	class KAR_FDF_SISU: O_Truck_02_transport_F {
		
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C";
		displayname = "Sisu (Transport)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] =  {
			"KAR_FDF_SISU_M05",1,
			"KAR_FDF_SISU_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		class TextureSources {
			class KAR_FDF_SISU_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class KAR_FDF_SISU_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_box_F;
	class KAR_FDF_SISU_REPAIR: O_Truck_02_box_F {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C_ENG";
		displayname = "Sisu (Repair)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU_REPAIR.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"KAR_FDF_SISU_REP_M05",1,
			"KAR_FDF_SISU_REP_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		class TextureSources {
			class KAR_FDF_SISU_REP_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_repair_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class KAR_FDF_SISU_REP_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_repair_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_medical_F;
	class KAR_FDF_SISU_MEDICAL: O_Truck_02_medical_F {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C_MEDIC";
		displayname = "Sisu (Medical)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU_MEDICAL.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] =  {
			"KAR_FDF_SISU_MED_M05",1,
			"KAR_FDF_SISU_MED_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		
		class TextureSources {
			class KAR_FDF_SISU_MED_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class KAR_FDF_SISU_MED_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_kuz_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_Ammo_F;
	class KAR_FDF_SISU_AMMO: O_Truck_02_Ammo_F {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C";
		displayname = "Sisu (Ammo)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU_AMMO.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"KAR_FDF_SISU_AMMO_M05",1,
			"KAR_FDF_SISU_AMMO_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		
		class TextureSources {
			class KAR_FDF_SISU_AMMO_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_repair_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class KAR_FDF_SISU_AMMO_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_repair_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_fuel_F;
	class KAR_FDF_SISU_FUEL: O_Truck_02_fuel_F {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Trucks";
		vehicleclass = "KAR_FDF_Trucks";
		crew = "KAR_FDF_RIF_C";
		displayname = "Sisu (Fuel)";
		hiddenselections[] = { "camo1","camo2","camo3","camo4" };
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SISU_FUEL.jpg";
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"KAR_FDF_SISU_FUEL_M05",1,
			"KAR_FDF_SISU_FUEL_M05W",0
		};
		hiddenSelectionsMaterials[]= {
			"KAR_FDF_Vehicles\data\sisu_02_kab.rvmat"
		};
		class TextureSources {
			class KAR_FDF_SISU_FUEL_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_kab_co.paa),
					QPATHTOF(data\sisu_02_fuel_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
				};
			};
			class KAR_FDF_SISU_FUEL_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\sisu_02_w_kab_co.paa),
					QPATHTOF(data\sisu_02_w_fuel_co.paa),
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
				};
			};
		};
	};
	class rhsusf_m1240a1_m2_usarmy_d;
	class KAR_FDF_RG32_M2: rhsusf_m1240a1_m2_usarmy_d {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_MRAPs";
		vehicleclass = "KAR_FDF_MRAPs";
		crew = "KAR_FDF_RIF_SOF";
		displayname = "RG32 (MG)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RG32_M2.jpg";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","camo9","camo10","camoH24","BFT_screen"};
		texturelist[] = {
			"rhs_olive",1,
			"rhs_desert",0,
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class textureSources {
			class rhs_desert {
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"};
				factions[] = {};
			};
			class rhs_olive {
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"};
				factions[] = {};
			};
		};
	};
	class rhsusf_m1240a1_mk19_usarmy_d;
	class KAR_FDF_RG32_KRKK: rhsusf_m1240a1_mk19_usarmy_d {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_MRAPs";
		vehicleclass = "KAR_FDF_MRAPs";
		crew = "KAR_FDF_RIF_SOF";
		displayname = "RG32 (KRKK)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RG32_KRKK.jpg";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","camo9","camo10","camoH24","BFT_screen"};
		texturelist[] = {
			"rhs_olive",1,
			"rhs_desert",0,
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class textureSources {
			class rhs_desert {
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"};
				factions[] = {};
			};
			class rhs_olive {
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"};
				factions[] = {};
			};
		};
	};
	class RHS_BM21_MSV_01;
	class KAR_FDF_BM21: RHS_BM21_MSV_01 {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_ART";
		vehicleclass = "KAR_FDF_ART";
		crew = "KAR_FDF_RIF_C_TD";
		displayname = "122 RKH 76";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_BM21.jpg";
		rhs_decalParameters[] = {};	
		hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4"};
		texturelist[] = {
			"KAR_FDF_BM21_M05",1,
			"KAR_FDF_BM21_M05W",0
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class TextureSources {
			class KAR_FDF_BM21_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] =  {
					QPATHTOF(data\FDF_bm21_02_co.paa),
					QPATHTOF(data\FDF_bm21_01_co.paa)
				};

			};
			class KAR_FDF_BM21_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] =  {
					QPATHTOF(data\FDF_bm21_02_W_co.paa),
					QPATHTOF(data\FDF_bm21_01_W_co.paa)
				};
			};
		};
	};
	class rhs_btr60_msv;
	class KAR_FDF_BTR: rhs_btr60_msv {
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_APCs";
		vehicleclass = "KAR_FDF_APCs";
		crew = "KAR_FDF_RIF_C_TD";
		displayname = "BTR-60";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_BTR.jpg";
		rhs_decalParameters[] = {};	
		hiddenSelections[] = {"camo1","camo2","camo3","cover1","cover2","i1","i2","i3","i4","i5","i6","i7","n1","n2","n3","n4","n5","n6","n7","n8","n9","n10","n11","i8","i9","i10"};
		texturelist[] = {
			"KAR_FDF_BTR_M05",1,
			"KAR_FDF_BTR_M05W",0
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class TextureSources {
			class KAR_FDF_BTR_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] =  {
					"KAR_FDF_Vehicles\data\KAR_FDF_BTR_01_co",
					QPATHTOF(data\KAR_FDF_BTR_02_co.paa)
				};

			};
			class KAR_FDF_BTR_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				textures[] =  {
					QPATHTOF(data\KAR_FDF_BTR_01_W_co.paa),
					QPATHTOF(data\KAR_FDF_BTR_02_W_co.paa)
				};
			};
		};
	};
	class rhs_t72ba_tv;
    class KAR_FDF_T72_A: rhs_t72ba_tv
    {
		scope = 0;
        class Turrets;
    };
  	class KAR_FDF_T72_B: KAR_FDF_T72_A
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class KAR_FDF_T72_C: KAR_FDF_T72_B
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
		
    };
    class KAR_FDF_T72_D: KAR_FDF_T72_C
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
					class CommanderMG;
                };
            };
        };
    };
	class KAR_FDF_T72 : KAR_FDF_T72_D  {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "KAR_FIN_FACTION";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_Tanks";
		crew = "KAR_FDF_RIF_C_TD";
		vehicleclass = "KAR_FDF_Tanks";
		typicalCargo[] = {"KAR_FDF_RIF_C_TD"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_T72.jpg";
		displayname = "T-72";
		rhs_decalParameters[] = {};	
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","n1","n2","n3","i1","i2",""};
		texturelist[] = {
			"KAR_FDF_T72_M05",1,
			"KAR_FDF_T72_M05W",0
		};
		class EventHandlers : EventHandlers {
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};	
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics { GunnerType = "KAR_FDF_RIF_C_TD"; };
					class CommanderMG: CommanderMG {};
                };			
			};
        };
		class texturesources  {
			class KAR_FDF_T72_M05 {
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION"
				};
				Textures[] = {
					QPATHTOF(data\KAR_72_01_co.paa),
					QPATHTOF(data\KAR_72_02_co.paa),
					QPATHTOF(data\KAR_72_03_co.paa),
					QPATHTOF(data\KAR_72_04_co.paa)
				};
			};
			class KAR_FDF_T72_M05W {
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"KAR_FIN_FACTION" 
				};
				Textures[] = {
					QPATHTOF(data\KAR_72_01_W_co.paa),
					QPATHTOF(data\KAR_72_02_W_co.paa),
					QPATHTOF(data\KAR_72_03_co.paa),
					QPATHTOF(data\KAR_72_04_co.paa)
				};			
			};
		};
    };
};
