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
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KAR_RIFLE_RK62: Rifle_Base_F {
		author="Kartsa, Tööttieläin";
		scope=2;
		cameraDir = "eye_look";
		descriptionShort="RK62 7.62x39mm";
		dexterity = 1.8;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName="RK62";
		drySound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry.wss",0.17782794,1,10};
		maxZeroing=600;
		model="KAR_RK\KARRK62.p3d";
		picture="\KAR_RK\ui\RK62_UI_CA.paa";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"KAR_RK\data\handguard_d_co.paa","KAR_RK\data\rk62_d2_co.paa"};
		handAnim[]={"OFP2_ManSkeleton","\KAR_RK\anim\handpose_ak12.rtm"};
		reloadAction = "HLC_GestureReloadAK";
        reloadMagazineSound[] = { "\KAR_RK62M2\snd\ak74m_reload.wss", 0.8, 1, 20 };
		magazineReloadSwitchPhase = 0.3;
		magazines[]= {
			"KARRK62_Mag"
		};
		magazineWell[]= {
			"CBA_762x39_AK"
		};
		recoil="recoil_spar";
		bullet1[]= {
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]= {
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]= {
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]= {
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]= {
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]= {
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]= {
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]= {
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]= {
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]= {
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]= {
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]= {
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]= {
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				};
			class CowsSlot{
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
			mass=70;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]={"FullAuto","Single",};
		class Single: Mode_SemiAuto {
			class BaseSoundModeType{};
			class StandardSound {
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 0.0923;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto {
			class BaseSoundModeType{};
			class StandardSound {
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 0.0923;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
	};
};