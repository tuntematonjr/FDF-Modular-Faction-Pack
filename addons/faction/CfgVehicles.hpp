class CfgVehicles {
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F {
		class EventHandlers;
	};
	/////CONSCRIPTS////
	class KAR_FDF_SOL_C_BASE: B_Soldier_base_G {	
		_generalMacro="I_G_Soldier_base_F";
		accuracy = 3.9000001;
		author = "Kartsa";
		camouflage = 1.1;
		editorSubcategory = "KAR_FDF_INF_C";
		expansion = 1;
		faceType = "Man_A3";
		faction = "KAR_FIN_FACTION";
		genericNames = "FinnishMen";
		icon = "iconMan";
		identityTypes[] = {"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		minFireTime = 10;
		nakedUniform = "U_BasicBody";
		picture = "";
		portrait = "";
		scope = 0;
		scopeCurator = 0;
		side = 1;
		vehicleClass = "Men";
		linkedItems[] = {
			"KAR_FDF_M05_TST_ARM",
			"KAR_FDF_COM_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M05_TST_ARM",
			"KAR_FDF_COM_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class KAR_FDF_RIF_C: KAR_FDF_SOL_C_BASE {
		backpack = "KAR_FDF_C_BAG";
		displayName = "Rifleman";
		editorCategory = "KAR_FDF_TOP";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C.jpg";
		editorSubcategory = "KAR_FDF_INF_C";
		headgearProbability = 1;
		Items[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		RespawnItems[] = {"FirstAidKit"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		role = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "KAR_FDF_M05_Palvelus";
		vehicleClass = "KAR_FDF_INF_C";
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		allowedHeadgear[]= {
			"KAR_FDF_COM_01",
			"KAR_FDF_COM_03",
			"KAR_FDF_COM_04",
			"KAR_FDF_COM_05",
			"KAR_FDF_COM_12"
		};
		headgearList[] =  {
			"KAR_FDF_COM_01", 1,
			"KAR_FDF_COM_03", 1,
			"KAR_FDF_COM_04", 1,
			"KAR_FDF_COM_05", 1,
			"KAR_FDF_COM_12", 1
		};
		class EventHandlers: EventHandlers {
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class KAR_FDF_RIF_C_AT: KAR_FDF_RIF_C {
		displayName = "Rifleman (M72)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_AT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		role = "Rifleman";
		weapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
	};
	class KAR_FDF_RIF_C_HAT: KAR_FDF_RIF_C {
		displayName = "Rifleman (NLAW)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_HAT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_RIFLE_RK62","launch_NLAW_F","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_RIFLE_RK62","launch_NLAW_F","Throw","Put"};
	};
	class KAR_FDF_RIF_C_MK: KAR_FDF_RIF_C {
		displayName = "Marksman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MK.jpg";
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
	};
	class KAR_FDF_RIF_C_SNI: KAR_FDF_RIF_C {
		backpack = "";
		displayName = "Sniper";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_SNI.jpg";
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnWeapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		allowedHeadgear[]= {
			"KAR_FDF_COM_01",
			"KAR_FDF_COM_03",
			"KAR_FDF_COM_04",
			"KAR_FDF_COM_05",
			"KAR_FDF_Beanie_01",
			"KAR_FDF_SEIKKAILUHATTU"
		};
		headgearList[] =  {
			"KAR_FDF_COM_01", 1,
			"KAR_FDF_COM_03", 1,
			"KAR_FDF_COM_04", 1,
			"KAR_FDF_COM_05", 1,
			"KAR_FDF_Beanie_01", 1,
			"KAR_FDF_SEIKKAILUHATTU", 1
		};
	};
	class KAR_FDF_RIF_C_MEDIC: KAR_FDF_RIF_C {
		attendant = 1;
		backpack = "KAR_FDF_MEDICBAG";
		displayName = "Medic";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MEDIC.jpg";
		icon = "iconManMedic";
		medic = 1;
		role = "CombatLifeSaver";
	};
	class KAR_FDF_RIF_C_MG: KAR_FDF_RIF_C {
		backpack = "KAR_FDF_MG_BAG";
		displayName = "Machinegunner";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MG.jpg";
		icon = "iconManMG";
		magazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnWeapons[] = {"KAR_PKM","Throw","Put"};
		role = "MachineGunner";
		weapons[] = {"KAR_PKM","Throw","Put"};
	};
	class KAR_FDF_RIF_C_ENG: KAR_FDF_RIF_C {
		backpack = "KAR_FDF_MECH";
		displayName = "Engineer";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_ENG.jpg";
		engineer = 1;
		icon = "iconManEngineer";
		role = "Sapper";
	};
	class KAR_FDF_RIF_C_EOD: KAR_FDF_RIF_C_ENG {
		backpack = "KAR_FDF_EOD";
		canDeactivateMines = 1;
		detectSkill = 38;
		displayName = "EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_EOD.jpg";
		engineer = 1;
	};
	class KAR_FDF_RIF_C_SL: KAR_FDF_RIF_C {
		displayName = "Squad Leader";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_SL.jpg";
		icon = "iconManLeader";
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		role = "Rifleman";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
	};
	class KAR_FDF_RIF_C_TD: KAR_FDF_RIF_C {
		allowedHeadgear[]= {"KAR_FDF_VP_01","KAR_FDF_VP_02"};
		backpack = "";
		displayName = "Crewman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_TD.jpg";
		headgearList[] =  {"KAR_FDF_VP_02", 1,"KAR_FDF_VP_01", 1};
		linkedItems[] = {"KAR_FDF_M05_TST"};
		respawnlinkedItems[] = {"KAR_FDF_M05_TST"};
		role = "Crewman";
		uniformClass = "KAR_FDF_COVERALLS_02";
	};
	////SERVICEMEN////
	class KAR_FDF_SOL_S_BASE: KAR_FDF_SOL_C_BASE {	
		editorSubcategory = "KAR_FDF_INF_S";
		linkedItems[] = {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};	
	};
	class KAR_FDF_RIF_S: KAR_FDF_SOL_S_BASE {
		backpack = "KAR_FDF_S_BAG";
		displayName = "Rifleman";
		editorCategory = "KAR_FDF_TOP";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S.jpg";
		editorSubcategory = "KAR_FDF_INF_S";
		headgearProbability = 1;
		Items[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		RespawnItems[] = {"FirstAidKit"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnWeapons[] = {"KAR_FDF_M62M2","Throw","Put"};
		role = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "KAR_FDF_M05_Taistelupaita";
		vehicleClass = "KAR_FDF_INF_S";
		weapons[] = {"KAR_FDF_M62M2","Throw","Put"};
		allowedHeadgear[]= {
			"KAR_FDF_OPSCORE_01",
			"KAR_FDF_OPSCORE_02",
			"KAR_FDF_COM_01",
			"KAR_FDF_COM_03",
			"KAR_FDF_COM_04",
			"KAR_FDF_COM_05",
			"KAR_FDF_COM_12"
		};
		headgearList[] =  {
			"KAR_FDF_OPSCORE_01", 1,
			"KAR_FDF_OPSCORE_02", 1,
			"KAR_FDF_COM_01", 1,
			"KAR_FDF_COM_03", 1,
			"KAR_FDF_COM_04", 1,
			"KAR_FDF_COM_05", 1,
			"KAR_FDF_COM_12", 1
		};
		class EventHandlers: EventHandlers {
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class KAR_FDF_RIF_S_AT: KAR_FDF_RIF_S {
		displayName = "Rifleman (M72)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_AT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_FDF_M62M2","rhs_weap_m72a7","Throw","Put"};
		weapons[] = {"KAR_FDF_M62M2","rhs_weap_m72a7","Throw","Put"};
	};	
	class KAR_FDF_RIF_S_HAT: KAR_FDF_RIF_S {
		displayName = "Rifleman (NLAW)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_HAT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_FDF_M62M2","launch_NLAW_F","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_FDF_M62M2","launch_NLAW_F","Throw","Put"};
	};
	class KAR_FDF_RIF_S_MK: KAR_FDF_RIF_S {
		displayName = "Marksman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MK.jpg";
		respawnWeapons[] = {"KAR_FDF_MK_02","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_MK_02","Throw","Put"};
	};
	class KAR_FDF_RIF_S_SNI: KAR_FDF_RIF_S {
		backpack = "";
		displayName = "Sniper";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_SNI.jpg";
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnWeapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
	};
	class KAR_FDF_RIF_S_MEDIC: KAR_FDF_RIF_S {
		attendant = 1;
		backpack = "KAR_FDF_S_MEDICBAG";
		displayName = "Medic";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MEDIC.jpg";
		icon = "iconManMedic";
		medic = 1;
		role = "CombatLifeSaver";
	};
	class KAR_FDF_RIF_S_MG: KAR_FDF_RIF_S {
		backpack = "KAR_FDF_MG_S_BAG";
		displayName = "Machinegunner";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MG.jpg";
		icon = "iconManMG";
		magazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnWeapons[] = {"KAR_PKM_S","Throw","Put"};
		role = "MachineGunner";
		weapons[] = {"KAR_PKM_S","Throw","Put"};
	};
	class KAR_FDF_RIF_S_ENG: KAR_FDF_RIF_S {
		backpack = "KAR_FDF_S_MECH";
		displayName = "Engineer";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_ENG.jpg";
		engineer = 1;
		icon = "iconManEngineer";
		role = "Sapper";
	};
	class KAR_FDF_RIF_S_EOD: KAR_FDF_RIF_S_ENG {
		backpack = "KAR_FDF_S_EOD";
		canDeactivateMines = 1;
		detectSkill = 38;
		displayName = "EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_EOD.jpg";
		icon = "iconManExplosive";
	};
	class KAR_FDF_RIF_S_AA: KAR_FDF_RIF_S {
		backpack = "KAR_FDF_S_AA";
		displayName = "Rifleman (AA)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_AA.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_FDF_M62M2","rhs_weap_fim92","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_FDF_M62M2","rhs_weap_fim92","Throw","Put"};
	};
	class KAR_FDF_RIF_S_SL: KAR_FDF_RIF_S {
		displayName = "Squad Leader";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_SL.jpg";
		icon = "iconManLeader";
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
	};
	class KAR_FDF_RIF_S_TD: KAR_FDF_RIF_S {
		author = "Kartsa";
		backpack = "";
		displayName = "Crewman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_TD.jpg";
		role = "Crewman";
		uniformClass = "KAR_FDF_COVERALLS_01";
		allowedHeadgear[]= {
			"KAR_FDF_VP_02",
			"KAR_FDF_VP_01",
			"H_HelmetCrew_I"
		};
		headgearList[] =  {
			"KAR_FDF_VP_02", 0.2,
			"KAR_FDF_VP_01", 0.2,
			"H_HelmetCrew_I", 0.6
		};
		linkedItems[] = {
			"KAR_FDF_M17_VEST"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M17_VEST"
		};
	};
	////PILOTS////
	class KAR_FDF_F35_Pilot: KAR_FDF_RIF_S {	
		backpack = "rhsusf_eject_Parachute_backpack";
		displayName = "Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_F35_Pilot.jpg";
		editorSubcategory = "KAR_FDF_PILOT";
		genericNames = "FinnishMen";
		icon = "iconMan";
		Items[] = {"FirstAidKit"};
		magazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		RespawnItems[] = {"FirstAidKit"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		role = "Crewman";
		uniformClass = "U_B_HeliPilotCoveralls";
		vehicleClass = "KAR_FDF_PILOT";
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		linkedItems[] = {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class KAR_FDF_Heli_Pilot: KAR_FDF_F35_Pilot {	
		backpack = "";
		displayName = "Heli Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_Heli_Pilot.jpg";
		magazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		uniformClass = "U_B_HeliPilotCoveralls";
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		linkedItems[] = {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	////SOF////
	class KAR_FDF_SOF_BASE: B_Soldier_base_G {	
		accuracy = 4.9000001;
		author = "Kartsa";
		camouflage = 1.2;
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_INF_SOF";
		expansion = 1;
		faceType = "Man_A3";
		faction = "KAR_FIN_FACTION";
		genericNames = "FinnishMen";
		headgearProbability = 1;
		icon = "iconMan";
		identityTypes[] = {"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		minFireTime = 10;
		nakedUniform = "U_BasicBody";
		picture = "";
		portrait = "";
		scope = 0;
		scopeCurator = 0;
		side = 1;
		vehicleClass = "Men";
		linkedItems[] = {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"rhsusf_ANPVS_15"
		};
		respawnlinkedItems[] = {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"rhsusf_ANPVS_15"
		};
		class Eventhandlers: EventHandlers {
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};	
	};
	class KAR_FDF_RIF_SOF: KAR_FDF_SOF_BASE {
		backpack = "KAR_FDF_SOF_BAG";
		displayName = "Rifleman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF.jpg";
		Items[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
		RespawnItems[] = {"FirstAidKit"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","Throw","Put"};
		role = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "KAR_FDF_CRYE_GEN3";
		vehicleClass = "KAR_FDF_INF_SOF";
		weapons[] = {"KAR_FDF_SOF_SCAR","Throw","Put"};
		allowedHeadgear[]= {
			"KAR_FDF_OPSCORE_01",
			"KAR_FDF_OPSCORE_02"
		};
		headgearList[] =  {
			"KAR_FDF_OPSCORE_01", 1,
			"KAR_FDF_OPSCORE_02", 1
		};
	};
	class KAR_FDF_RIF_SOF_AT: KAR_FDF_RIF_SOF {
		displayName = "Rifleman (M72)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_AT.jpg";
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_m72a7","Throw","Put"};
		role = "Rifleman";
		weapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_m72a7","Throw","Put"};
	};	
	class KAR_FDF_RIF_SOF_HAT: KAR_FDF_RIF_SOF {
		displayName = "Rifleman (NLAW)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_HAT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","launch_NLAW_F","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_FDF_SOF_SCAR","launch_NLAW_F","Throw","Put"};
	};
	class KAR_FDF_RIF_SOF_MK: KAR_FDF_RIF_SOF {
		displayName = "Marksman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MK.jpg";
		respawnWeapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
	};
	class KAR_FDF_RIF_SOF_SNI: KAR_FDF_RIF_SOF {
		backpack = "";
		displayName = "Sniper";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_SNI.jpg";
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnWeapons[] = {"KAR_FDF_SNI_SOF","rhsusf_weap_glock17g4","Throw","Put"};
		role = "Marksman";
		weapons[] = {"KAR_FDF_SNI_SOF","rhsusf_weap_glock17g4","Throw","Put"};
	};
	class KAR_FDF_RIF_SOF_MEDIC: KAR_FDF_RIF_SOF {
		attendant = 1;
		backpack = "KAR_FDF_S_MEDICBAG";
		displayName = "Medic";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MEDIC.jpg";
		icon = "iconManMedic";
		medic = 1;
		role = "CombatLifeSaver";
	};
	class KAR_FDF_RIF_SOF_MG: KAR_FDF_RIF_SOF {
		backpack = "KAR_FDF_MG_SOF_BAG";
		displayName = "Machinegunner";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MG.jpg";
		icon = "iconManMG";
		magazines[] = {"SmokeShell","SmokeShell","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};
		respawnWeapons[] = {"KAR_FDF_MG_SOF","Throw","Put"};
		role = "MachineGunner";
		weapons[] = {"KAR_FDF_MG_SOF","Throw","Put"};
	};
	class KAR_FDF_RIF_SOF_ENG: KAR_FDF_RIF_SOF {
		backpack = "KAR_FDF_S_MECH";
		displayName = "Engineer";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_ENG.jpg";
		engineer = 1;
		icon = "iconManEngineer";
		role = "Sapper";
	};
	class KAR_FDF_RIF_SOF_EOD: KAR_FDF_RIF_SOF_ENG {
		backpack = "KAR_FDF_S_EOD";
		canDeactivateMines = 1;
		detectSkill = 38;
		displayName = "EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_EOD.jpg";
		icon = "iconManExplosive";
	};
	class KAR_FDF_RIF_SOF_AA: KAR_FDF_RIF_SOF {
		backpack = "KAR_FDF_S_AA";
		displayName = "Rifleman (AA)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_AA.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_fim92","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_fim92","Throw","Put"};
	};
	class KAR_FDF_RIF_SOF_SL: KAR_FDF_RIF_SOF {
		displayName = "Squad Leader";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_SL.jpg";
		icon = "iconManLeader";
		respawnWeapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		role = "Rifleman";
		weapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
	};
	////SISSI////
	class KAR_FDF_SIS_BASE: B_Soldier_base_G {	
		_generalMacro="I_G_Soldier_base_F";
		accuracy = 3.9000001;
		author = "Kartsa";
		camouflage = 1.1;
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_SIS";
		expansion = 1;
		faceType = "Man_A3";
		faction = "KAR_FIN_FACTION";
		genericNames = "FinnishMen";
		headgearProbability = 1;
		icon = "iconMan";
		identityTypes[] = {"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		minFireTime = 10;
		nakedUniform = "U_BasicBody";
		picture = "";
		portrait = "";
		scope = 0;
		scopeCurator = 0;
		side = 1;
		vehicleClass = "Men";
		linkedItems[] = {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnlinkedItems[] = {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};	
	};
	class KAR_FDF_SIS_RIF: KAR_FDF_SIS_BASE {
		backpack = "KAR_FDF_SIS_BP";
		displayName = "Sissi";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_RIF.jpg";
		Items[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		RespawnItems[] = {"FirstAidKit"};
		respawnMagazines[] = {"SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		role = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "KAR_FDF_M05_maastopuku_hihat";
		vehicleClass = "KAR_FDF_SIS";
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
	};
	class KAR_FDF_SIS_TL: KAR_FDF_SIS_RIF {
		displayName = "Sissi (SL)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_TL.jpg";
		icon = "iconManLeader";
		linkedItems[] = {
			"rhsgref_chicom",
			"Binoculars",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnlinkedItems[] = {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"Binoculars",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class KAR_FDF_SIS_MK: KAR_FDF_SIS_TL {
		backpack = "";
		displayName = "Sissi (Marksman)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_MK.jpg";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		uniformClass = "KAR_FDF_M05_maastopuku_hihat";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
	};
	class KAR_FDF_SIS_MED: KAR_FDF_SIS_RIF {
		attendant = 1;
		backpack = "KAR_FDF_SIS_BP_MED";
		displayName = "Sissi (Medic)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_MED.jpg";
		icon = "iconManMedic";
		medic = 1;
		role = "CombatLifeSaver";
	};
	class KAR_FDF_SIS_AT: KAR_FDF_SIS_RIF {
		backpack = "KAR_FDF_SIS_BP_AT";
		displayName = "Sissi (AT)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_AT.jpg";
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
	};
	class KAR_FDF_SIS_EOD: KAR_FDF_SIS_RIF {
		backpack = "KAR_FDF_SIS_BP_EOD";
		canDeactivateMines = 1;
		detectSkill = 38;
		displayName = "Sissi (EOD)";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_AT.jpg";
		engineer = 1;
		icon = "iconManAT";
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		role = "MissileSpecialist";
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		linkedItems[] = {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MineDetector"
		};
		respawnlinkedItems[] = {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MineDetector"
		};
	};
	////Backpacks////
	class KAR_FDF_BAG_01;
	class KAR_FDF_Kitbag_01;
	///SISSI BAGS////
	class rhsgref_hidf_alicepack;
	class KAR_FDF_SIS_BP: rhsgref_hidf_alicepack {
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_KARRK62_Mag {
				name = "KARRK62_Mag";
				count = 8;
			};
		};
	};
	class KAR_FDF_SIS_BP_AT: rhsgref_hidf_alicepack {
		scope = 1;
		class TransportItems {
			class _xx_rhs_weap_m72a7 {
				name = "rhs_weap_m72a7";
				count = 3;
			};
		};
	};
	class KAR_FDF_SIS_BP_MED: rhsgref_hidf_alicepack {
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_MediKit {
				name = "MediKit";
				count = 1;
			};
		};
	};
	class KAR_FDF_SIS_BP_EOD: rhsgref_hidf_alicepack {
		scope = 1;
		class TransportItems {
			class _xx_ATMine_Range_Mag {
				name = "ATMine_Range_Mag";
				count = 2;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				name = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
		};
	};
	////CONSCRIPT BAGS/////
	class KAR_FDF_C_BAG: KAR_FDF_BAG_01 {
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 1;
			};
			class _xx_KARRK62_Mag {
				name = "KARRK62_Mag";
				count = 3;
			};
		};
	};
	class KAR_FDF_MEDICBAG: KAR_FDF_BAG_01 {
		scope = 1;
		class TransportItems {
			class _xx_Medikit {
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class KAR_FDF_MG_BAG: KAR_FDF_BAG_01 {
		scope = 1;
		class TransportItems {
			class _xx_rhs_100Rnd_762x54mmR {
				name = "rhs_100Rnd_762x54mmR";
				count = 4;
			};
		};
	};
	class KAR_FDF_MECH: KAR_FDF_BAG_01 {
		scope = 1;
		class TransportItems {
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class KAR_FDF_EOD: KAR_FDF_BAG_01 {
		scope = 1;
		class TransportItems {
			class _xx_ATMine_Range_Mag {
				name = "ATMine_Range_Mag";
				count = 2;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector {
				name = "MineDetector";
				count = 1;
			};
		};
	};
	////SERVICEMEN BAGS////
	class KAR_FDF_S_BAG: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_KARRK62_Mag {
				name = "KARRK62_Mag";
				count = 5;
			};
		};
	};
	class KAR_FDF_S_MEDICBAG: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_Medikit {
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class KAR_FDF_MG_S_BAG: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_rhs_100Rnd_762x54mmR {
				name = "rhs_100Rnd_762x54mmR";
				count = 4;
			};
		};
	};
	class KAR_FDF_S_MECH: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class KAR_FDF_S_EOD: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_ATMine_Range_Mag {
				name = "ATMine_Range_Mag";
				count = 2;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector {
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class KAR_FDF_S_AA: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_rhs_fim92_mag {
				name = "rhs_fim92_mag";
				count = 2;
			};
		};
	};
	////SOF BAGS////
	
	class KAR_FDF_SOF_BAG: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_PMAG {
				name = "rhs_mag_30Rnd_556x45_Mk318_PMAG";
				count = 5;
			};
		};
	};
	
	class KAR_FDF_MG_SOF_BAG: KAR_FDF_Kitbag_01 {
		scope = 1;
		class TransportItems {
			class _xx_rhsusf_100Rnd_556x45_soft_pouch {
				name = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 4;
			};
		};
	};
};