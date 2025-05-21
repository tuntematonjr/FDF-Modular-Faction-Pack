#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={"kar_fdf_main","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};


class CfgUnitInsignia {
	class FDF_KAR_I_KRH {
		author = "Kartsa";
		displayName = "Mortar";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\KRH_INS_ca.paa";
	};
    class FDF_KAR_I_HUO {
		author = "Kartsa";
		displayName = "Mechanic";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\HUO_INS_ca.paa";
	};
    class FDF_KAR_I_ART {
		author = "Kartsa";
		displayName = "Artillery Observer";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\ART_INS_ca.paa";
	}; 
    class FDF_KAR_I_COA {
		author = "Kartsa";
		displayName = "Coastal Jaeger";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\COAST_INS_ca.paa";
	};
    class FDF_KAR_I_CRIMPB {
		author = "Kartsa";
		displayName = "MP Crisis Management (BROWN)";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\CRIMPB_INS_ca.paa";
	}; 
    class FDF_KAR_I_CRIMP {
		author = "Kartsa";
		displayName = "MP Crisis Management (BLACK)";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\CRIMP_INS_ca.paa";
	};
    class FDF_KAR_I_EOD {
		author = "Kartsa";
		displayName = "EOD";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\EOD_INS_ca.paa";
	};
    class FDF_KAR_I_IEDD {
		author = "Kartsa";
		displayName = "IEDD";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\IEDD_INS_ca.paa";
	};
    class FDF_KAR_I_FL {
		author = "Kartsa";
		displayName = "Insignia Patch";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\FL_INS_ca.paa";
	};
    class FDF_KAR_I_JAEGER {
		author = "Kartsa";
		displayName = "Jaeger";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\JAA_INS_ca.paa";
	}; 
    class FDF_KAR_I_MEDIC {
		author = "Kartsa";
		displayName = "Medic";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\MED_INS_ca.paa";
	};
    class FDF_KAR_I_SISSI {
		author = "Kartsa";
		displayName = "Sissi";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\SISSI_INS_ca.paa";
	};
    class FDF_KAR_I_PIONEER {
		author = "Kartsa";
		displayName = "Pioneer";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\PIO_INS_ca.paa";
	};
	class FDF_KAR_I_VIESTI {
		author = "Kartsa";
		displayName = "Signals";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\VIE_INS_CA.paa";
	};
	class FDF_KAR_I_NBC {
		author = "Kartsa";
		displayName = "NBC";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\NBC_INS_CA.paa";
	};
	class FDF_KAR_I_TYK {
		author = "Kartsa";
		displayName = "Artillery";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\TYK_INS_CA.paa";
	};
	class FDF_KAR_I_PST {
		author = "Kartsa";
		displayName = "Anti-Tank";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\PST_INS_CA.paa";
	};
	class FDF_KAR_I_PST_J {
		author = "Kartsa";
		displayName = "AT Jaeger";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\PSTJ_INS_CA.paa";
	};
	class FDF_KAR_I_PSVM {
		author = "Kartsa";
		displayName = "Tanker";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\PSVM_INS_CA.paa";
	};
	class FDF_KAR_I_VENE {
		author = "Kartsa";
		displayName = "Boatman";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\VENE_INS_CA.paa";
	};
	class FDF_KAR_I_TUTKA {
		author = "Kartsa";
		displayName = "Radarman";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\TUTKA_INS_CA.paa";
	};
	class FDF_KAR_I_DOG {
		author = "Kartsa";
		displayName = "Dog Handler";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\DOG_INS_CA.paa";
	};
	class FDF_KAR_I_SPOL {
		author = "Kartsa";
		displayName = "Military Police";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\SPOL_INS_CA.paa";
	};
	class FDF_KAR_I_AAOHJ {
		author = "Kartsa";
		displayName = "AA-Missile";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\AAOHJ_INS_CA.paa";
	};
	class FDF_KAR_I_RPIO {
		author = "Kartsa";
		displayName = "EOD Pioneer";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\RPIO_INS_CA.paa";
	};
	class FDF_KAR_I_AAM {
		author = "Kartsa";
		displayName = "Anti-Air";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\AAM_INS_CA.paa";
	};
	class FDF_KAR_I_FLAG {
		author = "Kartsa";
		displayName = "Finnish Flag";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\FLAG_INS_CA.paa";
	};
	class FDF_KAR_I_SP {
		author = "Kartsa";
		displayName = "Military Police (Patch)";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		texture = "\KAR_FDF_INS\data\SP_INS_CA.paa";
	};
};