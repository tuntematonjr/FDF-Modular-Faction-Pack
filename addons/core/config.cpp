#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhs_infantry","rhsusf_infantry","rhsgref_infantry","rhssaf_main"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
    class ContainerSupply;
	class Supply30: ContainerSupply
	{
		maximumLoad = 30;
	};
	class Supply100: ContainerSupply
	{
		maximumLoad = 100;
	};
	class Supply50: ContainerSupply
	{
		maximumLoad = 50;
	};
	////Uniforms////
	class B_Soldier_base_F;
	class KAR_FDF_BASE_01: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_NCU_CA.PAA";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\NCU_M05_CU_CO.paa","KAR_FDF\data\NCU_M05_POCKETS_CO.paa"};
	};
	class KAR_FDF_BASE_02: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_gorka_02_co.paa"};
	};
	class KAR_FDF_BASE_02a: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CW_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_m05cw_gorka_co.paa"};
	};
	class KAR_FDF_BASE_02b: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_W_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05_m05w_gorka_co.paa"};
	};
	class KAR_FDF_BASE_03: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_corka_co.paa"};
	};
	class KAR_FDF_BASE_03a: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_m05_gorka_cotga.paa"};
	};
	class KAR_FDF_BASE_03b: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05CW_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05w_m05cw_gorka_co"};
	};
	class KAR_FDF_BASE_06: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05cw_gorka_co.paa"};
	};
	class KAR_FDF_BASE_06a: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05cw_m05_gorka_co.paa"};
	};
	class KAR_FDF_BASE_06b: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05W_CA.PAA";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m05cw_m05w_gorka_co.paa"};
	};
	class KAR_FDF_BASE_04: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_W_CA.PAA";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_gorka_co.paa", "KAR_FDF\data\Hanskat_co.paa"};
	};
	class KAR_FDF_BASE_05: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_VILLAPAITA_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_villapaita_co.paa"};
	};
	class KAR_FDF_BASE_07: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_TAISTELUPAITA_CA.PAA";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_taistelupaita_co.paa"};
	};
	class KAR_FDF_BASE_08: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "RHS_USAF";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_CRYE_GEN3_CA.PAA";
		hiddenSelections[] = {"Camo","Camo2","Gloves","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\KAR_M05_g3_co.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","KAR_FDF\data\KAR_g3_gloves_co.paa"};
	};
	class KAR_FDF_BASE_09: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAISTELUPAITA_CA.PAA";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M04_taistelupaita_co.paa"};
	};
	class KAR_FDF_BASE_10: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAKKI_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_takki_co.paa"};
	};
	class KAR_FDF_BASE_11: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		picture = "\KAR_FDF\ui\M04R_CO.paa";
		hiddenSelections[] = {"Camo","Camo2","Gloves","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\KAR_M04_g3_co.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","KAR_FDF\data\KAR_g3_gloves_co.paa"};
	};
	class KAR_FDF_BASE_12: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_boots.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_CA.PAA";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m62_maastotakki_co.paa","KAR_FDF\data\m62_maastohousut_co.paa"};
	};
	class KAR_FDF_BASE_13: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_01_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\Vihree_Takki_co.paa"};
	};
	class KAR_FDF_BASE_14: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_02_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_vihreet_housut_co.paa"};
	};
	class KAR_FDF_BASE_15: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		dlc = "Enoch";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_03_CA.PAA";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_haalarit_co.paa"};
	};
	class KAR_FDF_BASE_16: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_SW_CA.PAA";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05S_gorka_co.paa", "KAR_FDF\data\Hanskat_co.paa"};
	};
	class KAR_FDF_BASE_18: B_Soldier_base_F
	{
		author = "Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_PALVELUS_CA.PAA";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M62_palveluspuku_co.paa","KAR_FDF\data\M62_housut_co.paa","KAR_FDF\data\M62_hanskat_co.paa"};
	};
	class KAR_FDF_BASE_19: B_Soldier_base_F
	{
		author="Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_HIHAT_CA.PAA";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M62_palveluspuku_co.paa","KAR_FDF\data\M62_housut_co.paa"};
	};
	class KAR_FDF_BASE_20: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOTAKKI_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m62_takki_co.paa"};
	};
	class KAR_FDF_BASE_21: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_KLMK_overall.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_TALVIPUKU_CA.PAA";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\lumipuku_takki_co.paa","KAR_FDF\data\lumipuku_housut_co.paa"};
	};
	class KAR_FDF_BASE_22: B_Soldier_base_F
	{
		author = "Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_PALVELUS_CA.PAA";
		hiddenSelections[]={"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_pp_paita_co.paa","KAR_FDF\data\M05_pp_housut_co.paa","KAR_FDF\data\M62_hanskat_co.paa"};
	};
	class KAR_FDF_BASE_23: B_Soldier_base_F
	{
		author="Kartsa";
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_MAASTOPUKU_HIHAT_CA.PAA";
		hiddenSelections[]={"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"KAR_FDF\data\M05_pp_paita_co.paa","KAR_FDF\data\M05_pp_housut_co.paa"};
	};
	class KAR_FDF_BASE_24: B_Soldier_base_F
	{
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
	class KAR_FDF_BAG_01: B_Kitbag_Base
	{
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
	class KAR_FDF_Kitbag_01: B_Kitbag_Base
	{
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
	class KAR_FDF_Kitbag_02: B_Kitbag_Base
	{
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
	class KAR_FDF_Kitbag_03: B_Kitbag_Base
	{
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
	class KAR_FDF_Kitbag_04: B_Kitbag_Base
	{
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
class cfgWeapons
{
	class ItemCore;
	class HeadGearItem;
	class Helmet_Base: ItemCore
	{
		class ItemInfo;
	};
	class UniformItem;
	class Uniform_Base;
	class ContainerSupply;
	class Supply30: ContainerSupply
	{
		maximumLoad = 30;
	};
	class Supply100: ContainerSupply
	{
		maximumLoad = 100;
	};
	class Supply50: ContainerSupply
	{
		maximumLoad = 50;
	};
	class Supply20: ContainerSupply
	{
		maximumLoad = 20;
	};
	////UNIFORMS////
	class KAR_FDF_M05_Taistelupaita: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Combat Uniform (M05)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_TAISTELUPAITA_CA.PAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="KAR_FDF_BASE_07";
			containerClass="Supply40";
			mass=40;
		};
	};
	class KAR_FDF_M05_Taistelupaita_Sleeve: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Combat Uniform (M05/Rolled-Up)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_TAISTELUPAITA_SLEEVE_CA.PAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="KAR_FDF_BASE_24";
			containerClass="Supply40";
			mass=40;
		};
	};
	class KAR_FDF_VILLAPAITA: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Sweater (M05)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_VILLAPAITA_CA.PAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{"camo"};
		hiddenSelectionsTextures[]=
		{"KAR_FDF\data\M05_villapaita_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="KAR_FDF_BASE_05";
			containerClass="Supply20";
			mass=30;
		};
	};
	class KAR_FDF_NCU: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_NCU_CA.PAA";
		scope = 2;
		displayName = "NCU (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
	class KAR_FDF_JACKET_M05: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_02";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_M05_CW: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_CW_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05/M05CW)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_02a";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_M05_W: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05_W_CA.PAA";
		scope = 2;
		displayName = "Jacket M05/M05W";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_02b";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_M05W: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05W)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_03";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_M05W_M05: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05W/M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_03a";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_M05W_M05CW: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_M05W_M05CW_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05W/M05CW)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_03b";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_CW: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05CW)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_06";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_JACKET_CW_M05: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05CW/M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_06a";
			containerClass = "Supply40";
			mass = 40;
		};
	};	
	class KAR_FDF_JACKET_CW_M05W: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_JACKET_CW_M05W_CA.PAA";
		scope = 2;
		displayName = "Jacket (M05CW/M05W)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_06b";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_COVERALLS_01: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_01_CA.PAA";
		scope = 2;
		displayName = "Tanker Coveralls (Green)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_13";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_COVERALLS_02: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_02_CA.PAA";
		scope = 2;
		displayName = "Tanker Coveralls (M62/Green)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_14";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_COVERALLS_03: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_COVERALLS_03_CA.PAA";
		scope = 2;
		displayName = "Tanker Coveralls (M62)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_15";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_GORKA_W: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_W_CA.PAA";
		scope = 2;
		displayName = "Winter Jacket (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_04";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_GORKA_SW: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_GORKA_SW_CA.PAA";
		scope = 2;
		displayName = "Jacket 2 (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_16";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_CRYE_GEN3: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_CRYE_GEN3_CA.PAA";
		scope = 2;
		displayName = "Crye Gen3 (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_08";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class KAR_FDF_M04_Taistelupaita: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Combat Uniform (M04)";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAISTELUPAITA_CA.PAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="KAR_FDF_BASE_09";
			containerClass="Supply40";
			mass=40;
		};
	};
	class KAR_FDF_M04_Takki: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M04_TAKKI_CA.PAA";
		scope = 2;
		displayName = "Jacket (M04)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_10";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class KAR_FDF_M62_maastopuku: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_CA.PAA";
		scope = 2;
		displayName = "Camo Uniform 2 (M62)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_12";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class KAR_FDF_M62_Palvelus: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_PALVELUS_CA.PAA";
		scope = 2;
		displayName = "Camo Uniform (M62)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_18";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class KAR_FDF_M62_maastopuku_hihat: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOPUKU_HIHAT_CA.PAA";
		scope = 2;
		displayName = "Camo Uniform (M62/Rolled-Up)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_19";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class KAR_FDF_M62_maastotakki: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M62_MAASTOTAKKI_CA.PAA";
		scope = 2;
		displayName = "Camo Jacket (M62)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_20";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class KAR_FDF_TALVIPUKU: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Winter Oversuit";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_TALVIPUKU_CA.PAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="KAR_FDF_BASE_21";
			containerClass="Supply20";
			mass=20;
		};
	};
	class KAR_FDF_M05_Palvelus: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_PALVELUS_CA.PAA";
		scope = 2;
		displayName = "Camo Uniform 2 (M05)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_22";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class KAR_FDF_M05_maastopuku_hihat: Uniform_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\PIC\KAR_FDF_M05_MAASTOPUKU_HIHAT_CA.PAA";
		scope = 2;
		displayName = "M05 Camo Uniform 2 (M05/Rolled-Up)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "KAR_FDF_BASE_23";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	/////Helmets////
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class KAR_FDF_M62_HELM: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M62_HELM_CA.PAA";
		displayName = "Helmet (M62)";
		scope = 2;
		scopeCurator = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoverwinter.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_helmet_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_VP_01: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_VP_01_CA.PAA";
		allowedFacewear[] = {"",3,"rhs_scarf",5,"G_Aviator",2};
		displayName = "Tank Helmet";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\kar_vaunupaahine_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
		};
	};
	class KAR_FDF_VP_02: KAR_FDF_VP_01
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_VP_02_CA.PAA";
		allowedFacewear[] = {"",3,"rhs_scarf",7};
		displayName = "Tank Helmet (Goggles)";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess.p3d";
		};
	};
	class KAR_FDF_COM_01: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_01_CA.PAA";
		displayName = "Composite Helmet (M05)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CH_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CH_co.paa"};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_02: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_02_CA.PAA";
		displayName = "Composite Helmet (M05W)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CH_W_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CH_W_co.paa"};
			allowedSlots[] = {801,901,701,605};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_03: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_03_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_04: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05/Black ESS)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_04_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_05: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05/Headset/Black ESS)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_05_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_06: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05W)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_06_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_W_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_07: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05W/Black ESS)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_07_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_W_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_08: H_HelmetB
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Composite Helmet 2 (M05W/Headset/Black ESS)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_08_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CHV2_W_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_OPSCORE_01: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_01_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M05)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_opscore_co.paa","","","","",""};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_OPSCORE_02: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_02_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M05/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_Opscore_01_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M05/Cover)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_01_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M05_opscore_co.paa",
			"",
			"",
			"",
			"\KAR_FDF\data\M05_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_Opscore_02_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M05/Cover/Headset)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_02_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M05_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"\KAR_FDF\data\M05_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_10: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_10_CA.PAA";
		displayName = "Composite Helmet (M04)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_pask_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_pask_co.paa"};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_OPSCORE_04: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_04_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M04)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_opscore_co.paa","","","","",""};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_OPSCORE_05: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_05_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M04/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_Opscore_04_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M04/Cover)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_04_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M04_opscore_co.paa",
			"",
			"",
			"",
			"\KAR_FDF\data\M04_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_Opscore_05_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M04/Cover/Headset)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_OPSCORE_05_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M04_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"\KAR_FDF\data\M04_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_W_OPSCORE_01: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_W_OPSCORE_01_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M05W)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_W_opscore.paa","","","","",""};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_W_OPSCORE_02: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_W_OPSCORE_02_CA.PAA";
		scope = 2;
		displayName = "FAST Opscore Helmet (M05W/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_W_opscore.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","",""};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_W_Opscore_01_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M05W/Cover)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_W_OPSCORE_01_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M05_W_opscore.paa",
			"",
			"",
			"",
			"\KAR_FDF\data\M05W_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_W_Opscore_02_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FAST Opscore Helmet (M05W/Cover/Headset)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_W_OPSCORE_02_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\KAR_FDF\data\M05_W_opscore.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"\KAR_FDF\data\M05W_cover_co.paa",
			""
		};
		class ItemInfo: HeadGearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] = {1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_11: H_HelmetB
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_11_ca.paa";
		displayName = "Composite Helmet (M62)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_CH_co.paa"};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"KAR_FDF\data\M62_CH_co.paa"};
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_12: H_HelmetB
	{
		author="Kartsa";
		scope = 2;
		displayName="Composite Helmet 3 (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_12_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M05_COM_03_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[] = {2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class KAR_FDF_COM_13: KAR_FDF_COM_12
	{
		author="Kartsa";
		scope = 2;
		displayName="Winter Composite Helmet 3 (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_13_ca.paa";
		hiddenSelections[] = {"Camo"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M05W_COM_03_co.paa"
		};
	};
	class KAR_FDF_COM_14: KAR_FDF_COM_12
	{
		author="Kartsa";
		scope = 2;
		displayName="Composite Helmet 3 (M05CW)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_14_ca.paa";
		hiddenSelections[] = {"Camo"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M05CW_COM_03_co.paa"
		};
	};
	class KAR_FDF_COM_15: KAR_FDF_COM_12
	{
		author="Kartsa";
		scope = 2;
		displayName="Composite Helmet 3 (M05CW)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_COM_15_ca.paa";
		hiddenSelections[] = {"Camo"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M04_COM_03_co.paa"
		};
	};
	/////HATS/////
	class KAR_FDF_LIPPALAKKI_M36: Helmet_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF\ui\GRR_CO.paa";
		displayName = "M36 Cap";
		scope = 0;
		model = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M36_lippalakki_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {1,3};
			hiddenSelections[] = { "camo" };
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_Beanie_01: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (M05)";
		weaponPoolAvailable = 1;
		picture = "\KAR_FDF_EP\pic\KAR_FDF_BEANIE_01_ca.paa";
		model = "\A3\Characters_F\Common\woolhat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_beanie_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};

		class ItemInfo: HeadGearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {1,3};
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\Common\woolhat.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_M62_lippalakki: Helmet_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M62_LIPPALAKKI_ca.paa";
		displayName = "Cap (M62)";
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\m62_lippalakki_Co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		descriptionShort = "No Armor";
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap";
		};
	};
	class KAR_FDF_Beanie_02: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (M05CW)";
		weaponPoolAvailable = 1;
		picture = "\KAR_FDF_EP\pic\KAR_FDF_BEANIE_02_ca.paa";
		model = "\A3\Characters_F\Common\woolhat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_CW_beanie.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};

		class ItemInfo: HeadGearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {1,3};
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\Common\woolhat.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_Beanie_03: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (M05W)";
		weaponPoolAvailable = 1;
		picture = "\KAR_FDF_EP\pic\KAR_FDF_BEANIE_03_ca.paa";
		model = "\A3\Characters_F\Common\woolhat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_W_beanie_co.paa"};

		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {1,3};
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\Common\woolhat.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_SEIKKAILUHATTU: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Booniehat (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_SEIKKAILUHATTU_ca.paa";
		model = "\A3\Characters_F\Common\booniehat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_seikkailuhattu_co.paa"};
		allowedFacewear[] =
		{
			"rhs_balaclava", 1,
			"rhs_balaclava1_olive", 1,
			"G_Bandanna_oli", 1,
			"G_Combat", 1,
			"rhsusf_shemagh_grn", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"KAR_FDF_B_W", 1,
			"KAR_FDF_B_GR", 1,
			"KAR_FDF_B_GL", 1,
			"KAR_FDF_B_B", 1,
			"", 1
		};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\booniehat.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_SEIKKAILUHATTU_M04: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Booniehat (M04)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_SEIKKAILUHATTU_M04_ca.paa";
		model = "\A3\Characters_F\Common\booniehat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_seikkailuhattu_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\booniehat.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_LIPPALAKKI: Helmet_Base
	{
		author = "Kaartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_LIPPALAKKI_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_cap_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_LIPPALAKKI_M04: Helmet_Base
	{
		author = "Kaartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (M04)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_LIPPALAKKI_M04_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_lippalakki_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {1,3};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class KAR_FDF_KARVALAKKI: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\KAR_FDF_EP\pic\KAR_FDF_KARVALAKKI_ca.paa";
		displayName = "Furhat (M05)";
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_karvalakki_co.paa"};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka.p3d";
		};
	};
	//// VESTS ////
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class KAR_FDF_M17_LITE: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "M17 Plate Carrier (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_LITE_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_M17_PC_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass = "Supply100";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_VEST: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "M18 Plate Carrier Vest (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_vest_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_M17_PC_CO.paa"};
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			containerClass = "Supply50";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_VEST_H: KAR_FDF_M17_LITE
	{
		author="Kartsa";
		scope=2;
		displayName="M17 Plate Carrier GL (M05)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_VEST_H_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M05_M17_PC_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply100";
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_LITE_M04: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "M17 Plate Carrier (M04)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_LITE_M04_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_modular_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass = "Supply100";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_VEST_M04: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "M17 Plate Carrier Vest (M04)";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_VEST_M04_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M04_modular_co.paa"};
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			containerClass = "Supply50";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M17_VEST_M04_H: KAR_FDF_M17_LITE_M04
	{
		author="Kartsa";
		_generalMacro="M17 Plate Carrier GL (M04)";
		scope=2;
		displayName="M04 Plate Carrier M17 Vest Heavy";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M17_VEST_M04_H_ca.paa";
		hiddenSelections[] = {"camo"};
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"KAR_FDF\data\M04_modular_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply100";
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class KAR_FDF_M05_TST: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M05_TST_ca.paa";
		scope = 2;
		displayName = "TST (M05)";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_TST_co.paa","KAR_FDF\data\M05_pouchs_co.paa","KAR_FDF\data\M05_pouchs_2_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
			containerClass = "Supply100";
			mass = 15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.6;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 0.8;
				};
			};
		};
	};
	class KAR_FDF_M05_TST_ARM: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\KAR_FDF_EP\pic\KAR_FDF_M05_TST_ARM_ca.paa";
		scope = 2;
		displayName = "TST (M05/Armoured)";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"KAR_FDF\data\M05_TST_co.paa","KAR_FDF\data\M05_pouchs_co.paa","KAR_FDF\data\M05_pouchs_2_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
			containerClass = "Supply100";
			mass = 15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
