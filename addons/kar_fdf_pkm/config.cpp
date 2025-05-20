class CfgPatches
{
	class KAR_PKM
	{
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp","A3_Sounds_F_Exp","rhs_c_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"KAR_PKM",
		};
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
class asdg_MuzzleSlot_762R_SVD;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CfgWeapons
{
	class rhs_weap_pkm;
	class KAR_PKM: rhs_weap_pkm
	{
		aimTransitionSpeed = 0.5;
		author = "Kartsa, Bohemia";
		baseWeapon = "KAR_PKM";
		dexterity = 1.2;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName = "PKM Plastic Stock";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
		deployedPivot = "bipod";
		hasBipod=1;
		soundBipodDown[]= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", -3, 1, 20 };
		soundBipodUp[]= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", -3, 1, 20 };
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"KAR_PKM\data\PKM_co.paa","KAR_PKM\data\rails_co.paa"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7BZ3"};
		maxZeroing=600;
		model = "KAR_PKM\KAR_PKM.p3d";
		recoil = "rhs_recoil_pkm";
		inertia = 0.8;
		magazineWell[] = {"PK_762x54R","CBA_762x54R_LINKS"};
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class CowsSlot: asdg_OpticRail1913{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class PointerSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			mass = 155;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00133;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00133;
		};
	};
};