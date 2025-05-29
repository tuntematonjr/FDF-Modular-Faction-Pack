class CfgWeapons {
	class ItemCore;
	class HeadGearItem;
	class UniformItem;
	class Uniform_Base;
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
	class Supply20: ContainerSupply {
		maximumLoad = 20;
	};
	////UNIFORMS////
	class KAR_FDF_M05_Taistelupaita: Uniform_Base {
		author = "Kartsa";
		displayName = "Combat Uniform (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M05_TAISTELUPAITA_CA.PAA);
		scope = 2;
		class ItemInfo: UniformItem {
			containerClass = "Supply40";
			mass = 40;
			uniformClass = "KAR_FDF_BASE_07";
			uniformModel = "-";
		};
	};
	class KAR_FDF_M05_Taistelupaita_Sleeve: KAR_FDF_M05_Taistelupaita {
		displayName = "Combat Uniform (M05/Rolled-Up)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M05_TAISTELUPAITA_SLEEVE_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_24";
		};
	};
	class KAR_FDF_VILLAPAITA: KAR_FDF_M05_Taistelupaita {
		displayName = "Sweater (M05)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_villapaita_co.paa)};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_VILLAPAITA_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_05";
		};
	};
	class KAR_FDF_M04_Taistelupaita: KAR_FDF_M05_Taistelupaita {
		displayName = "Combat Uniform (M04)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M04_TAISTELUPAITA_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_09";
		};
	};
	class KAR_FDF_TALVIPUKU: KAR_FDF_M04_Taistelupaita {
		displayName = "Winter Oversuit";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_TALVIPUKU_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_21";
		};
	};
	class KAR_FDF_NCU: KAR_FDF_VILLAPAITA {
		displayName = "NCU (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_NCU_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_01";
		};
	};
	class KAR_FDF_JACKET_M05: KAR_FDF_NCU {
		displayName = "Jacket (M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_02";
		};
	};
	class KAR_FDF_JACKET_M05_CW: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05/M05 Cold Weather)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05_CW_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_02a";
		};
	};
	class KAR_FDF_JACKET_M05_W: KAR_FDF_JACKET_M05 {
		displayName = "Jacket M05/M05W";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05_W_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_02b";
		};
	};
	class KAR_FDF_JACKET_M05W: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Winter)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05W_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_03";
		};
	};
	class KAR_FDF_JACKET_M05W_M05: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Winter/M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05W_M05_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_03a";
		};
	};
	class KAR_FDF_JACKET_M05W_M05CW: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Winter/M05 Cold Weather)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_M05W_M05CW_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_03b";
		};
	};
	class KAR_FDF_JACKET_CW: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Cold Weather)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_CW_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_06";
		};
	};
	class KAR_FDF_JACKET_CW_M05: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Cold Weather/M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_CW_M05_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_06a";
		};
	};	
	class KAR_FDF_JACKET_CW_M05W: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Cold Weather/M05 Winter)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_JACKET_CW_M05W_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_06b";
		};
	};
	class KAR_FDF_COVERALLS_01: KAR_FDF_JACKET_M05 {
		displayName = "Tanker Coveralls (Green)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_COVERALLS_01_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_13";
		};
	};
	class KAR_FDF_COVERALLS_02: KAR_FDF_JACKET_M05 {
		displayName = "Tanker Coveralls (M62/Green)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_COVERALLS_02_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_14";
		};
	};
	class KAR_FDF_COVERALLS_03: KAR_FDF_JACKET_M05 {
		displayName = "Tanker Coveralls (M62)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_COVERALLS_03_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_15";
		};
	};
	class KAR_FDF_GORKA_W: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M05 Winter)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_GORKA_W_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_04";
		};
	};
	class KAR_FDF_GORKA_SW: KAR_FDF_JACKET_M05 {
		displayName = "Jacket 2 (M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_GORKA_SW_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_16";
		};
	};
	class KAR_FDF_CRYE_GEN3: KAR_FDF_JACKET_M05 {
		displayName = "Crye Gen3 (M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_CRYE_GEN3_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_08";
		};
	};
	class KAR_FDF_CRYE_GEN3_M04: KAR_FDF_JACKET_M05 {
		displayName = "Crye Gen3 (M04)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_CRYE_GEN3_M04_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_11";
		};
	};
	class KAR_FDF_M04_Takki: KAR_FDF_JACKET_M05 {
		displayName = "Jacket (M04)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M04_TAKKI_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_10";
		};
	};
	class KAR_FDF_M62_maastopuku: KAR_FDF_JACKET_M05 {
		displayName = "Camo Uniform 2 (M62)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M62_MAASTOPUKU_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_12";
		};
	};
	class KAR_FDF_M62_maastopuku_hihat: KAR_FDF_JACKET_M05 {
		displayName = "Camo Uniform (M62/Rolled-Up)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M62_MAASTOPUKU_HIHAT_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_19";
		};
	};
	class KAR_FDF_M62_maastotakki: KAR_FDF_JACKET_M05 {
		displayName = "Camo Jacket (M62)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M62_MAASTOTAKKI_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_20";
		};
	};
	class KAR_FDF_M05_maastopuku_hihat: KAR_FDF_JACKET_M05 {
		displayName = "M05 Camo Uniform 2 (M05/Rolled-Up)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M05_MAASTOPUKU_HIHAT_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_23";
		};
	};
	class KAR_FDF_M62_Palvelus: KAR_FDF_JACKET_M05 {
		displayName = "Camo Uniform (M62)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M62_PALVELUS_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_18";
		};
	};
	class KAR_FDF_M05_Palvelus: KAR_FDF_M62_Palvelus {
		displayName = "Camo Uniform 2 (M05)";
		picture = QPATHTOF(ui\icons\uniforms\KAR_FDF_M05_PALVELUS_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformClass = "KAR_FDF_BASE_22";
		};
	};

	/////Helmets////
	class H_HelmetB: ItemCore {
		class ItemInfo;
	};
	class KAR_FDF_HELM_BASE: H_HelmetB{
		author = "Kartsa";
		scope = 0;
		scopeCurator = 0;
		class ItemInfo: HeadGearItem {
			allowedSlots[] = {701,801,901,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo;
		};
	};
	class KAR_FDF_M62_HELM: KAR_FDF_HELM_BASE {
		displayName = "Helmet (M62)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_helmet_co.paa)};
		model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoverwinter.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_M62_HELM_CA.PAA);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";
			class HitpointsProtectionInfo {
				class Head {
					armor = 4;
					hitpointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_VP_01: KAR_FDF_HELM_BASE {
		allowedFacewear[] = {"",3,"rhs_scarf",5,"G_Aviator",2};
		displayName = "Tank Helmet";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\kar_vaunupaahine_co.paa)};
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_VP_01_CA.PAA);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo1"};
			mass = 5;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
		};
	};
	class KAR_FDF_VP_02: KAR_FDF_VP_01 {
		allowedFacewear[] = {"",3,"rhs_scarf",7};
		displayName = "Tank Helmet (Goggles)";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_VP_02_CA.PAA);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess.p3d";
		};
	};
	class KAR_FDF_COM_01: KAR_FDF_HELM_BASE {
		ALLOWEDFACEWEAR_COM;
		displayName = "Composite Helmet (M05)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CH_co.paa)};
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_01_CA.PAA);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CH_co.paa)};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			class HitpointsProtectionInfo {
				class Head {
					armor = 6;
					hitpointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_02: KAR_FDF_COM_01 {
		displayName = "Composite Helmet (M05 Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CH_W_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_02_CA.PAA);

		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CH_W_co.paa)};
		};
	};
	class KAR_FDF_COM_03: KAR_FDF_COM_01 {
		displayName = "Composite Helmet 2 (M05)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CHV2_co.paa)};
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_03_CA.PAA);
		weaponPoolAvailable = 1;
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
			class HitpointsProtectionInfo {
				class Head {
					armor = 8;
					hitpointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_04: KAR_FDF_COM_03 {
		displayName = "Composite Helmet 2 (M05/Black ESS)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CHV2_co.paa),"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_04_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
			class HitpointsProtectionInfo {
				class Head {
					armor = 8;
					hitPointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_05: KAR_FDF_COM_04 {
		displayName = "Composite Helmet 2 (M05/Headset/Black ESS)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_05_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
		};
	};
	class KAR_FDF_COM_06: KAR_FDF_COM_03 {
		displayName = "Composite Helmet 2 (M05 Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CHV2_W_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_06_CA.PAA);
	};
	class KAR_FDF_COM_07: KAR_FDF_COM_04 {
		displayName = "Composite Helmet 2 (M05 Winter/Black ESS)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CHV2_W_co.paa),"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_07_CA.PAA);
	};
	class KAR_FDF_COM_08: KAR_FDF_COM_07 {
		displayName = "Composite Helmet 2 (M05 Winter/Headset/Black ESS)";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_08_CA.PAA);
	};
	class KAR_FDF_COM_10: KAR_FDF_COM_01 {
		displayName = "Composite Helmet (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_pask_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_10_CA.PAA);
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {QPATHTOF(data\M04_pask_co.paa)};
		};
	};
	class KAR_FDF_COM_12: KAR_FDF_COM_01 {
		displayName = "Composite Helmet 3 (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_COM_03_co.paa)};
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_12_ca.paa);
		class ItemInfo: ItemInfo {
			mass = 30;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		};
	};
	class KAR_FDF_COM_13: KAR_FDF_COM_12 {
		displayName = "Composite Helmet 3 (M05 Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05W_COM_03_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_13_ca.paa);
	};
	class KAR_FDF_COM_14: KAR_FDF_COM_12 {
		displayName = "Composite Helmet 3 (M05 Cold Weather)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05CW_COM_03_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_14_ca.paa);
	};
	class KAR_FDF_COM_15: KAR_FDF_COM_12 {
		displayName = "Composite Helmet 2 (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_COM_03_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_15_ca.paa);
	};
	class KAR_FDF_OPSCORE_01: KAR_FDF_HELM_BASE {
		ALLOWEDFACEWEAR_COM;
		displayName = "FAST Opscore Helmet (M05)";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_opscore_co.paa),"","","","",""};
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_01_CA.PAA);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			class HitpointsProtectionInfo {
				class Head {
					armor = 8;
					hitPointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_OPSCORE_02: KAR_FDF_OPSCORE_01 {
		displayName = "FAST Opscore Helmet (M05/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_opscore_co.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_02_CA.PAA);
	};
	class KAR_FDF_OPSCORE_04: KAR_FDF_OPSCORE_01 {
		displayName = "FAST Opscore Helmet (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_opscore_co.paa),"","","","",""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_04_CA.PAA);
	};
	class KAR_FDF_OPSCORE_05: KAR_FDF_OPSCORE_01 {
		displayName = "FAST Opscore Helmet (M04/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_opscore_co.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_05_CA.PAA);
	};
	class KAR_FDF_W_OPSCORE_01: KAR_FDF_OPSCORE_01 {
		displayName = "FAST Opscore Helmet (M05 Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_W_opscore.paa),"","","","",""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_W_OPSCORE_01_CA.PAA);
	};
	class KAR_FDF_W_OPSCORE_02: KAR_FDF_OPSCORE_01 {
		displayName = "FAST Opscore Helmet (M05 Winter/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_W_opscore.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_W_OPSCORE_02_CA.PAA);
	};
	class KAR_FDF_Opscore_01_C: KAR_FDF_OPSCORE_01 {
		ALLOWEDFACEWEAR_OPSCORE;
		displayName = "FAST Opscore Helmet (M05/Cover)";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] =  {QPATHTOF(data\M05_opscore_co.paa),"","","",QPATHTOF(data\M05_cover_co.paa),""};
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_01_C_CA.PAA);
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		};
	};
	class KAR_FDF_Opscore_02_C: KAR_FDF_Opscore_01_C {
		displayName = "FAST Opscore Helmet (M05/Cover/Headset)";
		hiddenSelectionsTextures[] =  {QPATHTOF(data\M05_opscore_co.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","",QPATHTOF(data\M05_cover_co.paa),""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_02_C_CA.PAA);
	};
	class KAR_FDF_Opscore_04_C: KAR_FDF_Opscore_01_C {
		displayName = "FAST Opscore Helmet (M04/Cover)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_opscore_co.paa),"","","",QPATHTOF(data\M04_cover_co.paa),""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_04_C_CA.PAA);
	};
	class KAR_FDF_Opscore_05_C: KAR_FDF_Opscore_01_C {
		displayName = "FAST Opscore Helmet (M04/Cover/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_opscore_co.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","",QPATHTOF(data\M04_cover_co.paa),""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_OPSCORE_05_C_CA.PAA);
	};
	class KAR_FDF_W_Opscore_01_C: KAR_FDF_Opscore_01_C {
		displayName = "FAST Opscore Helmet (M05 Winter/Cover)";
		hiddenSelectionsTextures[] =  {QPATHTOF(data\M05_W_opscore.paa),"","","",QPATHTOF(data\M05W_cover_co.paa),""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_W_OPSCORE_01_C_CA.PAA);
		class ItemInfo: ItemInfo {
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		};
	};
	class KAR_FDF_W_Opscore_02_C: KAR_FDF_Opscore_01_C {
		displayName = "FAST Opscore Helmet (M05 Winter/Cover/Headset)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_W_opscore.paa),"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","",QPATHTOF(data\M05W_cover_co.paa),""};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_W_OPSCORE_02_C_CA.PAA);
	};
	class KAR_FDF_COM_11: KAR_FDF_HELM_BASE {
		displayName = "Composite Helmet (M62)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M62_CH_co.paa)};
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_COM_11_ca.paa);
		scope = 2;
		scopeCurator = 2;
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {QPATHTOF(data\M62_CH_co.paa)};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			class HitpointsProtectionInfo {
				class Head {
					armor = 4;
					hitpointName = "HitHead";
					passThrough = 0.5;
				};
			};
		};
	};
	/////HATS/////
	class Helmet_Base: ItemCore {
		class ItemInfo;
	};
	class KAR_FDF_HAT_BASE: Helmet_Base{
		author = "Kartsa";
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadGearItem {
			allowedSlots[] = {701,801,901,605};
			hiddenSelections[] = {"camo"};
			mass = 5;
			modelSides[] = {6};
			class HitpointsProtectionInfo {
				class Head {
					armor = 0;
					hitPointName = "HitHead";
					passThrough = 1;
				};
			};
		};
	};
	//Texture not finisshed.
	// class KAR_FDF_LIPPALAKKI_M36: KAR_FDF_HAT_BASE {
	// 	displayName = "M36 Cap";
	// 	hiddenSelectionsTextures[] = {QPATHTOF(data\M36_lippalakki_co.paa)};
	// 	model = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap.p3d";
	// 	picture = QPATHTOF(ui\icons\helmets\KAR_FDF_GRR_CO.paa);
	// 	scope = 0;
	// 	class ItemInfo: ItemInfo {
	// 		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap.p3d";
	// 	};
	// };
	class KAR_FDF_M62_lippalakki: KAR_FDF_HAT_BASE {
		ALLOWEDFACEWEAR_COM;
		descriptionShort = "No Armor";
		displayName = "Cap (M62)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\m62_lippalakki_Co.paa)};
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_M62_LIPPALAKKI_ca.paa);
		scope = 2;
		class ItemInfo: ItemInfo {
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap.p3d";
		};
	};
	class KAR_FDF_LIPPALAKKI: KAR_FDF_HAT_BASE {
		displayName = "Cap (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_cap_co.paa)};
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_LIPPALAKKI_ca.paa);
		scope = 2;
		weaponPoolAvailable = 1;
		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			// class HitpointsProtectionInfo {
			// 	class Head {
			// 		hitPointName = "HitHead";
			// 		armor = 0;
			// 		passThrough = 1;
			// 	};
			// };
		};
	};
	class KAR_FDF_LIPPALAKKI_M04: KAR_FDF_LIPPALAKKI {
		displayName = "Cap (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_lippalakki_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_LIPPALAKKI_M04_ca.paa);
	};

	
	class KAR_FDF_Beanie_01: KAR_FDF_HAT_BASE {
		ALLOWEDFACEWEAR_COM;
		displayName = "Beanie (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_beanie_co.paa)};
		model = "\A3\Characters_F\Common\woolhat.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_BEANIE_01_ca.paa);
		scope = 2;
		weaponPoolAvailable = 1;
		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F\Common\woolhat.p3d";
			// class HitpointsProtectionInfo {
			// 	class Head {
			// 		armor = 0;
			// 		hitPointName = "HitHead";
			// 		passThrough = 1;
			// 	};
			// };
		};
	};
	class KAR_FDF_Beanie_02: KAR_FDF_Beanie_01 {
		displayName = "Beanie (M05 Cold Weather)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_CW_beanie.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_BEANIE_02_ca.paa);
	};
	class KAR_FDF_Beanie_03: KAR_FDF_Beanie_01 {
		displayName = "Beanie (M05 Winter)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_W_beanie_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_BEANIE_03_ca.paa);
	};
	class KAR_FDF_SEIKKAILUHATTU: KAR_FDF_Beanie_01 {
		displayName = "Booniehat (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_seikkailuhattu_co.paa)};
		model = "\A3\Characters_F\Common\booniehat.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_SEIKKAILUHATTU_ca.paa);
		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F\Common\booniehat.p3d";
		};
	};
	class KAR_FDF_SEIKKAILUHATTU_M04: KAR_FDF_SEIKKAILUHATTU {
		allowedFacewear[] = { };
		displayName = "Booniehat (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_seikkailuhattu_co.paa)};
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_SEIKKAILUHATTU_M04_ca.paa);
	};
	class KAR_FDF_KARVALAKKI: KAR_FDF_HAT_BASE {
		displayName = "Furhat (M05)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_karvalakki_co.paa)};
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka.p3d";
		picture = QPATHTOF(ui\icons\helmets\KAR_FDF_KARVALAKKI_ca.paa);
		scope = 2;
		class ItemInfo: ItemInfo {
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka.p3d";
		};
	};
	//// VESTS ////
	class Vest_Camo_Base: ItemCore {
		class ItemInfo;
	};
	class KAR_FDF_M17_LITE: Vest_Camo_Base {
		author = "Kartsa";
		descriptionShort = "Armor Level III";
		displayName = "M17 Plate Carrier (M05)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_M17_PC_CO.paa)};
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_LITE_ca.paa);
		scope = 2;
		class ItemInfo: ItemInfo {
			containerClass = "Supply100";
			mass = 70;
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			class HitpointsProtectionInfo {
				class Chest {
					armor = 25;
					HitpointName = "HitChest";
					PassThrough = 0.2;
				};
				class Diaphragm {
					armor = 25;
					HitpointName = "HitDiaphragm";
					PassThrough = 0.2;
				};
				class Abdomen {
					armor = 25;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_VEST: KAR_FDF_M17_LITE {
		displayName = "M18 Plate Carrier Vest (M05)";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_vest_ca.paa);
		class ItemInfo: ItemInfo {
			containerClass = "Supply50";
			mass = 60;
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		};
	};
	class KAR_FDF_M17_VEST_H: KAR_FDF_M17_LITE {
		displayName = "M17 Plate Carrier GL (M05)";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_VEST_H_ca.paa);
		class ItemInfo: ItemInfo {
			mass = 90;
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		};
	};
	class KAR_FDF_M17_LITE_M04: KAR_FDF_M17_LITE {
		displayName = "M17 Plate Carrier (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_modular_co.paa)};
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_LITE_M04_ca.paa);
	};
	class KAR_FDF_M17_VEST_M04: KAR_FDF_M17_LITE {
		displayName = "M17 Plate Carrier Vest (M04)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_modular_co.paa)};
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_VEST_M04_ca.paa);
		class ItemInfo: ItemInfo {
			containerClass = "Supply50";
			mass = 60;
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		};
	};
	class KAR_FDF_M17_VEST_M04_H: KAR_FDF_M17_LITE_M04 {
		displayName = "M04 Plate Carrier M17 Vest Heavy";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M04_modular_co.paa)};
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M17_VEST_M04_H_ca.paa);
		class ItemInfo: ItemInfo {
			containerClass = "Supply100";
			mass = 90;
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		};
	};
	class KAR_FDF_M05_TST: KAR_FDF_M17_LITE {
		descriptionShort = "No Armor";
		displayName = "TST (M05)";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_TST_co.paa),QPATHTOF(data\M05_pouchs_co.paa),QPATHTOF(data\M05_pouchs_2_co.paa)};
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M05_TST_ca.paa);
		class ItemInfo: ItemInfo {
			containerClass = "Supply100";
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			mass = 15;
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
			class HitpointsProtectionInfo {
				class Diaphragm {
					armor = 3;
					HitpointName = "HitDiaphragm";
					passThrough = 0.6;
				};
				class Body {
					armor = 0;
					hitpointName = "HitBody";
					passThrough = 0.8;
				};
			};
		};
	};
	class KAR_FDF_M05_TST_ARM: KAR_FDF_M05_TST {
		descriptionShort = "Armor Level III";
		displayName = "TST (M05/Armoured)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\M05_TST_co.paa),QPATHTOF(data\M05_pouchs_co.paa),QPATHTOF(data\M05_pouchs_2_co.paa)};
		picture = QPATHTOF(ui\icons\vest\KAR_FDF_M05_TST_ARM_ca.paa);
		class ItemInfo: ItemInfo {
			mass = 15;
			class HitpointsProtectionInfo {
				class Chest {
					armor = 25;
					HitpointName = "HitChest";
					PassThrough = 0.2;
				};
				class Diaphragm {
					armor = 25;
					HitpointName = "HitDiaphragm";
					PassThrough = 0.2;
				};
				class Abdomen {
					armor = 25;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
