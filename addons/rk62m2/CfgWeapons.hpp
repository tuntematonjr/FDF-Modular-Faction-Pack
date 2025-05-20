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
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail: asdg_SlotInfo {
	class compatibleItems;
};
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KAR_RIFLE_RK62M2: Rifle_Base_F {
		author="Kartsa, Tööttieläin";
		scope=2;
		cameraDir="eye_look";
		changeFiremodeSound[]= {
			"KAR_RK62M2\snd\ak_selector.wss",
			1,
			1,
			8
		};
		descriptionShort="RK62M2 7.62x39mm";
		dexterity=1.8;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceCameraPoint[]= {
			"eye"
		};
		displayName="RK62M2";
		drySound[]= {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry.wss",
			0.17782794,
			1,
			10
		};
		maxZeroing=600;
		model="KAR_RK62M2\RK62m2.p3d";
		picture = QPATHTOF(pictures\RK62M2_UI_CA.paa);
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]= {
			"KAR_RK62M2\data\stock_co.paa",
			"KAR_RK62M2\data\rails_co.paa",
			"KAR_RK62M2\data\grip_co.paa",
			"KAR_RK62M2\data\frame_co.paa"
		};
		handAnim[]= {
			"OFP2_ManSkeleton",
			"\KAR_RK62M2\anim\handpose_VFG.rtm"
		};
		reloadAction="HLC_GestureReloadAK";
		reloadMagazineSound[]= {
			"\KAR_RK62M2\snd\ak74m_reload.wss",
			0.80000001,
			1,
			20
		};
		magazineReloadSwitchPhase=0.30000001;
		magazines[]= {
			"KARRK62_Mag"
		};
		magazineWell[]= {
			"CBA_762x39_AK"
		};
		recoil="recoil_spar";
		bullet1[]= {
			"A3\sounds_f\weapons\shells\7_62\metal_762_01.wss",
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
			class MuzzleSlot: asdg_MuzzleSlot_762 {
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot {
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			mass=70;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]= {
			"FullAuto",
			"Single"
		};
		class Single: Mode_SemiAuto {
			class BaseSoundModeType {
			};
			class StandardSound {
				soundSetShot[]= {
					"RHS_AKM_Shot_SoundSet",
					"RHS_MMG1_Tail_SoundSet"
				};
			};
			class SilencedSound {
				soundSetShot[]= {
					"RHS_sd_AKM_Shot_SoundSet",
					"RHS_sd_MMG1_Tail_SoundSet"
				};
			};
			aiBurstTerminable=1;
			reloadTime=0.092299998;
			dispersion=0.00092999998;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class FullAuto: Mode_FullAuto {
			class BaseSoundModeType {
			};
			class StandardSound {
				soundSetShot[]= {
					"RHS_AKM_Shot_SoundSet",
					"RHS_MMG1_Tail_SoundSet"
				};
			};
			class SilencedSound {
				soundSetShot[]= {
					"RHS_sd_AKM_Shot_SoundSet",
					"RHS_sd_MMG1_Tail_SoundSet"
				};
			};
			aiBurstTerminable=1;
			reloadTime=0.092299998;
			dispersion=0.00092999998;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
	};
};
