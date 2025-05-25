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
class asdg_FrontSideRail: asdg_SlotInfo {
	class compatibleItems;
};
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CfgWeapons {
	class rhs_weap_pkp;
	class KAR_PKP: rhs_weap_pkp {
		aimTransitionSpeed = 0.5;
		author = "Kartsa, Bohemia";
		baseWeapon = "KAR_PKP";
		dexterity = 1.2;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName = "PKP (Rails)";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkp.rtm"};
		hasBipod = 1;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkp_bis\data\pecheneg_co.paa",QPATHTOF(data\rails_co.paa),QPATHTOF(data\stock_co.paa)};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7BZ3"};
		maxZeroing=600;
		model = QPATHTOF(KAR_PKP.p3d);
		inertia = 0.8;
		magazineWell[] = {"PK_762x54R","CBA_762x54R_LINKS"};
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: asdg_MuzzleSlot_762{
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
			class PointerSlot: asdg_FrontSideRail{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
		};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound {
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
		class FullAuto: Mode_FullAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound {
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
	};
};