class CfgGlasses
{
	class None;
	class KAR_FDF_B_GR: None
	{
		author = "Kartsa, Jamie";
		displayname = "Balaclava (Green)";
		model = "\KAR_FDF\balaclava\jam_sov_balaclava.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\KAR_FDF\balaclava\bala_GR_co.paa"};
		picture = "\KAR_FDF_EP\pic\PB_Bala_GR_ca.paa";
		identityTypes[] =
		{
			"NoGlasses",0, "G_NATO_default",300, "G_NATO_casual",0, "G_NATO_pilot",0, "G_NATO_recon",50, "G_NATO_SF",300, "G_NATO_sniper",0,
			"G_NATO_diver",0, "G_IRAN_default",0, "G_IRAN_diver",0, "G_GUERIL_default",0, "G_HAF_default",50, "G_CIVIL_female",0, "G_CIVIL_male",0
		};
		mass = 4;
		mode = 4;
	};
	class KAR_FDF_B_W: KAR_FDF_B_GR
	{
		displayname = "Balaclava (Winter)";
		hiddenselectionstextures[] = {"\KAR_FDF\balaclava\bala_W_co.paa"};
		picture = "\KAR_FDF_EP\pic\PB_Bala_W_ca.paa";
	};
	class KAR_FDF_B_GL: KAR_FDF_B_GR
	{
		displayname = "Balaclava (Light Green)";
		hiddenselectionstextures[] = {"\KAR_FDF\balaclava\bala_L_GR_co.paa"};
		picture = "\KAR_FDF_EP\pic\PB_Bala_GL_ca.paa";
	};
	class KAR_FDF_B_B: KAR_FDF_B_GR
	{
		displayname = "Balaclava (Black)";
		hiddenselectionstextures[] = {"\KAR_FDF\balaclava\bala_B_co.paa"};
		picture = "\KAR_FDF_EP\pic\PB_Bala_B_ca.paa";
	};
};