#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"KAR_FDF_SCAR_L","KAR_FDF_SCAR_L_S","KAR_FDF_SCAR_L_G"};
        weapons[] = {"KAR_FDF_SCAR_L","KAR_FDF_SCAR_L_S","KAR_FDF_SCAR_L_G"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"KAR_FDF","rhsusf_c_weapons","A3_Weapons_F"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class StandardSound;
class BaseSoundModeType;
class SilencedSound;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_556;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		KAR_FDF_LRCO_blk_F = 1;
	};
};
class asdg_OpticRail1913_short;
class CfgWeapons
{
    class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
    class ItemCore;
	class KAR_FDF_SCAR_L: Rifle_Base_F
	{
        author = "Kartsa, A3 Aegis";
        scope = 2;
        displayname = "SCAR-L";
		baseweapon = "KAR_FDF_SCAR_L";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		model = "KAR_FDF_SCARL\SCAR_L_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        picture = "\KAR_FDF_SCARL\data\UI\icon_arifle_scar_L_black.paa";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		hiddenSelectionsTextures[] =
		{
			"KAR_FDF_SCARL\Data\SCAR_L_01_black_CO.paa",
			"KAR_FDF_SCARL\Data\SCAR_L_02_black_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction = GestureReloadSPAR_01;
		magazineReloadSwitchPhase = 0.47999999;
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",
			0.17782794,
			1,
			5
		};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
		magazineWell[] = {"CBA_556x45_STANAG"};
		htMin = 8;
		htMax = 920;
		inertia = 0.5;
		aimTransitionSpeed = 1.1;
		dexterity = 1.4;
		initSpeed = 870;
		recoil = recoil_spar;
		maxZeroing = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] =
				{
					0.12,   // X
					0.43    // y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.5,    // X
					0.36    // y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.33,   // X
					0.4     // y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.3,    // X
					0.8     // y
				};
				iconScale = 0.3;
			};
			mass = 105;
		};
        modes[] ={ "Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 60/650;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
            sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 60/650;
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
            sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = RPM_625;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = MEDIUM_OPTIC;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = FAR_OPTIC;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
	  	};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 406.4;
		ACE_railHeightAboveBore = 4.7;
	};
	class KAR_FDF_SCAR_L_S: KAR_FDF_SCAR_L
	{
		model = "KAR_FDF_SCARL\SCAR_L_short_F.p3d";
        scope = "2";
		baseweapon = "KAR_FDF_SCAR_L_S";
        displayname = "SCAR-L (Short)";
        picture = "\KAR_FDF_SCARL\data\UI\icon_arifle_scar_L_short_black.paa";
		inertia = 0.4;
		dexterity = 1.5;
		aimTransitionSpeed = 1;
		initSpeed = 800;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 95;
	  	};
		class Single: Single
		{
			dispersion = 0.00102;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00102;
		};
        ACE_barrelLength = 330.2;
	};
	class KAR_FDF_SCAR_L_G: KAR_FDF_SCAR_L
	{
		model = "KAR_FDF_SCARL\SCAR_L_grip_F.p3d";
		baseweapon = "KAR_FDF_SCAR_L_G";
        picture = "\KAR_FDF_SCARL\data\UI\icon_arifle_scar_L_grip_black.paa";
        displayname = "SCAR-L (Grip)";
        scope = 2;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		dexterity = 1.7;
		aimTransitionSpeed = 1;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
            /* Weight */
	    	mass = 115;
	  	};
	};

    ///SATTACHMENTS////
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class InventoryOpticsItem_Base_F;
	class KAR_FDF_LRCO_blk_F: optic_MRCO
	{
		author = "AveryTheKitty, Toadie2K";
		scope = 2;
		displayName = "Hensoldt ZO";
		descriptionShort = "Hensoldt ZO 4x Optic";
		model = "KAR_FDF_SCARL\ZOx4\acco_LRCO_blk_F.p3d";
		picture = "\KAR_FDF_SCARL\Data\UI\icon_acco_LRCO_blk_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			modelOptics = "KAR_FDF_SCARL\ZOx4\acco_LRCO_blk_F.p3d";
		};
	};
};
