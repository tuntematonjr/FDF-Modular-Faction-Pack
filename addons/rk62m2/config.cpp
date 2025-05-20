#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={"KAR_RIFLE_RK62M2"};
		magazines[]={"KARRK62_Mag"};
		ammo[]={"KAR_35RK_762x39_Ball"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F_Exp","A3_Sounds_F_Exp","cba_main"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

class CfgDistanceFilters
{
	class HLC_defaultDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=400;
		range=2600;
		powerFactor=32;
	};
	class HLC_rifleTailDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=350;
		range=1800;
		powerFactor=32;
	};
};
class CfgSoundShaders
{
	class KAR_NIA_Close_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\close_1.ogg",
				1
			},
			
			{
				"\KAR_RK62M2\snd\G36\close_2.ogg",
				1
			},
			
			{
				"\KAR_RK62M2\snd\G36\close_3.ogg",
				1
			},
			
			{
				"\KAR_RK62M2\snd\G36\close_4.ogg",
				1
			}
		};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[]=
		{
			{0,1.5},
			{20,0}
		};
	};
	class KAR_NIA_CloseDistance_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\close_distance.ogg",
				1
			}
		};
		volume="1*(1-interior)";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{18,1},
			{100,0}
		};
	};
	class KAR_NIA_MediumDistance_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\medium_distance.ogg",
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]=
		{
			{0,0},
			{15,0},
			{100,1},
			{500,0}
		};
	};
	class KAR_NIA_FarDistance_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\far_distance.ogg",
				1
			}
		};
		volume=1;
		range=2500;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{500,1.25},
			{2500,0}
		};
	};
	class KAR_NIA_Interior_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\Close_Interior.ogg",
				1
			}
		};
		volume="1.5*interior";
		range=20;
		rangecurve[]=
		{
			{0,1.5},
			{20,0}
		};
	};
	class KAR_NIA_InteriorDistance_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"\KAR_RK62M2\snd\G36\Close_Distance_Interior.ogg",
				1
			}
		};
		volume="1*interior";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{18,1},
			{100,0}
		};
	};
	class KAR_NIA_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Close",
				1
			}
		};
		volume=0.80000001;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class KAR_NIA_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_suppressed_mid",
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{250,0}
		};
	};
	class KAR_NIA_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Tail",
				1
			}
		};
		volume="(1-interior/1.4)*Forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Tail",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Tail_Indoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Tail",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Silenced_Tail",
				1
			}
		};
		volume=" (1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_indoor",
				1
			}
		};
		volume=" 1.4*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_indoor_mid",
				1
			}
		};
		volume=" 1.4*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class KAR_NIA_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_trees",
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_trees_mid",
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class KAR_NIA_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_forest_mid",
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class KAR_NIA_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_meadows",
				1
			}
		};
		volume="1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_meadows_mid",
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class KAR_NIA_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Urban",
				1
			}
		};
		volume="1.4*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_RK62M2\snd\G36_MLI\G36_MLI_Urban_mid",
				1
			}
		};
		volume="1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
};
class CfgSoundSets
{
	class KAR_NIA_Shot_SoundSet
	{
		soundShaders[]=
		{
			"KAR_NIA_Close_Shot_SoundShader",
			"KAR_NIA_CloseDistance_Shot_SoundShader",
			"KAR_NIA_MediumDistance_Shot_SoundShader",
			"KAR_NIA_FarDistance_Shot_SoundShader",
			"KAR_NIA_Interior_Shot_SoundShader",
			"KAR_NIA_InteriorDistance_Shot_SoundShader"
		};
		volumeFactor=1.33;
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.25;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=0.5;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="HLC_defaultDistanceFilter";
	};
	class KAR_NIA_Tail_SoundSet
	{
		soundShaders[]=
		{
			"KAR_NIA_tailInterior_SoundShader",
			"KAR_NIA_tailTrees_SoundShader",
			"KAR_NIA_tailForest_SoundShader",
			"KAR_NIA_tailMeadows_SoundShader",
			"KAR_NIA_tailHouses_SoundShader",
			"KAR_NIA_tailInterior_mid_SoundShader",
			"KAR_NIA_tailTrees_mid_SoundShader",
			"KAR_NIA_tailForest_mid_SoundShader",
			"KAR_NIA_tailMeadows_mid_SoundShader",
			"KAR_NIA_tailHouses_mid_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="HLC_rifleTailDistanceFilter";
	};
	class KAR_NIA_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"KAR_NIA_silencerShot_SoundShader",
			"KAR_NIA_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class KAR_NIA_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"KAR_NIA_silencerTailTrees_SoundShader",
			"KAR_NIA_silencerTailForest_SoundShader",
			"KAR_NIA_silencerTailMeadows_SoundShader",
			"KAR_NIA_silencerTailHouses_SoundShader",
			"KAR_NIA_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="HLC_rifleTailDistanceFilter";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadAK="HLC_GestureReloadAK";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			HLC_GestureReloadAK[]=
			{
				"HLC_GestureReloadAK",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReloadAK[]=
			{
				"HLC_GestureReloadAK_Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadAK[]=
			{
				"HLC_GestureReloadAK_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadAK[]=
			{
				"HLC_GestureReloadAK_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadAK[]=
			{
				"HLC_GestureReloadAK",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class HLC_GestureReloadAK: Default
		{
			file="\KAR_RK62M2\anim\reload_ak_onehanded.rtm";
			looped=0;
			speed=0.23076923;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,1,0.075000003,0,0.85000002,0,0.93000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class HLC_GestureReloadAK_prone: Default
		{
			file="\KAR_RK62M2\anim\reload_ak_prone.rtm";
			looped=0;
			speed=-4.8000002;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,1,0.075000003,0,0.85000002,0,0.93000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class HLC_GestureReloadAK_Context: HLC_GestureReloadAK
		{
			mask="NIA_handsWeapon_context_Toadie";
		};
	};
};
class CfgMagazines
{
	class Default;
	class 30Rnd_762x39_Mag_F;
	class KARRK62_Mag: 30Rnd_762x39_Mag_F
	{
		author="Kartsa";
		ammo="KAR_35RK_762x39_Ball";
		descriptionshort="7.62x39mm";
		displayname="7.62x39mm 30 Round RK Magazine";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAR_RK62M2\data\stock_co.paa"
		};
		modelSpecial="KAR_RK62M2\mag\KARRK62_mag.p3d";
		modelSpecialIsProxy=1;
		picture="\KAR_RK62M2\ui\RK62MAG_UI_CA.paa";
		lastroundstracer=3;
		count=30;
		scope=2;
		initspeed=800;
		displaynameshort="7.62x39mm";
	};
};
class CfgMagazineWells
{
	class CBA_762x39_AK
	{
		KARRK_MAGS[]=
		{
			"KARRK62_Mag"
		};
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class KAR_35RK_762x39_Ball: B_762x51_Ball
	{
		airFriction=-0.0014104;
		caliber=0.62800002;
		deflecting=23;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime=0.072999999;
		tracerEndTime=1.7;
		hit=10.034;
		typicalspeed=739.09998;
		nvgonly=1;
		class CamShakeExplode
		{
			distance= 7.3484693; // "((6^0.5)*3)" Could remove quotes to allow evaluation at build-time
			duration="((round (6^0.5))*0.2 max 0.2)";
			frequency=20;
			power="(6^0.5)";
		};
		class CamShakeHit
		{
			distance=1;
			duration="((round (6^0.25))*0.2 max 0.2)";
			frequency=20;
			power=6;
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KAR_RIFLE_RK62M2: Rifle_Base_F
	{
		author="Kartsa, Tööttieläin";
		scope=2;
		cameraDir="eye_look";
		changeFiremodeSound[]=
		{
			"KAR_RK62M2\snd\ak_selector.wss",
			1,
			1,
			8
		};
		descriptionShort="RK62M2 7.62x39mm";
		dexterity=1.8;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		displayName="RK62M2";
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry.wss",
			0.17782794,
			1,
			10
		};
		maxZeroing=600;
		model="KAR_RK62M2\RK62m2.p3d";
		picture="\KAR_RK62M2\ui\RK62M2_UI_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"KAR_RK62M2\data\stock_co.paa",
			"KAR_RK62M2\data\rails_co.paa",
			"KAR_RK62M2\data\grip_co.paa",
			"KAR_RK62M2\data\frame_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\KAR_RK62M2\anim\handpose_VFG.rtm"
		};
		reloadAction="HLC_GestureReloadAK";
		reloadMagazineSound[]=
		{
			"\KAR_RK62M2\snd\ak74m_reload.wss",
			0.80000001,
			1,
			20
		};
		magazineReloadSwitchPhase=0.30000001;
		magazines[]=
		{
			"KARRK62_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x39_AK"
		};
		recoil="recoil_spar";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01.wss",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			mass=70;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"RHS_AKM_Shot_SoundSet",
					"RHS_MMG1_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
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
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"RHS_AKM_Shot_SoundSet",
					"RHS_MMG1_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
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
