class CfgVehicles {
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F {
		class EventHandlers;
	};
	/////CONSCRIPTS////
	class KAR_FDF_SOL_C_BASE: B_Soldier_base_G {	
		author="Kartsa";
		_generalMacro="I_G_Soldier_base_F";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="KAR_FIN_FACTION";
		genericNames="FinnishMen";
		vehicleClass="Men";
		editorSubcategory="KAR_FDF_INF_C";
		nakedUniform = "U_BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]= {
			"KAR_FDF_M05_TST_ARM",
			"KAR_FDF_COM_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M05_TST_ARM",
			"KAR_FDF_COM_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class KAR_FDF_RIF_C: KAR_FDF_SOL_C_BASE {
		vehicleClass = "KAR_FDF_INF_C";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_INF_C";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C.jpg";
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
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "KAR_FDF_M05_Palvelus";
		backpack = "KAR_FDF_C_BAG";
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
	};
	class KAR_FDF_RIF_C_AT: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (M72)";
		role = "Rifleman";
		weapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_AT.jpg";
	};
	class KAR_FDF_RIF_C_HAT: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (NLAW)";
		icon="iconManAT";
		role="MissileSpecialist";
		weapons[] = {"KAR_RIFLE_RK62","launch_NLAW_F","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","launch_NLAW_F","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_HAT.jpg";
	};
	class KAR_FDF_RIF_C_MK: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Marksman";
		role="Marksman";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MK.jpg";
	};
	class KAR_FDF_RIF_C_SNI: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sniper";
		role="Marksman";
		backpack = "";
		headgearProbability=100;
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_SNI.jpg";
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
		weapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class KAR_FDF_RIF_C_MEDIC: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Medic";
		icon="iconManMedic";
		role="CombatLifeSaver";
		attendant=1;
		backpack = "KAR_FDF_MEDICBAG";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MEDIC.jpg";
	};
	class KAR_FDF_RIF_C_MG: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Machinegunner";
		icon="iconManMG";
		role="MachineGunner";
		backpack = "KAR_FDF_MG_BAG";
		weapons[] = {"KAR_PKM","Throw","Put"};
		respawnWeapons[] = {"KAR_PKM","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_MG.jpg";
	};
	class KAR_FDF_RIF_C_ENG: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Engineer";
		engineer=1;
		icon="iconManEngineer";
		role="Sapper";
		backpack = "KAR_FDF_MECH";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_ENG.jpg";
	};
	class KAR_FDF_RIF_C_EOD: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "EOD";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
		icon="iconManExplosive";
		role="Sapper";
		backpack = "KAR_FDF_EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_EOD.jpg";
	};
	class KAR_FDF_RIF_C_SL: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Squad Leader";
		icon="iconManLeader";
		role="Rifleman";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_SL.jpg";
	};
	class KAR_FDF_RIF_C_TD: KAR_FDF_RIF_C {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Crewman";
		role="Crewman";
		
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_C_TD.jpg";
		allowedHeadgear[]= {
			"KAR_FDF_VP_01",
			"KAR_FDF_VP_02"
		};
		headgearList[] =  {
			"KAR_FDF_VP_02", 1,
			"KAR_FDF_VP_01", 1
		};
		linkedItems[]= {
			"KAR_FDF_M05_TST"
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M05_TST"
		};
		backpack = "";
		uniformClass = "KAR_FDF_COVERALLS_02";
	};
	////SERVICEMEN////
	class KAR_FDF_SOL_S_BASE: B_Soldier_base_G {	
		author="Kartsa";
		_generalMacro="I_G_Soldier_base_F";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="KAR_FIN_FACTION";
		genericNames="FinnishMen";
		vehicleClass="Men";
		editorSubcategory="KAR_FDF_INF_S";
		nakedUniform = "U_BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]= {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};	
	};
	class KAR_FDF_RIF_S: KAR_FDF_SOL_S_BASE {
		vehicleClass = "KAR_FDF_INF_S";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_INF_S";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
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
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "KAR_FDF_M05_Taistelupaita";
		backpack = "KAR_FDF_S_BAG";
		weapons[] = {"KAR_FDF_M62M2","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_M62M2","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
	};
	class KAR_FDF_RIF_S_AT: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (M72)";
		role = "Rifleman";
		weapons[] = {"KAR_FDF_M62M2","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_M62M2","rhs_weap_m72a7","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_AT.jpg";
	};	
	class KAR_FDF_RIF_S_HAT: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (NLAW)";
		icon="iconManAT";
		role="MissileSpecialist";
		weapons[] = {"KAR_FDF_M62M2","launch_NLAW_F","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_M62M2","launch_NLAW_F","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_HAT.jpg";
	};
	class KAR_FDF_RIF_S_MK: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Marksman";
		role="Marksman";
		weapons[] = {"KAR_FDF_MK_02","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MK_02","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MK.jpg";
	};
	class KAR_FDF_RIF_S_SNI: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sniper";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_SNI.jpg";
		role="Marksman";
		backpack = "";
		weapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class KAR_FDF_RIF_S_MEDIC: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Medic";
		icon="iconManMedic";
		role="CombatLifeSaver";
		attendant=1;
		backpack = "KAR_FDF_S_MEDICBAG";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MEDIC.jpg";
	};
	class KAR_FDF_RIF_S_MG: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Machinegunner";
		icon="iconManMG";
		role="MachineGunner";
		backpack = "KAR_FDF_MG_S_BAG";
		weapons[] = {"KAR_PKM_S","Throw","Put"};
		respawnWeapons[] = {"KAR_PKM_S","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_MG.jpg";
	};
	class KAR_FDF_RIF_S_ENG: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Engineer";
		engineer=1;
		icon="iconManEngineer";
		role="Sapper";
		backpack = "KAR_FDF_S_MECH";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_ENG.jpg";
	};
	class KAR_FDF_RIF_S_EOD: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "EOD";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
		icon="iconManExplosive";
		role="Sapper";
		backpack = "KAR_FDF_S_EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_EOD.jpg";
	};
	class KAR_FDF_RIF_S_AA: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (AA)";
		icon="iconManAT";
		role="MissileSpecialist";
		backpack = "KAR_FDF_S_AA";
		weapons[] = {"KAR_FDF_M62M2","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_M62M2","rhs_weap_fim92","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_AA.jpg";
	};
	class KAR_FDF_RIF_S_SL: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Squad Leader";
		icon="iconManLeader";
		role="Rifleman";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_SL.jpg";
	};
	class KAR_FDF_RIF_S_TD: KAR_FDF_RIF_S {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Crewman";
		role="Crewman";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_S_TD.jpg";
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
		linkedItems[]= {
			"KAR_FDF_M17_VEST"
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M17_VEST"
		};
		backpack = "";
		uniformClass = "KAR_FDF_COVERALLS_01";
	};
	////PILOTS////
	class KAR_FDF_F35_Pilot: KAR_FDF_RIF_S {	
		genericNames="FinnishMen";
		displayName = "Pilot";
		role="Crewman";
		icon="iconMan";
		backpack = "rhsusf_eject_Parachute_backpack";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_F35_Pilot.jpg";
		linkedItems[]= {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetFighter_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		uniformClass = "U_B_HeliPilotCoveralls";
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
	};
	class KAR_FDF_Heli_Pilot: KAR_FDF_RIF_S {	
		displayName = "Heli Pilot";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_Heli_Pilot.jpg";
		role="Crewman";
		icon="iconMan";
		backpack = "";
		linkedItems[]= {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]= {
			"KAR_FDF_M17_LITE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		uniformClass = "U_B_HeliPilotCoveralls";
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		magazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
	};
	////SOF////
	class KAR_FDF_SOF_BASE: B_Soldier_base_G {	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="KAR_FIN_FACTION";
		genericNames="FinnishMen";
		vehicleClass="Men";
		editorSubcategory="KAR_FDF_INF_SOF";
		nakedUniform = "U_BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=4.9000001;
		camouflage=1.2;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]= {
			"KAR_FDF_M17_LITE",
			"KAR_FDF_OPSCORE_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"rhsusf_ANPVS_15"
		};
		respawnLinkedItems[]= {
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
		vehicleClass = "KAR_FDF_INF_SOF";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_INF_SOF";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		allowedHeadgear[]= {
			"KAR_FDF_OPSCORE_01",
			"KAR_FDF_OPSCORE_02"
		};
		headgearList[] =  {
			"KAR_FDF_OPSCORE_01", 1,
			"KAR_FDF_OPSCORE_02", 1
		};
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "KAR_FDF_CRYE_GEN3";
		backpack = "KAR_FDF_SOF_BAG";
		weapons[] = {"KAR_FDF_SOF_SCAR","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","KARRK62_Mag","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
	};
	class KAR_FDF_RIF_SOF_AT: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (M72)";
		role = "Rifleman";
		weapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_m72a7","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_AT.jpg";
	};	
	class KAR_FDF_RIF_SOF_HAT: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (NLAW)";
		icon="iconManAT";
		role="MissileSpecialist";
		weapons[] = {"KAR_FDF_SOF_SCAR","launch_NLAW_F","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","launch_NLAW_F","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_HAT.jpg";
	};
	class KAR_FDF_RIF_SOF_MK: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Marksman";
		role="Marksman";
		weapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MK.jpg";
	};
	class KAR_FDF_RIF_SOF_SNI: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sniper";
		role="Marksman";
		backpack = "";
		weapons[] = {"KAR_FDF_SNI_SOF","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SNI","rhsusf_weap_glock17g4","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_SNI.jpg";
		magazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class KAR_FDF_RIF_SOF_MEDIC: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Medic";
		icon="iconManMedic";
		role="CombatLifeSaver";
		attendant=1;
		backpack = "KAR_FDF_S_MEDICBAG";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MEDIC.jpg";
	};
	class KAR_FDF_RIF_SOF_MG: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Machinegunner";
		icon="iconManMG";
		role="MachineGunner";
		backpack = "KAR_FDF_MG_SOF_BAG";
		weapons[] = {"KAR_FDF_MG_SOF","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MG_SOF","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_MG.jpg";
		magazines[] = {"SmokeShell","SmokeShell","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};
	};
	class KAR_FDF_RIF_SOF_ENG: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Engineer";
		engineer=1;
		icon="iconManEngineer";
		role="Sapper";
		backpack = "KAR_FDF_S_MECH";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_ENG.jpg";
	};
	class KAR_FDF_RIF_SOF_EOD: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "EOD";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
		icon="iconManExplosive";
		role="Sapper";
		backpack = "KAR_FDF_S_EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_EOD.jpg";
	};
	class KAR_FDF_RIF_SOF_AA: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Rifleman (AA)";
		icon="iconManAT";
		role="MissileSpecialist";
		backpack = "KAR_FDF_S_AA";
		weapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_SCAR","rhs_weap_fim92","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_AA.jpg";
	};
	class KAR_FDF_RIF_SOF_SL: KAR_FDF_RIF_SOF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Squad Leader";
		icon="iconManLeader";
		role="Rifleman";
		weapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_SOF_MK","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_RIF_SOF_SL.jpg";
	};
	////SISSI////
	class KAR_FDF_SIS_BASE: B_Soldier_base_G {	
		author="Kartsa";
		_generalMacro="I_G_Soldier_base_F";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="KAR_FIN_FACTION";
		genericNames="FinnishMen";
		vehicleClass="Men";
		editorSubcategory="KAR_FDF_SIS_S";
		nakedUniform = "U_BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]= {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]= {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};	
	};
	class KAR_FDF_SIS_RIF: KAR_FDF_SIS_BASE {
		vehicleClass = "KAR_FDF_SIS";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_SIS";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_RIF.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		displayName = "Sissi";
		role = "Rifleman";
		uniformClass = "KAR_FDF_M05_maastopuku_hihat";
		backpack = "KAR_FDF_SIS_BP";
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
		respawnMagazines[] = {"SmokeShell","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"};
	};
	class KAR_FDF_SIS_TL: KAR_FDF_SIS_RIF {
		vehicleClass = "KAR_FDF_SIS";
		editorCategory = "KAR_FDF_TOP";
		editorSubcategory = "KAR_FDF_SIS";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_TL.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		displayName = "Sissi (SL)";
		icon="iconManLeader";
		role = "Rifleman";
		linkedItems[]= {
			"rhsgref_chicom",
			"Binoculars",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnlinkedItems[]= {
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
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		displayName = "Sissi (Marksman)";
		role = "Rifleman";
		uniformClass = "KAR_FDF_M05_maastopuku_hihat";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_MK.jpg";
		backpack = "";
		weapons[] = {"KAR_FDF_MK","Throw","Put"};
		respawnWeapons[] = {"KAR_FDF_MK","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class KAR_FDF_SIS_MED: KAR_FDF_SIS_RIF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sissi (Medic)";
		icon="iconManMedic";
		role="CombatLifeSaver";
		attendant=1;
		backpack = "KAR_FDF_SIS_BP_MED";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_MED.jpg";
	};
	class KAR_FDF_SIS_AT: KAR_FDF_SIS_RIF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sissi (AT)";
		icon="iconManAT";
		role="MissileSpecialist";
		backpack = "KAR_FDF_SIS_BP_AT";
		weapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","rhs_weap_m72a7","Throw","Put"};
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_AT.jpg";
	};
	class KAR_FDF_SIS_EOD: KAR_FDF_SIS_RIF {
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		displayName = "Sissi (EOD)";
		icon="iconManAT";
		role="MissileSpecialist";
		backpack = "KAR_FDF_SIS_BP_EOD";
		editorPreview = "\KAR_FDF_EP\UI\KAR_FDF_SIS_AT.jpg";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
		linkedItems[]= {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MineDetector"
		};
		respawnlinkedItems[]= {
			"rhsgref_chicom",
			"KAR_FDF_SEIKKAILUHATTU",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"MineDetector"
		};
		weapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
		respawnWeapons[] = {"KAR_RIFLE_RK62","Throw","Put"};
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
				count = "8";
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
				count = "1";
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
				count = "1";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				name = "ClaymoreDirectionalMine_Remote_Mag";
				count = "2";
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
				count = "3";
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
				count = "5";
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
				count = "5";
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