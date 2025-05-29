class CfgMagazines {
	class Default;
	class 30Rnd_762x39_Mag_F;
	class KARRK62_Mag: 30Rnd_762x39_Mag_F {
		author = "Kartsa";
		ammo="KAR_35RK_762x39_Ball";
		descriptionshort="7.62x39mm";
		displayName = "7.62x39mm 30 Round RK Magazine";
		hiddenSelections[] = {
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\stock_co.paa)
		};
		modelSpecial = QPATHTOF(mag\KARRK62_mag.p3d);
		modelSpecialIsProxy=1;
		picture = QPATHTOF(ui\icons\RK62MAG_UI_CA.paa);
		lastroundstracer=3;
		count=30;
		scope = 2;
		initspeed=800;
		displaynameshort="7.62x39mm";
	};
};
