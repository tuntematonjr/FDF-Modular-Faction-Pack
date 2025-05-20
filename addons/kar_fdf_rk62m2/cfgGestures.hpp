class CfgMovesBasic {
	class DefaultDie;

	class ManActions {
		HLC_GestureReloadAK = "HLC_GestureReloadAK";
	};
	class Actions {
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;

		class NoActions : ManActions 
		{
			HLC_GestureReloadAK[] = { "HLC_GestureReloadAK", "Gesture" };
		};

		class RifleProneActions : RifleBaseStandActions 
		{
			HLC_GestureReloadAK[] = { "HLC_GestureReloadAK_Prone","Gesture" };
		};

		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			HLC_GestureReloadAK[] = { "HLC_GestureReloadAK_Context","Gesture" };
		};

		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			HLC_GestureReloadAK[] = { "HLC_GestureReloadAK_Context","Gesture" };
		};

		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			HLC_GestureReloadAK[] = { "HLC_GestureReloadAK","Gesture" };
		};
	};
};
class CfgGesturesMale {
	class Default;
	class GestureReloadBase;

	class States {
		//class Default;
		class HLC_GestureReloadAK : Default {
			file = "\KAR_RK62M2\anim\reload_ak_onehanded.rtm";
			looped = 0;
			speed = 0.23076923076923076923076923076923;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadAK_prone : Default {
			file = "\KAR_RK62M2\anim\reload_ak_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadAK_Context : HLC_GestureReloadAK {
			mask = "NIA_handsWeapon_context_Toadie";
		};
	};
};
