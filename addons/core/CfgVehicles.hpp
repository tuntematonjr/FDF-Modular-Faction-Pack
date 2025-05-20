class CfgVehicles {
    class ContainerSupply;
	class Supply30: ContainerSupply {
		maximumLoad = 30;
	};
	class Supply100: ContainerSupply {
		maximumLoad = 100;
	};
	class Supply50: ContainerSupply {
		maximumLoad = 50;
	};
	////Uniforms////
	class B_Soldier_base_F;
	class KAR_FDF_BASE_01: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_NCU_CA.PAA"; 
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\NCU_M05_CU_CO.paa","KAR_FDF\data\NCU_M05_POCKETS_CO.paa"};
	};
	class KAR_FDF_BASE_02: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_gorka_02_co.paa"};
	};
	class KAR_FDF_BASE_02a: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CW_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_m05cw_gorka_co.paa"};
	};
	class KAR_FDF_BASE_02b: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_W_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_m05w_gorka_co.paa"};
	};
	class KAR_FDF_BASE_03: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_corka_co.paa"};
	};
	class KAR_FDF_BASE_03a: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_m05_gorka_cotga.paa"};
	};
	class KAR_FDF_BASE_03b: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05CW_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_m05cw_gorka_co"};
	};
	class KAR_FDF_BASE_06: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05cw_gorka_co.paa"};
	};
	class KAR_FDF_BASE_06a: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05cw_m05_gorka_co.paa"};
	};
	class KAR_FDF_BASE_06b: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05W_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05cw_m05w_gorka_co.paa"};
	};
	class KAR_FDF_BASE_04: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_W_CA.PAA";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_gorka_co.paa", "KAR_FDF\data\Hanskat_co.paa"};
	};
	class KAR_FDF_BASE_05: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_VILLAPAITA_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_villapaita_co.paa"};
	};
	class KAR_FDF_BASE_07: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_TAISTELUPAITA_CA.PAA";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_taistelupaita_co.paa"};
	};
	class KAR_FDF_BASE_08: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "RHS_USAF";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_CRYE_GEN3_CA.PAA";
		hiddenSelections[] = {"Camo","Camo2","Gloves","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\KAR_M05_g3_co.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","KAR_FDF\data\KAR_g3_gloves_co.paa"};
	};
	class KAR_FDF_BASE_09: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAISTELUPAITA_CA.PAA";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M04_taistelupaita_co.paa"};
	};
	class KAR_FDF_BASE_10: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAKKI_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_takki_co.paa"};
	};
	class KAR_FDF_BASE_11: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		picture = "\KAR_FDF\ui\M04R_CO.paa";
		hiddenSelections[] = {"Camo","Camo2","Gloves","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\KAR_M04_g3_co.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","KAR_FDF\data\KAR_g3_gloves_co.paa"};
	};
	class KAR_FDF_BASE_12: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_boots.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_CA.PAA";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m62_maastotakki_co.paa","KAR_FDF\data\m62_maastohousut_co.paa"};
	};
	class KAR_FDF_BASE_13: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_01_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\Vihree_Takki_co.paa"};
	};
	class KAR_FDF_BASE_14: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_02_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_vihreet_housut_co.paa"};
	};
	class KAR_FDF_BASE_15: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_03_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_haalarit_co.paa"};
	};
	class KAR_FDF_BASE_16: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_SW_CA.PAA";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05S_gorka_co.paa", "KAR_FDF\data\Hanskat_co.paa"};
	};
	class KAR_FDF_BASE_18: B_Soldier_base_F {
		author = "Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_PALVELUS_CA.PAA";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M62_palveluspuku_co.paa","KAR_FDF\data\M62_housut_co.paa","KAR_FDF\data\M62_hanskat_co.paa"};
	};
	class KAR_FDF_BASE_19: B_Soldier_base_F {
		author="Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_HIHAT_CA.PAA";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M62_palveluspuku_co.paa","KAR_FDF\data\M62_housut_co.paa"};
	};
	class KAR_FDF_BASE_20: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOTAKKI_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m62_takki_co.paa"};
	};
	class KAR_FDF_BASE_21: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_KLMK_overall.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_TALVIPUKU_CA.PAA";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\lumipuku_takki_co.paa","KAR_FDF\data\lumipuku_housut_co.paa"};
	};
	class KAR_FDF_BASE_22: B_Soldier_base_F {
		author = "Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_PALVELUS_CA.PAA";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_pp_paita_co.paa","KAR_FDF\data\M05_pp_housut_co.paa","KAR_FDF\data\M62_hanskat_co.paa"};
	};
	class KAR_FDF_BASE_23: B_Soldier_base_F {
		author="Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_MAASTOPUKU_HIHAT_CA.PAA";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_pp_paita_co.paa","KAR_FDF\data\M05_pp_housut_co.paa"};
	};
	class KAR_FDF_BASE_24: B_Soldier_base_F {
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_TAISTELUPAITA_SLEEVE_CA.PAA";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_taistelupaita_co.paa"};
	};
	/////BACKPACKS/////
	class B_Kitbag_Base;
	class KAR_FDF_BAG_01: B_Kitbag_Base {
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		displayName = "Backpack Bag";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_BAG_01_CA.PAA";
		model = "KAR_FDF\model\finnish_alice.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\finnish_alice_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class KAR_FDF_Kitbag_01: B_Kitbag_Base {
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "M20 Backpack (M05)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_KITBAG_01_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_backpack_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class KAR_FDF_Kitbag_02: B_Kitbag_Base {
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "M20 Backpack (Winter)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_KITBAG_02_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_W_backpack_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class KAR_FDF_Kitbag_03: B_Kitbag_Base {
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "M20 Backpack (Green)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_KITBAG_03_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_G_backpack_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class KAR_FDF_Kitbag_04: B_Kitbag_Base {
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "M20 Backpack (M04)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_KITBAG_04_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_reppu_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
};