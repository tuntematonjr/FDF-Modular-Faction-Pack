#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={"KAR_RIFLE_RK62M2"};
		magazines[]={"KARRK62_Mag"};
		ammo[]={"KAR_35RK_762x39_Ball"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"kar_fdf_main","A3_Sounds_F_Exp"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};

#include "CfgGestures.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundSets.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgWeapons.hpp"

class CfgDistanceFilters {
	class HLC_defaultDistanceFilter {
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=400;
		range=2600;
		powerFactor=32;
	};
	class HLC_rifleTailDistanceFilter {
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=350;
		range=1800;
		powerFactor=32;
	};
};

class CfgMagazineWells {
	class CBA_762x39_AK {
		KARRK_MAGS[]= {
			"KARRK62_Mag"
		};
	};
};

class CfgAmmo {
	class B_762x51_Ball;
	class KAR_35RK_762x39_Ball: B_762x51_Ball {
		airFriction=-0.0014104;
		caliber=0.62800002;
		deflecting=23;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime=0.072999999;
		tracerEndTime=1.7;
		hit=10.034;
		typicalspeed=739.09998;
		nvgonly=1;
		class CamShakeExplode {
			distance= 7.3484693; // "((6^0.5)*3)" Could remove quotes to allow evaluation at build-time
			duration="((round (6^0.5))*0.2 max 0.2)";
			frequency=20;
			power="(6^0.5)";
		};
		class CamShakeHit {
			distance=1;
			duration="((round (6^0.25))*0.2 max 0.2)";
			frequency=20;
			power=6;
		};
	};
};
