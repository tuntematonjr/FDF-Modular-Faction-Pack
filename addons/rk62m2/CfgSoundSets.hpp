class CfgSoundSets {
	class KAR_NIA_Shot_SoundSet {
		soundShaders[]= {
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
	class KAR_NIA_Tail_SoundSet {
		soundShaders[]= {
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
	class KAR_NIA_silencerShot_SoundSet {
		soundShaders[]= {
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
	class KAR_NIA_silencerTail_SoundSet {
		soundShaders[]= {
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