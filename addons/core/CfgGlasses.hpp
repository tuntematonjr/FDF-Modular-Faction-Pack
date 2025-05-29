class CfgGlasses {
	class None;
	class KAR_FDF_B_GR: None {
		author = "Kartsa, Jamie";
		displayName = "Balaclava (Green)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {QPATHTOF(balaclava\bala_GR_co.paa)};
		identityTypes[] = {"NoGlasses",0, "G_NATO_default",300, "G_NATO_casual",0, "G_NATO_pilot",0, "G_NATO_recon",50, "G_NATO_SF",300, "G_NATO_sniper",0,"G_NATO_diver",0, "G_IRAN_default",0, "G_IRAN_diver",0, "G_GUERIL_default",0, "G_HAF_default",50, "G_CIVIL_female",0, "G_CIVIL_male",0};
		mass = 4;
		mode = 4;
		model = QPATHTOF(balaclava\jam_sov_balaclava.p3d);
		picture = QPATHTOF(ui\icons\PB_Bala_GR_ca.paa);
	};

	class KAR_FDF_B_W: KAR_FDF_B_GR {
		displayName = "Balaclava (Winter)";
		hiddenselectionstextures[] = {QPATHTOF(balaclava\bala_W_co.paa)};
		picture = QPATHTOF(ui\icons\PB_Bala_W_ca.paa);
	};

	class KAR_FDF_B_GL: KAR_FDF_B_GR {
		displayName = "Balaclava (Light Green)";
		hiddenselectionstextures[] = {QPATHTOF(balaclava\bala_L_GR_co.paa)};
		picture = QPATHTOF(ui\icons\PB_Bala_GL_ca.paa);
	};

	class KAR_FDF_B_B: KAR_FDF_B_GR {
		displayName = "Balaclava (Black)";
		hiddenselectionstextures[] = {QPATHTOF(balaclava\bala_B_co.paa)};
		picture = QPATHTOF(ui\icons\PB_Bala_B_ca.paa);
	};
};

