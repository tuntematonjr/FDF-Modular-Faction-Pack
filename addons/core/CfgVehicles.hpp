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
		author = "Kartsa";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\NCU_M05_CU_CO.paa),QPATHTOF(data\NCU_M05_POCKETS_CO.paa)};
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_NCU_CA.PAA);
		scope = 1;
	};
	class KAR_FDF_BASE_02: KAR_FDF_BASE_01 {
		dlc = "Enoch";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05_gorka_02_co.paa)};
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05_CA.PAA);
	};
	class KAR_FDF_BASE_02a: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05_m05cw_gorka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05_CW_CA.PAA);
	};
	class KAR_FDF_BASE_02b: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05_m05w_gorka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05_W_CA.PAA);
	};
	class KAR_FDF_BASE_03: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05w_corka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05W_CA.PAA);
	};
	class KAR_FDF_BASE_03a: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05w_m05_gorka_cotga.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05W_M05_CA.PAA);
	};
	class KAR_FDF_BASE_03b: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_m05cw_gorka_co.paa"};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_M05W_M05CW_CA.PAA);
	};
	class KAR_FDF_BASE_06: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05cw_gorka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_CW_CA.PAA);
	};
	class KAR_FDF_BASE_06a: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05cw_m05_gorka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_CW_M05_CA.PAA);
	};
	class KAR_FDF_BASE_06b: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m05cw_m05w_gorka_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_JACKET_CW_M05W_CA.PAA);
	};
	class KAR_FDF_BASE_04: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_gorka_co.paa), QPATHTOF(data\Hanskat_co.paa)};
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_GORKA_W_CA.PAA);
	};
	class KAR_FDF_BASE_05: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_villapaita_co.paa)};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_VILLAPAITA_CA.PAA);
	};
	class KAR_FDF_BASE_07: KAR_FDF_BASE_02 {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_taistelupaita_co.paa)};
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M05_TAISTELUPAITA_CA.PAA);
	};
	class KAR_FDF_BASE_08: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"Camo","Camo2","Gloves","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\KAR_M05_g3_co.paa),"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",QPATHTOF(data\KAR_g3_gloves_co.paa)};
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_CRYE_GEN3_CA.PAA);
	};
	class KAR_FDF_BASE_09: KAR_FDF_BASE_07 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_taistelupaita_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_M04_TAISTELUPAITA_CA.PAA);
	};
	class KAR_FDF_BASE_10: KAR_FDF_BASE_07 {
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_takki_co.paa)};
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M04_TAKKI_CA.PAA);
	};
	class KAR_FDF_BASE_11: KAR_FDF_BASE_08 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\KAR_M04_g3_co.paa),"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",QPATHTOF(data\KAR_g3_gloves_co.paa)};
		picture = QPATHTOF(pictures\M04R_CO.paa);
	};
	class KAR_FDF_BASE_12: KAR_FDF_BASE_04 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\m62_maastotakki_co.paa),QPATHTOF(data\m62_maastohousut_co.paa)};
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_boots.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M62_MAASTOPUKU_CA.PAA);
	};
	class KAR_FDF_BASE_13: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\Vihree_Takki_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_COVERALLS_01_CA.PAA);
	};
	class KAR_FDF_BASE_14: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_vihreet_housut_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_COVERALLS_02_CA.PAA);
	};
	class KAR_FDF_BASE_15: KAR_FDF_BASE_02 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_haalarit_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_COVERALLS_03_CA.PAA);
	};
	class KAR_FDF_BASE_16: KAR_FDF_BASE_04 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05S_gorka_co.paa), QPATHTOF(data\Hanskat_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_GORKA_SW_CA.PAA);
	};
	class KAR_FDF_BASE_18: KAR_FDF_BASE_01 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_palveluspuku_co.paa),QPATHTOF(data\M62_housut_co.paa),QPATHTOF(data\M62_hanskat_co.paa)};
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M62_PALVELUS_CA.PAA);
	};
	class KAR_FDF_BASE_19: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_palveluspuku_co.paa),QPATHTOF(data\M62_housut_co.paa)};
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M62_MAASTOPUKU_HIHAT_CA.PAA);
	};
	class KAR_FDF_BASE_20: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\m62_takki_co.paa)};
		model = "rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M62_MAASTOTAKKI_CA.PAA);
	};
	class KAR_FDF_BASE_21: KAR_FDF_BASE_01 {
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\lumipuku_takki_co.paa),QPATHTOF(data\lumipuku_housut_co.paa)};
		model = "\rhsafrf\addons\rhs_infantry3\rhs_KLMK_overall.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_TALVIPUKU_CA.PAA);
	};
	class KAR_FDF_BASE_22: KAR_FDF_BASE_18 {
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_pp_paita_co.paa),QPATHTOF(data\M05_pp_housut_co.paa),QPATHTOF(data\M62_hanskat_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_M05_PALVELUS_CA.PAA);
	};
	class KAR_FDF_BASE_23: KAR_FDF_BASE_19 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_pp_paita_co.paa),QPATHTOF(data\M05_pp_housut_co.paa)};
		picture = QPATHTOF(pictures\KAR_FDF_M05_MAASTOPUKU_HIHAT_CA.PAA);
	};
	class KAR_FDF_BASE_24: KAR_FDF_BASE_07 {
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_taistelupaita_co.paa)};
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_M05_TAISTELUPAITA_SLEEVE_CA.PAA);
	};
	/////BACKPACKS/////
	class B_Kitbag_Base;
	class KAR_FDF_BAG_01: B_Kitbag_Base {
		author = "Kartsa";
		displayName = "Backpack Bag";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\finnish_alice_co.paa)};
		mass = 50;
		maximumLoad = 280;
		model = "KAR_FDF\model\finnish_alice.p3d";
		picture = QPATHTOF(pictures\KAR_FDF_BAG_01_CA.PAA);
		scope = 2;
		scopeCurator = 2;
	};
	class KAR_FDF_Kitbag_01: KAR_FDF_BAG_01 {
		displayName = "M20 Backpack (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_backpack_co.paa)};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		picture = QPATHTOF(pictures\KAR_FDF_KITBAG_01_CA.PAA);
	};
	class KAR_FDF_Kitbag_02: KAR_FDF_BAG_01 {
		displayName = "M20 Backpack (Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_W_backpack_co.paa)};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		picture = QPATHTOF(pictures\KAR_FDF_KITBAG_02_CA.PAA);
	};
	class KAR_FDF_Kitbag_03: KAR_FDF_BAG_01 {
		displayName = "M20 Backpack (Green)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_G_backpack_co.paa)};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		picture = QPATHTOF(pictures\KAR_FDF_KITBAG_03_CA.PAA);
	};
	class KAR_FDF_Kitbag_04: KAR_FDF_BAG_01 {
		displayName = "M20 Backpack (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_reppu_co.paa)};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		picture = QPATHTOF(pictures\KAR_FDF_KITBAG_04_CA.PAA);
	};
};

